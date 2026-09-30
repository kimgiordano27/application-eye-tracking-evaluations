/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_chromaKeyColor
ENTRY_POINT: 01a00238
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long *unaff_x22;
  
  puVar2 = (undefined8 *)FUN_00d59724();
  (*(code *)*puVar2)();
  FUN_01a003f0();
  plVar6 = *(long **)(unaff_x19 + 0x20);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x22,6);
OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType:
    iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (iVar1 != 2) {
      return;
    }
    if (*(int *)(unaff_x19 + 0x38) == 0) {
      if (*(char *)(unaff_x19 + 0x48) != '\0') {
        return;
      }
      if (*(char *)(unaff_x19 + 0x58) != '\0') {
        return;
      }
      plVar6 = *(long **)(unaff_x19 + 0x30);
      *(undefined1 *)(unaff_x19 + 0x58) = 1;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x21) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_01a003cc;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x21,0);
LAB_01a003cc:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
        FUN_01a003f0();
        return;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x38) != 1) {
        return;
      }
      plVar6 = *(long **)(unaff_x19 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x21) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_01a00350;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x21,0);
LAB_01a00350:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
        FUN_01a004a4();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


