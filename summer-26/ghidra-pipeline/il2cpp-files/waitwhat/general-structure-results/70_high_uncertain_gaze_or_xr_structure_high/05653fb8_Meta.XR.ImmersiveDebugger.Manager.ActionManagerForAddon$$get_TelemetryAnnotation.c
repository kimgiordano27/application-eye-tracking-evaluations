/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 05653fb8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_ActionManagerForAddon__get_TelemetryAnnotation(void)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_031c09d4();
  lVar1 = thunk_FUN_031c3cac();
  if (lVar1 != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      FUN_031c09d4(lVar1);
    }
    lVar1 = thunk_FUN_031c3cac();
    if (lVar1 != 0) {
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_031c09d4(lVar1);
      }
      if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
        puVar2 = (undefined4 *)thunk_FUN_031c3ef0();
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_031c09d4(lVar1);
        }
        if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
          puVar2 = (undefined4 *)thunk_FUN_031c3ef0();
                    /* WARNING: Could not recover jumptable at 0x056540b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*unaff_x19 + 0x1b8))(uVar4,uVar5,uVar6,*puVar2,puVar2[1],puVar2[2]);
          return uVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03189058();
    }
  }
  FUN_0595040c(2,0);
  return 0;
}


