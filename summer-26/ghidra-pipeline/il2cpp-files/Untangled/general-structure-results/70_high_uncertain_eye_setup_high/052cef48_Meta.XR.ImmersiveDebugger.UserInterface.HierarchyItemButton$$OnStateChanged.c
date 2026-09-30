/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$OnStateChanged
ENTRY_POINT: 052cef48
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton__OnStateChanged(void)

{
  ulong uVar1;
  uint in_w8;
  int iVar2;
  long lVar3;
  ulong unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  do {
    if (in_w8 == 0) {
LAB_052cef5c:
      iVar2 = *(int *)(unaff_x24 + 0x30);
LAB_052cef60:
      if (iVar2 == 2) goto LAB_052cef8c;
    }
    else {
      lVar3 = *(long *)(unaff_x24 + 0x208);
      if (lVar3 == 0) {
LAB_052cefe4:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(int *)(lVar3 + 0xc4) != 0) goto LAB_052cef5c;
      if (*(char *)(lVar3 + 0x100) != '\0') {
        iVar2 = *(int *)(lVar3 + 0xc0);
        goto LAB_052cef60;
      }
    }
    while( true ) {
      lVar3 = *(long *)(unaff_x22 + 0x48);
      unaff_w23 = unaff_w23 + 1;
      if (lVar3 == 0) goto LAB_052cefe4;
      while (*(int *)(lVar3 + 0x18) <= unaff_w23) {
        lVar3 = unaff_x20[0xb];
        unaff_w21 = unaff_w21 + 1;
        if (lVar3 == 0) goto LAB_052cefe4;
        if (*(int *)(lVar3 + 0x18) <= unaff_w21) {
          return 0;
        }
        unaff_x22 = FUN_03fd09cc(lVar3,unaff_w21,*unaff_x25);
        if ((unaff_x22 == 0) || (lVar3 = *(long *)(unaff_x22 + 0x48), lVar3 == 0))
        goto LAB_052cefe4;
        unaff_w23 = 0;
      }
      unaff_x24 = FUN_03fd09cc(lVar3,unaff_w23,*unaff_x26);
      if (unaff_x24 == 0) goto LAB_052cefe4;
      in_w8 = (uint)*(byte *)(unaff_x24 + 0x1b8);
      if ((unaff_x19 & 1) != 0) break;
      if (in_w8 == 0) {
LAB_052cef80:
        iVar2 = *(int *)(unaff_x24 + 0x30);
        goto LAB_052cef84;
      }
      lVar3 = *(long *)(unaff_x24 + 0x208);
      if (lVar3 == 0) goto LAB_052cefe4;
      if (*(int *)(lVar3 + 0xc4) != 0) goto LAB_052cef80;
      if (*(char *)(lVar3 + 0x100) != '\0') {
        iVar2 = *(int *)(lVar3 + 0xc0);
LAB_052cef84:
        if (iVar2 != 2) {
LAB_052cef8c:
          uVar1 = (**(code **)(*unaff_x20 + 0x478))();
          if ((uVar1 & 1) != 0) {
            return unaff_x24;
          }
        }
      }
    }
  } while( true );
}


