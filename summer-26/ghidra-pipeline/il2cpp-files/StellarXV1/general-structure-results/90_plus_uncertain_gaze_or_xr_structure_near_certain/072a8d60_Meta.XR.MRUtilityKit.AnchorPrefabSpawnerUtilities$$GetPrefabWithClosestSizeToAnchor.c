/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$GetPrefabWithClosestSizeToAnchor
ENTRY_POINT: 072a8d60
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__GetPrefabWithClosestSizeToAnchor
                 (int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  uint uVar13;
  long in_stack_00000020;
  char *in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000050;
  long in_stack_00000058;
  
  puVar4 = PTR_DAT_092c2180;
  if (param_1 == 4) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    do {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      if (uVar1 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      uVar1 = (uint)*(byte *)(unaff_x20 + 0x20) << 0x18 | (uint)*(byte *)(unaff_x20 + 0x21) << 0x10
              | (uint)*(byte *)(unaff_x20 + 0x22) << 8;
      uVar13 = (uint)*(byte *)(unaff_x20 + 0x23);
      if ((*(long *)(in_stack_00000058 + 0x10) == 0) &&
         (plVar10 = (long *)FUN_07299d30(uVar1 | uVar13), plVar10 != (long *)0x0)) {
        lVar12 = *(long *)(in_stack_00000058 + 0x50);
        plVar10[4] = in_stack_00000058;
        plVar10[2] = lVar12;
        thunk_FUN_040ec700();
        iVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        if (0 < iVar6) {
          cVar3 = *(char *)(in_stack_00000058 + 0x68);
          *(int *)(plVar10 + 3) = iVar6;
          if (cVar3 == '\0') {
            FUN_072983d4(plVar10);
            iVar6 = (int)plVar10[3];
          }
          lVar12 = *(long *)(in_stack_00000058 + 0x50) + (long)iVar6;
          *(long *)(in_stack_00000058 + 0x50) = lVar12;
          if (*(long *)(in_stack_00000058 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_072a9eb4(*(long *)(in_stack_00000058 + 0x80),lVar12,0);
          *(long *)(in_stack_00000058 + 0x10) = (long)plVar10;
          thunk_FUN_040ec700((long *)(in_stack_00000058 + 0x10),plVar10);
          goto LAB_072a9014;
        }
      }
      if (((*(long *)(in_stack_00000058 + 0x30) == 0) && (*(long *)(in_stack_00000058 + 0x20) == 0))
         && (plVar10 = (long *)FUN_072aa07c(uVar1 | uVar13,0), plVar10 != (long *)0x0)) {
        lVar12 = *(long *)(in_stack_00000058 + 0x50);
        plVar10[4] = in_stack_00000058;
        plVar10[2] = lVar12;
        thunk_FUN_040ec700();
        uVar7 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        if (0 < (int)uVar7) {
          *(uint *)(plVar10 + 3) = uVar7;
          lVar12 = *(long *)(in_stack_00000058 + 0x50) + (ulong)uVar7;
          *(long *)(in_stack_00000058 + 0x50) = lVar12;
          if (*(long *)(in_stack_00000058 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_072a9eb4(*(long *)(in_stack_00000058 + 0x80),lVar12,0);
          *(long *)(in_stack_00000058 + 0x20) = (long)plVar10;
          thunk_FUN_040ec700((long *)(in_stack_00000058 + 0x20),plVar10);
          goto LAB_072a9014;
        }
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      plVar10 = (long *)FUN_072a7c24(uVar1 | uVar13);
      if (plVar10 != (long *)0x0) {
        lVar12 = *(long *)(in_stack_00000058 + 0x50);
        plVar10[4] = in_stack_00000058;
        plVar10[2] = lVar12;
        thunk_FUN_040ec700();
        iVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        if (0 < iVar6) {
          *(int *)(plVar10 + 3) = iVar6;
          if (in_stack_00000050 == 0) {
LAB_072a9064:
            if (*(char *)(in_stack_00000058 + 0x68) == '\0') {
              FUN_072983d4(plVar10);
              if (*(long *)(in_stack_00000058 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_072a9eb4(*(long *)(in_stack_00000058 + 0x80),
                           *(long *)(in_stack_00000058 + 0x50) + (long)(int)plVar10[3],0);
              iVar6 = (int)plVar10[3];
            }
            lVar12 = *(long *)(in_stack_00000058 + 0x30);
            *(long *)(in_stack_00000058 + 0x50) = *(long *)(in_stack_00000058 + 0x50) + (long)iVar6;
            if (lVar12 == 0) {
              if (*(long *)(in_stack_00000058 + 0x28) == 0) {
                lVar12 = FUN_072a824c(plVar10);
                *(long *)(in_stack_00000058 + 0x28) = lVar12;
                thunk_FUN_040ec700((long *)(in_stack_00000058 + 0x28),lVar12);
                if (lVar12 != 0) {
                  plVar10 = (long *)FUN_072a8c84(in_stack_00000058);
                  goto LAB_072a9014;
                }
              }
              *(undefined4 *)(plVar10 + 7) = 0;
              *(long *)(in_stack_00000058 + 0x40) = (long)plVar10;
              thunk_FUN_040ec700((long *)(in_stack_00000058 + 0x40),plVar10);
              *(long *)(in_stack_00000058 + 0x30) = (long)plVar10;
              thunk_FUN_040ec700((long *)(in_stack_00000058 + 0x30),plVar10);
            }
            else {
              iVar6 = FUN_072a8904(plVar10);
              iVar8 = FUN_072a8904(lVar12);
              if (iVar6 != iVar8) {
                *(undefined1 *)(in_stack_00000058 + 0x6a) = 1;
              }
              lVar12 = *(long *)(in_stack_00000058 + 0x40);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar11 = FUN_072a8904(lVar12);
              *(long *)(lVar12 + 0x30) = (long)plVar10;
              iVar6 = *(int *)(lVar12 + 0x38);
              plVar10[10] = *(long *)(lVar12 + 0x50) + (uVar11 & 0xffffffff);
              *(int *)(plVar10 + 7) = iVar6 + 1;
              thunk_FUN_040ec700((long *)(lVar12 + 0x30),plVar10);
              *(long *)(in_stack_00000058 + 0x40) = (long)plVar10;
              thunk_FUN_040ec700((long *)(in_stack_00000058 + 0x40),plVar10);
            }
            if ((*(byte *)((long)plVar10 + 0x3d) & 0xf0) == 0) {
              *(long *)(in_stack_00000058 + 0x48) = (long)plVar10;
              thunk_FUN_040ec700((long *)(in_stack_00000058 + 0x48),plVar10);
            }
            goto LAB_072a9014;
          }
          uVar7 = *(uint *)((long)plVar10 + 0x3c);
          uVar2 = *(uint *)(in_stack_00000050 + 0x3c);
          bVar5 = (uVar2 >> 0x11 & 3) == 0;
          if ((uVar7 >> 0x11 & 3) != 0) {
            bVar5 = !bVar5 && (uVar7 >> 0x11 & 3) == (uVar2 >> 0x11 & 3);
          }
          if ((bVar5) &&
             (*(int *)(&DAT_01aeed90 + (ulong)(uVar7 >> 0x13 & 3) * 4) ==
              *(int *)(&DAT_01aeed90 + (ulong)(uVar2 >> 0x13 & 3) * 4))) {
            iVar8 = FUN_072a7ff4(plVar10);
            iVar9 = FUN_072a7ff4(in_stack_00000050);
            if (((uVar7 & 0xf000) == 0) && (iVar8 == iVar9)) goto LAB_072a9064;
          }
        }
      }
      if ((*(long *)(in_stack_00000058 + 0x40) != 0) &&
         (plVar10 = (long *)FUN_07299d30(uVar1 | uVar13), plVar10 != (long *)0x0)) {
        lVar12 = *(long *)(in_stack_00000058 + 0x50);
        plVar10[4] = in_stack_00000058;
        plVar10[2] = lVar12;
        thunk_FUN_040ec700();
        iVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        if (0 < iVar6) {
          cVar3 = *(char *)(in_stack_00000058 + 0x68);
          *(int *)(plVar10 + 3) = iVar6;
          if (cVar3 == '\0') {
            FUN_072983d4(plVar10);
          }
          if (*(uint *)(plVar10 + 6) < 2) {
            *(long *)(in_stack_00000058 + 0x18) = (long)plVar10;
            thunk_FUN_040ec700((long *)(in_stack_00000058 + 0x18),plVar10);
          }
          else if (*(long *)(in_stack_00000058 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar12 = *(long *)(in_stack_00000058 + 0x50) + (long)(int)plVar10[3];
          *(long *)(in_stack_00000058 + 0x50) = lVar12;
          if (*(long *)(in_stack_00000058 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_072a9eb4(*(long *)(in_stack_00000058 + 0x80),lVar12,0);
          goto LAB_072a9014;
        }
      }
      lVar12 = *(long *)(in_stack_00000058 + 0x50) + 1;
      *(long *)(in_stack_00000058 + 0x50) = lVar12;
      if ((*(long *)(in_stack_00000058 + 0x30) == 0) ||
         (*(char *)(in_stack_00000058 + 0x68) == '\0')) {
        if (*(long *)(in_stack_00000058 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        FUN_072a9eb4(*(long *)(in_stack_00000058 + 0x80),lVar12,0);
      }
      FUN_076a724c();
      iVar6 = FUN_07298228(in_stack_00000058,*(long *)(in_stack_00000058 + 0x50) + 3);
    } while (iVar6 == 1);
  }
  plVar10 = (long *)0x0;
  *(undefined1 *)(in_stack_00000058 + 0x69) = 1;
LAB_072a9014:
  FUN_03f9b6dc();
  if (*in_stack_00000028 != '\0') {
    thunk_FUN_0408541c(*in_stack_00000030,0);
  }
  if (in_stack_00000020 == 0) {
    return plVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


