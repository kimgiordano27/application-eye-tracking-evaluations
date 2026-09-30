/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 031b0d68
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (float param_1,float param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined4 unaff_w24;
  long unaff_x25;
  int unaff_w26;
  int iVar5;
  int iVar6;
  undefined8 *unaff_x27;
  long *unaff_x28;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float fVar10;
  float unaff_s13;
  float unaff_s14;
  undefined8 unaff_d15;
  long in_stack_00000008;
  long in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  while( true ) {
    unaff_s13 = unaff_s13 - unaff_s10;
    fVar9 = 0.0;
    fVar7 = SQRT(unaff_s13 * unaff_s13 + param_2 * param_2 + param_1 * param_1);
    param_1 = unaff_s13 * unaff_s13;
    if (fVar7 <= unaff_s14) {
      fVar7 = fVar7 / unaff_s14;
      fVar9 = 1.0;
      if (fVar7 <= 1.0) {
        fVar9 = fVar7;
      }
      fVar8 = 0.0;
      if (0.0 <= fVar7) {
        fVar8 = fVar9;
      }
      fVar9 = fStack000000000000001c + fStack0000000000000018 * fVar8;
      param_1 = fStack000000000000001c;
      unaff_s13 = fStack0000000000000018;
    }
    if (unaff_x23 == 0) goto LAB_031b1020;
    if (0 < *(int *)(unaff_x23 + 0x18)) {
      iVar6 = 0;
      do {
        lVar2 = *unaff_x21;
        if (lVar2 == 0) goto LAB_031b1020;
        lVar3 = *(long *)(lVar2 + 0x10);
        lVar4 = *unaff_x28;
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar3 == 0) goto LAB_031b1020;
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + 0x20) = unaff_d15;
          *(undefined4 *)(lVar3 + 0x28) = unaff_w24;
          *(float *)(lVar3 + 0x2c) = fVar9;
        }
        else {
          param_1 = 1.0;
          unaff_s13 = 1.0;
          FUN_03f443a8(0x3f800000,0x3f800000,0x3f800000,fVar9,lVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(unaff_x23 + 0x18));
    }
    unaff_w26 = unaff_w26 + 1;
    if (*(int *)(unaff_x25 + 0x18) <= unaff_w26) break;
    param_2 = (float)FUN_0409f2f4();
    if (*(char *)(unaff_x22 + 0xc77) == '\0') {
      FUN_02d965b8(unaff_x20);
      *(undefined1 *)(unaff_x22 + 0xc77) = 1;
    }
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    param_1 = param_1 - unaff_s9;
    param_2 = param_2 - unaff_s8;
  }
  fVar7 = 0.0;
  if (*(int *)(in_stack_00000008 + 0x40c) != 2) {
    fVar7 = 0.5;
  }
  fVar9 = 1.0;
  if (*(int *)(in_stack_00000008 + 0x40c) != 1) {
    fVar9 = fVar7;
  }
  if (in_stack_00000010 != 0) {
    if (0 < *(int *)(in_stack_00000010 + 0x18)) {
      iVar6 = 0;
      fVar7 = fVar9;
      do {
        fVar8 = (float)FUN_0409f2f4(in_stack_00000010,iVar6,*unaff_x27);
        if (*(char *)(unaff_x22 + 0xc77) == '\0') {
          FUN_02d965b8(unaff_x20);
          *(undefined1 *)(unaff_x22 + 0xc77) = 1;
        }
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        unaff_s13 = unaff_s13 - unaff_s10;
        fVar10 = 1.0;
        fVar8 = SQRT(unaff_s13 * unaff_s13 +
                     (fVar8 - unaff_s8) * (fVar8 - unaff_s8) +
                     (fVar7 - unaff_s9) * (fVar7 - unaff_s9));
        fVar7 = unaff_s13 * unaff_s13;
        if (fVar8 <= unaff_s14) {
          fVar8 = fVar8 / unaff_s14;
          fVar7 = 1.0;
          if (fVar8 <= 1.0) {
            fVar7 = fVar8;
          }
          fVar10 = 0.0;
          if (0.0 <= fVar8) {
            fVar10 = fVar7;
          }
          fVar10 = fVar9 + (1.0 - fVar9) * fVar10;
          fVar7 = fVar9;
          unaff_s13 = 1.0 - fVar9;
        }
        if (unaff_x19 == 0) goto LAB_031b1020;
        if (0 < *(int *)(unaff_x19 + 0x18)) {
          iVar5 = 0;
          do {
            lVar2 = *unaff_x21;
            if (lVar2 == 0) goto LAB_031b1020;
            lVar3 = *(long *)(lVar2 + 0x10);
            lVar4 = *unaff_x28;
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            if (lVar3 == 0) goto LAB_031b1020;
            uVar1 = *(uint *)(lVar2 + 0x18);
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar2 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar3 + 0x20) = unaff_d15;
              *(undefined4 *)(lVar3 + 0x28) = 0x3f800000;
              *(float *)(lVar3 + 0x2c) = fVar10;
            }
            else {
              fVar7 = 1.0;
              unaff_s13 = 1.0;
              FUN_03f443a8(0x3f800000,0x3f800000,0x3f800000,fVar10,lVar2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(unaff_x19 + 0x18));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(in_stack_00000010 + 0x18));
    }
    return;
  }
LAB_031b1020:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


