/*
FUNCTION_NAME: FUN_0316d29c
ENTRY_POINT: 0316d29c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0316d29c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_03ff20c1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13348);
    thunk_FUN_01ad9084(StringLiteral_3766);
    DAT_03ff20c1 = 1;
  }
  puVar1 = StringLiteral_3766;
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(char *)(param_1 + 0x50) != '\0')) {
    plVar7 = *(long **)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x60) = 0;
    if (plVar7 == (long *)0x0) goto LAB_0316d5cc;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_10_0___cctor;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,6);
OVRPlugin_OVRP_1_10_0___cctor:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (iVar2 != 1) {
      plVar7 = *(long **)(param_1 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_0316d5cc;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_0316d3b4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,6);
LAB_0316d3b4:
      iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (iVar2 != 0) goto LAB_0316d43c;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      plVar7 = *(long **)(param_1 + 0x38);
      if (plVar7 == (long *)0x0) goto LAB_0316d5cc;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_13348) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0316d428;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)StringLiteral_13348,0);
LAB_0316d428:
      (*(code *)*puVar3)(plVar7,puVar3[1]);
      FUN_0316d5d0(param_1);
    }
  }
LAB_0316d43c:
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_0316d494;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar1,6);
LAB_0316d494:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (iVar2 != 2) {
      return;
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      if (*(char *)(param_1 + 0x50) != '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x60) != '\0') {
        return;
      }
      plVar7 = *(long **)(param_1 + 0x38);
      *(undefined1 *)(param_1 + 0x60) = 1;
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_13348) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto FUN_0316d5b0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)StringLiteral_13348,0);
FUN_0316d5b0:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
        FUN_0316d5d0(param_1);
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x40) != 1) {
        return;
      }
      plVar7 = *(long **)(param_1 + 0x38);
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_13348) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0316d530;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)StringLiteral_13348,0);
LAB_0316d530:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
        FUN_0316d67c(param_1);
        return;
      }
    }
  }
LAB_0316d5cc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


