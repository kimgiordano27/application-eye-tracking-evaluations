/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Data.AnchorData$$get_MeshData
ENTRY_POINT: 06dbcf80
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dbd368) */
/* WARNING: Removing unreachable block (ram,0x06dbd44c) */
/* WARNING: Removing unreachable block (ram,0x06dbd5c0) */
/* WARNING: Removing unreachable block (ram,0x06dbd5d4) */

void Meta_XR_MRUtilityKit_Data_AnchorData__get_MeshData(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x23;
  long unaff_x27;
  long lVar18;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_06a2cd50();
  if ((((unaff_x23 != (long *)0x0) &&
       (plVar6 = (long *)(**(code **)(*unaff_x23 + 0x308))(), plVar6 != (long *)0x0)) &&
      (plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                  (plVar6,*(undefined8 *)PTR_DAT_08e90778,
                                   *(undefined8 *)(*plVar6 + 0x1b0)), plVar6 != (long *)0x0)) &&
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250)),
     plVar6 != (long *)0x0)) {
    lVar13 = *plVar6;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e90760) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__Start;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e90760,0);
Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__Start:
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar5 = PTR_DAT_08e90750;
    puVar4 = PTR_DAT_08e90740;
    puVar3 = PTR_DAT_08e8b888;
    puVar2 = PTR_DAT_08e69a78;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar13 = *plVar6;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e6a290) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06dbd0c4;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e6a290,0);
LAB_06dbd0c4:
      uVar15 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_06dbd4b8;
        lVar13 = *plVar6;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 == 0) goto LAB_06dbd490;
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_06dbd478;
      }
      lVar13 = *plVar6;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e90768) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06dbd128;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e90768,0);
LAB_06dbd128:
      plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar9 = (long *)(**(code **)(*plVar8 + 0x188))(plVar8,0,*(undefined8 *)(*plVar8 + 400));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                 (plVar9,*(undefined8 *)PTR_DAT_08e90770,
                                  *(undefined8 *)(*plVar9 + 0x1b0));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar10 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
      plVar9 = (long *)(**(code **)(*plVar8 + 0x188))(plVar8,0,*(undefined8 *)(*plVar8 + 400));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                 (plVar9,*(undefined8 *)PTR_DAT_08e79260,
                                  *(undefined8 *)(*plVar9 + 0x1b0));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
      plVar8 = (long *)(**(code **)(*plVar8 + 0x188))(plVar8,0,*(undefined8 *)(*plVar8 + 400));
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                 (plVar8,*(undefined8 *)PTR_DAT_08e809f8,
                                  *(undefined8 *)(*plVar8 + 0x1b0));
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      uVar11 = FUN_06dbd714();
      lVar13 = FUN_0463775c(uVar11,*(undefined8 *)PTR_DAT_08e867a0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_05213710(&stack0x00000028,lVar13,*(undefined8 *)PTR_DAT_08e8b8a0);
      in_stack_00000048 = in_stack_00000030;
      in_stack_00000040 = in_stack_00000028;
      in_stack_00000050 = in_stack_00000038;
      while (uVar15 = FUN_049dc4d0(&stack0x00000040,*(undefined8 *)puVar3),
            uVar11 = in_stack_00000050, (uVar15 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar15 = FUN_06a4e574(*(long *)(unaff_x19 + 0x20),in_stack_00000050,*(undefined8 *)puVar4);
        if ((uVar15 & 1) == 0) {
          lVar18 = *(long *)(unaff_x19 + 0x20);
          uVar12 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e697c0);
          FUN_052124c0(uVar12,*(undefined8 *)PTR_DAT_08e697c8);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_06a4e380(lVar18,uVar11,uVar12,*(undefined8 *)PTR_DAT_08e90730);
        }
        if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar18 = FUN_06a4e300(*(long *)(unaff_x19 + 0x20),uVar11,*(undefined8 *)puVar5);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar14 = *(long *)(lVar18 + 0x10);
        lVar16 = *(long *)puVar2;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar1 = *(uint *)(lVar18 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar18 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = uVar10;
          thunk_FUN_03d233cc(puVar7,uVar10);
        }
        else {
          FUN_05212cf4(lVar18,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_049dc4cc(&stack0x00000040,*(undefined8 *)PTR_DAT_08e8b880);
      uVar11 = FUN_0461aa48(lVar13,*(undefined8 *)PTR_DAT_08e81dd8);
      in_stack_00000030 = 0;
      in_stack_00000028 = plVar9;
      thunk_FUN_03d233cc(&stack0x00000028,plVar9);
      in_stack_00000030 = uVar11;
      thunk_FUN_03d233cc(&stack0x00000030,uVar11);
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_06a2db1c(unaff_x27,uVar10,in_stack_00000028,in_stack_00000030,
                   *(undefined8 *)PTR_DAT_08e90728);
    } while( true );
  }
  goto LAB_06dbd5cc;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_06dbd478:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_06dbd4ac;
    }
  }
LAB_06dbd490:
  puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e6a288,0);
LAB_06dbd4ac:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_06dbd4b8:
  uVar10 = *(undefined8 *)PTR_DAT_08e811b0;
  if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar10 = FUN_0710fcf0(uVar10,0);
  in_stack_00000030 = 0;
  in_stack_00000028 = unaff_x23;
  thunk_FUN_03d233cc(&stack0x00000028);
  in_stack_00000030 = uVar10;
  thunk_FUN_03d233cc(&stack0x00000030,uVar10);
  if (unaff_x27 != 0) {
    FUN_06a2db1c(unaff_x27,*(undefined8 *)PTR_DAT_08e90780,in_stack_00000028,in_stack_00000030,
                 *(undefined8 *)PTR_DAT_08e90728);
    FUN_06dbda8c();
    return;
  }
LAB_06dbd5cc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


