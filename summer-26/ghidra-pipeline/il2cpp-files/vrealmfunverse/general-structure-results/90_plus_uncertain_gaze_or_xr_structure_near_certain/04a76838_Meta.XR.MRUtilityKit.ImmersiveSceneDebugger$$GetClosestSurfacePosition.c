/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSurfacePosition
ENTRY_POINT: 04a76838
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 148
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


ulong Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSurfacePosition
                (ushort *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  if ((*param_1 & 1) == 0) {
    param_3 = FUN_02b76218(param_3);
  }
  lVar7 = *unaff_x22;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_3) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_04a76894;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_02b7654c();
LAB_04a76894:
  iVar4 = (*(code *)*puVar6)();
  if (iVar4 == 0) {
    uVar8 = 1;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218();
    }
    if (((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
        (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)
        ) || (uVar8 = FUN_04a78a58(), (uVar8 & 1) == 0)) {
      uVar8 = FUN_04a782fc();
      iVar4 = *(int *)(unaff_x20 + 0x20);
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (uVar8 >> 0x20 == 0) {
        iVar5 = (int)uVar8;
        bVar3 = SBORROW4(iVar4,iVar5);
        bVar1 = iVar4 - iVar5 < 0;
        bVar2 = iVar4 == iVar5;
      }
      uVar8 = (ulong)(!bVar2 && bVar1 == bVar3);
    }
    else {
      if ((int)unaff_x21[4] < *(int *)(unaff_x20 + 0x20)) {
        uVar8 = FUN_04a77c58();
        return uVar8;
      }
      uVar8 = 0;
    }
  }
  return uVar8;
}


