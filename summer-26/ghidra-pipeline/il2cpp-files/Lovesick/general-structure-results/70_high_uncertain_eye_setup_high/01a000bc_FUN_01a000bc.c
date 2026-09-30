/*
FUNCTION_NAME: FUN_01a000bc
ENTRY_POINT: 01a000bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_01a000bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_0377a8b7 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3c20);
    DAT_0377a8b7 = 1;
  }
  puVar2 = Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__;
  puVar1 = PTR_DAT_033f3c20;
  if ((*(char *)(param_1 + 0x58) != '\0') && (*(char *)(param_1 + 0x48) != '\0')) {
    plVar8 = *(long **)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x58) = 0;
    if (plVar8 == (long *)0x0) goto LAB_01a003ec;
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto FUN_01a00174;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar1,6);
FUN_01a00174:
    iVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    if (iVar3 != 1) {
      plVar8 = *(long **)(param_1 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_01a003ec;
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
            goto FUN_01a001e0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar1,6);
FUN_01a001e0:
      iVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (iVar3 != 0) goto LAB_01a00260;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      plVar8 = *(long **)(param_1 + 0x30);
      if (plVar8 == (long *)0x0) goto LAB_01a003ec;
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,0);
OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity:
      (*(code *)*puVar4)(plVar8,puVar4[1]);
      FUN_01a003f0(param_1);
    }
  }
LAB_01a00260:
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar1,6);
OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType:
    iVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    if (iVar3 != 2) {
      return;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      if (*(char *)(param_1 + 0x48) != '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x58) != '\0') {
        return;
      }
      plVar8 = *(long **)(param_1 + 0x30);
      *(undefined1 *)(param_1 + 0x58) = 1;
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_01a003cc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,0);
LAB_01a003cc:
        (*(code *)*puVar4)(plVar8,puVar4[1]);
        FUN_01a003f0(param_1);
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x38) != 1) {
        return;
      }
      plVar8 = *(long **)(param_1 + 0x30);
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_01a00350;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,0);
LAB_01a00350:
        (*(code *)*puVar4)(plVar8,puVar4[1]);
        FUN_01a004a4(param_1);
        return;
      }
    }
  }
LAB_01a003ec:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


