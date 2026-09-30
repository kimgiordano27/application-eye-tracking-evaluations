/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 0314df58
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_position(ulong param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x20;
  long lVar7;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80098);
    thunk_FUN_01ad9084(PTR_DAT_03d800a0);
    *(undefined1 *)(unaff_x20 + 0xfb8) = 1;
  }
  lVar7 = *(long *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x10) == 1) {
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    goto LAB_0314e030;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar1 = 0;
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x38) = 0;
    while (iVar1 < 5) {
      if ((lVar7 == 0) || (plVar2 = (long *)FUN_0314d63c(lVar7,iVar1), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d80098) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0314e020;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*(long *)PTR_DAT_03d80098,0);
LAB_0314e020:
      iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (iVar1 != 0) {
        FUN_022752dc();
        *(undefined8 *)(param_2 + 0x20) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        thunk_FUN_01b4f09c(param_2 + 0x20,0);
        *(undefined4 *)(param_2 + 0x10) = 1;
        return 1;
      }
LAB_0314e030:
      iVar1 = *(int *)(param_2 + 0x38) + 1;
      *(int *)(param_2 + 0x38) = iVar1;
    }
  }
  return 0;
}


