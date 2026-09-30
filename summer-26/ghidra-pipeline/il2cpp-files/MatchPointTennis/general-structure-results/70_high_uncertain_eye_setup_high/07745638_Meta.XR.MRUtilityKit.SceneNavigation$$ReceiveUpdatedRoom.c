/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$ReceiveUpdatedRoom
ENTRY_POINT: 07745638
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__ReceiveUpdatedRoom
               (undefined8 param_1,long param_2,long param_3,long param_4,undefined4 param_5,
               int param_6,long param_7,long param_8)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  long lStack0000000000000020;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000058;
  uint uStack000000000000005c;
  long in_stack_000000c0;
  int in_stack_000000c8;
  long in_stack_000000d0;
  
  lStack0000000000000020 = param_4;
  if ((DAT_0a52323c & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f1e6a8);
    FUN_04447ba8(PTR_DAT_09f222e0);
    FUN_04447ba8(PTR_DAT_09f31df8);
    FUN_04447ba8(PTR_DAT_09f31e00);
    FUN_04447ba8(PTR_DAT_09f31e08);
    DAT_0a52323c = 1;
  }
  if (((in_stack_000000c0 != 0) &&
      (lVar5 = FUN_0773ab5c(in_stack_000000c0,param_5,lStack0000000000000020,0), lVar5 != 0)) &&
     (lVar6 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar5 + 0x18)),
     lVar6 != 0)) {
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (0 < (long)((ulong)uVar4 << 0x20)) {
      uVar12 = 0;
      do {
        if (uVar4 <= uVar12) goto LAB_07745b6c;
        *(undefined4 *)(lVar6 + 0x20 + uVar12 * 4) = 0xffffffff;
        uVar12 = uVar12 + 1;
      } while ((long)(int)uVar4 != uVar12);
    }
    if (((param_2 != 0) && (param_3 != 0)) && (lVar10 = *(long *)(param_3 + 0x80), lVar10 != 0)) {
      iStack0000000000000058 = *(int *)(param_2 + 0x1c);
      bVar3 = 0;
      uVar12 = 0;
      do {
        if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar12) {
          if ((1 < in_stack_000000c8) && (!(bool)(bVar3 ^ 1))) {
            uVar7 = FUN_078a7764(*(undefined8 *)(param_3 + 0x20),*(undefined8 *)PTR_DAT_09f31e00,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c33b0(uVar7,0);
          }
          if (4 < in_stack_000000c8) {
            in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,(int)*(undefined8 *)(lVar5 + 0x18))
            ;
            uVar7 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&stack0x00000040);
            uVar7 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f31e08,uVar7,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar7,0);
          }
          return;
        }
        lVar10 = *(long *)(param_3 + 0xd0);
        if (lVar10 == 0) {
          if (lStack0000000000000020 == 0) break;
          lVar10 = FUN_094f934c(lStack0000000000000020,uVar12 & 0xffffffff,0);
        }
        else {
          if (*(uint *)(lVar10 + 0x18) <= uVar12) {
LAB_07745b6c:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar10 = *(long *)(lVar10 + uVar12 * 8 + 0x20);
          if (lVar10 == 0) break;
          lVar10 = *(long *)(lVar10 + 0x10);
        }
        lVar11 = *(long *)(param_3 + 0xa8);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_07745b6c;
        lVar13 = *(long *)(param_3 + 0x80);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_07745b6c;
        iVar22 = *(int *)(lVar11 + uVar12 * 4 + 0x20);
        uVar2 = *(undefined4 *)(lVar13 + uVar12 * 4 + 0x20);
        if (4 < in_stack_000000c8) {
          uVar16 = *(undefined8 *)(param_3 + 0x20);
          uStack000000000000005c = (uint)uVar12;
          uVar7 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                     (long)&stack0x00000058 + 4);
          lVar11 = *(long *)(param_3 + 0x90);
          if (lVar11 == 0) break;
          if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_07745b6c;
          lVar11 = lVar11 + uVar12 * 0x10;
          in_stack_00000048 = *(undefined8 *)(lVar11 + 0x28);
          in_stack_00000040 = *(undefined8 *)(lVar11 + 0x20);
          uVar8 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f222e0,&stack0x00000040);
          uVar7 = FUN_078b5b40(*(undefined8 *)PTR_DAT_09f31df8,uVar16,uVar7,uVar8,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar7,0);
        }
        lVar11 = *(long *)(param_3 + 0xb0);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_07745b6c;
        if (in_stack_000000d0 == 0) break;
        uVar4 = FUN_0771314c(in_stack_000000d0,uVar2,*(undefined8 *)(lVar11 + uVar12 * 8 + 0x20),0);
        lVar11 = *(long *)(param_3 + 0x88);
        if (lVar11 == 0) break;
        if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_07745b6c;
        lVar11 = lVar11 + uVar12 * 0x10;
        fVar18 = *(float *)(lVar11 + 0x24);
        fVar19 = *(float *)(lVar11 + 0x28);
        fVar20 = *(float *)(lVar11 + 0x2c);
        if (((*(long *)(param_3 + 0xa0) != 0) &&
            (uVar14 = *(ulong *)(*(long *)(param_3 + 0xa0) + 0x18), uVar14 != 0)) &&
           ((uVar14 & 0xffffffff) <= uVar12)) goto LAB_07745b6c;
        if (*(long *)(param_3 + 0x98) == 0) break;
        if (*(uint *)(*(long *)(param_3 + 0x98) + 0x18) <= uVar12) goto LAB_07745b6c;
        if (*(long *)(param_3 + 0x90) == 0) break;
        if (*(uint *)(*(long *)(param_3 + 0x90) + 0x18) <= uVar12) goto LAB_07745b6c;
        fVar17 = (float)FUN_077702c4(*(undefined4 *)(lVar11 + 0x20),uVar4 & 1,0);
        if (lVar10 == 0) break;
        uVar4 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar4) {
          uVar9 = 0;
          do {
            if (uVar4 <= uVar9) goto LAB_07745b6c;
            uVar4 = *(uint *)(lVar10 + (long)(int)uVar9 * 4 + 0x20);
            if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_07745b6c;
            puVar15 = (uint *)(lVar6 + (long)(int)uVar4 * 4 + 0x20);
            if (*puVar15 == 0xffffffff) {
              *puVar15 = (uint)uVar12;
              if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_07745b6c;
              if (param_7 == 0) goto LAB_07745a84;
              uVar1 = uVar4 + param_6;
              if (*(uint *)(param_7 + 0x18) <= uVar1) goto LAB_07745b6c;
              lVar11 = lVar5 + (long)(int)uVar4 * 8;
              fVar21 = *(float *)(lVar11 + 0x24);
              lVar13 = param_7 + (long)(int)uVar1 * 8;
              *(float *)(lVar13 + 0x20) = fVar17 + fVar19 * *(float *)(lVar11 + 0x20);
              *(float *)(lVar13 + 0x24) = fVar18 + fVar20 * fVar21;
              if (iStack0000000000000058 == 1) {
                if (param_8 == 0) goto LAB_07745a84;
                if (*(uint *)(param_8 + 0x18) <= uVar1) goto LAB_07745b6c;
                *(float *)(param_8 + (long)(int)uVar1 * 4 + 0x20) = (float)iVar22;
              }
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_07745b6c;
            uVar4 = *(uint *)(lVar10 + 0x18);
            uVar9 = uVar9 + 1;
            bVar3 = bVar3 | uVar12 != *puVar15;
          } while ((int)uVar9 < (int)uVar4);
        }
        lVar10 = *(long *)(param_3 + 0x80);
        uVar12 = uVar12 + 1;
        if (lVar10 == 0) break;
      } while( true );
    }
  }
LAB_07745a84:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


