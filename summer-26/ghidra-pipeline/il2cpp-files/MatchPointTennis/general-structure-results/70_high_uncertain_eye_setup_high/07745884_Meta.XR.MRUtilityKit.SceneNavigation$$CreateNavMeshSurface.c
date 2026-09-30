/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$CreateNavMeshSurface
ENTRY_POINT: 07745884
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__CreateNavMeshSurface(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  int in_w9;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  long unaff_x20;
  long unaff_x21;
  byte unaff_w22;
  undefined8 uVar10;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x28;
  int unaff_w29;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int unaff_s8;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000058;
  undefined4 uStack000000000000005c;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_044a54b4(param_1);
    }
    FUN_094c652c(unaff_x23,0);
    do {
      lVar6 = *(long *)(unaff_x20 + 0xb0);
      if (lVar6 == 0) goto LAB_07745a84;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_07745b6c;
      if (in_stack_00000028 == 0) goto LAB_07745a84;
      uVar2 = FUN_0771314c(in_stack_00000028,uStack000000000000003c,
                           *(undefined8 *)(lVar6 + unaff_x26 * 8 + 0x20),0);
      lVar6 = *(long *)(unaff_x20 + 0x88);
      if (lVar6 == 0) goto LAB_07745a84;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_07745b6c;
      lVar6 = lVar6 + unaff_x26 * 0x10;
      fVar12 = *(float *)(lVar6 + 0x24);
      fVar13 = *(float *)(lVar6 + 0x28);
      fVar14 = *(float *)(lVar6 + 0x2c);
      if (((*(long *)(unaff_x20 + 0xa0) != 0) &&
          (uVar8 = *(ulong *)(*(long *)(unaff_x20 + 0xa0) + 0x18), uVar8 != 0)) &&
         ((uVar8 & 0xffffffff) <= unaff_x26)) goto LAB_07745b6c;
      if (*(long *)(unaff_x20 + 0x98) == 0) goto LAB_07745a84;
      if (*(uint *)(*(long *)(unaff_x20 + 0x98) + 0x18) <= unaff_x26) goto LAB_07745b6c;
      if (*(long *)(unaff_x20 + 0x90) == 0) goto LAB_07745a84;
      if (*(uint *)(*(long *)(unaff_x20 + 0x90) + 0x18) <= unaff_x26) goto LAB_07745b6c;
      fVar11 = (float)FUN_077702c4(*(undefined4 *)(lVar6 + 0x20),uVar2 & 1,0);
      if (unaff_x28 == 0) goto LAB_07745a84;
      uVar2 = *(uint *)(unaff_x28 + 0x18);
      if (0 < (int)uVar2) {
        uVar5 = 0;
        do {
          if (uVar2 <= uVar5) goto LAB_07745b6c;
          uVar2 = *(uint *)(unaff_x28 + (long)(int)uVar5 * 4 + 0x20);
          if (*(uint *)(unaff_x25 + 0x18) <= uVar2) goto LAB_07745b6c;
          puVar9 = (uint *)(unaff_x25 + (long)(int)uVar2 * 4 + 0x20);
          if (*puVar9 == 0xffffffff) {
            *puVar9 = (uint)unaff_x26;
            if (*(uint *)(unaff_x24 + 0x18) <= uVar2) goto LAB_07745b6c;
            if (unaff_x21 == 0) goto LAB_07745a84;
            uVar1 = uVar2 + unaff_w29;
            if (*(uint *)(unaff_x21 + 0x18) <= uVar1) goto LAB_07745b6c;
            lVar6 = unaff_x24 + (long)(int)uVar2 * 8;
            fVar15 = *(float *)(lVar6 + 0x24);
            lVar7 = unaff_x21 + (long)(int)uVar1 * 8;
            *(float *)(lVar7 + 0x20) = fVar11 + fVar13 * *(float *)(lVar6 + 0x20);
            *(float *)(lVar7 + 0x24) = fVar12 + fVar14 * fVar15;
            if (iStack0000000000000058 == 1) {
              if (in_stack_00000030 == 0) goto LAB_07745a84;
              if (*(uint *)(in_stack_00000030 + 0x18) <= uVar1) goto LAB_07745b6c;
              *(float *)(in_stack_00000030 + (long)(int)uVar1 * 4 + 0x20) = (float)unaff_s8;
            }
          }
          if (*(uint *)(unaff_x25 + 0x18) <= uVar2) goto LAB_07745b6c;
          uVar2 = *(uint *)(unaff_x28 + 0x18);
          uVar5 = uVar5 + 1;
          unaff_w22 = unaff_w22 | unaff_x26 != *puVar9;
        } while ((int)uVar5 < (int)uVar2);
      }
      unaff_x26 = unaff_x26 + 1;
      if (*(long *)(unaff_x20 + 0x80) == 0) goto LAB_07745a84;
      if ((long)*(int *)(*(long *)(unaff_x20 + 0x80) + 0x18) <= (long)unaff_x26) {
        if ((1 < iStack0000000000000038) && (((unaff_w22 ^ 1) & 1) == 0)) {
          uVar3 = FUN_078a7764(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_09f31e00,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c33b0(uVar3,0);
        }
        if (4 < iStack0000000000000038) {
          in_stack_00000040 =
               CONCAT44(in_stack_00000040._4_4_,(int)*(undefined8 *)(unaff_x24 + 0x18));
          uVar3 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000040);
          uVar3 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f31e08,uVar3,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar3,0);
        }
        return;
      }
      lVar6 = *(long *)(unaff_x20 + 0xd0);
      if (lVar6 == 0) {
        if (in_stack_00000020 == 0) goto LAB_07745a84;
        unaff_x28 = FUN_094f934c(in_stack_00000020,unaff_x26 & 0xffffffff,0);
      }
      else {
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_07745b6c;
        lVar6 = *(long *)(lVar6 + unaff_x26 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_07745a84;
        unaff_x28 = *(long *)(lVar6 + 0x10);
      }
      lVar6 = *(long *)(unaff_x20 + 0xa8);
      if (lVar6 == 0) goto LAB_07745a84;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_07745b6c;
      lVar7 = *(long *)(unaff_x20 + 0x80);
      if (lVar7 == 0) goto LAB_07745a84;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_07745b6c;
      unaff_s8 = *(int *)(lVar6 + unaff_x26 * 4 + 0x20);
      uStack000000000000003c = *(undefined4 *)(lVar7 + unaff_x26 * 4 + 0x20);
    } while (iStack0000000000000038 < 5);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack000000000000005c = (undefined4)unaff_x26;
    uVar3 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),(long)&stack0x00000058 + 4);
    lVar6 = *(long *)(unaff_x20 + 0x90);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x26) {
LAB_07745b6c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar6 = lVar6 + unaff_x26 * 0x10;
    in_stack_00000048 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_00000040 = *(undefined8 *)(lVar6 + 0x20);
    uVar4 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f222e0,&stack0x00000040);
    unaff_x23 = FUN_078b5b40(*(undefined8 *)PTR_DAT_09f31df8,uVar10,uVar3,uVar4,0);
    param_1 = *(long *)PTR_DAT_09f1e540;
    in_w9 = *(int *)(param_1 + 0xe4);
  }
LAB_07745a84:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


