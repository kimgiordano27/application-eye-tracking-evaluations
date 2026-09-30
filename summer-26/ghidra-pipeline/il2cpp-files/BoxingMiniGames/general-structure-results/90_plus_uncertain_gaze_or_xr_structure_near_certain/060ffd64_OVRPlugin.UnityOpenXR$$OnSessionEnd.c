/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 060ffd64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionEnd(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  
  FUN_03642964();
  FUN_03642964(PTR_DAT_079fd700);
  FUN_03642964(PTR_DAT_07a24e98);
  *(undefined1 *)(unaff_x21 + 0xd67) = 1;
  puVar2 = PTR_DAT_07a24e98;
  puVar1 = PTR_DAT_079fd6f8;
  if (unaff_x20 == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079f4ff8);
    uVar4 = thunk_FUN_0367fe20();
    uVar5 = thunk_FUN_036aa1c8(PTR_DAT_079fd708);
    FUN_05e4fb54(uVar4,uVar5,0);
    uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a24ea0);
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar4,uVar5);
  }
  lVar3 = *(long *)PTR_DAT_079fd6f8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar3 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_05e5ae34(lVar3,0);
  *(long *)(lVar3 + 0x10) = unaff_x20;
  thunk_FUN_036b7ad0();
  if (lVar6 != 0) {
    FUN_05744620(lVar6,unaff_w19,lVar3,*(undefined8 *)PTR_DAT_079fd700);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


