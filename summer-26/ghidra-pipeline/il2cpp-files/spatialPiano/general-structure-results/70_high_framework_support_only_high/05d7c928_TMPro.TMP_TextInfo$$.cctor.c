/*
FUNCTION_NAME: TMPro.TMP_TextInfo$$.cctor
ENTRY_POINT: 05d7c928
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void TMPro_TMP_TextInfo___cctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x21;
  undefined4 uVar8;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_02f08768(*(undefined8 *)(param_5 + 0xe50));
  FUN_02f08768(Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__);
  FUN_02f08768(
              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
              );
  *(undefined1 *)(unaff_x20 + 0xa29) = 1;
  if (*unaff_x21 != 0) {
    uVar4 = FUN_05d4c208(*unaff_x21,
                         *(undefined8 *)Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    puVar5 = (undefined8 *)FUN_05ddf250();
    lVar1 = *(long *)(unaff_x19 + 0xb8);
    lVar2 = *(long *)(unaff_x19 + 0xc0);
    uVar7 = *puVar5;
    uVar8 = FUN_05d7bf6c(uVar4);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x28) = uVar8;
      *(undefined4 *)(lVar2 + 0x2c) = param_2;
      *(undefined4 *)(lVar2 + 0x30) = param_3;
      *(undefined4 *)(lVar2 + 0x34) = param_4;
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x18) = uVar8;
        *(undefined4 *)(lVar1 + 0x1c) = param_2;
        *(undefined4 *)(lVar1 + 0x20) = param_3;
        *(undefined4 *)(lVar1 + 0x24) = param_4;
        if (*(long *)(unaff_x19 + 0xc0) != 0) {
          *(undefined8 *)(*(long *)(unaff_x19 + 0xc0) + 0x20) = uVar4;
          plVar6 = (long *)FUN_05de1004(unaff_x21 + 1,0);
          puVar3 = 
          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
          ;
          if (*plVar6 != 0) {
            FUN_05d5add8(*plVar6,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02f6670c(*(long *)puVar3);
            }
            FUN_05dae168(&stack0x00000028);
            FUN_05c9caa8();
            puVar3 = PTR_DAT_067c9e50;
            if (*(long *)(unaff_x19 + 0xd8) != 0) {
              thunk_FUN_060bed68(*(long *)(unaff_x19 + 0xd8),0,0);
              uVar4 = *(undefined8 *)(unaff_x19 + 200);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_05caf7bc(0,0,0,0,uVar7,uVar4,1,0,0xffffffff,0xffffffff,0);
              FUN_05d7cac4();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


