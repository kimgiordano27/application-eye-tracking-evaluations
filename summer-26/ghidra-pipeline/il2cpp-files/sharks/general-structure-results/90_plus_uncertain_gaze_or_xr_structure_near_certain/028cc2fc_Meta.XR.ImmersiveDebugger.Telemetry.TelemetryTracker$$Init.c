/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 028cc2fc
PROGRAM: sharks-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000018;
  
  if ((DAT_03a24595 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037fb640);
    DAT_03a24595 = 1;
  }
  in_stack_00000018 = 0;
  lVar1 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar1 = *(long *)(param_2 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    uVar2 = FUN_02171fa4(lVar1,*param_1,param_1[1],&stack0x00000018,*(undefined8 *)PTR_DAT_037fb640)
    ;
    if ((uVar2 & 1) != 0) {
      return in_stack_00000018;
    }
    thunk_FUN_01851c08(PTR_DAT_037f9268);
    uVar3 = thunk_FUN_018617ec();
    uVar4 = thunk_FUN_01851c08(PTR_DAT_037fb648);
    uVar5 = thunk_FUN_01851c08(PTR_DAT_037fb650);
    uVar3 = FUN_02a50b00(uVar4,uVar3,uVar5,0);
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar4 = thunk_FUN_01861bbc();
    FUN_02bcf690(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar4,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


