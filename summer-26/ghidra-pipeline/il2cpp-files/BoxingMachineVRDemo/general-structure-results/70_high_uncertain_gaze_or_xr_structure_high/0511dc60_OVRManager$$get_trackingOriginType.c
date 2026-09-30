/*
FUNCTION_NAME: OVRManager$$get_trackingOriginType
ENTRY_POINT: 0511dc60
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


long OVRManager__get_trackingOriginType(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  long unaff_x21;
  long *plVar17;
  int iStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  int iStack000000000000004c;
  
  FUN_02d6084c(PTR_DAT_06780ba8);
  FUN_02d6084c(PTR_DAT_06780bb0);
  FUN_02d6084c(PTR_DAT_06780ab8);
  FUN_02d6084c(PTR_DAT_06780b68);
  FUN_02d6084c(PTR_DAT_06780ad8);
  FUN_02d6084c(PTR_DAT_06780bb8);
  FUN_02d6084c(PTR_DAT_06780bc0);
  FUN_02d6084c(PTR_DAT_06780bc8);
  FUN_02d6084c(PTR_DAT_06762400);
  *(undefined1 *)(unaff_x20 + 0xbd8) = 1;
  iStack000000000000004c = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (unaff_x21 == 0) goto LAB_0511e254;
  lVar15 = *(long *)(unaff_x21 + 0x118);
  lVar7 = unaff_x21;
  if (lVar15 != 0) {
    uVar5 = FUN_04e8c0e8(lVar15,*(undefined8 *)PTR_DAT_06762400,4,0);
    if ((uVar5 & 1) != 0) {
      lVar15 = FUN_0511e58c(uVar5,lVar15);
    }
    plVar6 = *(long **)(unaff_x19 + 0x18);
    if (plVar6 == (long *)0x0) goto LAB_0511e254;
    lVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,lVar15,*(undefined8 *)(*plVar6 + 0x180));
    puVar1 = PTR_DAT_06760700;
    if (lVar7 == 0) {
      if ((uVar5 & 1) == 0) {
LAB_0511defc:
        thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
        FUN_028f4b80();
        uVar8 = FUN_04f8e414(0);
        FUN_028f4e40();
        uVar16 = *(undefined8 *)(unaff_x21 + 0x118);
        uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06780bd0);
        uVar8 = FUN_050f0ec0(uVar10,uVar8,uVar16,0);
        thunk_FUN_02dc61f4(PTR_DAT_0677d960);
        uVar10 = thunk_FUN_02d9d534();
        FUN_050931fc(uVar10,uVar8,0);
        uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06780bd8);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar10,uVar8);
      }
      lVar15 = *(long *)(unaff_x21 + 0x118);
      lVar7 = FUN_02d60934(*(undefined8 *)PTR_DAT_06760700,1);
      if (lVar7 == 0) goto LAB_0511e254;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_0511e4a0:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      *(undefined2 *)(lVar7 + 0x20) = 0x23;
      if (lVar15 == 0) goto LAB_0511e254;
      lVar7 = FUN_04e920b4(lVar15,lVar7,0);
      lVar15 = FUN_02d60934(*(undefined8 *)puVar1,1);
      if (lVar15 == 0) goto LAB_0511e254;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0511e4a0;
      *(undefined2 *)(lVar15 + 0x20) = 0x2f;
      if ((lVar7 == 0) ||
         (plVar6 = (long *)FUN_04e904a4(lVar7,lVar15,1,0), puVar2 = PTR_DAT_06780b90,
         puVar1 = PTR_DAT_0675e258, plVar6 == (long *)0x0)) goto LAB_0511e254;
      plVar17 = *(long **)(unaff_x19 + 0x30);
      if (0 < (int)plVar6[3]) {
        uVar5 = 0;
        uVar12 = plVar6[3] & 0xffffffff;
        plVar9 = plVar6;
        do {
          if (uVar12 <= uVar5) goto LAB_0511e4a0;
          uVar8 = FUN_0511e58c(plVar9,plVar6[uVar5 + 4]);
          if (plVar17 == (long *)0x0) goto LAB_0511e254;
          iVar3 = (**(code **)(*plVar17 + 0x228))(plVar17,*(undefined8 *)(*plVar17 + 0x230));
          if (iVar3 == 1) {
            lVar7 = *plVar17;
LAB_0511dec0:
            plVar9 = (long *)(**(code **)(lVar7 + 0x248))
                                       (plVar17,uVar8,*(undefined8 *)(lVar7 + 0x250));
            plVar17 = plVar9;
            if (plVar9 == (long *)0x0) goto LAB_0511defc;
          }
          else {
            iVar3 = (**(code **)(*plVar17 + 0x228))(plVar17,*(undefined8 *)(*plVar17 + 0x230));
            if ((iVar3 == 2) ||
               (plVar9 = (long *)(**(code **)(*plVar17 + 0x228))
                                           (plVar17,*(undefined8 *)(*plVar17 + 0x230)),
               (int)plVar9 == 3)) {
              uVar12 = FUN_05004fd0(uVar8,&stack0x0000004c,0);
              iVar3 = iStack000000000000004c;
              if ((-1 < iStack000000000000004c) &&
                 (((uVar12 & 1) != 0 &&
                  (iVar4 = FUN_0339fc40(plVar17,*(undefined8 *)puVar2), iVar3 < iVar4)))) {
                iStack0000000000000000 = iStack000000000000004c;
                uVar8 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x48));
                lVar7 = *plVar17;
                goto LAB_0511dec0;
              }
              goto LAB_0511defc;
            }
          }
          uVar12 = (ulong)*(uint *)(plVar6 + 3);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(plVar6 + 3));
      }
      if ((plVar17 == (long *)0x0) || (lVar7 = FUN_0511d858(), lVar7 == 0)) goto LAB_0511defc;
    }
  }
  if (*(char *)(lVar7 + 0x120) != '\0') {
    return lVar7;
  }
  plVar6 = *(long **)(lVar7 + 0xf8);
  *(undefined1 *)(lVar7 + 0x120) = 1;
  puVar2 = PTR_DAT_06780ad8;
  puVar1 = PTR_DAT_06780ab8;
  if (plVar6 == (long *)0x0) {
LAB_0511e0f4:
    puVar2 = PTR_DAT_06780ad8;
    puVar1 = PTR_DAT_06780ab8;
    plVar6 = *(long **)(lVar7 + 0x98);
    if (plVar6 == (long *)0x0) {
LAB_0511e258:
      plVar6 = (long *)(lVar7 + 0xa8);
      if (*plVar6 != 0) {
        lVar15 = FUN_0511dc04();
        *plVar6 = lVar15;
        thunk_FUN_02dd37b4(plVar6,lVar15);
      }
      if (*(long *)(lVar7 + 200) != 0) {
        lVar15 = FUN_033b7810(*(long *)(lVar7 + 200),*(undefined8 *)PTR_DAT_06780b98);
        if (lVar15 == 0) goto LAB_0511e254;
        FUN_039700f4(lVar15,*(undefined8 *)PTR_DAT_06780bc8);
        puVar2 = PTR_DAT_06780ba8;
        puVar1 = PTR_DAT_06780b68;
        in_stack_00000020 = CONCAT44(uStack0000000000000004,iStack0000000000000000);
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000038 = in_stack_00000018;
        in_stack_00000030 = in_stack_00000010;
        while (uVar5 = FUN_04a3e694(&stack0x00000020,*(undefined8 *)puVar2),
              uVar8 = in_stack_00000030, (uVar5 & 1) != 0) {
          plVar6 = *(long **)(lVar7 + 200);
          uVar10 = FUN_0511dc04();
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar15 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar5 != 0) {
            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_0511e33c;
              }
              uVar5 = uVar5 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar1,1);
LAB_0511e33c:
          (*(code *)*puVar11)(plVar6,uVar8,uVar10,puVar11[1]);
        }
        FUN_04a3e690(&stack0x00000020,*(undefined8 *)PTR_DAT_06780ba0);
      }
      if (*(long *)(lVar7 + 0xb8) != 0) {
        lVar15 = FUN_033b7810(*(long *)(lVar7 + 0xb8),*(undefined8 *)PTR_DAT_06780b98);
        if (lVar15 == 0) goto LAB_0511e254;
        FUN_039700f4(lVar15,*(undefined8 *)PTR_DAT_06780bc8);
        puVar2 = PTR_DAT_06780ba8;
        puVar1 = PTR_DAT_06780b68;
        in_stack_00000020 = CONCAT44(uStack0000000000000004,iStack0000000000000000);
        in_stack_00000028 = in_stack_00000008;
        in_stack_00000038 = in_stack_00000018;
        in_stack_00000030 = in_stack_00000010;
        while (uVar5 = FUN_04a3e694(&stack0x00000020,*(undefined8 *)puVar2),
              uVar8 = in_stack_00000030, (uVar5 & 1) != 0) {
          plVar6 = *(long **)(lVar7 + 0xb8);
          uVar10 = FUN_0511dc04();
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar15 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar5 != 0) {
            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto FUN_0511e428;
              }
              uVar5 = uVar5 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar1,1);
FUN_0511e428:
          (*(code *)*puVar11)(plVar6,uVar8,uVar10,puVar11[1]);
        }
        FUN_04a3e690(&stack0x00000020,*(undefined8 *)PTR_DAT_06780ba0);
      }
      plVar6 = (long *)(lVar7 + 0xc0);
      if (*plVar6 == 0) {
        return lVar7;
      }
      lVar15 = FUN_0511dc04();
      *plVar6 = lVar15;
      thunk_FUN_02dd37b4(plVar6,lVar15);
      return lVar7;
    }
    iVar3 = 0;
    do {
      lVar15 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0511e15c;
          }
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar1,0);
LAB_0511e15c:
      iVar4 = (*(code *)*puVar11)(plVar6,puVar11[1]);
      if (iVar4 <= iVar3) goto LAB_0511e258;
      plVar6 = *(long **)(lVar7 + 0x98);
      if (plVar6 == (long *)0x0) break;
      lVar13 = *plVar6;
      lVar15 = *(long *)puVar2;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar15) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0511e1c4;
          }
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d9a5d4(plVar6,lVar15,0);
LAB_0511e1c4:
      (*(code *)*puVar11)(plVar6,iVar3,puVar11[1]);
      uVar8 = FUN_0511dc04();
      lVar13 = *plVar6;
      lVar15 = *(long *)puVar2;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar15) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0511e234;
          }
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d9a5d4(plVar6,lVar15,1);
LAB_0511e234:
      (*(code *)*puVar11)(plVar6,iVar3,uVar8,puVar11[1]);
      plVar6 = *(long **)(lVar7 + 0x98);
      iVar3 = iVar3 + 1;
    } while (plVar6 != (long *)0x0);
  }
  else {
    iVar3 = 0;
    do {
      lVar15 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0511dff8;
          }
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar1,0);
LAB_0511dff8:
      iVar4 = (*(code *)*puVar11)(plVar6,puVar11[1]);
      if (iVar4 <= iVar3) goto LAB_0511e0f4;
      plVar6 = *(long **)(lVar7 + 0xf8);
      if (plVar6 == (long *)0x0) break;
      lVar13 = *plVar6;
      lVar15 = *(long *)puVar2;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar15) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0511e060;
          }
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d9a5d4(plVar6,lVar15,0);
LAB_0511e060:
      (*(code *)*puVar11)(plVar6,iVar3,puVar11[1]);
      uVar8 = FUN_0511dc04();
      lVar13 = *plVar6;
      lVar15 = *(long *)puVar2;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar15) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0511e0d0;
          }
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined8 *)FUN_02d9a5d4(plVar6,lVar15,1);
LAB_0511e0d0:
      (*(code *)*puVar11)(plVar6,iVar3,uVar8,puVar11[1]);
      plVar6 = *(long **)(lVar7 + 0xf8);
      iVar3 = iVar3 + 1;
    } while (plVar6 != (long *)0x0);
  }
LAB_0511e254:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


