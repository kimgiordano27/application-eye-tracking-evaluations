/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$get_GlobalMeshMaterial
ENTRY_POINT: 06dbcff8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dbd368) */
/* WARNING: Removing unreachable block (ram,0x06dbd44c) */
/* WARNING: Removing unreachable block (ram,0x06dbd5c0) */
/* WARNING: Removing unreachable block (ram,0x06dbd5d4) */

void Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__get_GlobalMeshMaterial
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long in_x9;
  ulong uVar16;
  long lVar17;
  int *in_x10;
  int *piVar18;
  long in_x11;
  long unaff_x19;
  undefined8 unaff_x23;
  long unaff_x27;
  long lVar19;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar6 = (undefined8 *)FUN_03cf1348();
      goto Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__Start;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__Start:
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar5 = PTR_DAT_08e90750;
  puVar4 = PTR_DAT_08e90740;
  puVar3 = PTR_DAT_08e8b888;
  puVar2 = PTR_DAT_08e69a78;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar14 = *plVar7;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08e6a290) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06dbd0c4;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e6a290,0);
LAB_06dbd0c4:
    uVar16 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar16 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_06dbd4b8;
      lVar14 = *plVar7;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 == 0) goto LAB_06dbd490;
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar14 = *plVar7;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08e90768) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_06dbd128;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e90768,0);
LAB_06dbd128:
    plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
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
    uVar11 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
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
    uVar12 = FUN_06dbd714();
    lVar14 = FUN_0463775c(uVar12,*(undefined8 *)PTR_DAT_08e867a0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_05213710(&stack0x00000028,lVar14,*(undefined8 *)PTR_DAT_08e8b8a0);
    in_stack_00000048 = in_stack_00000030;
    in_stack_00000040 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000038;
    while (uVar16 = FUN_049dc4d0(&stack0x00000040,*(undefined8 *)puVar3), uVar12 = in_stack_00000050
          , (uVar16 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar16 = FUN_06a4e574(*(long *)(unaff_x19 + 0x20),in_stack_00000050,*(undefined8 *)puVar4);
      if ((uVar16 & 1) == 0) {
        lVar19 = *(long *)(unaff_x19 + 0x20);
        uVar13 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e697c0);
        FUN_052124c0(uVar13,*(undefined8 *)PTR_DAT_08e697c8);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_06a4e380(lVar19,uVar12,uVar13,*(undefined8 *)PTR_DAT_08e90730);
      }
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar19 = FUN_06a4e300(*(long *)(unaff_x19 + 0x20),uVar12,*(undefined8 *)puVar5);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar15 = *(long *)(lVar19 + 0x10);
      lVar17 = *(long *)puVar2;
      *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(lVar19 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar19 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar10;
        thunk_FUN_03d233cc(puVar6,uVar10);
      }
      else {
        FUN_05212cf4(lVar19,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_049dc4cc(&stack0x00000040,*(undefined8 *)PTR_DAT_08e8b880);
    uVar12 = FUN_0461aa48(lVar14,*(undefined8 *)PTR_DAT_08e81dd8);
    in_stack_00000030 = 0;
    in_stack_00000028 = uVar11;
    thunk_FUN_03d233cc(&stack0x00000028,uVar11);
    in_stack_00000030 = uVar12;
    thunk_FUN_03d233cc(&stack0x00000030,uVar12);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06a2db1c(unaff_x27,uVar10,in_stack_00000028,in_stack_00000030,
                 *(undefined8 *)PTR_DAT_08e90728);
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar18 = piVar18 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar6 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_06dbd4ac;
    }
  }
LAB_06dbd490:
  puVar6 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e6a288,0);
LAB_06dbd4ac:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
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
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_06a2db1c(unaff_x27,*(undefined8 *)PTR_DAT_08e90780,in_stack_00000028,in_stack_00000030,
               *(undefined8 *)PTR_DAT_08e90728);
  FUN_06dbda8c();
  return;
}


