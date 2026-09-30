/*
FUNCTION_NAME: FoveationFeature$$GetExtensionString
ENTRY_POINT: 05aaff6c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;ui_interaction;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


void FoveationFeature__GetExtensionString(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  if ((*(byte *)(unaff_x22 + 0x2ce) & 1) == 0) {
    FUN_02b3c81c(Method_System_Reflection_Emit_DynamicMethod_GetBaseDefinition__);
                    /* try { // try from 05aaff8c to 05baff97 has its CatchHandler @ 05ab07cc */
    FUN_02b3c81c(PTR_DAT_06317408);
    FUN_02b3c81c(
                Method_EmeraldAI_SoundDetection_EmeraldSoundDetector_<InvokeReactionListInternal>b__54_3__
                );
    FUN_02b3c81c(Method_EmeraldAI_EmeraldSounds_PlayBlockSound__);
    *(undefined1 *)(unaff_x22 + 0x2ce) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06317408) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_05ab0018;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c();
LAB_05ab0018:
    uVar4 = (*(code *)*puVar2)();
    if (((uVar4 & 1) != 0) &&
       (uVar4 = (**(code **)(*param_1 + 0x4b8))(param_1,param_2), (uVar4 & 1) == 0)) {
      return;
    }
    puVar1 = Method_EmeraldAI_EmeraldSounds_PlayBlockSound__;
    if (param_1[0x21] != 0) {
      _in_stack_00000018 =
           FUN_03630c28(param_1[0x21],&stack0x00000028,
                        *(undefined8 *)
                         Method_EmeraldAI_SoundDetection_EmeraldSoundDetector_<InvokeReactionListInternal>b__54_3__
                       );
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(long *)(in_stack_00000028 + 0x20) = (long)param_1;
      thunk_FUN_02bb0e9c((long *)(in_stack_00000028 + 0x20),param_1);
      if (in_stack_00000028 != 0) {
        *(undefined8 *)(in_stack_00000028 + 0x10) = param_2;
        thunk_FUN_02bb0e9c((undefined8 *)(in_stack_00000028 + 0x10),param_2);
        if (in_stack_00000028 != 0) {
          *(long **)(in_stack_00000028 + 0x18) = unaff_x21;
          thunk_FUN_02bb0e9c();
          (**(code **)(*param_1 + 0x448))(param_1,param_2);
          FUN_03bf3b34(&stack0x00000018,*(undefined8 *)puVar1);
          lVar3 = thunk_FUN_02b79548();
          if (lVar3 != 0) {
            (**(code **)(*param_1 + 0x398))(param_1,param_2,lVar3,*(undefined8 *)(*param_1 + 0x3a0))
            ;
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


