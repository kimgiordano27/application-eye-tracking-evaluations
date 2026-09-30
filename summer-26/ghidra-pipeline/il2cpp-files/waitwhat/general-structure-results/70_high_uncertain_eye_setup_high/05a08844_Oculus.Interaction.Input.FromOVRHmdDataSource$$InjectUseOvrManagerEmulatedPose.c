/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 05a08844
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Oculus_Interaction_Input_FromOVRHmdDataSource__InjectUseOvrManagerEmulatedPose
          (undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_07109710;
  if ((bRam000000000754d251 & 1) == 0) {
    FUN_03188a78(PTR_DAT_0710ace0);
    FUN_03188a78(PTR_DAT_07109710);
    FUN_03188a78(PTR_DAT_0710ace8);
    FUN_03188a78(PTR_DAT_0710acf0);
    FUN_03188a78(PTR_DAT_0710acf8);
    bRam000000000754d251 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar2 = FUN_0645480c(param_1,0);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    plVar3 = (long *)thunk_FUN_03196ed8(lVar2,0);
    puVar1 = PTR_DAT_0710acf0;
    if (plVar3 == (long *)0x0) {
LAB_05a08a00:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
    uVar5 = FUN_057bd9b8(uVar4,*(undefined8 *)puVar1,4,0);
    if ((uVar5 & 1) == 0) {
      uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
      uVar5 = FUN_057bd9b8(uVar4,*(undefined8 *)PTR_DAT_0710ace8,4,0);
      if ((uVar5 & 1) == 0) {
        uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
        uVar5 = FUN_057bd9b8(uVar4,*(undefined8 *)PTR_DAT_0710acf8,4,0);
        puVar1 = PTR_DAT_070c1958;
        if ((uVar5 & 1) == 0) {
          uVar4 = *(undefined8 *)PTR_DAT_0710ace0;
          if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar4 = FUN_0593e698(uVar4,0);
          uVar5 = FUN_0594875c(plVar3,uVar4,0);
          if ((uVar5 & 1) != 0) {
            lVar2 = *param_2;
            lVar6 = *(long *)(puVar1 + 0x90);
            if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar4 = FUN_0593e698(lVar6 + 0x20,0);
            if (lVar2 != 0) {
              uVar4 = FUN_0644dfa0(lVar2,uVar4,0);
              return uVar4;
            }
            goto LAB_05a08a00;
          }
        }
      }
    }
  }
  return 0;
}


