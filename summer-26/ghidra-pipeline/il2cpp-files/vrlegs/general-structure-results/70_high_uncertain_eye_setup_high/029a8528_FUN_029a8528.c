/*
FUNCTION_NAME: FUN_029a8528
ENTRY_POINT: 029a8528
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029a8624) */

undefined1  [16] FUN_029a8528(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  char local_24 [4];
  
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar6,local_24,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar7 = *(long *)(param_1 + 0x60);
  FUN_029bb83c(param_2,lVar7,0,8,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(lVar7 + 0x18);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  if (uVar1 != 1) {
    if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (uVar1 != 3) {
      if (7 < uVar1) {
        uVar2 = *(undefined1 *)(lVar7 + 0x20);
        uVar3 = *(undefined1 *)(lVar7 + 0x21);
        uVar4 = *(undefined1 *)(lVar7 + 0x23);
        *(undefined1 *)(lVar7 + 0x20) = *(undefined1 *)(lVar7 + 0x27);
        *(undefined1 *)(lVar7 + 0x21) = *(undefined1 *)(lVar7 + 0x26);
        uVar5 = *(undefined1 *)(lVar7 + 0x22);
        *(undefined1 *)(lVar7 + 0x22) = *(undefined1 *)(lVar7 + 0x25);
        *(undefined1 *)(lVar7 + 0x23) = *(undefined1 *)(lVar7 + 0x24);
        *(undefined1 *)(lVar7 + 0x24) = uVar4;
        *(undefined1 *)(lVar7 + 0x25) = uVar5;
        *(undefined1 *)(lVar7 + 0x26) = uVar3;
        *(undefined1 *)(lVar7 + 0x27) = uVar2;
        auVar8 = FUN_026b53b4(lVar7,0,0);
        uVar9 = auVar8._8_8_;
        if (local_24[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
        }
        auVar8._8_8_ = uVar9;
        return auVar8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


