/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 05f3dbac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation(void)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar3;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000002c;
  undefined4 uStack000000000000004c;
  undefined8 uStack0000000000000054;
  undefined4 uStack000000000000006c;
  undefined8 uStack0000000000000074;
  
  lVar2 = thunk_FUN_037787d0();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_03775678(lVar2);
    }
    lVar2 = thunk_FUN_037787d0();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678(lVar2);
      }
      if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar2 + 0x40)) {
LAB_05f3dce8:
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      lVar2 = thunk_FUN_03778a20();
      uVar3 = *(undefined8 *)(lVar2 + 0x14);
      uStack000000000000002c = (undefined4)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20);
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678(lVar2);
      }
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar2 + 0x40)) goto LAB_05f3dce8;
      lVar2 = thunk_FUN_03778a20();
      uStack0000000000000014 = *(undefined8 *)(lVar2 + 0x14);
      uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(lVar2 + 8) >> 0x20);
      uStack000000000000006c = uStack000000000000002c;
      uStack000000000000004c = uStack000000000000000c;
      uStack0000000000000054 = uStack0000000000000014;
      uStack0000000000000074 = uVar3;
      uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
      goto LAB_05f3dcd0;
    }
  }
  FUN_062638b4(2,0);
  uVar1 = 0;
LAB_05f3dcd0:
  return uVar1 & 1;
}


