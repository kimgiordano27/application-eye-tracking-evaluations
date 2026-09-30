/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$new_IntIntMap__SWIG_0
ENTRY_POINT: 0449833c
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__new_IntIntMap__SWIG_0(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  
  FUN_075273c0();
  if ((unaff_x20 != 0) && (*(long *)(unaff_x20 + 0x10) = unaff_x21, unaff_x21 != 0)) {
    iVar1 = FUN_0446aca8();
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      iVar2 = FUN_0446aca8(*(long *)(unaff_x19 + 0x10),0);
      if (iVar1 != iVar2) {
        return 1;
      }
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        lVar4 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x18);
        uVar3 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7bf30);
        FUN_05ce812c();
        if (lVar4 != 0) {
          uVar3 = FUN_057d59dc(lVar4,uVar3,*(undefined8 *)PTR_DAT_08f7d340);
          return uVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


