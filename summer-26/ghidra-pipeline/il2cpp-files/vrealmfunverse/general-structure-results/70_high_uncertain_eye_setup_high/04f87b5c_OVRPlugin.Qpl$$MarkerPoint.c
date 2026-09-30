/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPoint
ENTRY_POINT: 04f87b5c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerPoint(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  long unaff_x25;
  ulong uVar3;
  
  do {
    uVar1 = FUN_02b3c908(*unaff_x22,*(undefined4 *)(unaff_x19 + 0x80));
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x21) {
LAB_04f87c20:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    *(undefined8 *)(unaff_x25 + unaff_x21 * 8 + 0x20) = uVar1;
    thunk_FUN_02bb0e9c();
    if (0 < *(int *)(unaff_x19 + 0x80)) {
      uVar3 = 0;
      do {
        lVar2 = *(long *)(unaff_x19 + 0x88);
        if (lVar2 == 0) goto LAB_04f87c04;
        if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_04f87c20;
        lVar2 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
        if (*(char *)(unaff_x23 + 0xd9a) == '\0') {
          FUN_02b3c81c();
          *(undefined1 *)(unaff_x23 + 0xd9a) = unaff_w24;
        }
        if (lVar2 == 0) goto LAB_04f87c04;
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_04f87c20;
        uVar1 = **(undefined8 **)(*unaff_x20 + 0xb8);
        lVar2 = lVar2 + uVar3 * 0x10;
        uVar3 = uVar3 + 1;
        *(undefined8 *)(lVar2 + 0x28) = (*(undefined8 **)(*unaff_x20 + 0xb8))[1];
        *(undefined8 *)(lVar2 + 0x20) = uVar1;
      } while ((long)uVar3 < (long)*(int *)(unaff_x19 + 0x80));
    }
    unaff_x25 = *(long *)(unaff_x19 + 0x88);
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x25 == 0) {
LAB_04f87c04:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((long)*(int *)(unaff_x25 + 0x18) <= (long)unaff_x21) {
      return;
    }
  } while( true );
}


