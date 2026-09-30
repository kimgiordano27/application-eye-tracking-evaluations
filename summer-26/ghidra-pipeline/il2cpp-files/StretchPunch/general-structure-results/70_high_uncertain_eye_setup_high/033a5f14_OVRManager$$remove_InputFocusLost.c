/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 033a5f14
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_InputFocusLost(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  char unaff_w20;
  long unaff_x21;
  
  uVar1 = FUN_033dc8e0();
  uVar2 = FUN_033dc8f8(uVar1,0);
  while (7 < uVar2) {
    uVar1 = FUN_033dc90c(uVar1,8,0);
    if (*(char *)(unaff_x21 + unaff_x19) == unaff_w20) goto LAB_033a616c;
    lVar3 = FUN_033dc904(unaff_x19,1,0);
    if (*(char *)(unaff_x21 + lVar3) == unaff_w20) goto LAB_033a5f7c;
    lVar3 = FUN_033dc904(unaff_x19,2,0);
    if (*(char *)(unaff_x21 + lVar3) == unaff_w20) goto LAB_033a60b0;
    lVar3 = FUN_033dc904(unaff_x19,3,0);
    if (*(char *)(unaff_x21 + lVar3) == unaff_w20) goto LAB_033a6108;
    lVar3 = FUN_033dc904(unaff_x19,4,0);
    if (*(char *)(unaff_x21 + lVar3) == unaff_w20) {
      uVar1 = 4;
FUN_033a60d4:
      uVar1 = FUN_033dc904(unaff_x19,uVar1,0);
      uVar1 = FUN_033dc8f8(uVar1,0);
      return uVar1;
    }
    lVar3 = FUN_033dc904(unaff_x19,5,0);
    if (*(char *)(unaff_x21 + lVar3) == unaff_w20) {
      uVar1 = 5;
      goto FUN_033a60d4;
    }
    lVar3 = FUN_033dc904(unaff_x19,6,0);
    if (*(char *)(unaff_x21 + lVar3) == unaff_w20) {
      uVar1 = 6;
      goto FUN_033a60d4;
    }
    lVar3 = FUN_033dc904(unaff_x19,7,0);
    if (*(char *)(unaff_x21 + lVar3) == unaff_w20) {
      uVar1 = 7;
      goto FUN_033a60d4;
    }
    unaff_x19 = FUN_033dc904(unaff_x19,8,0);
    uVar2 = FUN_033dc8f8(uVar1,0);
  }
  uVar2 = FUN_033dc8f8(uVar1,0);
  if (uVar2 < 4) goto LAB_033a6130;
  uVar1 = FUN_033dc90c(uVar1,4,0);
  if (*(char *)(unaff_x21 + unaff_x19) != unaff_w20) {
    lVar3 = FUN_033dc904(unaff_x19,1,0);
    if (*(char *)(unaff_x21 + lVar3) == unaff_w20) {
LAB_033a5f7c:
      uVar1 = 1;
    }
    else {
      lVar3 = FUN_033dc904(unaff_x19,2,0);
      if (*(char *)(unaff_x21 + lVar3) == unaff_w20) {
LAB_033a60b0:
        uVar1 = 2;
      }
      else {
        lVar3 = FUN_033dc904(unaff_x19,3,0);
        if (*(char *)(unaff_x21 + lVar3) != unaff_w20) {
          uVar4 = 4;
          while( true ) {
            unaff_x19 = FUN_033dc904(unaff_x19,uVar4,0);
LAB_033a6130:
            lVar3 = FUN_033dc8f8(uVar1,0);
            if (lVar3 == 0) {
              return 0xffffffff;
            }
            uVar1 = FUN_033dc90c(uVar1,1,0);
            if (*(char *)(unaff_x21 + unaff_x19) == unaff_w20) break;
            uVar4 = 1;
          }
          goto LAB_033a616c;
        }
LAB_033a6108:
        uVar1 = 3;
      }
    }
    unaff_x19 = FUN_033dc904(unaff_x19,uVar1,0);
  }
LAB_033a616c:
  uVar1 = FUN_033dc8f8(unaff_x19,0);
  return uVar1;
}


