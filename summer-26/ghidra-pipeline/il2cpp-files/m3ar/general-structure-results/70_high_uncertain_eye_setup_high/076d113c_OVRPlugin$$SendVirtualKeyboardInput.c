/*
FUNCTION_NAME: OVRPlugin$$SendVirtualKeyboardInput
ENTRY_POINT: 076d113c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d13a4) */

uint OVRPlugin__SendVirtualKeyboardInput(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar7 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_076d1178;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar7 = (undefined8 *)FUN_0406ae20();
LAB_076d1178:
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar5 = PTR_DAT_08fade98;
  puVar4 = PTR_DAT_08fad0f8;
  puVar3 = PTR_DAT_08f65880;
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076d11fc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar3,0);
LAB_076d11fc:
    uVar6 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar6 & 1) == 0) break;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076d1264;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar5,0);
LAB_076d1264:
    lVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar13 = *(long **)(unaff_x19 + 0x38);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar10 = *plVar13;
    uVar14 = *(undefined8 *)(unaff_x19 + 0x48);
    uVar15 = *(undefined8 *)(lVar9 + 0x18);
    uVar1 = *(undefined4 *)(lVar9 + 0x10);
    uVar2 = *(undefined4 *)(lVar9 + 0x14);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076d12d4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)puVar4,0);
LAB_076d12d4:
    uVar11 = (*(code *)*puVar7)(plVar13,uVar14,uVar2,uVar1,uVar15,puVar7[1]);
  } while ((uVar11 & 1) != 0);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08f65868) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_076d135c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f65868,0);
LAB_076d135c:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  return (uVar6 ^ 1) & 1;
}


