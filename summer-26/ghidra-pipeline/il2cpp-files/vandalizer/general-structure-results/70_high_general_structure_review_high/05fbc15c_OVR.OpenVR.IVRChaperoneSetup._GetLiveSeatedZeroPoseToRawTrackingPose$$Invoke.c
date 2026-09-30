/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 05fbc15c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__Invoke(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar6;
  undefined4 unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0xee0));
  FUN_031f20f4(PTR_DAT_075f5ee8);
  *(undefined1 *)(unaff_x23 + 0x6ae) = 1;
  FUN_05e44034();
  *(undefined4 *)(unaff_x19 + 0x10) = unaff_w21;
  *(undefined4 *)(unaff_x19 + 0x14) = unaff_w20;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (DAT_07a4674c == '\0') {
    FUN_031f20f4(PTR_DAT_075f5ee0);
    DAT_07a4674c = '\x01';
  }
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar2 = *unaff_x22;
  }
  plVar6 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar1 = *(undefined4 *)(unaff_x19 + 0x14);
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075f5ee8) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_05fbc234;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)PTR_DAT_075f5ee8,2);
LAB_05fbc234:
    lVar2 = (*(code *)*puVar3)(plVar6,uVar1,puVar3[1]);
    if (lVar2 != 0) {
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar2 + 0x28);
      thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


