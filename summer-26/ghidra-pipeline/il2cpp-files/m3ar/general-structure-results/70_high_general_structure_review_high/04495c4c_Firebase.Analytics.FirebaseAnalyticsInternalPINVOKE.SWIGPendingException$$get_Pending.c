/*
FUNCTION_NAME: Firebase.Analytics.FirebaseAnalyticsInternalPINVOKE.SWIGPendingException$$get_Pending
ENTRY_POINT: 04495c4c
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


uint Firebase_Analytics_FirebaseAnalyticsInternalPINVOKE_SWIGPendingException__get_Pending
               (undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x19;
  uint unaff_w20;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  
  FUN_044aed1c(param_5,*param_1,0);
  lVar3 = unaff_x19[0x16];
  uVar1 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f7ea68);
  FUN_05ce3064();
  if (lVar3 != 0) {
    auVar6 = FUN_05666b84(lVar3,uVar1,*(undefined8 *)PTR_DAT_08f7ea58);
    lVar3 = auVar6._8_8_;
    if ((unaff_x19[9] != 0) && (lVar3 != 0)) {
      lVar4 = *(long *)(unaff_x19[9] + 0x50);
      lVar2 = FUN_085883f0(lVar3,0);
      if (lVar2 != 0) {
        uVar5 = FUN_08598884(lVar2,0);
        (**(code **)(*unaff_x19 + 0x238))();
        if (lVar4 != 0) {
          FUN_0445597c(uVar5,param_3,param_4,lVar4);
          lVar2 = FUN_04b60dd0(lVar3,*(undefined8 *)PTR_DAT_08f70b20);
          if (lVar2 != 0) {
            FUN_0850d428(lVar2,*(undefined8 *)PTR_DAT_08f7c640,0);
            if (*(int *)(*(long *)PTR_DAT_08f65598 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            UnityEngine_Tilemaps_Tilemap__set_tileAnchor(0x40000000,lVar3,0);
            if (unaff_x19[0x16] != 0) {
              FUN_05667a00(unaff_x19[0x16],auVar6._0_8_,lVar3,*(undefined8 *)PTR_DAT_08f7ea60);
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
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


