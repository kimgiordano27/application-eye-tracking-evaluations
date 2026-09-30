/*
FUNCTION_NAME: Meta.WitAi.WrapHttpWebRequest$$Dispose
ENTRY_POINT: 013b8fec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_WrapHttpWebRequest__Dispose(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint *puVar6;
  void *pvVar7;
  int unaff_w19;
  int iVar8;
  long *plVar9;
  size_t unaff_x21;
  long unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x132) & 1) == 0) {
    param_1 = FUN_00d5941c();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  lVar3 = *(long *)(lVar3 + 0x80);
  if (unaff_w28 == 0) {
    iVar8 = unaff_w19 + -1;
  }
  else {
    *(void **)(unaff_x29 + -0x70) = unaff_x23;
    piVar4 = (int *)thunk_FUN_00d32ed4();
    lVar3 = *(long *)(unaff_x22 + 0x20);
    iVar8 = *piVar4;
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    iVar2 = 0;
    if (iVar8 != 0) {
      iVar2 = (unaff_w19 + -1) / iVar8;
    }
    FUN_00da4f60(*(long *)(lVar3 + 0x80) + 0x20,4);
    piVar4 = (int *)thunk_FUN_00d32ed4();
    *piVar4 = (unaff_w19 + -1) - iVar2 * iVar8;
    lVar3 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    piVar4 = (int *)thunk_FUN_00d32ed4();
    lVar3 = *(long *)(unaff_x22 + 0x20);
    iVar2 = *piVar4;
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    unaff_x23 = *(void **)(unaff_x29 + -0x70);
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    piVar4 = (int *)thunk_FUN_00d32ed4();
    iVar8 = *piVar4;
    if (iVar2 < 0) {
      lVar3 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      piVar4 = (int *)thunk_FUN_00d32ed4();
      iVar8 = *piVar4 + iVar8;
    }
    lVar3 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    lVar3 = *(long *)(lVar3 + 0x80);
  }
  FUN_00da4f60(lVar3 + 0x20,4);
  piVar4 = (int *)thunk_FUN_00d32ed4();
  *piVar4 = iVar8;
  lVar3 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  puVar5 = (undefined8 *)thunk_FUN_00d32ed4();
  lVar3 = *(long *)(unaff_x22 + 0x20);
  plVar9 = (long *)*puVar5;
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  puVar6 = (uint *)thunk_FUN_00d32ed4();
  if (plVar9 != (long *)0x0) {
    if (*puVar6 < *(uint *)(plVar9 + 3)) {
      memcpy(unaff_x25,
             (void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x100) * (long)(int)*puVar6 + 0x20),
             unaff_x21);
      lVar3 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      puVar5 = (undefined8 *)thunk_FUN_00d32ed4();
      lVar3 = *(long *)(unaff_x22 + 0x20);
      plVar9 = (long *)*puVar5;
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      puVar6 = (uint *)thunk_FUN_00d32ed4();
      lVar3 = *(long *)(unaff_x22 + 0x20);
      uVar1 = *puVar6;
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      pvVar7 = (void *)thunk_FUN_00d32ed4();
      memcpy(*(void **)(unaff_x29 + -0x60),pvVar7,unaff_x21);
      if (plVar9 == (long *)0x0) goto LAB_013b94d0;
      if (uVar1 < *(uint *)(plVar9 + 3)) {
        memcpy((void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x100) * (long)(int)uVar1 + 0x20),
               *(void **)(unaff_x29 + -0x60),unaff_x21);
        lVar3 = *(long *)(unaff_x22 + 0x20);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_00d5941c();
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        if (uVar1 < *(uint *)(plVar9 + 3)) {
          lVar3 = *(long *)(unaff_x22 + 0x20);
          pvVar7 = *(void **)(unaff_x29 + -0x68);
          if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
            lVar3 = FUN_00d5941c();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x132) & 1) == 0) {
            FUN_00d5941c();
          }
          piVar4 = (int *)thunk_FUN_00d32ed4();
          iVar8 = *piVar4;
          memcpy(pvVar7,unaff_x25,unaff_x21);
          if (iVar8 < 1) {
            iVar8 = 0;
          }
          else {
            memcpy(unaff_x24,unaff_x25,unaff_x21);
            lVar3 = *(long *)(unaff_x22 + 0x20);
            if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
              lVar3 = FUN_00d5941c();
            }
            if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 8) + 0x132) & 1) == 0) {
              FUN_00d5941c();
            }
            piVar4 = (int *)thunk_FUN_00d32ed4();
            iVar8 = *piVar4 + -1;
            pvVar7 = unaff_x24;
          }
          memcpy(unaff_x23,pvVar7,unaff_x21);
          lVar3 = *(long *)(unaff_x22 + 0x20);
          if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
            lVar3 = FUN_00d5941c();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
            lVar3 = FUN_00d5941c();
          }
          FUN_00da4f60(*(long *)(lVar3 + 0x80) + 0xa0,4);
          piVar4 = (int *)thunk_FUN_00d32ed4();
          *piVar4 = iVar8;
          memcpy(unaff_x26,unaff_x23,unaff_x21);
          if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x58)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_013b94d0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


