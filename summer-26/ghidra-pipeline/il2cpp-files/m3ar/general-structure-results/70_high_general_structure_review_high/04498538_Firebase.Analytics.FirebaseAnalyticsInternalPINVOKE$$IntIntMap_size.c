/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$IntIntMap_size
ENTRY_POINT: 04498538
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__IntIntMap_size(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_0446acc8(param_1,0);
    if (param_2 != iVar1) {
      return 1;
    }
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x18);
      uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7bf30);
      FUN_05ce812c();
      if (lVar3 != 0) {
        uVar2 = FUN_057d59dc(lVar3,uVar2,*(undefined8 *)PTR_DAT_08f7d340);
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


