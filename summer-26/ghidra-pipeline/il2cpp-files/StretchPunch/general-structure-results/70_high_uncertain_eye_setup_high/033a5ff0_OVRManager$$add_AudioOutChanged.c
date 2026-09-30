/*
FUNCTION_NAME: OVRManager$$add_AudioOutChanged
ENTRY_POINT: 033a5ff0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_AudioOutChanged(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint in_w8;
  long unaff_x19;
  byte unaff_w20;
  long unaff_x21;
  undefined8 unaff_x22;
  
  do {
    if (in_w8 == unaff_w20) {
LAB_033a6108:
      uVar3 = 3;
LAB_033a610c:
      unaff_x19 = FUN_033dc904(unaff_x19,uVar3,0);
LAB_033a616c:
      uVar3 = FUN_033dc8f8(unaff_x19,0);
      return uVar3;
    }
    lVar1 = FUN_033dc904(unaff_x19,4,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 4;
FUN_033a60d4:
      uVar3 = FUN_033dc904(unaff_x19,uVar3,0);
      uVar3 = FUN_033dc8f8(uVar3,0);
      return uVar3;
    }
    lVar1 = FUN_033dc904(unaff_x19,5,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 5;
      goto FUN_033a60d4;
    }
    lVar1 = FUN_033dc904(unaff_x19,6,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 6;
      goto FUN_033a60d4;
    }
    lVar1 = FUN_033dc904(unaff_x19,7,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
      uVar3 = 7;
      goto FUN_033a60d4;
    }
    unaff_x19 = FUN_033dc904(unaff_x19,8,0);
    uVar2 = FUN_033dc8f8(unaff_x22,0);
    if (uVar2 < 8) {
      uVar2 = FUN_033dc8f8(unaff_x22,0);
      if (uVar2 < 4) goto LAB_033a6130;
      unaff_x22 = FUN_033dc90c(unaff_x22,4,0);
      if (*(byte *)(unaff_x21 + unaff_x19) == unaff_w20) goto LAB_033a616c;
      lVar1 = FUN_033dc904(unaff_x19,1,0);
      if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
LAB_033a5f7c:
        uVar3 = 1;
        goto LAB_033a610c;
      }
      lVar1 = FUN_033dc904(unaff_x19,2,0);
      if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) {
LAB_033a60b0:
        uVar3 = 2;
        goto LAB_033a610c;
      }
      lVar1 = FUN_033dc904(unaff_x19,3,0);
      if (*(byte *)(unaff_x21 + lVar1) != unaff_w20) {
        uVar3 = 4;
        while( true ) {
          unaff_x19 = FUN_033dc904(unaff_x19,uVar3,0);
LAB_033a6130:
          lVar1 = FUN_033dc8f8(unaff_x22,0);
          if (lVar1 == 0) {
            return 0xffffffff;
          }
          unaff_x22 = FUN_033dc90c(unaff_x22,1,0);
          if (*(byte *)(unaff_x21 + unaff_x19) == unaff_w20) break;
          uVar3 = 1;
        }
        goto LAB_033a616c;
      }
      goto LAB_033a6108;
    }
    unaff_x22 = FUN_033dc90c(unaff_x22,8,0);
    if (*(byte *)(unaff_x21 + unaff_x19) == unaff_w20) goto LAB_033a616c;
    lVar1 = FUN_033dc904(unaff_x19,1,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) goto LAB_033a5f7c;
    lVar1 = FUN_033dc904(unaff_x19,2,0);
    if (*(byte *)(unaff_x21 + lVar1) == unaff_w20) goto LAB_033a60b0;
    lVar1 = FUN_033dc904(unaff_x19,3,0);
    in_w8 = (uint)*(byte *)(unaff_x21 + lVar1);
  } while( true );
}


