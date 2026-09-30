/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ClearPrefab
ENTRY_POINT: 06db9b7c
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

uint Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ClearPrefab(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long in_x9;
  long in_x10;
  int *piVar15;
  long unaff_x19;
  undefined8 uVar16;
  long unaff_x21;
  long lVar17;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000030;
  
code_r0x06db9b7c:
  if ((uint)in_x10 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_2 + 0x18) = (uint)in_x10 + 1;
    plVar13 = (long *)(param_1 + in_x10 * 8 + 0x20);
    *plVar13 = unaff_x21;
    thunk_FUN_03d233cc(plVar13,unaff_x21);
  }
  else {
    FUN_05212cf4(param_2,unaff_x21,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70)
                );
  }
  do {
    while( true ) {
      uVar8 = FUN_049dc4d0(&stack0x00000020,*unaff_x29);
      lVar14 = in_stack_00000030;
      if ((uVar8 & 1) == 0) {
        FUN_049dc4cc(&stack0x00000020,*(undefined8 *)PTR_DAT_08e90570);
        puVar6 = PTR_DAT_08e90560;
        if (*(long *)(unaff_x19 + 0x40) != 0) {
          uVar11 = FUN_06a4e1b0(*(long *)(unaff_x19 + 0x40),*(undefined8 *)PTR_DAT_08e90288);
          lVar14 = *(long *)puVar6;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_03cd7500(lVar14);
            lVar14 = *(long *)puVar6;
          }
          lVar9 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
          if (lVar9 == 0) {
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar14);
              lVar14 = *(long *)puVar6;
            }
            uVar16 = **(undefined8 **)(lVar14 + 0xb8);
            lVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90518);
            FUN_04d5ef3c(lVar9,uVar16,*(undefined8 *)PTR_DAT_08e90598,0);
            plVar13 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
            *plVar13 = lVar9;
            thunk_FUN_03d233cc(plVar13,lVar9);
          }
          plVar13 = (long *)FUN_04639e6c(uVar11,lVar9,*(undefined8 *)PTR_DAT_08e90510);
          if (plVar13 != (long *)0x0) {
            lVar14 = *plVar13;
            uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar8 == 0) goto LAB_06db9db0;
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_06db9d98;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar9 = FUN_06db841c();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar13 = *(long **)(lVar9 + 0x10);
      uVar11 = *(undefined8 *)(lVar9 + 0x18);
      uVar8 = FUN_0702dcc0(plVar13,0,0);
      if ((uVar8 & 1) == 0) break;
      plVar13 = (long *)thunk_FUN_03d12a58();
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar11 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar16 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e904e0,*(undefined8 *)(lVar14 + 0x10),0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06dfdedc(uVar11,uVar16,0,0);
LAB_06db9924:
      in_stack_00000000._4_4_ = 0;
    }
    uVar16 = *(undefined8 *)PTR_DAT_08e902a8;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar16 = FUN_0710fcf0(uVar16,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar16,uVar16);
    }
    lVar9 = (**(code **)(*plVar13 + 0x218))(plVar13,uVar16,0,*(undefined8 *)(*plVar13 + 0x220));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(lVar9 + 0x18) == 0) {
      plVar10 = (long *)thunk_FUN_03d12a58();
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar11 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      uVar16 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e90568,plVar13,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06dfdedc(uVar11,uVar16,0,0);
      goto LAB_06db9924;
    }
    plVar10 = (long *)FUN_0461aa48(lVar9,*unaff_x28);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x27))
      goto LAB_06db9a48;
    }
    plVar13 = (long *)thunk_FUN_03d12a58();
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar11 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_06dfdedc(uVar11,*(undefined8 *)PTR_DAT_08e905a8,0,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_06db9d98:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e90520) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_06db9dd4;
    }
  }
LAB_06db9db0:
  puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e90520,0);
LAB_06db9dd4:
  plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
  puVar7 = PTR_DAT_08e905a0;
  puVar5 = PTR_DAT_08e90538;
  puVar4 = PTR_DAT_08e90528;
  puVar3 = PTR_DAT_08e904e8;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar14 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06db9e5c;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar2,0);
LAB_06db9e5c:
    uVar8 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar13 == (long *)0x0) goto LAB_06db9fb8;
      lVar14 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 == 0) goto LAB_06db9f90;
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      goto LAB_06db9f78;
    }
    lVar14 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_06db9eb8;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar8 != 0);
    }
    puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)puVar4,0);
LAB_06db9eb8:
    lVar14 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    lVar9 = *(long *)puVar6;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_03cd7500(lVar9);
      lVar9 = *(long *)puVar6;
    }
    lVar17 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x20);
    if (lVar17 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar9);
        lVar9 = *(long *)puVar6;
      }
      uVar11 = **(undefined8 **)(lVar9 + 0xb8);
      lVar17 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
      FUN_06732cbc(lVar17,uVar11,*(undefined8 *)puVar7,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
      *plVar10 = lVar17;
      thunk_FUN_03d233cc(plVar10,lVar17);
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_052146dc(lVar14,lVar17,*(undefined8 *)puVar5);
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
  *(long *)(unaff_x21 + 0x18) = (long)plVar13;
  thunk_FUN_03d233cc((long *)(unaff_x21 + 0x18),plVar13);
  uVar11 = *(undefined8 *)PTR_DAT_08e902a8;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar11 = FUN_0710fcf0(uVar11,0);
  *(undefined8 *)(unaff_x21 + 0x38) = uVar11;
  thunk_FUN_03d233cc();
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar8 = FUN_06a4e574(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar14 + 0x20),
                       *(undefined8 *)PTR_DAT_08e901e8);
  if ((uVar8 & 1) == 0) {
    lVar9 = *(long *)(unaff_x19 + 0x40);
    uVar16 = *(undefined8 *)(lVar14 + 0x20);
    uVar11 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90240);
    FUN_052124c0(uVar11,*(undefined8 *)PTR_DAT_08e90238);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06a4e380(lVar9,uVar16,uVar11,*(undefined8 *)PTR_DAT_08e90500);
  }
  if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  param_2 = FUN_06a4e300(*(long *)(unaff_x19 + 0x40),*(undefined8 *)(lVar14 + 0x20),
                         *(undefined8 *)PTR_DAT_08e90210);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  param_1 = *(long *)(param_2 + 0x10);
  in_x9 = *(long *)PTR_DAT_08e902b0;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  in_x10 = (long)*(int *)(param_2 + 0x18);
  goto code_r0x06db9b7c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar15 = piVar15 + 4;
    if (uVar8 == 0) break;
LAB_06db9f78:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_06db9fac;
    }
  }
LAB_06db9f90:
  puVar12 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e6a288,0);
LAB_06db9fac:
  (*(code *)*puVar12)(plVar13,puVar12[1]);
LAB_06db9fb8:
  return in_stack_00000000._4_4_ & 1;
}


