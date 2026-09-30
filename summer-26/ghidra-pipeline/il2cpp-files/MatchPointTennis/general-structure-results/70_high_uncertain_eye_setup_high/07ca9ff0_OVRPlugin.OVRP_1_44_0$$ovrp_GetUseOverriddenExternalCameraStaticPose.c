/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 07ca9ff0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraStaticPose
               (ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *plVar6;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1ea48);
    FUN_04447ba8(PTR_DAT_09f51138);
    FUN_04447ba8(PTR_DAT_09f4d4c8);
    FUN_04447ba8(PTR_DAT_09f1e538);
    *(undefined1 *)(unaff_x19 + 0xa41) = 1;
  }
  if (*(char *)(param_2 + 0x39) != '\0') {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = FUN_09531730(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      plVar6 = *(long **)(param_2 + 0x28);
      uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ea48);
      FUN_0799ce68(uVar5,param_2,*(undefined8 *)PTR_DAT_09f51138,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar3 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09f4d4c8) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 10) * 0x10 + 0x138);
            goto LAB_07caa100;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_044822ac(plVar6,*(long *)PTR_DAT_09f4d4c8,10);
LAB_07caa100:
                    /* WARNING: Could not recover jumptable at 0x07caa114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar6,uVar5,puVar2[1]);
      return;
    }
  }
  return;
}


