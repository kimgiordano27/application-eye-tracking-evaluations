/*
FUNCTION_NAME: Amazon.Util.AWSHttpClient$$Dispose
ENTRY_POINT: 040585a0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Amazon_Util_AWSHttpClient__Dispose(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long lVar8;
  long unaff_x24;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  int unaff_w29;
  float fVar9;
  float fVar10;
  long in_stack_00000008;
  
  while (*(long *)(unaff_x24 + 0x30) != 0) {
    lVar7 = FUN_06a627b8(*(long *)(unaff_x24 + 0x30),unaff_w20,*(undefined8 *)PTR_DAT_091a9cc0);
    fVar9 = (float)FUN_08a4b260(0xbf800000,0x3f800000,0);
    if (lVar7 == 0) break;
    *(float *)(lVar7 + 0x3c) = fVar9 * *(float *)(unaff_x27 + 0x50);
LAB_040585e0:
    do {
      do {
        FUN_040468a0(unaff_x24,0);
        unaff_w29 = unaff_w29 + 1;
        if (*(int *)(unaff_x27 + 0x108) <= unaff_w29) {
          *(undefined4 *)(unaff_x21 + 0x18) = 0;
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          return;
        }
        if (*(long *)(unaff_x27 + 0x68) == 0) goto LAB_04058744;
        uVar4 = FUN_06a62508(*(long *)(unaff_x27 + 0x68),*unaff_x28);
        uVar4 = FUN_08a4b2a0(0,uVar4,0);
        if (((unaff_x21 == 0) || (uVar4 = FUN_059d0b34(unaff_x21,uVar4,*unaff_x26), unaff_x24 == 0))
           || (*(long *)(unaff_x24 + 0x38) == 0)) goto LAB_04058744;
        uVar5 = FUN_06a62a4c(*(long *)(unaff_x24 + 0x38),uVar4,*unaff_x19);
      } while ((uVar5 & 1) != 0);
      if (((*(long *)(unaff_x27 + 0x68) == 0) ||
          (lVar7 = FUN_06a627b8(*(long *)(unaff_x27 + 0x68),uVar4,*(undefined8 *)PTR_DAT_091a9cc8),
          lVar7 == 0)) || (*(long *)(unaff_x27 + 0x68) == 0)) goto LAB_04058744;
      unaff_w20 = *(int *)(lVar7 + 0x14);
      lVar8 = *(long *)(unaff_x24 + 0x38);
      lVar7 = FUN_06a627b8(*(long *)(unaff_x27 + 0x68),uVar4,*(undefined8 *)PTR_DAT_091a9cc8);
      if ((lVar7 == 0) || (*(long *)(unaff_x27 + 0x68) == 0)) goto LAB_04058744;
      uVar1 = *(undefined4 *)(lVar7 + 0x10);
      lVar7 = FUN_06a627b8(*(long *)(unaff_x27 + 0x68),uVar4,*(undefined8 *)PTR_DAT_091a9cc8);
      if (lVar7 == 0) goto LAB_04058744;
      uVar2 = *(undefined1 *)(lVar7 + 0x1d);
      uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091a9e50);
      FUN_04046cf0(uVar6,uVar1,unaff_w20,uVar2,0);
      if (lVar8 == 0) goto LAB_04058744;
      FUN_06a62858(lVar8,uVar4,uVar6,*(undefined8 *)PTR_DAT_091a9e58);
      if (*(long *)(in_stack_00000008 + 0x38) == 0) goto LAB_04058744;
      lVar7 = FUN_06a627b8(*(long *)(in_stack_00000008 + 0x38),uVar4,*(undefined8 *)PTR_DAT_091a9cc8
                          );
      fVar9 = (float)FUN_08a4b260(0xbf800000,0x3f800000,0);
      if (lVar7 == 0) goto LAB_04058744;
      *(float *)(lVar7 + 0x18) = fVar9 * *(float *)(unaff_x27 + 0x50);
      unaff_x19 = (undefined8 *)PTR_DAT_091aa438;
      lVar7 = *(long *)(in_stack_00000008 + 0x20);
      if (lVar7 == 0) goto LAB_04058744;
      unaff_x24 = in_stack_00000008;
    } while (unaff_w20 < *(int *)(lVar7 + 0x18));
    if (*(long *)(in_stack_00000008 + 0x28) == 0) break;
    if (unaff_w20 < *(int *)(*(long *)(in_stack_00000008 + 0x28) + 0x18) + *(int *)(lVar7 + 0x18)) {
      lVar7 = *(long *)(unaff_x27 + 0x118);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_04058748;
      fVar10 = *(float *)(lVar7 + 0x24);
      fVar9 = (float)FUN_08a4b260(0,0x3f800000,0);
      if (fVar10 <= fVar9) {
        lVar7 = *(long *)(in_stack_00000008 + 0x20);
        if (lVar7 != 0) goto LAB_040584d0;
        break;
      }
    }
    else {
LAB_040584d0:
      if (*(long *)(in_stack_00000008 + 0x28) == 0) break;
      if (unaff_w20 < *(int *)(*(long *)(in_stack_00000008 + 0x28) + 0x18) + *(int *)(lVar7 + 0x18))
      goto LAB_040585e0;
      lVar7 = *(long *)(unaff_x27 + 0x118);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_04058748:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      fVar10 = *(float *)(lVar7 + 0x20);
      fVar9 = (float)FUN_08a4b260(0,0x3f800000,0);
      if (fVar10 <= fVar9) goto LAB_040585e0;
    }
    if (((*(long *)(in_stack_00000008 + 0x30) == 0) ||
        (lVar7 = FUN_06a627b8(*(long *)(in_stack_00000008 + 0x30),unaff_w20,
                              *(undefined8 *)PTR_DAT_091a9cc0), lVar7 == 0)) ||
       (*(long *)(in_stack_00000008 + 0x30) == 0)) break;
    cVar3 = *(char *)(lVar7 + 0x35);
    lVar7 = FUN_06a627b8(*(long *)(in_stack_00000008 + 0x30),unaff_w20,
                         *(undefined8 *)PTR_DAT_091a9cc0);
    if (lVar7 == 0) break;
    if (cVar3 != '\0') {
      fVar10 = *(float *)(lVar7 + 0x3c);
      fVar9 = (float)FUN_08a4b260(0xbf800000,0x3f800000,0);
      *(float *)(lVar7 + 0x3c) = fVar10 + fVar9 * *(float *)(unaff_x27 + 0x50);
      goto LAB_040585e0;
    }
    *(undefined1 *)(lVar7 + 0x35) = 1;
  }
LAB_04058744:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


