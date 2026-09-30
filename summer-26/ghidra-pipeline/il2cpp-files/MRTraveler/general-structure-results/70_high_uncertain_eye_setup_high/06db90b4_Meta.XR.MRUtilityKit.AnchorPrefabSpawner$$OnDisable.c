/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$OnDisable
ENTRY_POINT: 06db90b4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06db9624) */

ulong Meta_XR_MRUtilityKit_AnchorPrefabSpawner__OnDisable(long param_1)

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
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int *piVar16;
  long unaff_x19;
  long lVar17;
  undefined8 uVar18;
  long unaff_x22;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000030;
  
  do {
    *(long *)(param_1 + 0x20) = unaff_x22;
    thunk_FUN_03d233cc((long *)(param_1 + 0x20),unaff_x22);
LAB_06db8ec8:
    uVar9 = FUN_049dc4d0(&stack0x00000020,*unaff_x28);
    lVar12 = in_stack_00000030;
    if ((uVar9 & 1) == 0) {
      FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e90370);
      puVar8 = PTR_DAT_08e90560;
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        uVar14 = FUN_06a4e1b0(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_08e90288);
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
          uVar18 = **(undefined8 **)(lVar12 + 0xb8);
          lVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90518);
          FUN_04d5ef3c(lVar10,uVar18,*(undefined8 *)PTR_DAT_08e90550,0);
          plVar13 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
          *plVar13 = lVar10;
          thunk_FUN_03d233cc(plVar13,lVar10);
        }
        plVar13 = (long *)FUN_04639e6c(uVar14,lVar10,*(undefined8 *)PTR_DAT_08e90510);
        if (plVar13 != (long *)0x0) {
          lVar12 = *plVar13;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar9 == 0) goto LAB_06db92d4;
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          break;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar10 = FUN_06db841c();
    if (lVar10 == 0) {
      FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e90370);
      in_stack_00000000._4_4_ = 0;
      goto LAB_06db94f8;
    }
    plVar13 = *(long **)(lVar10 + 0x10);
    uVar14 = *(undefined8 *)(lVar10 + 0x18);
    uVar9 = FUN_0702dcc0(plVar13,0,0);
    if ((uVar9 & 1) != 0) {
      plVar13 = (long *)thunk_FUN_03d12a58();
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar14 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar18 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904e0,*(undefined8 *)(lVar12 + 0x10),0);
      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06dfdedc(uVar14,uVar18,0,0);
LAB_06db8ec4:
      in_stack_00000000._4_4_ = 0;
      goto LAB_06db8ec8;
    }
    uVar18 = *unaff_x29;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar18 = FUN_0710fcf0(uVar18,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar18,uVar18);
    }
    lVar10 = (**(code **)(*plVar13 + 0x218))(plVar13,uVar18,0,*(undefined8 *)(*plVar13 + 0x220));
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
      uVar14 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      uVar18 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e90568,plVar13,0);
      if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06dfdedc(uVar14,uVar18,0,0);
      goto LAB_06db8ec4;
    }
    plVar11 = (long *)FUN_0461aa48(lVar10,*(undefined8 *)PTR_DAT_08e90508);
    if (plVar11 == (long *)0x0) {
LAB_06db8f8c:
      plVar11 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e904f8 + 0x130);
      if (*(byte *)(*plVar11 + 0x130) < bVar1) goto LAB_06db8f8c;
      if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08e904f8)
      {
        plVar11 = (long *)0x0;
      }
    }
    unaff_x22 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90530);
    FUN_06db7dd4();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x22 + 0x10),uVar14);
    *(long *)(unaff_x22 + 0x18) = (long)plVar13;
    thunk_FUN_03d233cc((long *)(unaff_x22 + 0x18),plVar13);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    *(long *)(unaff_x22 + 0x20) = plVar11[3];
    *(char *)(unaff_x22 + 0x28) = (char)plVar11[5];
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
    lVar12 = FUN_06a4e300(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar12 + 0x20),*unaff_x26);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    param_1 = *(long *)(lVar12 + 0x10);
    lVar10 = *unaff_x25;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = *(uint *)(lVar12 + 0x18);
    if (*(uint *)(param_1 + 0x18) <= uVar2) {
      FUN_05212cf4(lVar12,unaff_x22,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      goto LAB_06db8ec8;
    }
    param_1 = param_1 + (long)(int)uVar2 * 8;
    *(uint *)(lVar12 + 0x18) = uVar2 + 1;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar16 = piVar16 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e90520) {
      puVar15 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_06db930c;
    }
  }
LAB_06db92d4:
  puVar15 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e90520,0);
LAB_06db930c:
  plVar13 = (long *)(*(code *)*puVar15)(plVar13,puVar15[1]);
  puVar7 = PTR_DAT_08e90558;
  puVar6 = PTR_DAT_08e90538;
  puVar5 = PTR_DAT_08e90528;
  puVar4 = PTR_DAT_08e904e8;
  puVar3 = PTR_DAT_08e6a290;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar12 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
          puVar15 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06db9394;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
    puVar15 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar3,0);
LAB_06db9394:
    uVar9 = (*(code *)*puVar15)(plVar13,puVar15[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar13 == (long *)0x0) goto LAB_06db94f8;
      lVar12 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 == 0) goto LAB_06db94c8;
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
          puVar15 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_06db93f0;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
    puVar15 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar5,0);
LAB_06db93f0:
    lVar12 = (*(code *)*puVar15)(plVar13,puVar15[1]);
    lVar10 = *(long *)puVar8;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar10);
      lVar10 = *(long *)puVar8;
    }
    lVar17 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
    if (lVar17 == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar10);
        lVar10 = *(long *)puVar8;
      }
      uVar14 = **(undefined8 **)(lVar10 + 0xb8);
      lVar17 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
      FUN_06732cbc(lVar17,uVar14,*(undefined8 *)puVar7,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
      *plVar11 = lVar17;
      thunk_FUN_03d233cc(plVar11,lVar17);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_052146dc(lVar12,lVar17,*(undefined8 *)puVar6);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar16 = piVar16 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar15 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_06db94e4;
    }
  }
LAB_06db94c8:
  puVar15 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e6a288,0);
LAB_06db94e4:
  (*(code *)*puVar15)(plVar13,puVar15[1]);
LAB_06db94f8:
  return (ulong)(in_stack_00000000._4_4_ & 1);
}


