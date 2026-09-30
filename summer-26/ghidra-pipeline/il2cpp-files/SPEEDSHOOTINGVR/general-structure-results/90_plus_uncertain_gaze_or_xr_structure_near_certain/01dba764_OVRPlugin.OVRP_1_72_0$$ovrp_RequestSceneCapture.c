/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RequestSceneCapture
ENTRY_POINT: 01dba764
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_RequestSceneCapture(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)PTR_DAT_0234d290;
  if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
    thunk_FUN_01022c14(*(long *)PTR_DAT_0234bc58);
  }
  uVar6 = FUN_01d5e86c(uVar6,0);
  uVar2 = FUN_01d611c4(param_1,uVar6,0);
  puVar1 = PTR_DAT_0234c680;
  puVar5 = (undefined8 *)PTR_DAT_0235a7a0;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0234c680 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    unaff_x22 = FUN_01dc0060(0);
    if (unaff_x22 != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      if (DAT_0247b102 == '\0') {
        FUN_00fdc2e4(PTR_DAT_0234c680);
        DAT_0247b102 = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar3 = *(long *)puVar1;
      }
      puVar5 = (undefined8 *)PTR_DAT_0235a7a8;
      if (unaff_x22 != *(long *)(*(long *)(lVar3 + 0xb8) + 8)) goto LAB_01dba840;
    }
    uVar2 = FUN_01dba954();
    if ((uVar2 & 1) == 0) {
      FUN_01dba9e8();
      return;
    }
  }
  else {
LAB_01dba840:
    plVar4 = (long *)thunk_FUN_010400dc(*puVar5);
    FUN_01dbd48c();
    plVar4[4] = unaff_x22;
    thunk_FUN_0106e12c(plVar4 + 4,unaff_x22);
    uVar2 = FUN_01dba954();
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01dba8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x178))(plVar4);
      return;
    }
  }
  return;
}


