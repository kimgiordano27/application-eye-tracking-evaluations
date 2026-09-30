/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 076c75ac
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x076c78f8) */

void OVRPlugin__GetNodeOrientationValid(long *param_1)

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
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long lVar16;
  long *in_stack_00000018;
  
  puVar6 = PTR_DAT_08fadae8;
  puVar5 = PTR_DAT_08fadac8;
  puVar4 = PTR_DAT_08fadab0;
  puVar3 = PTR_DAT_08fada28;
  puVar2 = PTR_DAT_08f6a1b8;
  puVar1 = PTR_DAT_08f65880;
  do {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar13 = *param_1;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_076c7630;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(param_1,*(long *)puVar1,0);
LAB_076c7630:
    uVar14 = (*(code *)*puVar9)(param_1,puVar9[1]);
    if ((uVar14 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar13 = *in_stack_00000018;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_076c7864;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar13 = *in_stack_00000018;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_076c7694;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*(long *)puVar5,0);
LAB_076c7694:
    uVar8 = (*(code *)*puVar9)(in_stack_00000018,puVar9[1]);
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar14 = FUN_06f68460(*(long *)(unaff_x19 + 0x30),uVar8,*(undefined8 *)puVar4);
    param_1 = in_stack_00000018;
    if ((uVar14 & 1) == 0) {
      lVar16 = *(long *)(unaff_x19 + 0x30);
      plVar10 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08fadae0,2);
      lVar13 = thunk_FUN_0406deb8(*(undefined8 *)puVar6);
      FUN_076c7984();
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if ((lVar13 != 0) &&
         (lVar11 = thunk_FUN_0406ddbc(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
        uVar12 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar12,0);
      }
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      plVar10[4] = lVar13;
      lVar13 = thunk_FUN_0406deb8(*(undefined8 *)puVar6);
      FUN_076c7984();
      if ((lVar13 != 0) &&
         (lVar11 = thunk_FUN_0406ddbc(lVar13,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
        uVar12 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar12,0);
      }
      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      plVar10[5] = lVar13;
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_06f6826c(lVar16,uVar8,plVar10,*(undefined8 *)PTR_DAT_08fadaa8);
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar13 = FUN_06f681cc(*(long *)(unaff_x19 + 0x30),uVar8,*(undefined8 *)puVar3);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar13 = *(long *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar10 = *(long **)(unaff_x19 + 0x28);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar16 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar15 + 9) * 0x10 + 0x138);
            goto LAB_076c77f4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)puVar2,9);
LAB_076c77f4:
      bVar7 = (*(code *)*puVar9)(plVar10,uVar8,lVar13 + 0x14,puVar9[1]);
      *(byte *)(lVar13 + 0x10) = bVar7 & 1;
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_076c7880;
    }
  }
LAB_076c7864:
  puVar9 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*(long *)PTR_DAT_08f65868,0);
LAB_076c7880:
  (*(code *)*puVar9)(in_stack_00000018,puVar9[1]);
  return;
}


