/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationTracked
ENTRY_POINT: 076c7548
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076c78f8) */

void OVRPlugin__GetNodeOrientationTracked(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long in_x10;
  int *piVar16;
  long unaff_x19;
  long lVar17;
  
  uVar15 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == **(long **)(in_x10 + 0xac0)) {
        puVar9 = (undefined8 *)(param_1 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_076c7594;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar9 = (undefined8 *)FUN_0406ae20();
LAB_076c7594:
  plVar10 = (long *)(*(code *)*puVar9)();
  puVar6 = PTR_DAT_08fadae8;
  puVar5 = PTR_DAT_08fadac8;
  puVar4 = PTR_DAT_08fadab0;
  puVar3 = PTR_DAT_08fada28;
  puVar2 = PTR_DAT_08f6a1b8;
  puVar1 = PTR_DAT_08f65880;
  do {
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar14 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076c7630;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)puVar1,0);
LAB_076c7630:
    uVar15 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 == 0) goto LAB_076c7864;
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar14 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076c7694;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)puVar5,0);
LAB_076c7694:
    uVar8 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar15 = FUN_06f68460(*(long *)(unaff_x19 + 0x30),uVar8,*(undefined8 *)puVar4);
    if ((uVar15 & 1) == 0) {
      lVar17 = *(long *)(unaff_x19 + 0x30);
      plVar11 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08fadae0,2);
      lVar14 = thunk_FUN_0406deb8(*(undefined8 *)puVar6);
      FUN_076c7984();
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if ((lVar14 != 0) &&
         (lVar12 = thunk_FUN_0406ddbc(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
        uVar13 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar13,0);
      }
      if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      plVar11[4] = lVar14;
      lVar14 = thunk_FUN_0406deb8(*(undefined8 *)puVar6);
      FUN_076c7984();
      if ((lVar14 != 0) &&
         (lVar12 = thunk_FUN_0406ddbc(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
        uVar13 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar13,0);
      }
      if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      plVar11[5] = lVar14;
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_06f6826c(lVar17,uVar8,plVar11,*(undefined8 *)PTR_DAT_08fadaa8);
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar14 = FUN_06f681cc(*(long *)(unaff_x19 + 0x30),uVar8,*(undefined8 *)puVar3);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar14 = *(long *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar11 = *(long **)(unaff_x19 + 0x28);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar17 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar16 + 9) * 0x10 + 0x138);
            goto LAB_076c77f4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)puVar2,9);
LAB_076c77f4:
      bVar7 = (*(code *)*puVar9)(plVar11,uVar8,lVar14 + 0x14,puVar9[1]);
      *(byte *)(lVar14 + 0x10) = bVar7 & 1;
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_076c7880;
    }
  }
LAB_076c7864:
  puVar9 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08f65868,0);
LAB_076c7880:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
  return;
}


