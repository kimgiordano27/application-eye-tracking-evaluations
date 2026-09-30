/*
FUNCTION_NAME: OVRPlugin$$StopBodyTracking
ENTRY_POINT: 076d2ce4
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StopBodyTracking(long param_1)

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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  if ((DAT_09548239 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f6a1b8);
    FUN_0403162c(PTR_DAT_08fadf18);
    FUN_0403162c(PTR_DAT_08fadf20);
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09548239 = 1;
  }
  puVar2 = PTR_DAT_08fadf18;
  local_60 = 0;
  uStack_58 = 0;
  local_48 = 0;
  local_50 = 0;
  if (*(char *)(param_1 + 0x80) == '\0') {
    plVar11 = *(long **)(param_1 + 0x68);
    if (plVar11 == (long *)0x0) goto LAB_076d2fd0;
    lVar6 = *plVar11;
    lVar9 = *(long *)(param_1 + 0x28);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08fadf18) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_076d2db4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08fadf18,0);
FUN_076d2db4:
    uVar3 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (lVar9 == 0) goto LAB_076d2fd0;
    FUN_0854952c(lVar9,uVar3,0);
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  puVar1 = PTR_DAT_08f67c68;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_076d2fd0;
  fVar13 = (float)FUN_0854875c(*(long *)(param_1 + 0x28),0);
  if (**(float **)(*(long *)puVar1 + 0xb8) < ABS(fVar13 - *(float *)(param_1 + 0x50))) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_076d2fd0;
    FUN_08548810(*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_076d2fd0;
    FUN_08548998(*(undefined4 *)(param_1 + 0x50),*(long *)(param_1 + 0x28),0);
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
          goto LAB_076d2e8c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)puVar2,0);
LAB_076d2e8c:
    iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    puVar1 = PTR_DAT_08fadf20;
    puVar2 = PTR_DAT_08f6a1b8;
    if (0 < iVar4) {
      iVar10 = 0;
      do {
        plVar11 = *(long **)(param_1 + 0x68);
        if (plVar11 == (long *)0x0) goto LAB_076d2fd0;
        lVar6 = *plVar11;
        plVar12 = *(long **)(param_1 + 0x58);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076d2f10;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)puVar1,0);
LAB_076d2f10:
        uVar3 = (*(code *)*puVar5)(plVar11,iVar10,puVar5[1]);
        if (plVar12 == (long *)0x0) goto LAB_076d2fd0;
        lVar6 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_076d2f78;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0406ae20(plVar12,*(long *)puVar2,9);
LAB_076d2f78:
        uVar7 = (*(code *)*puVar5)(plVar12,uVar3,&local_60,puVar5[1]);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_076d2fd0;
          FUN_085495f0((undefined4)local_60,local_60._4_4_,(undefined4)uStack_58,
                       *(long *)(param_1 + 0x28),iVar10,0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar4);
    }
    return;
  }
LAB_076d2fd0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


