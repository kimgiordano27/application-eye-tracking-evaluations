/*
FUNCTION_NAME: OVRPlugin$$GetNodePresent
ENTRY_POINT: 076c74e4
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076c78f8) */

void OVRPlugin__GetNodePresent(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x23;
  undefined8 uVar17;
  long unaff_x25;
  undefined8 *puVar18;
  
  puVar18 = *(undefined8 **)(unaff_x25 + 0xad0);
  FUN_06efa7d0(param_2,*(undefined4 *)(unaff_x20 + 0x10),*param_1);
  lVar15 = *(long *)(unaff_x19 + 0x40);
  uVar8 = *(undefined4 *)(unaff_x20 + 0x10);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = thunk_FUN_0406deb8(*unaff_x23);
  FUN_05768a48(uVar9,uVar17,*puVar18);
  if (lVar15 != 0) {
    FUN_06efa5dc(lVar15,uVar8,uVar9,*(undefined8 *)PTR_DAT_08fadaa0);
    plVar14 = *(long **)(unaff_x20 + 0x18);
    if (plVar14 != (long *)0x0) {
      lVar15 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08fadac0) {
            puVar18 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_076c7594;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar18 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)PTR_DAT_08fadac0,0);
LAB_076c7594:
      plVar14 = (long *)(*(code *)*puVar18)(plVar14,puVar18[1]);
      puVar6 = PTR_DAT_08fadae8;
      puVar5 = PTR_DAT_08fadac8;
      puVar4 = PTR_DAT_08fadab0;
      puVar3 = PTR_DAT_08fada28;
      puVar2 = PTR_DAT_08f6a1b8;
      puVar1 = PTR_DAT_08f65880;
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar15 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar18 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_076c7630;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar18 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)puVar1,0);
LAB_076c7630:
        uVar12 = (*(code *)*puVar18)(plVar14,puVar18[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar14 == (long *)0x0) {
            return;
          }
          lVar15 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar12 == 0) goto LAB_076c7864;
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_076c784c;
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar15 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
              puVar18 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_076c7694;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar18 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)puVar5,0);
LAB_076c7694:
        uVar8 = (*(code *)*puVar18)(plVar14,puVar18[1]);
        if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        uVar12 = FUN_06f68460(*(long *)(unaff_x19 + 0x30),uVar8,*(undefined8 *)puVar4);
        if ((uVar12 & 1) == 0) {
          lVar16 = *(long *)(unaff_x19 + 0x30);
          plVar10 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08fadae0,2);
          lVar15 = thunk_FUN_0406deb8(*(undefined8 *)puVar6);
          FUN_076c7984();
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          if ((lVar15 != 0) &&
             (lVar11 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar9 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
            FUN_04031750(uVar9,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          plVar10[4] = lVar15;
          lVar15 = thunk_FUN_0406deb8(*(undefined8 *)puVar6);
          FUN_076c7984();
          if ((lVar15 != 0) &&
             (lVar11 = thunk_FUN_0406ddbc(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar9 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
            FUN_04031750(uVar9,0);
          }
          if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          plVar10[5] = lVar15;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          FUN_06f6826c(lVar16,uVar8,plVar10,*(undefined8 *)PTR_DAT_08fadaa8);
          if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar15 = FUN_06f681cc(*(long *)(unaff_x19 + 0x30),uVar8,*(undefined8 *)puVar3);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) {
                    /* WARNING: Subroutine does not return */
            FUN_04031894();
          }
          lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          plVar10 = *(long **)(unaff_x19 + 0x28);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar16 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar18 = (undefined8 *)(lVar16 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                goto LAB_076c77f4;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar18 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)puVar2,9);
LAB_076c77f4:
          bVar7 = (*(code *)*puVar18)(plVar10,uVar8,lVar15 + 0x14,puVar18[1]);
          *(byte *)(lVar15 + 0x10) = bVar7 & 1;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_076c784c:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar18 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_076c7880;
    }
  }
LAB_076c7864:
  puVar18 = (undefined8 *)FUN_0406ae20(plVar14,*(long *)PTR_DAT_08f65868,0);
LAB_076c7880:
  (*(code *)*puVar18)(plVar14,puVar18[1]);
  return;
}


