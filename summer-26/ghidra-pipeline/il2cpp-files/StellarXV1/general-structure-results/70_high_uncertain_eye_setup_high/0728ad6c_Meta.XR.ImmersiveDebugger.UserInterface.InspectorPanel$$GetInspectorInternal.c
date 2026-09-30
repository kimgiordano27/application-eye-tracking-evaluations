/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$GetInspectorInternal
ENTRY_POINT: 0728ad6c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__GetInspectorInternal(void)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long in_x9;
  long lVar5;
  long lVar6;
  int unaff_w19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  
code_r0x0728ad6c:
  lVar6 = *(long *)(unaff_x23 + 0x20);
  iVar1 = -1;
  do {
    iVar3 = iVar1;
    if (lVar6 == 0) goto LAB_0728ae78;
    lVar6 = *(long *)(lVar6 + 0x38);
    iVar1 = iVar3 + 1;
  } while (lVar6 != *(long *)(unaff_x23 + 0x20));
  lVar6 = *(long *)(in_x9 + 0x20);
  do {
    if (lVar6 == 0) goto LAB_0728ae78;
    lVar6 = *(long *)(lVar6 + 0x38);
    iVar3 = iVar3 + 1;
  } while (lVar6 != *(long *)(in_x9 + 0x20));
  lVar6 = unaff_x25;
  if (unaff_w19 < iVar3) goto LAB_0728ae30;
  if ((((*(long *)(unaff_x26 + 0x30) != 0) &&
       (lVar4 = *(long *)(*(long *)(unaff_x26 + 0x30) + 0x28), lVar4 != 0)) &&
      (*(long *)(unaff_x22 + 0x38) != 0)) &&
     (lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x38), lVar5 != 0)) {
    uVar2 = FUN_0728904c(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(unaff_x26 + 0x40),
                         *(undefined8 *)(lVar5 + 0x40));
    if ((uVar2 & 1) == 0) goto LAB_0728ae30;
    if (((*(long *)(unaff_x22 + 0x30) != 0) &&
        (lVar4 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28), lVar4 != 0)) &&
       ((*(long *)(unaff_x26 + 0x38) != 0 &&
        (lVar5 = *(long *)(*(long *)(unaff_x26 + 0x38) + 0x38), lVar5 != 0)))) {
      uVar2 = FUN_0728904c(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(unaff_x22 + 0x40),
                           *(undefined8 *)(lVar5 + 0x40));
      if ((uVar2 & 1) == 0) goto LAB_0728ae30;
      lVar6 = *(long *)(unaff_x22 + 0x38);
      FUN_0728a634();
      while (unaff_x26 = lVar6, lVar6 != 0) {
        while( true ) {
          unaff_x25 = *(long *)(unaff_x26 + 0x38);
          unaff_x22 = *(long *)(unaff_x26 + 0x28);
          lVar6 = unaff_x25;
          if (unaff_x22 != 0) {
            in_x9 = *(long *)(unaff_x22 + 0x48);
            if ((in_x9 != 0) && (*(char *)(in_x9 + 0x35) != '\0')) goto code_r0x0728ad6c;
LAB_0728ae30:
            unaff_x25 = *(long *)(unaff_x26 + 0x38);
          }
          if (unaff_x25 == 0) goto LAB_0728ae78;
          if (*(long *)(unaff_x25 + 0x40) != unaff_x24) break;
          do {
            unaff_x23 = *(long *)(unaff_x23 + 0x18);
            if (unaff_x23 == *(long *)(unaff_x20 + 0x18)) {
              return;
            }
            if (unaff_x23 == 0) goto LAB_0728ae78;
          } while (*(char *)(unaff_x23 + 0x35) == '\0');
          unaff_x26 = *(long *)(unaff_x23 + 0x20);
          if (unaff_x26 == 0) goto LAB_0728ae78;
          unaff_x24 = *(long *)(unaff_x26 + 0x40);
        }
      }
    }
  }
LAB_0728ae78:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


