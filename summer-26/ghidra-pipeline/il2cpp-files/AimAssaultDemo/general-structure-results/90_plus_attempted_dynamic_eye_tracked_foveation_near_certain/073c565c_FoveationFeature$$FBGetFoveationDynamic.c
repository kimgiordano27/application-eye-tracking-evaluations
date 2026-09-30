/*
FUNCTION_NAME: FoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 073c565c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 99
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_5;strong_foveation_hits_4;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FoveationFeature__FBGetFoveationDynamic(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_049cf910(param_1,*(undefined8 *)System_Data_NoNullAllowedException_TypeInfo);
  puVar2 = UnityEngine_Rendering_Universal_Internal_NormalReconstruction_TypeInfo;
  puVar1 = System_Linq_Expressions_Interpreter_NewArrayInstruction_TypeInfo;
  in_stack_00000038 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000000;
                    /* try { // try from 073c5684 to 074c568f has its CatchHandler @ 073c5a50 */
  in_stack_00000040 = in_stack_00000010;
  do {
    do {
      uVar3 = FUN_05d64e98(&stack0x00000030,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        FUN_05d64e94(&stack0x00000030,
                     *(undefined8 *)System_Linq_Expressions_NewArrayInitExpression_TypeInfo);
        if ((long *)unaff_x19[0x14] != (long *)0x0) {
          uVar3 = (**(code **)(*(long *)unaff_x19[0x14] + 0x1a8))();
          if ((uVar3 & 1) == 0) {
            return;
          }
          if (unaff_x19[0x1c] != 0) {
            FUN_045b9744();
            if (unaff_x19[0x26] != 0) {
              _in_stack_00000018 =
                   FUN_0480eb20(unaff_x19[0x26],&stack0x00000028,
                                *(undefined8 *)Unity_Netcode_NotListeningException_TypeInfo);
              if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              *(long **)(in_stack_00000028 + 0x10) = unaff_x19;
              thunk_FUN_037aeb94();
              if (in_stack_00000028 != 0) {
                *(long *)(in_stack_00000028 + 0x18) = unaff_x20;
                thunk_FUN_037aeb94();
                (**(code **)(*unaff_x19 + 0x288))();
                FUN_04fafd58(&stack0x00000018,*(undefined8 *)Unity_Netcode_NotMeRpcTarget_TypeInfo);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
                    /* try { // try from 073c56a0 to 074c56db has its CatchHandler @ 073c5a8c */
      plVar4 = (long *)thunk_FUN_037787d0(in_stack_00000040,*(undefined8 *)puVar2);
    } while (plVar4 == (long *)0x0);
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar2;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_073c5700;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,lVar7,0);
LAB_073c5700:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == unaff_x20) {
      uVar6 = FUN_060b76a8(*(undefined8 *)Unity_Netcode_NotServerException_TypeInfo);
      uVar6 = System_Convert__ToInt32
                        (uVar6,*(undefined8 *)Unity_Netcode_NotOwnerRpcTarget_TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0755df88(uVar6);
      FUN_05d64e94(&stack0x00000030,
                   *(undefined8 *)System_Linq_Expressions_NewArrayInitExpression_TypeInfo);
      return;
    }
  } while( true );
}


