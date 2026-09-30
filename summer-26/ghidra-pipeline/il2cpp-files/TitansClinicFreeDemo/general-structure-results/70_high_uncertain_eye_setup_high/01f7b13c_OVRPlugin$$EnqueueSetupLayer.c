/*
FUNCTION_NAME: OVRPlugin$$EnqueueSetupLayer
ENTRY_POINT: 01f7b13c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__EnqueueSetupLayer(void)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  char unaff_w20;
  long unaff_x21;
  undefined8 unaff_x22;
  
  do {
    if ((bool)in_ZR) {
      uVar3 = 7;
LAB_01f7b1ac:
      uVar3 = FUN_01fb02a4(unaff_x19,uVar3,0);
      uVar3 = FUN_01fb0298(uVar3,0);
      return uVar3;
    }
    unaff_x19 = FUN_01fb02a4(unaff_x19,8,0);
    uVar2 = FUN_01fb0298(unaff_x22,0);
    if (uVar2 < 8) {
      uVar2 = FUN_01fb0298(unaff_x22,0);
      if (uVar2 < 4) goto LAB_01f7b208;
      unaff_x22 = FUN_01fb02ac(unaff_x22,4,0);
      if (*(char *)(unaff_x21 + unaff_x19) != unaff_w20) {
        lVar1 = FUN_01fb02a4(unaff_x19,1,0);
        if (*(char *)(unaff_x21 + lVar1) == unaff_w20) goto LAB_01f7b054;
        lVar1 = FUN_01fb02a4(unaff_x19,2,0);
        if (*(char *)(unaff_x21 + lVar1) == unaff_w20) goto LAB_01f7b188;
        lVar1 = FUN_01fb02a4(unaff_x19,3,0);
        if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
LAB_01f7b1e0:
          uVar3 = 3;
LAB_01f7b1e4:
          unaff_x19 = FUN_01fb02a4(unaff_x19,uVar3,0);
        }
        else {
          uVar3 = 4;
          while( true ) {
            unaff_x19 = FUN_01fb02a4(unaff_x19,uVar3,0);
LAB_01f7b208:
            lVar1 = FUN_01fb0298(unaff_x22,0);
            if (lVar1 == 0) {
              return 0xffffffff;
            }
            unaff_x22 = FUN_01fb02ac(unaff_x22,1,0);
            if (*(char *)(unaff_x21 + unaff_x19) == unaff_w20) break;
            uVar3 = 1;
          }
        }
      }
LAB_01f7b244:
      uVar3 = FUN_01fb0298(unaff_x19,0);
      return uVar3;
    }
    unaff_x22 = FUN_01fb02ac(unaff_x22,8,0);
    if (*(char *)(unaff_x21 + unaff_x19) == unaff_w20) goto LAB_01f7b244;
    lVar1 = FUN_01fb02a4(unaff_x19,1,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
LAB_01f7b054:
      uVar3 = 1;
      goto LAB_01f7b1e4;
    }
    lVar1 = FUN_01fb02a4(unaff_x19,2,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
LAB_01f7b188:
      uVar3 = 2;
      goto LAB_01f7b1e4;
    }
    lVar1 = FUN_01fb02a4(unaff_x19,3,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) goto LAB_01f7b1e0;
    lVar1 = FUN_01fb02a4(unaff_x19,4,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 4;
      goto LAB_01f7b1ac;
    }
    lVar1 = FUN_01fb02a4(unaff_x19,5,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 5;
      goto LAB_01f7b1ac;
    }
    lVar1 = FUN_01fb02a4(unaff_x19,6,0);
    if (*(char *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 6;
      goto LAB_01f7b1ac;
    }
    lVar1 = FUN_01fb02a4(unaff_x19,7,0);
    in_ZR = *(char *)(unaff_x21 + lVar1) == unaff_w20;
  } while( true );
}


