/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_69
ENTRY_POINT: 076ed228
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__657_69(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  long unaff_x25;
  ulong uVar3;
  undefined8 uVar4;
  
  while( true ) {
    iVar1 = *(int *)(unaff_x19 + 0x80);
    *(undefined8 *)(unaff_x25 + unaff_x21 * 8 + 0x20) = param_1;
    if (0 < iVar1) {
      uVar3 = 0;
      do {
        lVar2 = *(long *)(unaff_x19 + 0x88);
        if (lVar2 == 0) goto LAB_076ed2b0;
        if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_076ed2cc;
        lVar2 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
        if (*(char *)(unaff_x23 + 0xe1a) == '\0') {
          FUN_0403162c();
          *(undefined1 *)(unaff_x23 + 0xe1a) = unaff_w24;
        }
        if (lVar2 == 0) goto LAB_076ed2b0;
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_076ed2cc;
        uVar4 = **(undefined8 **)(*unaff_x20 + 0xb8);
        lVar2 = lVar2 + uVar3 * 0x10;
        uVar3 = uVar3 + 1;
        *(undefined8 *)(lVar2 + 0x28) = (*(undefined8 **)(*unaff_x20 + 0xb8))[1];
        *(undefined8 *)(lVar2 + 0x20) = uVar4;
      } while ((long)uVar3 < (long)*(int *)(unaff_x19 + 0x80));
    }
    unaff_x25 = *(long *)(unaff_x19 + 0x88);
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x25 == 0) break;
    if ((long)*(int *)(unaff_x25 + 0x18) <= (long)unaff_x21) {
      return;
    }
    param_1 = FUN_040316d0(*unaff_x22,*(undefined4 *)(unaff_x19 + 0x80));
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x21) {
LAB_076ed2cc:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
  }
LAB_076ed2b0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


