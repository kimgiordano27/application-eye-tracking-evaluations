/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$GetDeviceLayoutName
ENTRY_POINT: 05f57498
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


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__GetDeviceLayoutName(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmuld_laneq_f64__;
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_n_s32__;
  System_Collections_ObjectModel_ReadOnlyCollection<ResourceHandle>__CopyTo();
  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_03fce784(lVar5,*(undefined8 *)puVar1);
  uVar6 = thunk_FUN_02f45270(*unaff_x23);
  FUN_0476105c();
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_s8__;
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_n_u16__;
  if (lVar5 != 0) {
    System_Collections_ObjectModel_ReadOnlyCollection<ResourceHandle>__CopyTo
              (lVar5,uVar6,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_n_u32__);
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
    FUN_03fce784(lVar7,*(undefined8 *)puVar1);
    uVar6 = thunk_FUN_02f45270(*unaff_x23);
    FUN_0476105c();
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_n_s16__;
    if (lVar7 != 0) {
      System_Collections_ObjectModel_ReadOnlyCollection<ResourceHandle>__CopyTo
                (lVar7,uVar6,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_s16__);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_n_f64__;
      FUN_03fcd52c(*(undefined8 *)puVar1);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_n_f32__;
      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmul_laneq_u32__;
      FUN_03fcd52c(*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_03fcd52c(*(undefined8 *)puVar2);
      plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,3);
      if (plVar8 != (long *)0x0) {
        lVar9 = thunk_FUN_02f45174();
        if (lVar9 != 0) {
          if ((int)plVar8[3] != 0) {
            plVar8[4] = unaff_x20;
            lVar9 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar9 == 0) goto LAB_05f57674;
            if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
              plVar8[5] = lVar5;
              lVar5 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar5 == 0) goto LAB_05f57674;
              if (2 < *(uint *)(plVar8 + 3)) {
                plVar8[6] = lVar7;
                *(long **)(unaff_x19 + 0x20) = plVar8;
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


