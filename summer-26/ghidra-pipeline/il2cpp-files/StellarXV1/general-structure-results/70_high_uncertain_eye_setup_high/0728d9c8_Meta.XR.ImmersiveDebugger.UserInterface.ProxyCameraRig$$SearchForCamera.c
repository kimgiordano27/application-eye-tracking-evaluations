/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.ProxyCameraRig$$SearchForCamera
ENTRY_POINT: 0728d9c8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_ProxyCameraRig__SearchForCamera(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  while ((lVar3 = unaff_x20, uVar1 = FUN_0728c4f4(), *(long *)(unaff_x19 + 0x18) != 0 &&
         (uVar2 = FUN_0728a634(uVar1,*(undefined8 *)(unaff_x19 + 0x10),unaff_x21), lVar3 != 0))) {
    unaff_x20 = *(long *)(lVar3 + 0x38);
    do {
      do {
        if (unaff_x20 == 0) goto LAB_0728da90;
        if (*(long *)(unaff_x20 + 0x38) == lVar3) {
          if (unaff_x20 != lVar3) {
            if (unaff_x20 == unaff_x23) {
LAB_0728da30:
              unaff_x23 = *(long *)(unaff_x23 + 0x20);
            }
            else {
              if (unaff_x23 == 0) goto LAB_0728da90;
              if (unaff_x20 == *(long *)(unaff_x23 + 0x28)) goto LAB_0728da30;
            }
            if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_0728da90;
            uVar2 = FUN_0728a634(uVar2,*(undefined8 *)(unaff_x19 + 0x10));
          }
          if (lVar3 == unaff_x23) {
LAB_0728da5c:
            unaff_x23 = *(long *)(unaff_x23 + 0x20);
          }
          else {
            if (unaff_x23 == 0) goto LAB_0728da90;
            if (lVar3 == *(long *)(unaff_x23 + 0x28)) goto LAB_0728da5c;
          }
          if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_0728da90;
          FUN_0728a634(uVar2,*(undefined8 *)(unaff_x19 + 0x10),lVar3);
        }
        lVar3 = unaff_x23;
        if (lVar3 == unaff_x22) {
          return;
        }
        if ((lVar3 == 0) || (*(long *)(lVar3 + 0x28) == 0)) goto LAB_0728da90;
        unaff_x20 = *(long *)(lVar3 + 0x38);
        unaff_x23 = *(long *)(lVar3 + 0x20);
        uVar2 = FUN_0728909c(*(undefined8 *)(lVar3 + 0x40),
                             *(undefined8 *)(*(long *)(lVar3 + 0x28) + 0x40));
      } while ((uVar2 & 1) == 0);
      if (*(long *)(lVar3 + 0x38) == 0) goto LAB_0728da90;
      unaff_x21 = lVar3;
    } while (*(long *)(*(long *)(lVar3 + 0x38) + 0x38) == lVar3);
  }
LAB_0728da90:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


