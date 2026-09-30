/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE$$new_IntIntMap__SWIG_1
ENTRY_POINT: 044984bc
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


undefined8
Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE__new_IntIntMap__SWIG_1
          (long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(unaff_x22 + 0xc48);
  if ((*(byte *)(unaff_x20 + 0xc37) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f7d340);
    FUN_0403162c(PTR_DAT_08f7bf30);
    FUN_0403162c(PTR_DAT_08f7ec50);
    FUN_0403162c(PTR_DAT_08f7ec48);
    *(undefined1 *)(unaff_x20 + 0xc37) = 1;
  }
  lVar3 = thunk_FUN_0406deb8(*puVar6);
  FUN_075273c0(lVar3,0);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x10) = param_2, param_2 != 0)) {
    iVar1 = FUN_0446acc8(param_2,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      iVar2 = FUN_0446acc8(*(long *)(param_1 + 0x10),0);
      if (iVar1 != iVar2) {
        return 1;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
        uVar4 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7bf30);
        FUN_05ce812c(uVar4,lVar3,*(undefined8 *)PTR_DAT_08f7ec50,0);
        if (lVar5 != 0) {
          uVar4 = FUN_057d59dc(lVar5,uVar4,*(undefined8 *)PTR_DAT_08f7d340);
          return uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


