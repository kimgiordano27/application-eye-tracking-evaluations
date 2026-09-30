/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.RotationModifier$$.ctor
ENTRY_POINT: 0775421c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_RotationModifier___ctor
               (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  uint *puVar8;
  byte unaff_w21;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  int unaff_w26;
  long unaff_x27;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int unaff_s12;
  undefined4 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  int iStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  while( true ) {
    uVar3 = FUN_0771314c(param_1,param_2,param_3,param_4);
    lVar6 = *(long *)(unaff_x19 + 0x88);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x25) {
LAB_077544c8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar6 = lVar6 + unaff_x25 * 0x10;
    lVar7 = *(long *)(unaff_x19 + 0xa0);
    fVar12 = *(float *)(lVar6 + 0x24);
    fVar13 = *(float *)(lVar6 + 0x28);
    fVar14 = *(float *)(lVar6 + 0x2c);
    uVar16 = 0;
    uVar18 = 0x3f800000;
    if (lVar7 == 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0;
    }
    else {
      uVar17 = 0x3f800000;
      uVar15 = 0;
      if (*(ulong *)(lVar7 + 0x18) != 0) {
        if ((*(ulong *)(lVar7 + 0x18) & 0xffffffff) <= unaff_x25) goto LAB_077544c8;
        lVar7 = lVar7 + unaff_x25 * 0x10;
        uVar15 = *(undefined4 *)(lVar7 + 0x20);
        uVar16 = *(undefined4 *)(lVar7 + 0x24);
        uVar17 = *(undefined4 *)(lVar7 + 0x28);
        uVar18 = *(undefined4 *)(lVar7 + 0x2c);
      }
    }
    if (*(long *)(unaff_x19 + 0x98) == 0) break;
    if (*(uint *)(*(long *)(unaff_x19 + 0x98) + 0x18) <= unaff_x25) goto LAB_077544c8;
    if (*(long *)(unaff_x19 + 0x90) == 0) break;
    if (*(uint *)(*(long *)(unaff_x19 + 0x90) + 0x18) <= unaff_x25) goto LAB_077544c8;
    fVar11 = (float)FUN_077702c4(*(undefined4 *)(lVar6 + 0x20),fVar12,fVar13,fVar14,uVar15,uVar16,
                                 uVar17,uVar18,uVar3 & 1,0);
    if (unaff_x27 == 0) break;
    uVar3 = *(uint *)(unaff_x27 + 0x18);
    if (0 < (int)uVar3) {
      uVar9 = 0;
      do {
        if (uVar3 <= uVar9) goto LAB_077544c8;
        uVar3 = *(uint *)(unaff_x27 + (long)(int)uVar9 * 4 + 0x20);
        if (*(uint *)(unaff_x24 + 0x18) <= uVar3) goto LAB_077544c8;
        puVar8 = (uint *)(unaff_x24 + (long)(int)uVar3 * 4 + 0x20);
        if (*puVar8 == 0xffffffff) {
          *puVar8 = (uint)unaff_x25;
          pfVar2 = (float *)(unaff_x23 + (long)(int)uVar3 * 8);
          iVar1 = uVar3 + iStack0000000000000088;
          FUN_060f6f5c(fVar11 + fVar13 * *pfVar2,fVar12 + fVar14 * pfVar2[1],&stack0x00000070,iVar1,
                       *(undefined8 *)PTR_DAT_09f32858);
          if (unaff_w26 == 1) {
            FUN_060f629c((float)unaff_s12,&stack0x00000060,iVar1,*(undefined8 *)PTR_DAT_09f32860);
          }
        }
        if (*(uint *)(unaff_x24 + 0x18) <= uVar3) goto LAB_077544c8;
        uVar3 = *(uint *)(unaff_x27 + 0x18);
        uVar9 = uVar9 + 1;
        unaff_w21 = unaff_w21 | unaff_x25 != *puVar8;
      } while ((int)uVar9 < (int)uVar3);
    }
    unaff_x25 = unaff_x25 + 1;
    if (*(long *)(unaff_x19 + 0x80) == 0) break;
    if ((long)*(int *)(*(long *)(unaff_x19 + 0x80) + 0x18) <= (long)unaff_x25) {
      if ((1 < in_stack_00000048._4_4_) && (((unaff_w21 ^ 1) & 1) == 0)) {
        uVar4 = FUN_078a7764(*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_09f31e00,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c33b0(uVar4,0);
      }
      if (4 < in_stack_00000048._4_4_) {
        in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,in_stack_00000030);
        uVar4 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000050);
        uVar4 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f31e08,uVar4,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c652c(uVar4,0);
      }
      return;
    }
    lVar6 = *(long *)(unaff_x19 + 0xd0);
    if (lVar6 == 0) {
      if (in_stack_00000038 == 0) break;
      unaff_x27 = FUN_094f934c(in_stack_00000038,unaff_x25 & 0xffffffff,0);
    }
    else {
      if (*(uint *)(lVar6 + 0x18) <= unaff_x25) goto LAB_077544c8;
      lVar6 = *(long *)(lVar6 + unaff_x25 * 8 + 0x20);
      if (lVar6 == 0) break;
      unaff_x27 = *(long *)(lVar6 + 0x10);
    }
    lVar6 = *(long *)(unaff_x19 + 0xa8);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x25) goto LAB_077544c8;
    lVar7 = *(long *)(unaff_x19 + 0x80);
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x25) goto LAB_077544c8;
    unaff_s12 = *(int *)(lVar6 + unaff_x25 * 4 + 0x20);
    uVar3 = *(uint *)(lVar7 + unaff_x25 * 4 + 0x20);
    if (4 < in_stack_00000048._4_4_) {
      uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
      uStack000000000000008c = (undefined4)unaff_x25;
      uVar4 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),(long)&stack0x00000088 + 4
                                );
      lVar6 = *(long *)(unaff_x19 + 0x90);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x25) goto LAB_077544c8;
      lVar6 = lVar6 + unaff_x25 * 0x10;
      in_stack_00000058 = *(undefined8 *)(lVar6 + 0x28);
      in_stack_00000050 = *(undefined8 *)(lVar6 + 0x20);
      uVar5 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f222e0,&stack0x00000050);
      uVar4 = FUN_078b5b40(*(undefined8 *)PTR_DAT_09f31df8,uVar10,uVar4,uVar5,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar4,0);
    }
    lVar6 = *(long *)(unaff_x19 + 0xb0);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x25) goto LAB_077544c8;
    if (in_stack_00000040 == 0) break;
    param_3 = *(undefined8 *)(lVar6 + unaff_x25 * 8 + 0x20);
    param_2 = (ulong)uVar3;
    param_4 = 0;
    param_1 = in_stack_00000040;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


