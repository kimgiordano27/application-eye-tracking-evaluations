/*
FUNCTION_NAME: OVRManager$$get_gpuUtilSupported
ENTRY_POINT: 07a22d98
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_gpuUtilSupported(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092ed130);
    FUN_04077588(PTR_DAT_092ba190);
    *(undefined1 *)(unaff_x20 + 0x196) = 1;
  }
  puVar1 = PTR_DAT_092ba190;
  if ((*(char *)(unaff_x19 + 0x60) != '\0') && (*(char *)(unaff_x19 + 0x50) != '\0')) {
    plVar7 = *(long **)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x19 + 0x60) = 0;
    if (plVar7 == (long *)0x0) goto LAB_07a23068;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_07a22e30;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar1,6);
LAB_07a22e30:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (iVar2 != 1) {
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_07a23068;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_07a22e9c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar1,6);
LAB_07a22e9c:
      iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (iVar2 != 0) goto LAB_07a22f24;
    }
    if (*(int *)(unaff_x19 + 0x40) == 0) {
      plVar7 = *(long **)(unaff_x19 + 0x38);
      if (plVar7 == (long *)0x0) goto LAB_07a23068;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092ed130) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07a22f10;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092ed130,0);
LAB_07a22f10:
      (*(code *)*puVar3)(plVar7,puVar3[1]);
      FUN_07a2306c();
    }
  }
LAB_07a22f24:
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_07a22f7c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar1,6);
LAB_07a22f7c:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (iVar2 != 2) {
      return;
    }
    if (*(int *)(unaff_x19 + 0x40) == 0) {
      if (*(char *)(unaff_x19 + 0x50) != '\0') {
        return;
      }
      if (*(char *)(unaff_x19 + 0x60) != '\0') {
        return;
      }
      *(undefined1 *)(unaff_x19 + 0x60) = 1;
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_03b08e64(0,*(undefined8 *)PTR_DAT_092ed130);
        FUN_07a2306c();
        return;
      }
    }
    else {
      if (*(int *)(unaff_x19 + 0x40) != 1) {
        return;
      }
      plVar7 = *(long **)(unaff_x19 + 0x38);
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092ed130) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_07a23018;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092ed130,0);
LAB_07a23018:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
        FUN_07a23108();
        return;
      }
    }
  }
LAB_07a23068:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


