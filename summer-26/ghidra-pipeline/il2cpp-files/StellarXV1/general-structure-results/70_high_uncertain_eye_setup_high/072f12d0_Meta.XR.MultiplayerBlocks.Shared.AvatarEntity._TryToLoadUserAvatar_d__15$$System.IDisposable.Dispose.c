/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.AvatarEntity.<TryToLoadUserAvatar>d__15$$System.IDisposable.Dispose
ENTRY_POINT: 072f12d0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x072f1774) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
Meta_XR_MultiplayerBlocks_Shared_AvatarEntity_<TryToLoadUserAvatar>d__15__System_IDisposable_Dispose
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  char cStack0000000000000034;
  undefined8 in_stack_00000038;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x850));
  FUN_04077588(PTR_DAT_092c4858);
  FUN_04077588(PTR_DAT_092b9200);
  FUN_04077588(PTR_DAT_092c3db8);
  FUN_04077588(PTR_DAT_092c4860);
  FUN_04077588(PTR_DAT_092c4868);
  FUN_04077588(PTR_DAT_092c4870);
  FUN_04077588(PTR_DAT_092c4790);
  *(undefined1 *)(unaff_x21 + 0xc13) = 1;
  if (unaff_x19 != (long *)0x0) {
    in_stack_00000038 = *(undefined8 *)(unaff_x20 + 0x68);
    cStack0000000000000034 = '\0';
    FUN_076e7928(in_stack_00000038,&stack0x00000034,0);
    if (*(long *)(unaff_x20 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar4 = FUN_06efc9f0();
    if ((uVar4 & 1) == 0) {
      lVar9 = *unaff_x19;
      lVar12 = *(long *)(unaff_x20 + 0x68);
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c3db8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_072f13ec;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00();
LAB_072f13ec:
      uVar6 = (*(code *)*puVar5)();
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830(uVar6,uVar6);
      }
      FUN_06efc7c4(lVar12);
      iVar3 = 5;
    }
    else {
      iVar3 = 4;
    }
    if (cStack0000000000000034 != '\0') {
      thunk_FUN_0408541c(in_stack_00000038,0);
    }
    if ((iVar3 == 5) || (iVar3 == 0)) {
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        FUN_072f2bf0();
        puVar2 = PTR_DAT_092c3db8;
        lVar9 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c3db8) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 7) * 0x10 + 0x138);
              goto LAB_072f14bc;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00();
LAB_072f14bc:
        (*(code *)*puVar5)();
        lVar9 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
              goto LAB_072f151c;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00();
LAB_072f151c:
        uVar6 = (*(code *)*puVar5)();
        puVar1 = PTR_DAT_092c3d38;
        uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c3d38);
        FUN_06e5b700();
        lVar9 = FUN_076c0530(uVar6,uVar7,0);
        lVar12 = *(long *)puVar2;
        if (lVar9 != 0) {
          uVar6 = *(undefined8 *)puVar1;
          lVar8 = thunk_FUN_040b4e00(lVar9,uVar6);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(lVar9,uVar6);
          }
        }
        lVar9 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar12) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x16) * 0x10 + 0x138);
              goto LAB_072f15ec;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00();
LAB_072f15ec:
        (*(code *)*puVar5)();
        plVar11 = *(long **)(unaff_x20 + 0x60);
        uVar6 = FUN_074d57ec(*(undefined8 *)PTR_DAT_092c4868);
        if (plVar11 != (long *)0x0) {
          lVar9 = *plVar11;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          uVar7 = *(undefined8 *)PTR_DAT_092c4870;
          uVar13 = *(undefined8 *)PTR_DAT_092c4790;
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092b9200) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                goto LAB_072f1690;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092b9200,7);
LAB_072f1690:
          (*(code *)*puVar5)(plVar11,uVar6,0,0,0,0,uVar7,uVar13);
          lVar9 = *unaff_x19;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_072f1714;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_040b1e00();
LAB_072f1714:
          uVar6 = (*(code *)*puVar5)();
          iVar3 = FUN_072f2b5c();
          if ((iVar3 != 0) && (lVar9 = *(long *)(unaff_x20 + 0x98), lVar9 != 0)) {
            (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),uVar6);
          }
          return 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  return 0;
}


