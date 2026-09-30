/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 0773f14c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MRUtilityKit_SceneDebugger__GetClosestSeatPoseDebugger(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long *unaff_x19;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  uint uStack0000000000000030;
  byte in_stack_00000040;
  long *in_stack_00000048;
  byte in_stack_000000b0;
  byte in_stack_000000b8;
  byte in_stack_000000c0;
  byte in_stack_000000c8;
  byte in_stack_000000d0;
  byte in_stack_000000d8;
  byte in_stack_000000e0;
  
  lVar10 = *unaff_x23;
  uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar13 != 0) {
    piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f312c0) {
        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar15 + 0xe) * 0x10 + 0x138);
        goto LAB_0773f1a4;
      }
      uVar13 = uVar13 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773f1a4:
  (*(code *)*puVar7)();
  uVar12 = 2;
  if ((unaff_x28 & 1) == 0) {
    uVar12 = 0;
  }
  uVar14 = 4;
  if ((_uStack0000000000000030 & 0x100000000) == 0) {
    uVar14 = 0;
  }
  uVar9 = 8;
  if ((in_stack_000000e0 & 1) == 0) {
    uVar9 = 0;
  }
  uVar16 = 0x10;
  if ((unaff_x27 & 1) == 0) {
    uVar16 = 0;
  }
  uVar17 = 0x40;
  if ((unaff_x22 & 1) == 0) {
    uVar17 = 0;
  }
  uVar18 = 0x80;
  if ((in_stack_000000b0 & 1) == 0) {
    uVar18 = 0;
  }
  uVar19 = 0x100;
  if ((in_stack_000000b8 & 1) == 0) {
    uVar19 = 0;
  }
  uVar20 = 0x200;
  if ((in_stack_000000c0 & 1) == 0) {
    uVar20 = 0;
  }
  uVar21 = 0x400;
  if ((in_stack_000000c8 & 1) == 0) {
    uVar21 = 0;
  }
  uVar22 = 0x800;
  if ((in_stack_000000d0 & 1) == 0) {
    uVar22 = 0;
  }
  uVar4 = 0x1000;
  if ((in_stack_000000d8 & 1) == 0) {
    uVar4 = 0;
  }
  if (unaff_x29 != 0) {
    if (0 < *(int *)(unaff_x29 + 0x18)) {
      iVar6 = 0;
      do {
        lVar10 = FUN_05badb74(unaff_x29,iVar6,*(undefined8 *)PTR_DAT_09f31320);
        lVar11 = *unaff_x21;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f30ab8) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 0x24) * 0x10 + 0x138);
              goto LAB_0773f314;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773f314:
        iVar5 = (*(code *)*puVar7)();
        if (lVar10 == 0) goto LAB_0773f550;
        uVar1 = *(undefined4 *)(lVar10 + 0x28);
        (**(code **)(*unaff_x19 + 0x498))();
        lVar11 = *in_stack_00000048;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f313c8) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 10) * 0x10 + 0x138);
              goto LAB_0773f3ac;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac(in_stack_00000048,*(long *)PTR_DAT_09f313c8,10);
LAB_0773f3ac:
        (*(code *)*puVar7)(in_stack_00000048,lVar10,uVar1,
                           uVar12 | uStack0000000000000030 & 1 | uVar14 | uVar16 | uVar17 | uVar18 |
                           uVar19 | uVar20 | uVar21 | uVar22 | uVar4 | uVar9,0,
                           iVar5 == 1 & in_stack_00000040);
        FUN_0773a264(lVar10,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(unaff_x29 + 0x18));
    }
    *(undefined4 *)(unaff_x19 + 2) = 1;
    lVar10 = *unaff_x21;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_09f30ab8) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar15 + 0x24) * 0x10 + 0x138);
          goto LAB_0773f470;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac();
LAB_0773f470:
    iVar6 = (*(code *)*puVar7)();
    if (iVar6 != 1) {
      return 1;
    }
    plVar8 = (long *)(**(code **)(*unaff_x19 + 0x4d8))();
    puVar3 = PTR_DAT_09f31428;
    if (plVar8 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_09f31428 + 0x130);
      if ((bVar2 <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_09f31428))
      {
        FUN_094edf40(plVar8,0,0);
        plVar8 = (long *)(**(code **)(*unaff_x19 + 0x4d8))();
        if (plVar8 == (long *)0x0) goto LAB_0773f550;
        bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((bVar2 <= *(byte *)(*plVar8 + 0x130)) &&
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) {
          FUN_094edf40(plVar8,unaff_x19[0x38],0);
          return 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_044481e4();
    }
  }
LAB_0773f550:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


