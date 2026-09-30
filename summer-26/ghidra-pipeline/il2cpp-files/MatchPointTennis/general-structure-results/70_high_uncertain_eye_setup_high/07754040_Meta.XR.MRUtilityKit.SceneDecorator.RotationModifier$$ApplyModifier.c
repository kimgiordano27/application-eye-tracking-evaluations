/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.RotationModifier$$ApplyModifier
ENTRY_POINT: 07754040
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


void Meta_XR_MRUtilityKit_SceneDecorator_RotationModifier__ApplyModifier
               (undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint *puVar15;
  long unaff_x23;
  long unaff_x27;
  uint uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  long in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  int iStack0000000000000088;
  uint uStack000000000000008c;
  int in_stack_00000128;
  long in_stack_00000130;
  
  lVar8 = FUN_04447c90(*unaff_x20);
  lVar6 = in_stack_00000130;
  iVar5 = in_stack_00000128;
  if (lVar8 != 0) {
    uVar7 = *(uint *)(lVar8 + 0x18);
    if (0 < (long)((ulong)uVar7 << 0x20)) {
      uVar13 = 0;
      do {
        if (uVar7 <= uVar13) goto LAB_077544c8;
        *(undefined4 *)(lVar8 + 0x20 + uVar13 * 4) = 0xffffffff;
        uVar13 = uVar13 + 1;
      } while ((long)(int)uVar7 != uVar13);
    }
    if (((unaff_x27 != 0) && (unaff_x19 != 0)) &&
       (lVar11 = *(long *)(unaff_x19 + 0x80), lVar11 != 0)) {
      iVar3 = *(int *)(unaff_x27 + 0x1c);
      bVar4 = 0;
      uVar13 = 0;
      do {
        if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar13) {
          if ((1 < iVar5) && (!(bool)(bVar4 ^ 1))) {
            uVar9 = FUN_078a7764(*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_09f31e00,0
                                );
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c33b0(uVar9,0);
          }
          if (4 < iVar5) {
            in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,param_2);
            uVar9 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000050);
            uVar9 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f31e08,uVar9,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar9,0);
          }
          return;
        }
        lVar11 = *(long *)(unaff_x19 + 0xd0);
        if (lVar11 == 0) {
          if (in_stack_00000038 == 0) break;
          lVar11 = FUN_094f934c(in_stack_00000038,uVar13 & 0xffffffff,0);
        }
        else {
          if (*(uint *)(lVar11 + 0x18) <= uVar13) {
LAB_077544c8:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar11 = *(long *)(lVar11 + uVar13 * 8 + 0x20);
          if (lVar11 == 0) break;
          lVar11 = *(long *)(lVar11 + 0x10);
        }
        lVar12 = *(long *)(unaff_x19 + 0xa8);
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_077544c8;
        lVar14 = *(long *)(unaff_x19 + 0x80);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_077544c8;
        iVar26 = *(int *)(lVar12 + uVar13 * 4 + 0x20);
        uVar23 = *(undefined4 *)(lVar14 + uVar13 * 4 + 0x20);
        if (4 < iVar5) {
          uVar17 = *(undefined8 *)(unaff_x19 + 0x20);
          uStack000000000000008c = (uint)uVar13;
          uVar9 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                     (long)&stack0x00000088 + 4);
          lVar12 = *(long *)(unaff_x19 + 0x90);
          if (lVar12 == 0) break;
          if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_077544c8;
          lVar12 = lVar12 + uVar13 * 0x10;
          in_stack_00000058 = *(undefined8 *)(lVar12 + 0x28);
          in_stack_00000050 = *(undefined8 *)(lVar12 + 0x20);
          uVar10 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f222e0,&stack0x00000050);
          uVar9 = FUN_078b5b40(*(undefined8 *)PTR_DAT_09f31df8,uVar17,uVar9,uVar10,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar9,0);
        }
        lVar12 = *(long *)(unaff_x19 + 0xb0);
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_077544c8;
        if (lVar6 == 0) break;
        uVar7 = FUN_0771314c(lVar6,uVar23,*(undefined8 *)(lVar12 + uVar13 * 8 + 0x20),0);
        lVar12 = *(long *)(unaff_x19 + 0x88);
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_077544c8;
        lVar12 = lVar12 + uVar13 * 0x10;
        lVar14 = *(long *)(unaff_x19 + 0xa0);
        fVar19 = *(float *)(lVar12 + 0x24);
        fVar20 = *(float *)(lVar12 + 0x28);
        fVar21 = *(float *)(lVar12 + 0x2c);
        uVar23 = 0;
        uVar25 = 0x3f800000;
        if (lVar14 == 0) {
          uVar24 = 0x3f800000;
          uVar22 = 0;
        }
        else {
          uVar24 = 0x3f800000;
          uVar22 = 0;
          if (*(ulong *)(lVar14 + 0x18) != 0) {
            if ((*(ulong *)(lVar14 + 0x18) & 0xffffffff) <= uVar13) goto LAB_077544c8;
            lVar14 = lVar14 + uVar13 * 0x10;
            uVar22 = *(undefined4 *)(lVar14 + 0x20);
            uVar23 = *(undefined4 *)(lVar14 + 0x24);
            uVar24 = *(undefined4 *)(lVar14 + 0x28);
            uVar25 = *(undefined4 *)(lVar14 + 0x2c);
          }
        }
        if (*(long *)(unaff_x19 + 0x98) == 0) break;
        if (*(uint *)(*(long *)(unaff_x19 + 0x98) + 0x18) <= uVar13) goto LAB_077544c8;
        if (*(long *)(unaff_x19 + 0x90) == 0) break;
        if (*(uint *)(*(long *)(unaff_x19 + 0x90) + 0x18) <= uVar13) goto LAB_077544c8;
        fVar18 = (float)FUN_077702c4(*(undefined4 *)(lVar12 + 0x20),fVar19,fVar20,fVar21,uVar22,
                                     uVar23,uVar24,uVar25,uVar7 & 1,0);
        if (lVar11 == 0) break;
        uVar7 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar7) {
          uVar16 = 0;
          do {
            if (uVar7 <= uVar16) goto LAB_077544c8;
            uVar7 = *(uint *)(lVar11 + (long)(int)uVar16 * 4 + 0x20);
            if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_077544c8;
            puVar15 = (uint *)(lVar8 + (long)(int)uVar7 * 4 + 0x20);
            if (*puVar15 == 0xffffffff) {
              *puVar15 = (uint)uVar13;
              pfVar2 = (float *)(unaff_x23 + (long)(int)uVar7 * 8);
              iVar1 = uVar7 + iStack0000000000000088;
              FUN_060f6f5c(fVar18 + fVar20 * *pfVar2,fVar19 + fVar21 * pfVar2[1],&stack0x00000070,
                           iVar1,*(undefined8 *)PTR_DAT_09f32858);
              if (iVar3 == 1) {
                FUN_060f629c((float)iVar26,&stack0x00000060,iVar1,*(undefined8 *)PTR_DAT_09f32860);
              }
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_077544c8;
            uVar7 = *(uint *)(lVar11 + 0x18);
            uVar16 = uVar16 + 1;
            bVar4 = bVar4 | uVar13 != *puVar15;
          } while ((int)uVar16 < (int)uVar7);
        }
        lVar11 = *(long *)(unaff_x19 + 0x80);
        uVar13 = uVar13 + 1;
      } while (lVar11 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


