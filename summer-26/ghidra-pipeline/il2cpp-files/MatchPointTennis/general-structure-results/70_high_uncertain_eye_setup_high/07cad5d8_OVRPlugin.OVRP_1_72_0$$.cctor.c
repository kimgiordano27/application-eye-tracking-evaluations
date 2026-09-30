/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$.cctor
ENTRY_POINT: 07cad5d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_72_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f51160);
  FUN_04447ba8(PTR_DAT_09f511f8);
  FUN_04447ba8(PTR_DAT_09f1e538);
  *(undefined1 *)(unaff_x20 + 0xab0) = 1;
  puVar2 = PTR_DAT_09f51160;
  puVar1 = PTR_DAT_09f1e538;
  if (*(char *)(unaff_x19 + 0x41) != '\0') {
    uVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f51150);
    FUN_061c63c0();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorName(uVar4);
  }
  puVar2 = PTR_DAT_09f511f8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar5 = FUN_04eab2f0(*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x18) != 0) {
      if ((int)*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar6 = *(long *)puVar1;
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_044a54b4(lVar6);
      }
      bVar3 = FUN_0952fedc(uVar4,0);
      *(byte *)(unaff_x19 + 0x58) = bVar3 & 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


