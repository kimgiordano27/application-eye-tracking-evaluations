/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 063b0e88
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(ulong param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db7080);
    *(undefined1 *)(unaff_x21 + 0x6ca) = 1;
  }
  lVar2 = *(long *)(param_2 + 0x80);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar5 = *(long *)PTR_DAT_07db7080;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = param_3;
        thunk_FUN_037aeb94(puVar4,param_3);
      }
      else {
        FUN_049ceef4(lVar2,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                    );
      }
      *(undefined8 *)(param_2 + 0xa0) = param_3;
      thunk_FUN_037aeb94((undefined8 *)(param_2 + 0xa0),param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


