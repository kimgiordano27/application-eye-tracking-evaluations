/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$InitializeRandom
ENTRY_POINT: 07706afc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__InitializeRandom
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = *(undefined4 *)(unaff_x19 + 0x54);
  uVar3 = *(undefined4 *)(unaff_x19 + 0x58);
  uVar5 = *(undefined4 *)(unaff_x19 + 0x50);
  uVar2 = FUN_09539d64(param_4,0);
  uVar6 = *(undefined4 *)(unaff_x19 + 0x30);
  FUN_09536010(0);
  FUN_09514f94(uVar5,uVar4,uVar3,uVar2,param_2,param_3,uVar6,0x7f800000,unaff_x19 + 0x38,0);
  if (unaff_x20 != 0) {
    FUN_09539e3c();
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      lVar1 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *(undefined4 *)(unaff_x19 + 100);
      uVar5 = *(undefined4 *)(unaff_x19 + 0x68);
      uVar6 = *(undefined4 *)(unaff_x19 + 0x5c);
      uVar3 = *(undefined4 *)(unaff_x19 + 0x60);
      FUN_09537fe0(*(long *)(unaff_x19 + 0x28),0);
      FUN_07706c1c(uVar6,unaff_x19 + 0x44);
      if (lVar1 != 0) {
        FUN_0953a29c(lVar1,0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          uVar6 = FUN_09539d64(*(long *)(unaff_x19 + 0x20),0);
          *(undefined4 *)(unaff_x19 + 0x50) = uVar6;
          *(undefined4 *)(unaff_x19 + 0x54) = uVar3;
          *(undefined4 *)(unaff_x19 + 0x58) = uVar4;
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            uVar6 = FUN_09537fe0(*(long *)(unaff_x19 + 0x20),0);
            *(undefined4 *)(unaff_x19 + 0x5c) = uVar6;
            *(undefined4 *)(unaff_x19 + 0x60) = uVar3;
            *(undefined4 *)(unaff_x19 + 100) = uVar4;
            *(undefined4 *)(unaff_x19 + 0x68) = uVar5;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


