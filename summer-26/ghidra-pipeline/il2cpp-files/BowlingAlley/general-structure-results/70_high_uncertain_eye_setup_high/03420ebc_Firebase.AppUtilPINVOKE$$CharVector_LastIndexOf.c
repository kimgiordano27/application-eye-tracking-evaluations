/*
FUNCTION_NAME: Firebase.AppUtilPINVOKE$$CharVector_LastIndexOf
ENTRY_POINT: 03420ebc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Firebase_AppUtilPINVOKE__CharVector_LastIndexOf(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(PTR_DAT_072798f8);
  thunk_FUN_032e1da0(PTR_DAT_0727a1b8);
  thunk_FUN_032e1da0(PTR_DAT_0727a1f0);
  thunk_FUN_032e1da0(PTR_DAT_0727a948);
  thunk_FUN_032e1da0(PTR_DAT_0727a1c0);
  *(undefined1 *)(unaff_x21 + 0xedb) = 1;
  if (unaff_x20 != (long *)0x0) {
    uVar1 = OVRPlugin_OVRP_1_58_0___cctor();
    if ((uVar1 & 1) == 0) {
      if ((unaff_x20[5] != 0) && (*(long *)(unaff_x19 + 0x18) != 0)) {
        uVar3 = *(undefined8 *)(unaff_x20[5] + 0x18);
        *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x28) = uVar3;
        lVar2 = FUN_05dbdaf0(uVar3,0);
        uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
        uVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a1d0);
        FUN_04bf4290(uVar3,uVar4,*(undefined8 *)PTR_DAT_0727a948,0);
        if (lVar2 != 0) {
          FUN_0498244c(lVar2,uVar3,*(undefined8 *)PTR_DAT_0727a1f0);
          goto LAB_03420ff4;
        }
      }
    }
    else {
      lVar2 = (**(code **)(*unaff_x20 + 0x178))();
      if (lVar2 != 0) {
                    /* try { // try from 03420f30 to 03520f53 has its CatchHandler @ 03420f30
                       catch() { ... } // from try @ 03420f30 with catch @ 03420f30
                       catch() { ... } // from try @ 03420f5c with catch @ 03420f30 */
        uVar3 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727a1c0,*(undefined8 *)(lVar2 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb2a00(uVar3,0);
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          FUN_03420a48();
LAB_03420ff4:
          *(undefined1 *)(unaff_x19 + 0x10) = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


