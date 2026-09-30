/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 05f574d8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  FUN_0476105c();
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_s8__;
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_n_u16__;
  if (unaff_x21 != 0) {
    System_Collections_ObjectModel_ReadOnlyCollection<ResourceHandle>__CopyTo();
    lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
    FUN_03fce784(lVar5,*(undefined8 *)puVar1);
    uVar6 = thunk_FUN_02f45270(*unaff_x23);
    FUN_0476105c();
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_n_s16__;
    if (lVar5 != 0) {
      System_Collections_ObjectModel_ReadOnlyCollection<ResourceHandle>__CopyTo
                (lVar5,uVar6,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_s16__);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_n_f64__;
      FUN_03fcd52c(*(undefined8 *)puVar1);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_n_f32__;
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_laneq_u32__;
      FUN_03fcd52c(*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_03fcd52c(*(undefined8 *)puVar2);
      plVar7 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,3);
      if (plVar7 != (long *)0x0) {
        lVar8 = thunk_FUN_02f45174();
        if (lVar8 != 0) {
          if ((int)plVar7[3] != 0) {
            plVar7[4] = unaff_x20;
            lVar8 = thunk_FUN_02f45174();
            if (lVar8 == 0) goto LAB_05f57674;
            if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
              plVar7[5] = unaff_x21;
              lVar8 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar8 == 0) goto LAB_05f57674;
              if (2 < *(uint *)(plVar7 + 3)) {
                plVar7[6] = lVar5;
                *(long **)(unaff_x19 + 0x20) = plVar7;
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
LAB_05f57674:
        uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar6,0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


