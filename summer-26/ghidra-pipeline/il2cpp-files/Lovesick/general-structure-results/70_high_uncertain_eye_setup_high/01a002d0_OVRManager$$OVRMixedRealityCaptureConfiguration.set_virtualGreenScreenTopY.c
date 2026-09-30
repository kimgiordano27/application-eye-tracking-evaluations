/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY
ENTRY_POINT: 01a002d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(void)

{
  undefined8 *puVar1;
  int in_w8;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    if (*(char *)(unaff_x19 + 0x48) != '\0') {
      return;
    }
    if (*(char *)(unaff_x19 + 0x58) != '\0') {
      return;
    }
    plVar5 = *(long **)(unaff_x19 + 0x30);
    *(undefined1 *)(unaff_x19 + 0x58) = 1;
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_01a003cc;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_00d59724(plVar5,*unaff_x21,0);
LAB_01a003cc:
      (*(code *)*puVar1)(plVar5,puVar1[1]);
      FUN_01a003f0();
      return;
    }
  }
  else {
    if (in_w8 != 1) {
      return;
    }
    plVar5 = *(long **)(unaff_x19 + 0x30);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_01a00350;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_00d59724(plVar5,*unaff_x21,0);
LAB_01a00350:
      (*(code *)*puVar1)(plVar5,puVar1[1]);
      FUN_01a004a4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


