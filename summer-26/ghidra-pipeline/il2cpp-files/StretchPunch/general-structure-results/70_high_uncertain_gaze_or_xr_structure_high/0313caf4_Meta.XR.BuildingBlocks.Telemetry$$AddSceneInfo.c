/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 0313caf4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  
  FUN_0313be54();
  iVar1 = (int)unaff_x19[3] - unaff_w21;
  if (iVar1 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
    FUN_033b4f38(unaff_x19[2],unaff_w21,unaff_x19[2],unaff_w22 + unaff_w21,iVar1,0);
  }
  if (unaff_x19 == unaff_x23) {
    FUN_033b4f38(unaff_x19[2],0,unaff_x19[2],unaff_w21,unaff_w21,0);
    FUN_033b4f38(unaff_x19[2],unaff_w22 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                 (int)unaff_x19[3] - unaff_w21,0);
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01dde7f8(lVar3);
    }
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto LAB_0313cbd4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_0313cbd4:
    (*(code *)*puVar2)();
  }
  *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + unaff_w22;
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


