/*
FUNCTION_NAME: OVRPlugin.OVRP_1_37_0$$.cctor
ENTRY_POINT: 0369fb6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_37_0___cctor(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined1 unaff_w24;
  ulong unaff_x25;
  long lVar2;
  long unaff_x26;
  
  do {
    thunk_FUN_01efb3a4();
    *(undefined1 *)(unaff_x23 + 0xe0f) = unaff_w24;
    do {
      if (unaff_x26 == 0) {
LAB_0369fbb8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) {
LAB_0369fbd4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar1 = **(undefined8 **)(*unaff_x20 + 0xb8);
      lVar2 = unaff_x26 + unaff_x25 * 0x10;
      unaff_x25 = unaff_x25 + 1;
      *(undefined8 *)(lVar2 + 0x28) = (*(undefined8 **)(*unaff_x20 + 0xb8))[1];
      *(undefined8 *)(lVar2 + 0x20) = uVar1;
      if ((long)*(int *)(unaff_x19 + 0x80) <= (long)unaff_x25) {
        do {
          lVar2 = *(long *)(unaff_x19 + 0x88);
          unaff_x21 = unaff_x21 + 1;
          if (lVar2 == 0) goto LAB_0369fbb8;
          if ((long)*(int *)(lVar2 + 0x18) <= (long)unaff_x21) {
            return;
          }
          uVar1 = FUN_01f08890(*unaff_x22,*(undefined4 *)(unaff_x19 + 0x80));
          if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_0369fbd4;
          *(undefined8 *)(lVar2 + unaff_x21 * 8 + 0x20) = uVar1;
          thunk_FUN_01f51358();
        } while (*(int *)(unaff_x19 + 0x80) < 1);
        unaff_x25 = 0;
      }
      lVar2 = *(long *)(unaff_x19 + 0x88);
      if (lVar2 == 0) goto LAB_0369fbb8;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_0369fbd4;
      unaff_x26 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
    } while (*(char *)(unaff_x23 + 0xe0f) != '\0');
  } while( true );
}


