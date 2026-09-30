/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$get_Current
ENTRY_POINT: 058b0008
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__get_Current(long param_1)

{
  void *__src;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ushort in_w9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  code *pcVar8;
  long *plVar9;
  undefined1 *__dest;
  ulong __n;
  void *unaff_x26;
  undefined1 *__dest_00;
  ulong __n_00;
  long unaff_x29;
  
  lVar4 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_0322bef4(param_1);
    in_w9 = *(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x22 + 0x20);
  }
  __n_00 = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x68) + 0xfc);
  lVar5 = lVar4;
  if ((in_w9 & 1) == 0) {
    lVar4 = FUN_0322bef4(lVar4);
    in_w9 = *(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x22 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x70) + 0xfc);
  __dest_00 = &stack0x00000000 + -(__n_00 + 0xf & 0x1fffffff0);
  __dest = __dest_00 + -(__n + 0xf & 0x1fffffff0);
  lVar4 = unaff_x21[4];
  lVar6 = lVar5;
  if ((in_w9 & 1) == 0) {
    lVar5 = FUN_0322bef4(lVar5);
    in_w9 = *(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x22 + 0x20);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x58);
  if ((in_w9 & 1) == 0) {
    FUN_0322bef4(lVar6);
  }
  iVar3 = (*pcVar8)();
  if (iVar3 <= (int)lVar4) {
    lVar5 = *(long *)(unaff_x22 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar4 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0322bef4(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x22 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x58);
    if ((uVar1 & 1) == 0) {
      FUN_0322bef4(lVar4);
    }
    (*pcVar8)();
    lVar5 = *(long *)(unaff_x22 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar4 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0322bef4(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x22 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x22 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      FUN_0322bef4(lVar4);
    }
    (*pcVar8)();
  }
  uVar2 = *(uint *)(unaff_x21 + 4);
  lVar4 = (long)(int)uVar2;
  lVar5 = *unaff_x21;
  *(uint *)(unaff_x21 + 4) = uVar2 + 1;
  if (lVar5 == 0) {
LAB_058b03e4:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if ((unaff_x20 != 0) && (lVar6 = thunk_FUN_0322f04c(), lVar6 == 0)) {
    uVar7 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar7,0);
  }
  if (uVar2 < *(uint *)(lVar5 + 0x18)) {
    *(long *)(lVar5 + lVar4 * 8 + 0x20) = unaff_x20;
    thunk_FUN_0329bf60();
    lVar5 = unaff_x21[1];
    if (lVar5 == 0) goto LAB_058b03e4;
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      *(undefined4 *)(lVar5 + lVar4 * 4 + 0x20) = *(undefined4 *)(unaff_x29 + -0x2c);
      lVar5 = *(long *)(unaff_x22 + 0x20);
      plVar9 = (long *)unaff_x21[2];
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0322bef4();
      }
      if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x68) + 0x28)) {
        unaff_x26 = (void *)(unaff_x29 + -0x10);
      }
      memcpy(__dest_00,unaff_x26,__n_00);
      if (plVar9 == (long *)0x0) goto LAB_058b03e4;
      if (uVar2 < *(uint *)(plVar9 + 3)) {
        memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * lVar4 + 0x20),__dest_00,
               __n_00);
        lVar5 = *(long *)(unaff_x22 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0322bef4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x68);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0322bef4();
        }
        if (uVar2 < *(uint *)(plVar9 + 3)) {
          FUN_031f20a4(lVar5,(long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * lVar4 + 0x20,
                       __dest_00);
          lVar5 = *(long *)(unaff_x22 + 0x20);
          plVar9 = (long *)unaff_x21[3];
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0322bef4();
          }
          __src = *(void **)(unaff_x29 + -0x38);
          if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x70) + 0x28)) {
            __src = (void *)(unaff_x29 + -0x18);
          }
          memcpy(__dest,__src,__n);
          if (plVar9 == (long *)0x0) goto LAB_058b03e4;
          if (uVar2 < *(uint *)(plVar9 + 3)) {
            memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * lVar4 + 0x20),__dest,
                   __n);
            lVar5 = *(long *)(unaff_x22 + 0x20);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0322bef4();
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x70);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0322bef4();
            }
            if (uVar2 < *(uint *)(plVar9 + 3)) {
              FUN_031f20a4(lVar5,(long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * lVar4 + 0x20,
                           __dest);
              lVar4 = unaff_x21[5];
              *(undefined8 *)(unaff_x29 + -0x28) = 0;
              *(undefined8 *)(unaff_x29 + -0x20) = 0;
              FUN_06fe61c0(unaff_x29 + -0x28);
              if (lVar4 != 0) {
                FUN_059099fc(lVar4,*(undefined8 *)(unaff_x29 + -0x28),
                             *(undefined8 *)(unaff_x29 + -0x20),uVar2,
                             *(undefined8 *)PTR_DAT_075db720);
                if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                return;
              }
              goto LAB_058b03e4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


