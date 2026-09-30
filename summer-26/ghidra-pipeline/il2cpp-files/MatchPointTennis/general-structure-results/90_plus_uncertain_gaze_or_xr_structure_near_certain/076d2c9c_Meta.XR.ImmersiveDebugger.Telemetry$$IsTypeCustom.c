/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 076d2c9c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__IsTypeCustom(ulong param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long lVar6;
  long *plVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f2e610);
    FUN_04447ba8(PTR_DAT_09f2e618);
    FUN_04447ba8(PTR_DAT_09f2e620);
    FUN_04447ba8(PTR_DAT_09f2e628);
    *(undefined1 *)(unaff_x21 + 0xe02) = 1;
  }
  puVar2 = PTR_DAT_09f2e628;
  plVar7 = (long *)(param_2 + 0x10);
  lVar6 = *plVar7;
  if (lVar6 == 0) {
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2e620);
    FUN_05bad610(lVar6,*(undefined8 *)PTR_DAT_09f2e618);
    *plVar7 = lVar6;
    thunk_FUN_044bb4b4(plVar7,lVar6);
    lVar6 = *plVar7;
  }
  lVar3 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_07a80df4(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 3;
  *(undefined4 *)(lVar3 + 0x14) = unaff_w20;
  *(undefined8 *)(lVar3 + 0x18) = unaff_x19;
  thunk_FUN_044bb4b4();
  if (lVar6 != 0) {
    lVar4 = *(long *)(lVar6 + 0x10);
    lVar5 = *(long *)PTR_DAT_09f2e610;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = lVar3;
        thunk_FUN_044bb4b4(plVar7,lVar3);
        return;
      }
      FUN_05bade44(lVar6,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


