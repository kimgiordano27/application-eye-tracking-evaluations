/*
FUNCTION_NAME: OVRPlugin$$DestroyVirtualKeyboard
ENTRY_POINT: 076d1080
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d13a4) */

uint OVRPlugin__DestroyVirtualKeyboard(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((DAT_09548223 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fade88);
    FUN_0403162c(PTR_DAT_08fadea0);
    FUN_0403162c(PTR_DAT_08fadea8);
    FUN_0403162c(PTR_DAT_08f65868);
    FUN_0403162c(PTR_DAT_08fade90);
    FUN_0403162c(PTR_DAT_08fade98);
    FUN_0403162c(PTR_DAT_08f65880);
    FUN_0403162c(PTR_DAT_08fad0f8);
    DAT_09548223 = 1;
  }
  uVar7 = FUN_085842f8(param_1,0);
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (plVar12 = *(long **)(*(long *)(param_1 + 0x40) + 0x10), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar9 = *plVar12;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fade90) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d1178;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar12,*(long *)PTR_DAT_08fade90,0);
LAB_076d1178:
    plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    puVar5 = PTR_DAT_08fade98;
    puVar4 = PTR_DAT_08fad0f8;
    puVar3 = PTR_DAT_08f65880;
    do {
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d11fc;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar12,*(long *)puVar3,0);
LAB_076d11fc:
      uVar6 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if ((uVar6 & 1) == 0) break;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d1264;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar12,*(long *)puVar5,0);
LAB_076d1264:
      lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar13 = *(long **)(param_1 + 0x38);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar10 = *plVar13;
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      uVar15 = *(undefined8 *)(lVar9 + 0x18);
      uVar1 = *(undefined4 *)(lVar9 + 0x10);
      uVar2 = *(undefined4 *)(lVar9 + 0x14);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d12d4;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)puVar4,0);
LAB_076d12d4:
      uVar7 = (*(code *)*puVar8)(plVar13,uVar14,uVar2,uVar1,uVar15,puVar8[1]);
    } while ((uVar7 & 1) != 0);
    uVar6 = uVar6 ^ 1;
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f65868) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d135c;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar12,*(long *)PTR_DAT_08f65868,0);
LAB_076d135c:
      (*(code *)*puVar8)(plVar12,puVar8[1]);
    }
  }
  return uVar6 & 1;
}


