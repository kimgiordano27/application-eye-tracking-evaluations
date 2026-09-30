/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ClearPrefab
ENTRY_POINT: 06db9b24
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dba104) */

uint Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ClearPrefab(undefined8 *param_1)

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
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar18;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000030;
  
code_r0x06db9b24:
  FUN_06a4e380(unaff_x22,unaff_x23,unaff_x24,*param_1);
LAB_06db9b38:
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar12 = FUN_06a4e300(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),
                        *(undefined8 *)PTR_DAT_08e90210);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar14 = *(long *)(lVar12 + 0x10);
  lVar16 = *(long *)PTR_DAT_08e902b0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar2 = *(uint *)(lVar12 + 0x18);
  if (uVar2 < *(uint *)(lVar14 + 0x18)) {
    *(uint *)(lVar12 + 0x18) = uVar2 + 1;
    plVar15 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
    *plVar15 = unaff_x21;
    thunk_FUN_03d233cc(plVar15,unaff_x21);
  }
  else {
    FUN_05212cf4(lVar12,unaff_x21,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                );
  }
  do {
    while( true ) {
      uVar9 = FUN_049dc4d0(&stack0x00000020,*unaff_x29);
      unaff_x20 = in_stack_00000030;
      if ((uVar9 & 1) == 0) {
        FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e90570);
        puVar7 = PTR_DAT_08e90560;
        if (*(long *)(unaff_x19 + 0x40) != 0) {
          uVar11 = FUN_06a4e1b0(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_08e90288);
          lVar12 = *(long *)puVar7;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar12);
            lVar12 = *(long *)puVar7;
          }
          lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
          if (lVar14 == 0) {
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar12);
              lVar12 = *(long *)puVar7;
            }
            uVar18 = **(undefined8 **)(lVar12 + 0xb8);
            lVar14 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90518);
            FUN_04d5ef3c(lVar14,uVar18,*(undefined8 *)PTR_DAT_08e90598,0);
            plVar15 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
            *plVar15 = lVar14;
            thunk_FUN_03d233cc(plVar15,lVar14);
          }
          plVar15 = (long *)FUN_04639e6c(uVar11,lVar14,*(undefined8 *)PTR_DAT_08e90510);
          if (plVar15 != (long *)0x0) {
            lVar12 = *plVar15;
            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar9 == 0) goto LAB_06db9db0;
            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_06db9d98;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar12 = FUN_06db841c();
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar15 = *(long **)(lVar12 + 0x10);
      uVar11 = *(undefined8 *)(lVar12 + 0x18);
      uVar9 = FUN_0702dcc0(plVar15,0,0);
      if ((uVar9 & 1) == 0) break;
      plVar15 = (long *)thunk_FUN_03d12a58();
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar11 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar18 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904e0,*(undefined8 *)(unaff_x20 + 0x10),0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06dfdedc(uVar11,uVar18,0,0);
LAB_06db9924:
      in_stack_00000000._4_4_ = 0;
    }
    uVar18 = *(undefined8 *)PTR_DAT_08e902a8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar18 = FUN_0710fcf0(uVar18,0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar18,uVar18);
    }
    lVar12 = (**(code **)(*plVar15 + 0x218))(plVar15,uVar18,0,*(undefined8 *)(*plVar15 + 0x220));
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar12 + 0x18) == 0) {
      plVar10 = (long *)thunk_FUN_03d12a58();
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      uVar18 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e90568,plVar15,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06dfdedc(uVar11,uVar18,0,0);
      goto LAB_06db9924;
    }
    plVar10 = (long *)FUN_0461aa48(lVar12,*unaff_x28);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x27))
      goto LAB_06db9a48;
    }
    plVar15 = (long *)thunk_FUN_03d12a58();
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar11 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_06dfdedc(uVar11,*(undefined8 *)PTR_DAT_08e905a8,0,0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar17 = piVar17 + 4;
    if (uVar9 == 0) break;
LAB_06db9d98:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e90520) {
      puVar13 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_06db9dd4;
    }
  }
LAB_06db9db0:
  puVar13 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e90520,0);
LAB_06db9dd4:
  plVar15 = (long *)(*(code *)*puVar13)(plVar15,puVar13[1]);
  puVar8 = PTR_DAT_08e905a0;
  puVar6 = PTR_DAT_08e90538;
  puVar5 = PTR_DAT_08e90528;
  puVar4 = PTR_DAT_08e904e8;
  puVar3 = PTR_DAT_08e6a290;
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar12 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar13 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06db9e5c;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)puVar3,0);
LAB_06db9e5c:
    uVar9 = (*(code *)*puVar13)(plVar15,puVar13[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar15 == (long *)0x0) goto LAB_06db9fb8;
      lVar12 = *plVar15;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 == 0) goto LAB_06db9f90;
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      goto LAB_06db9f78;
    }
    lVar12 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar13 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06db9eb8;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)puVar5,0);
LAB_06db9eb8:
    lVar12 = (*(code *)*puVar13)(plVar15,puVar13[1]);
    lVar14 = *(long *)puVar7;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar14);
      lVar14 = *(long *)puVar7;
    }
    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x20);
    if (lVar16 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar14);
        lVar14 = *(long *)puVar7;
      }
      uVar11 = **(undefined8 **)(lVar14 + 0xb8);
      lVar16 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
      FUN_06732cbc(lVar16,uVar11,*(undefined8 *)puVar8,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
      *plVar10 = lVar16;
      thunk_FUN_03d233cc(plVar10,lVar16);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_052146dc(lVar12,lVar16,*(undefined8 *)puVar6);
  } while( true );
LAB_06db9a48:
  unaff_x21 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90530);
  FUN_06db7dd4();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  *(undefined8 *)(unaff_x21 + 0x10) = uVar11;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x21 + 0x10),uVar11);
  *(long *)(unaff_x21 + 0x18) = (long)plVar15;
  thunk_FUN_03d233cc((long *)(unaff_x21 + 0x18),plVar15);
  uVar11 = *(undefined8 *)PTR_DAT_08e902a8;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar11 = FUN_0710fcf0(uVar11,0);
  *(undefined8 *)(unaff_x21 + 0x38) = uVar11;
  thunk_FUN_03d233cc();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar9 = FUN_06a4e574(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(unaff_x20 + 0x20),
                       *(undefined8 *)PTR_DAT_08e901e8);
  if ((uVar9 & 1) == 0) goto code_r0x06db9aec;
  goto LAB_06db9b38;
code_r0x06db9aec:
  unaff_x22 = *(long *)(unaff_x19 + 0x40);
  unaff_x23 = *(undefined8 *)(unaff_x20 + 0x20);
  unaff_x24 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90240);
  FUN_052124c0(unaff_x24,*(undefined8 *)PTR_DAT_08e90238);
  param_1 = (undefined8 *)PTR_DAT_08e90500;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  goto code_r0x06db9b24;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar17 = piVar17 + 4;
    if (uVar9 == 0) break;
LAB_06db9f78:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar13 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_06db9fac;
    }
  }
LAB_06db9f90:
  puVar13 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e6a288,0);
LAB_06db9fac:
  (*(code *)*puVar13)(plVar15,puVar13[1]);
LAB_06db9fb8:
  return in_stack_00000000._4_4_ & 1;
}


