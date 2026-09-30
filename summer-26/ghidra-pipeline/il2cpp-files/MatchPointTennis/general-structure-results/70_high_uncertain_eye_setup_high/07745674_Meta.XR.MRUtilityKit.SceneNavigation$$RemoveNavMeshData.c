/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$RemoveNavMeshData
ENTRY_POINT: 07745674
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


void Meta_XR_MRUtilityKit_SceneNavigation__RemoveNavMeshData(void)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 uVar18;
  long unaff_x25;
  long unaff_x28;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  long in_stack_00000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000058;
  uint uStack000000000000005c;
  int in_stack_000000c8;
  long in_stack_000000d0;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f1e6a8);
  FUN_04447ba8(PTR_DAT_09f222e0);
  FUN_04447ba8(PTR_DAT_09f31df8);
  FUN_04447ba8(PTR_DAT_09f31e00);
  FUN_04447ba8(PTR_DAT_09f31e08);
  *(undefined1 *)(unaff_x22 + 0x23c) = 1;
  if (((unaff_x25 != 0) && (lVar7 = FUN_0773ab5c(), lVar7 != 0)) &&
     (lVar8 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar7 + 0x18)),
     lVar5 = in_stack_000000d0, iVar4 = in_stack_000000c8, lVar8 != 0)) {
    uVar6 = *(uint *)(lVar8 + 0x18);
    if (0 < (long)((ulong)uVar6 << 0x20)) {
      uVar14 = 0;
      do {
        if (uVar6 <= uVar14) goto LAB_07745b6c;
        *(undefined4 *)(lVar8 + 0x20 + uVar14 * 4) = 0xffffffff;
        uVar14 = uVar14 + 1;
      } while ((long)(int)uVar6 != uVar14);
    }
    if (((unaff_x28 != 0) && (unaff_x19 != 0)) &&
       (lVar12 = *(long *)(unaff_x19 + 0x80), lVar12 != 0)) {
      iStack0000000000000058 = *(int *)(unaff_x28 + 0x1c);
      bVar3 = 0;
      uVar14 = 0;
      do {
        if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar14) {
          if ((1 < iVar4) && (!(bool)(bVar3 ^ 1))) {
            uVar9 = FUN_078a7764(*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_09f31e00,0
                                );
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c33b0(uVar9,0);
          }
          if (4 < iVar4) {
            in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,(int)*(undefined8 *)(lVar7 + 0x18))
            ;
            uVar9 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000040);
            uVar9 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f31e08,uVar9,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar9,0);
          }
          return;
        }
        lVar12 = *(long *)(unaff_x19 + 0xd0);
        if (lVar12 == 0) {
          if (in_stack_00000020 == 0) break;
          lVar12 = FUN_094f934c(in_stack_00000020,uVar14 & 0xffffffff,0);
        }
        else {
          if (*(uint *)(lVar12 + 0x18) <= uVar14) {
LAB_07745b6c:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar12 = *(long *)(lVar12 + uVar14 * 8 + 0x20);
          if (lVar12 == 0) break;
          lVar12 = *(long *)(lVar12 + 0x10);
        }
        lVar13 = *(long *)(unaff_x19 + 0xa8);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_07745b6c;
        lVar15 = *(long *)(unaff_x19 + 0x80);
        if (lVar15 == 0) break;
        if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_07745b6c;
        iVar24 = *(int *)(lVar13 + uVar14 * 4 + 0x20);
        uVar2 = *(undefined4 *)(lVar15 + uVar14 * 4 + 0x20);
        if (4 < iVar4) {
          uVar18 = *(undefined8 *)(unaff_x19 + 0x20);
          uStack000000000000005c = (uint)uVar14;
          uVar9 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                     (long)&stack0x00000058 + 4);
          lVar13 = *(long *)(unaff_x19 + 0x90);
          if (lVar13 == 0) break;
          if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_07745b6c;
          lVar13 = lVar13 + uVar14 * 0x10;
          in_stack_00000048 = *(undefined8 *)(lVar13 + 0x28);
          in_stack_00000040 = *(undefined8 *)(lVar13 + 0x20);
          uVar10 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f222e0,&stack0x00000040);
          uVar9 = FUN_078b5b40(*(undefined8 *)PTR_DAT_09f31df8,uVar18,uVar9,uVar10,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar9,0);
        }
        lVar13 = *(long *)(unaff_x19 + 0xb0);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_07745b6c;
        if (lVar5 == 0) break;
        uVar6 = FUN_0771314c(lVar5,uVar2,*(undefined8 *)(lVar13 + uVar14 * 8 + 0x20),0);
        lVar13 = *(long *)(unaff_x19 + 0x88);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_07745b6c;
        lVar13 = lVar13 + uVar14 * 0x10;
        fVar20 = *(float *)(lVar13 + 0x24);
        fVar21 = *(float *)(lVar13 + 0x28);
        fVar22 = *(float *)(lVar13 + 0x2c);
        if (((*(long *)(unaff_x19 + 0xa0) != 0) &&
            (uVar16 = *(ulong *)(*(long *)(unaff_x19 + 0xa0) + 0x18), uVar16 != 0)) &&
           ((uVar16 & 0xffffffff) <= uVar14)) goto LAB_07745b6c;
        if (*(long *)(unaff_x19 + 0x98) == 0) break;
        if (*(uint *)(*(long *)(unaff_x19 + 0x98) + 0x18) <= uVar14) goto LAB_07745b6c;
        if (*(long *)(unaff_x19 + 0x90) == 0) break;
        if (*(uint *)(*(long *)(unaff_x19 + 0x90) + 0x18) <= uVar14) goto LAB_07745b6c;
        fVar19 = (float)FUN_077702c4(*(undefined4 *)(lVar13 + 0x20),uVar6 & 1,0);
        if (lVar12 == 0) break;
        uVar6 = *(uint *)(lVar12 + 0x18);
        if (0 < (int)uVar6) {
          uVar11 = 0;
          do {
            if (uVar6 <= uVar11) goto LAB_07745b6c;
            uVar6 = *(uint *)(lVar12 + (long)(int)uVar11 * 4 + 0x20);
            if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_07745b6c;
            puVar17 = (uint *)(lVar8 + (long)(int)uVar6 * 4 + 0x20);
            if (*puVar17 == 0xffffffff) {
              *puVar17 = (uint)uVar14;
              if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_07745b6c;
              if (unaff_x21 == 0) goto LAB_07745a84;
              uVar1 = uVar6 + unaff_w23;
              if (*(uint *)(unaff_x21 + 0x18) <= uVar1) goto LAB_07745b6c;
              lVar13 = lVar7 + (long)(int)uVar6 * 8;
              fVar23 = *(float *)(lVar13 + 0x24);
              lVar15 = unaff_x21 + (long)(int)uVar1 * 8;
              *(float *)(lVar15 + 0x20) = fVar19 + fVar21 * *(float *)(lVar13 + 0x20);
              *(float *)(lVar15 + 0x24) = fVar20 + fVar22 * fVar23;
              if (iStack0000000000000058 == 1) {
                if (unaff_x20 == 0) goto LAB_07745a84;
                if (*(uint *)(unaff_x20 + 0x18) <= uVar1) goto LAB_07745b6c;
                *(float *)(unaff_x20 + (long)(int)uVar1 * 4 + 0x20) = (float)iVar24;
              }
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_07745b6c;
            uVar6 = *(uint *)(lVar12 + 0x18);
            uVar11 = uVar11 + 1;
            bVar3 = bVar3 | uVar14 != *puVar17;
          } while ((int)uVar11 < (int)uVar6);
        }
        lVar12 = *(long *)(unaff_x19 + 0x80);
        uVar14 = uVar14 + 1;
        if (lVar12 == 0) break;
      } while( true );
    }
  }
LAB_07745a84:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


