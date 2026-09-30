/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift
ENTRY_POINT: 01a001a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long *unaff_x22;
  
  piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 6) * 0x10 + 0x138);
      goto FUN_01a001e0;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_00d59724();
FUN_01a001e0:
  iVar1 = (*(code *)*puVar2)();
  if ((iVar1 == 0) && (*(int *)(unaff_x19 + 0x38) == 0)) {
    plVar6 = *(long **)(unaff_x19 + 0x30);
    if (plVar6 == (long *)0x0) goto LAB_01a003ec;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x21,0);
OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
    FUN_01a003f0();
  }
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
LAB_01a003ec:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


