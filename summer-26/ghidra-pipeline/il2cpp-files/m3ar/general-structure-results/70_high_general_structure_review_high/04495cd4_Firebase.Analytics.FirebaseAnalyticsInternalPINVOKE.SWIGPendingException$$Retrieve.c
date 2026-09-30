/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE.SWIGPendingException$$Retrieve
ENTRY_POINT: 04495cd4
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


uint Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE_SWIGPendingException__Retrieve
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  uint unaff_w20;
  long lVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  
  thunk_FUN_0408f364();
  lVar1 = FUN_04442348(0);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x220) != 0)) {
                    /* try { // try from 04495cec to 04595d4b has its CatchHandler @ 04495a8c */
    FUN_044aed1c(*(long *)(lVar1 + 0x220),*(undefined8 *)PTR_DAT_08f7ea90,0);
    lVar1 = unaff_x19[0x16];
    uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7ea68);
    FUN_05ce3064();
    if (lVar1 != 0) {
      auVar6 = FUN_05666b84(lVar1,uVar2,*(undefined8 *)PTR_DAT_08f7ea58);
      lVar1 = auVar6._8_8_;
      if ((unaff_x19[9] != 0) && (lVar1 != 0)) {
        lVar4 = *(long *)(unaff_x19[9] + 0x50);
        lVar3 = FUN_085883f0(lVar1,0);
        if (lVar3 != 0) {
          uVar5 = FUN_08598884(lVar3,0);
          (**(code **)(*unaff_x19 + 0x238))();
          if (lVar4 != 0) {
            FUN_0445597c(uVar5,param_2,param_3,lVar4);
            lVar3 = FUN_04b60dd0(lVar1,*(undefined8 *)PTR_DAT_08f70b20);
            if (lVar3 != 0) {
              FUN_0850d428(lVar3,*(undefined8 *)PTR_DAT_08f7c640,0);
              if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              UnityEngine_Tilemaps_Tilemap__set_tileAnchor(0x40000000,lVar1,0);
              if (unaff_x19[0x16] != 0) {
                FUN_05667a00(unaff_x19[0x16],auVar6._0_8_,lVar1,*(undefined8 *)PTR_DAT_08f7ea60);
                if (unaff_x19[0x16] != 0) {
                  FUN_0446c0a4();
                  return unaff_w20 & 1;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


