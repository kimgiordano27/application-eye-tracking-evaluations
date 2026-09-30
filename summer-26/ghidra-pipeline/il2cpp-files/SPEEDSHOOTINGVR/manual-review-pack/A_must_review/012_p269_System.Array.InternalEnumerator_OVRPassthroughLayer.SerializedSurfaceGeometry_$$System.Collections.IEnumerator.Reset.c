/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 015d96cc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 155
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
                 (void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int in_w8;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x24;
  long *unaff_x25;
  
  if (in_w8 == 0) {
    thunk_FUN_01022c14();
  }
  uVar2 = OVRPlugin__get_positionSupported();
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01022c14(*unaff_x25);
  }
  uVar1 = FUN_01d62dc0(uVar2,0);
  switch(uVar1) {
  case 5:
    lVar3 = *unaff_x25;
    puVar5 = (undefined8 *)PTR_DAT_0234cf58;
    break;
  case 6:
  case 8:
  case 9:
  case 10:
    lVar3 = *unaff_x25;
    puVar5 = (undefined8 *)PTR_DAT_0234cf28;
    break;
  case 7:
    lVar3 = *unaff_x25;
    puVar5 = (undefined8 *)PTR_DAT_0234cf60;
    break;
  case 0xb:
  case 0xc:
    lVar3 = *unaff_x25;
    puVar5 = (undefined8 *)PTR_DAT_0234cf48;
    break;
  default:
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    plVar4 = (long *)thunk_FUN_010400dc();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    FUN_01955ae0(plVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    return plVar4;
  }
  uVar2 = *puVar5;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar2 = FUN_01d5e86c(uVar2,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01022c14(*unaff_x24);
  }
  plVar4 = (long *)FUN_01d8868c(uVar2);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(plVar4);
    }
  }
  return plVar4;
}


