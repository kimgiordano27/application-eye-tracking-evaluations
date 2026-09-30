/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 060bf9d0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = *unaff_x20;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar4 = *unaff_x20;
  }
  cVar3 = DAT_07ee0a91;
  lVar6 = *(long *)(lVar4 + 0xb8);
  uVar8 = *(undefined8 *)(lVar6 + 0x20);
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar8;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar5;
  if (cVar3 == '\0') {
    FUN_03642964();
    lVar4 = *unaff_x20;
    DAT_07ee0a91 = '\x01';
  }
  puVar2 = PTR_DAT_07a23d90;
  puVar1 = PTR_DAT_07a23d40;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar4 = *unaff_x20;
  }
  puVar7 = *(undefined8 **)(lVar4 + 0xb8);
  uVar5 = *(undefined8 *)puVar1;
  uVar8 = puVar7[2];
  uVar10 = puVar7[1];
  uVar9 = *puVar7;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060bf960 with catch @ 060bfa54
                        */
  *(undefined4 *)(unaff_x19 + 0x128) = 1;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060bf95c with catch @ 060bfa58
                        */
  *(undefined8 *)(unaff_x19 + 0x110) = uVar8;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060bf958 with catch @ 060bfa5c
                        */
  *(undefined8 *)(unaff_x19 + 0x108) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar9;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060bf954 with catch @ 060bfa60
                        */
  uVar5 = thunk_FUN_0367fe20(uVar5);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060bf8bc with catch @ 060bfa64
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060bf810 with catch @ 060bfa68
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060bf7ac with catch @ 060bfa6c
                        */
  FUN_0459e7d4(uVar5,*(undefined8 *)puVar2);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060bf880 with catch @ 060bfa70
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 060bf950 with catch @ 060bfa74
                        */
  *(undefined8 *)(unaff_x19 + 0x130) = uVar5;
  thunk_FUN_036b7ad0(unaff_x19 + 0x130,uVar5);
                    /* try { // try from 060bfa90 to 061bfa93 has its CatchHandler @ 060bfa9c */
  FUN_04b0d4b4();
  return;
}


