/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemDisplayFrequency
ENTRY_POINT: 01db1128
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemDisplayFrequency(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_0235a450);
  *(undefined1 *)(unaff_x22 + 0x9e0) = 1;
  if ((unaff_x21 & 1) == 0) {
    plVar2 = (long *)FUN_00fdc2fc(*(undefined8 *)PTR_DAT_0235a450);
    if (*plVar2 != 0) {
      if (*(long *)(*plVar2 + 0x18) == 0) goto thunk_FUN_00fdc534;
      FUN_01db1228();
      goto LAB_01db1208;
    }
  }
  plVar2 = (long *)(unaff_x19 + 0x10);
  lVar5 = *plVar2;
  thunk_FUN_00ffe618();
  if (lVar5 == 0) {
thunk_FUN_00fdc534:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
                    /* try { // try from 01db1188 to 01eb1253 has its CatchHandler @ 01db1188
                       catch() { ... } // from try @ 01db1188 with catch @ 01db1188
                       catch() { ... } // from try @ 01db1270 with catch @ 01db1188
                       catch() { ... } // from try @ 01db12b8 with catch @ 01db1188
                       catch() { ... } // from try @ 01db13c4 with catch @ 01db1188
                       catch() { ... } // from try @ 01db1400 with catch @ 01db1188
                       catch() { ... } // from try @ 01db1438 with catch @ 01db1188
                       catch() { ... } // from try @ 01db1470 with catch @ 01db1188 */
  uVar3 = FUN_01db1704(lVar5);
  puVar1 = PTR_DAT_0235a440;
  while ((uVar3 & 1) == 0) {
    thunk_FUN_00ffe618();
    uVar4 = thunk_FUN_010400dc(*(undefined8 *)puVar1);
    FUN_01db0df0();
    FUN_00ff754c(lVar5 + 0x20,uVar4,0);
    while (lVar6 = *(long *)(lVar5 + 0x20), thunk_FUN_00ffe618(), lVar6 != 0) {
      thunk_FUN_00ffe618();
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      thunk_FUN_00ffe618();
      FUN_00ff754c(plVar2,uVar4,lVar5);
      lVar5 = *plVar2;
      thunk_FUN_00ffe618();
      if (lVar5 == 0) goto thunk_FUN_00fdc534;
    }
    uVar3 = FUN_01db1704(lVar5);
  }
LAB_01db1208:
  FUN_00fc7c18();
  FUN_01db1014();
  return;
}


