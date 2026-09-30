/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSeatPose
ENTRY_POINT: 04a76808
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 157
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


ulong Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSeatPose
                (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02b76218(param_3);
  }
  plVar6 = (long *)thunk_FUN_02b79548();
  if (plVar6 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02b76218(lVar8);
    }
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04a76894;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02b7654c(plVar6,lVar8,0);
LAB_04a76894:
    iVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar4 == 0) {
      return 1;
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02b76218();
    }
    if (((*(byte *)(lVar8 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
        (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)
        ) && (uVar10 = FUN_04a78a58(), (uVar10 & 1) != 0)) {
      if (*(int *)(unaff_x20 + 0x20) <= (int)unaff_x21[4]) {
        return 0;
      }
      uVar10 = FUN_04a77c58();
      return uVar10;
    }
  }
  uVar10 = FUN_04a782fc();
  iVar4 = *(int *)(unaff_x20 + 0x20);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (uVar10 >> 0x20 == 0) {
    iVar5 = (int)uVar10;
    bVar3 = SBORROW4(iVar4,iVar5);
    bVar1 = iVar4 - iVar5 < 0;
    bVar2 = iVar4 == iVar5;
  }
  return (ulong)(!bVar2 && bVar1 == bVar3);
}


