/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnDisable
ENTRY_POINT: 04a2ef04
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


ulong Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnDisable(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  puVar2 = (undefined8 *)FUN_02b7654c();
  uVar3 = (*(code *)*puVar2)();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if (*(int *)(unaff_x20 + 0x20) == 0) {
    lVar5 = *(long *)(lVar5 + 0x60);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218(lVar5);
    }
    lVar6 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04a2f06c;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04a2f06c:
    iVar1 = (*(code *)*puVar2)();
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02b76218();
    }
    if (((*(byte *)(lVar5 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
        (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)
        ) && (uVar3 = FUN_04a312ac(), (uVar3 & 1) != 0)) {
      if ((int)unaff_x21[4] <= *(int *)(unaff_x20 + 0x20)) {
        return 0;
      }
      uVar3 = FUN_04a30884();
      return uVar3;
    }
    uVar4 = FUN_04a30b80();
    if (*(int *)(unaff_x20 + 0x20) != (int)uVar4) {
      return 0;
    }
    iVar1 = (int)((ulong)uVar4 >> 0x20);
  }
  return (ulong)(0 < iVar1);
}


