/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 03155168
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreatePassthroughColorLut(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  
  if ((DAT_03ff2004 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13316);
    thunk_FUN_01ad9084(PTR_DAT_03d80380);
    thunk_FUN_01ad9084(PTR_DAT_03d80388);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03ff2004 = 1;
  }
  puVar2 = PTR_DAT_03d80380;
  if (*(char *)(param_1 + 0x80) == '\0') {
    plVar11 = *(long **)(param_1 + 0x68);
    if (plVar11 == (long *)0x0) goto LAB_03155448;
    lVar6 = *plVar11;
    lVar9 = *(long *)(param_1 + 0x28);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d80380) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0315522c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)PTR_DAT_03d80380,0);
LAB_0315522c:
    uVar3 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (lVar9 == 0) goto LAB_03155448;
    FUN_038fcf60(lVar9,uVar3,0);
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  puVar1 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_03155448;
  fVar13 = (float)FUN_038fcad8(*(long *)(param_1 + 0x28),0);
  if (**(float **)(*(long *)puVar1 + 0xb8) < ABS(fVar13 - *(float *)(param_1 + 0x50))) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_03155448;
    FUN_038fcb14(*(float *)(param_1 + 0x50),*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_03155448;
    FUN_038fcb60(*(undefined4 *)(param_1 + 0x50),*(long *)(param_1 + 0x28),0);
  }
  plVar11 = *(long **)(param_1 + 0x68);
  if (plVar11 != (long *)0x0) {
    lVar6 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03155304;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar2,0);
LAB_03155304:
    iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    puVar1 = PTR_DAT_03d80388;
    puVar2 = StringLiteral_13316;
    if (0 < iVar4) {
      iVar10 = 0;
      do {
        plVar11 = *(long **)(param_1 + 0x68);
        if (plVar11 == (long *)0x0) goto LAB_03155448;
        lVar6 = *plVar11;
        plVar12 = *(long **)(param_1 + 0x58);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03155388;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar1,0);
LAB_03155388:
        uVar3 = (*(code *)*puVar5)(plVar11,iVar10,puVar5[1]);
        if (plVar12 == (long *)0x0) goto LAB_03155448;
        lVar6 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_031553f0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar2,9);
LAB_031553f0:
        uVar7 = (*(code *)*puVar5)(plVar12,uVar3);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_03155448;
          FUN_038fcfa4(0,0,0,*(long *)(param_1 + 0x28),iVar10,0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar4);
    }
    return;
  }
LAB_03155448:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


