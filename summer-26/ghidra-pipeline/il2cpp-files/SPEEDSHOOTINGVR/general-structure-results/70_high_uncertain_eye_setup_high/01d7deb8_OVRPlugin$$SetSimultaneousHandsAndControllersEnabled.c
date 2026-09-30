/*
FUNCTION_NAME: OVRPlugin$$SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 01d7deb8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetSimultaneousHandsAndControllersEnabled(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint unaff_w19;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_02358fc8);
  FUN_00fdc2e4(PTR_DAT_02358fd0);
  *(undefined1 *)(unaff_x22 + 0x7c3) = 1;
  if ((unaff_w21 & 1) == 0) {
LAB_01d7df28:
    uVar2 = FUN_01d7db88();
  }
  else {
    lVar1 = (**(code **)(*unaff_x20 + 0x188))();
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x10) < 1)) goto LAB_01d7df28;
    uVar2 = FUN_01d7db88();
                    /* try { // try from 01d7df14 to 01e7df9b has its CatchHandler @ 01d7df14
                       catch() { ... } // from try @ 01d7df14 with catch @ 01d7df14
                       catch() { ... } // from try @ 01d7dfac with catch @ 01d7df14
                       catch() { ... } // from try @ 01d7dfdc with catch @ 01d7df14
                       catch() { ... } // from try @ 01d7e018 with catch @ 01d7df14 */
    uVar2 = FUN_01c513d4(uVar2,*(undefined8 *)PTR_DAT_02351708,lVar1,0);
  }
  if (unaff_x20[5] == 0) {
LAB_01d7e04c:
    lVar1 = FUN_01d7dc5c();
    if (lVar1 != 0) {
      uVar3 = FUN_01d7e0a8();
      uVar2 = FUN_01c513d4(uVar2,uVar3,lVar1,0);
      return uVar2;
    }
    return uVar2;
  }
  lVar1 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bc48,6);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      thunk_FUN_0106e12c((undefined8 *)(lVar1 + 0x20),uVar2);
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)PTR_DAT_02351700;
        thunk_FUN_0106e12c();
        if (unaff_x20[5] == 0) goto LAB_01d7e0a4;
        uVar2 = FUN_01d7de70(unaff_x20[5],unaff_w19 & 1,unaff_w21 & 1);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = uVar2;
          thunk_FUN_0106e12c((undefined8 *)(lVar1 + 0x30),uVar2);
          uVar2 = FUN_01d7e0a8();
          if (3 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x38) = uVar2;
            thunk_FUN_0106e12c((undefined8 *)(lVar1 + 0x38),uVar2);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)PTR_DAT_02358fc8;
              thunk_FUN_0106e12c((undefined8 *)(lVar1 + 0x40));
              if (5 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)PTR_DAT_02358fd0;
                thunk_FUN_0106e12c();
                uVar2 = FUN_01c515a0(lVar1,0);
                goto LAB_01d7e04c;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
LAB_01d7e0a4:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


