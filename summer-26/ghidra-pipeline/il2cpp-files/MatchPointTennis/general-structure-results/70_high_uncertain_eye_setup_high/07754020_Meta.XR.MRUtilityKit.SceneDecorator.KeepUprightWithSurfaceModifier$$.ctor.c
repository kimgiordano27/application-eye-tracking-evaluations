/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.KeepUprightWithSurfaceModifier$$.ctor
ENTRY_POINT: 07754020
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


void Meta_XR_MRUtilityKit_SceneDecorator_KeepUprightWithSurfaceModifier___ctor(void)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x19;
  uint *puVar16;
  long unaff_x23;
  long unaff_x27;
  uint uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  undefined1 auVar28 [12];
  long in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  int iStack0000000000000088;
  uint uStack000000000000008c;
  int in_stack_00000128;
  long in_stack_00000130;
  
  puVar5 = PTR_DAT_09f1e6a8;
  if (unaff_x23 != 0) {
    auVar28 = FUN_07748b04();
    lVar9 = FUN_04447c90(*(undefined8 *)puVar5);
    lVar7 = in_stack_00000130;
    iVar6 = in_stack_00000128;
    if (lVar9 != 0) {
      uVar8 = *(uint *)(lVar9 + 0x18);
      if (0 < (long)((ulong)uVar8 << 0x20)) {
        uVar14 = 0;
        do {
          if (uVar8 <= uVar14) goto LAB_077544c8;
          *(undefined4 *)(lVar9 + 0x20 + uVar14 * 4) = 0xffffffff;
          uVar14 = uVar14 + 1;
        } while ((long)(int)uVar8 != uVar14);
      }
      if (((unaff_x27 != 0) && (unaff_x19 != 0)) &&
         (lVar12 = *(long *)(unaff_x19 + 0x80), lVar12 != 0)) {
        iVar3 = *(int *)(unaff_x27 + 0x1c);
        bVar4 = 0;
        uVar14 = 0;
        do {
          if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar14) {
            if ((1 < iVar6) && (!(bool)(bVar4 ^ 1))) {
              uVar10 = FUN_078a7764(*(undefined8 *)(unaff_x19 + 0x20),
                                    *(undefined8 *)PTR_DAT_09f31e00,0);
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
              }
              FUN_094c33b0(uVar10,0);
            }
            if (4 < iVar6) {
              in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,auVar28._8_4_);
              uVar10 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000050)
              ;
              uVar10 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f31e08,uVar10,0);
              if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
              }
              FUN_094c652c(uVar10,0);
            }
            return;
          }
          lVar12 = *(long *)(unaff_x19 + 0xd0);
          if (lVar12 == 0) {
            if (in_stack_00000038 == 0) break;
            lVar12 = FUN_094f934c(in_stack_00000038,uVar14 & 0xffffffff,0);
          }
          else {
            if (*(uint *)(lVar12 + 0x18) <= uVar14) {
LAB_077544c8:
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            lVar12 = *(long *)(lVar12 + uVar14 * 8 + 0x20);
            if (lVar12 == 0) break;
            lVar12 = *(long *)(lVar12 + 0x10);
          }
          lVar13 = *(long *)(unaff_x19 + 0xa8);
          if (lVar13 == 0) break;
          if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_077544c8;
          lVar15 = *(long *)(unaff_x19 + 0x80);
          if (lVar15 == 0) break;
          if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_077544c8;
          iVar27 = *(int *)(lVar13 + uVar14 * 4 + 0x20);
          uVar24 = *(undefined4 *)(lVar15 + uVar14 * 4 + 0x20);
          if (4 < iVar6) {
            uVar18 = *(undefined8 *)(unaff_x19 + 0x20);
            uStack000000000000008c = (uint)uVar14;
            uVar10 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                        (long)&stack0x00000088 + 4);
            lVar13 = *(long *)(unaff_x19 + 0x90);
            if (lVar13 == 0) break;
            if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_077544c8;
            lVar13 = lVar13 + uVar14 * 0x10;
            in_stack_00000058 = *(undefined8 *)(lVar13 + 0x28);
            in_stack_00000050 = *(undefined8 *)(lVar13 + 0x20);
            uVar11 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f222e0,&stack0x00000050);
            uVar10 = FUN_078b5b40(*(undefined8 *)PTR_DAT_09f31df8,uVar18,uVar10,uVar11,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar10,0);
          }
          lVar13 = *(long *)(unaff_x19 + 0xb0);
          if (lVar13 == 0) break;
          if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_077544c8;
          if (lVar7 == 0) break;
          uVar8 = FUN_0771314c(lVar7,uVar24,*(undefined8 *)(lVar13 + uVar14 * 8 + 0x20),0);
          lVar13 = *(long *)(unaff_x19 + 0x88);
          if (lVar13 == 0) break;
          if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_077544c8;
          lVar13 = lVar13 + uVar14 * 0x10;
          lVar15 = *(long *)(unaff_x19 + 0xa0);
          fVar20 = *(float *)(lVar13 + 0x24);
          fVar21 = *(float *)(lVar13 + 0x28);
          fVar22 = *(float *)(lVar13 + 0x2c);
          uVar24 = 0;
          uVar26 = 0x3f800000;
          if (lVar15 == 0) {
            uVar25 = 0x3f800000;
            uVar23 = 0;
          }
          else {
            uVar25 = 0x3f800000;
            uVar23 = 0;
            if (*(ulong *)(lVar15 + 0x18) != 0) {
              if ((*(ulong *)(lVar15 + 0x18) & 0xffffffff) <= uVar14) goto LAB_077544c8;
              lVar15 = lVar15 + uVar14 * 0x10;
              uVar23 = *(undefined4 *)(lVar15 + 0x20);
              uVar24 = *(undefined4 *)(lVar15 + 0x24);
              uVar25 = *(undefined4 *)(lVar15 + 0x28);
              uVar26 = *(undefined4 *)(lVar15 + 0x2c);
            }
          }
          if (*(long *)(unaff_x19 + 0x98) == 0) break;
          if (*(uint *)(*(long *)(unaff_x19 + 0x98) + 0x18) <= uVar14) goto LAB_077544c8;
          if (*(long *)(unaff_x19 + 0x90) == 0) break;
          if (*(uint *)(*(long *)(unaff_x19 + 0x90) + 0x18) <= uVar14) goto LAB_077544c8;
          fVar19 = (float)FUN_077702c4(*(undefined4 *)(lVar13 + 0x20),fVar20,fVar21,fVar22,uVar23,
                                       uVar24,uVar25,uVar26,uVar8 & 1,0);
          if (lVar12 == 0) break;
          uVar8 = *(uint *)(lVar12 + 0x18);
          if (0 < (int)uVar8) {
            uVar17 = 0;
            do {
              if (uVar8 <= uVar17) goto LAB_077544c8;
              uVar8 = *(uint *)(lVar12 + (long)(int)uVar17 * 4 + 0x20);
              if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_077544c8;
              puVar16 = (uint *)(lVar9 + (long)(int)uVar8 * 4 + 0x20);
              if (*puVar16 == 0xffffffff) {
                *puVar16 = (uint)uVar14;
                pfVar2 = (float *)(auVar28._0_8_ + (long)(int)uVar8 * 8);
                iVar1 = uVar8 + iStack0000000000000088;
                FUN_060f6f5c(fVar19 + fVar21 * *pfVar2,fVar20 + fVar22 * pfVar2[1],&stack0x00000070,
                             iVar1,*(undefined8 *)PTR_DAT_09f32858);
                if (iVar3 == 1) {
                  FUN_060f629c((float)iVar27,&stack0x00000060,iVar1,*(undefined8 *)PTR_DAT_09f32860)
                  ;
                }
              }
              if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_077544c8;
              uVar8 = *(uint *)(lVar12 + 0x18);
              uVar17 = uVar17 + 1;
              bVar4 = bVar4 | uVar14 != *puVar16;
            } while ((int)uVar17 < (int)uVar8);
          }
          lVar12 = *(long *)(unaff_x19 + 0x80);
          uVar14 = uVar14 + 1;
        } while (lVar12 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


