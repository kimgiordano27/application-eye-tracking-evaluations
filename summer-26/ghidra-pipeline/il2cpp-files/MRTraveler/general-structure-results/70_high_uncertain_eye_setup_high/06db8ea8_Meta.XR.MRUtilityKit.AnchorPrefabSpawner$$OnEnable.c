/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$OnEnable
ENTRY_POINT: 06db8ea8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06db9624) */

ulong Meta_XR_MRUtilityKit_AnchorPrefabSpawner__OnEnable(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  int *piVar18;
  long unaff_x19;
  undefined8 uVar19;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  uint uStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  FUN_05213710(&stack0x00000008);
  in_stack_00000030 = in_stack_00000018;
  uStack0000000000000004 = 1;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  while (uVar9 = FUN_049dc4d0(&stack0x00000020,*unaff_x28), lVar12 = in_stack_00000030,
        (uVar9 & 1) != 0) {
    lVar10 = FUN_06db841c();
    if (lVar10 == 0) {
      FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e90370);
      uStack0000000000000004 = 0;
      goto LAB_06db94f8;
    }
    plVar16 = *(long **)(lVar10 + 0x10);
    uVar13 = *(undefined8 *)(lVar10 + 0x18);
    uVar9 = FUN_0702dcc0(plVar16,0,0);
    if ((uVar9 & 1) == 0) {
      uVar19 = *unaff_x29;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar19 = FUN_0710fcf0(uVar19,0);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar19,uVar19);
      }
      lVar10 = (**(code **)(*plVar16 + 0x218))(plVar16,uVar19,0,*(undefined8 *)(*plVar16 + 0x220));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(long *)(lVar10 + 0x18) == 0) {
        plVar11 = (long *)thunk_FUN_03d12a58();
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar13 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
        uVar19 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e90568,plVar16,0);
        if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_06dfdedc(uVar13,uVar19,0,0);
        uStack0000000000000004 = 0;
      }
      else {
        plVar11 = (long *)FUN_0461aa48(lVar10,*(undefined8 *)PTR_DAT_08e90508);
        if (plVar11 == (long *)0x0) {
LAB_06db8f8c:
          plVar11 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_08e904f8 + 0x130);
          if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06db8f8c;
          if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_08e904f8) {
            plVar11 = (long *)0x0;
          }
        }
        lVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90530);
        FUN_06db7dd4();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        *(undefined8 *)(lVar10 + 0x10) = uVar13;
        thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x10),uVar13);
        *(long *)(lVar10 + 0x18) = (long)plVar16;
        thunk_FUN_03d233cc((long *)(lVar10 + 0x18),plVar16);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        *(long *)(lVar10 + 0x20) = plVar11[3];
        *(char *)(lVar10 + 0x28) = (char)plVar11[5];
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar9 = FUN_06a4e574(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar12 + 0x20),
                             *(undefined8 *)PTR_DAT_08e901e8);
        if ((uVar9 & 1) == 0) {
          uVar9 = FUN_088d6fe0(&PTR_DAT_08e90000);
          return uVar9;
        }
        if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar12 = FUN_06a4e300(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar12 + 0x20),*unaff_x26)
        ;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar15 = *(long *)(lVar12 + 0x10);
        lVar17 = *unaff_x25;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          plVar16 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
          *plVar16 = lVar10;
          thunk_FUN_03d233cc(plVar16,lVar10);
        }
        else {
          FUN_05212cf4(lVar12,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    else {
      plVar16 = (long *)thunk_FUN_03d12a58();
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar13 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar19 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904e0,*(undefined8 *)(lVar12 + 0x10),0);
      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06dfdedc(uVar13,uVar19,0,0);
      uStack0000000000000004 = 0;
    }
  }
  FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e90370);
  puVar8 = PTR_DAT_08e90560;
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    uVar13 = FUN_06a4e1b0(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_08e90288);
    lVar12 = *(long *)puVar8;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar12);
      lVar12 = *(long *)puVar8;
    }
    lVar10 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar10 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar12);
        lVar12 = *(long *)puVar8;
      }
      uVar19 = **(undefined8 **)(lVar12 + 0xb8);
      lVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90518);
      FUN_04d5ef3c(lVar10,uVar19,*(undefined8 *)PTR_DAT_08e90550,0);
      plVar16 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
      *plVar16 = lVar10;
      thunk_FUN_03d233cc(plVar16,lVar10);
    }
    plVar16 = (long *)FUN_04639e6c(uVar13,lVar10,*(undefined8 *)PTR_DAT_08e90510);
    if (plVar16 != (long *)0x0) {
      lVar12 = *plVar16;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08e90520) {
            puVar14 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_06db930c;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar9 != 0);
      }
      puVar14 = (undefined8 *)FUN_03cf1348(plVar16,*(long *)PTR_DAT_08e90520,0);
LAB_06db930c:
      plVar16 = (long *)(*(code *)*puVar14)(plVar16,puVar14[1]);
      puVar7 = PTR_DAT_08e90558;
      puVar6 = PTR_DAT_08e90538;
      puVar5 = PTR_DAT_08e90528;
      puVar4 = PTR_DAT_08e904e8;
      puVar3 = PTR_DAT_08e6a290;
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      do {
        lVar12 = *plVar16;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar14 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06db9394;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar14 = (undefined8 *)FUN_03cf1348(plVar16,*(long *)puVar3,0);
LAB_06db9394:
        uVar9 = (*(code *)*puVar14)(plVar16,puVar14[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar16 == (long *)0x0) goto LAB_06db94f8;
          lVar12 = *plVar16;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar9 == 0) goto LAB_06db94c8;
          piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_06db94b0;
        }
        lVar12 = *plVar16;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
              puVar14 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_06db93f0;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar9 != 0);
        }
        puVar14 = (undefined8 *)FUN_03cf1348(plVar16,*(long *)puVar5,0);
LAB_06db93f0:
        lVar12 = (*(code *)*puVar14)(plVar16,puVar14[1]);
        lVar10 = *(long *)puVar8;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar10);
          lVar10 = *(long *)puVar8;
        }
        lVar15 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
        if (lVar15 == 0) {
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar10);
            lVar10 = *(long *)puVar8;
          }
          uVar13 = **(undefined8 **)(lVar10 + 0xb8);
          lVar15 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
          FUN_06732cbc(lVar15,uVar13,*(undefined8 *)puVar7,0);
          plVar11 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
          *plVar11 = lVar15;
          thunk_FUN_03d233cc(plVar11,lVar15);
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_052146dc(lVar12,lVar15,*(undefined8 *)puVar6);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar18 = piVar18 + 4;
    if (uVar9 == 0) break;
LAB_06db94b0:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar14 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_06db94e4;
    }
  }
LAB_06db94c8:
  puVar14 = (undefined8 *)FUN_03cf1348(plVar16,*(long *)PTR_DAT_08e6a288,0);
LAB_06db94e4:
  (*(code *)*puVar14)(plVar16,puVar14[1]);
LAB_06db94f8:
  return (ulong)(uStack0000000000000004 & 1);
}


