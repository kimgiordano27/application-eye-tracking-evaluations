/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$BuildSceneNavMesh
ENTRY_POINT: 07745620
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


void Meta_XR_MRUtilityKit_SceneNavigation__BuildSceneNavMesh
               (undefined8 param_1,long param_2,long param_3,long param_4,undefined4 param_5,
               int param_6,long param_7,long param_8,long param_9,int param_10,long param_11)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_64;
  
  if ((DAT_0a52323c & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f1e6a8);
    FUN_04447ba8(PTR_DAT_09f222e0);
    FUN_04447ba8(PTR_DAT_09f31df8);
    FUN_04447ba8(PTR_DAT_09f31e00);
    FUN_04447ba8(PTR_DAT_09f31e08);
    DAT_0a52323c = 1;
  }
  if (((param_9 != 0) && (lVar6 = FUN_0773ab5c(param_9,param_5,param_4,0), lVar6 != 0)) &&
     (lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(lVar6 + 0x18)),
     lVar7 != 0)) {
    uVar5 = *(uint *)(lVar7 + 0x18);
    if (0 < (long)((ulong)uVar5 << 0x20)) {
      uVar13 = 0;
      do {
        if (uVar5 <= uVar13) goto LAB_07745b6c;
        *(undefined4 *)(lVar7 + 0x20 + uVar13 * 4) = 0xffffffff;
        uVar13 = uVar13 + 1;
      } while ((long)(int)uVar5 != uVar13);
    }
    if (((param_2 != 0) && (param_3 != 0)) && (lVar11 = *(long *)(param_3 + 0x80), lVar11 != 0)) {
      iVar2 = *(int *)(param_2 + 0x1c);
      bVar4 = 0;
      uVar13 = 0;
      do {
        if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar13) {
          if ((1 < param_10) && (!(bool)(bVar4 ^ 1))) {
            uVar8 = FUN_078a7764(*(undefined8 *)(param_3 + 0x20),*(undefined8 *)PTR_DAT_09f31e00,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c33b0(uVar8,0);
          }
          if (4 < param_10) {
            local_80 = CONCAT44(local_80._4_4_,(int)*(undefined8 *)(lVar6 + 0x18));
            uVar8 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&local_80);
            uVar8 = FUN_078ab14c(*(undefined8 *)PTR_DAT_09f31e08,uVar8,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar8,0);
          }
          return;
        }
        lVar11 = *(long *)(param_3 + 0xd0);
        if (lVar11 == 0) {
          if (param_4 == 0) break;
          lVar11 = FUN_094f934c(param_4,uVar13 & 0xffffffff,0);
        }
        else {
          if (*(uint *)(lVar11 + 0x18) <= uVar13) {
LAB_07745b6c:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar11 = *(long *)(lVar11 + uVar13 * 8 + 0x20);
          if (lVar11 == 0) break;
          lVar11 = *(long *)(lVar11 + 0x10);
        }
        lVar12 = *(long *)(param_3 + 0xa8);
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_07745b6c;
        lVar14 = *(long *)(param_3 + 0x80);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_07745b6c;
        iVar23 = *(int *)(lVar12 + uVar13 * 4 + 0x20);
        uVar3 = *(undefined4 *)(lVar14 + uVar13 * 4 + 0x20);
        if (4 < param_10) {
          uVar17 = *(undefined8 *)(param_3 + 0x20);
          local_64 = (uint)uVar13;
          uVar8 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),&local_64);
          lVar12 = *(long *)(param_3 + 0x90);
          if (lVar12 == 0) break;
          if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_07745b6c;
          lVar12 = lVar12 + uVar13 * 0x10;
          uStack_78 = *(undefined8 *)(lVar12 + 0x28);
          local_80 = *(undefined8 *)(lVar12 + 0x20);
          uVar9 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f222e0,&local_80);
          uVar8 = FUN_078b5b40(*(undefined8 *)PTR_DAT_09f31df8,uVar17,uVar8,uVar9,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar8,0);
        }
        lVar12 = *(long *)(param_3 + 0xb0);
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_07745b6c;
        if (param_11 == 0) break;
        uVar5 = FUN_0771314c(param_11,uVar3,*(undefined8 *)(lVar12 + uVar13 * 8 + 0x20),0);
        lVar12 = *(long *)(param_3 + 0x88);
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_07745b6c;
        lVar12 = lVar12 + uVar13 * 0x10;
        fVar19 = *(float *)(lVar12 + 0x24);
        fVar20 = *(float *)(lVar12 + 0x28);
        fVar21 = *(float *)(lVar12 + 0x2c);
        if (((*(long *)(param_3 + 0xa0) != 0) &&
            (uVar15 = *(ulong *)(*(long *)(param_3 + 0xa0) + 0x18), uVar15 != 0)) &&
           ((uVar15 & 0xffffffff) <= uVar13)) goto LAB_07745b6c;
        if (*(long *)(param_3 + 0x98) == 0) break;
        if (*(uint *)(*(long *)(param_3 + 0x98) + 0x18) <= uVar13) goto LAB_07745b6c;
        if (*(long *)(param_3 + 0x90) == 0) break;
        if (*(uint *)(*(long *)(param_3 + 0x90) + 0x18) <= uVar13) goto LAB_07745b6c;
        fVar18 = (float)FUN_077702c4(*(undefined4 *)(lVar12 + 0x20),uVar5 & 1,0);
        if (lVar11 == 0) break;
        uVar5 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar5) {
          uVar10 = 0;
          do {
            if (uVar5 <= uVar10) goto LAB_07745b6c;
            uVar5 = *(uint *)(lVar11 + (long)(int)uVar10 * 4 + 0x20);
            if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_07745b6c;
            puVar16 = (uint *)(lVar7 + (long)(int)uVar5 * 4 + 0x20);
            if (*puVar16 == 0xffffffff) {
              *puVar16 = (uint)uVar13;
              if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_07745b6c;
              if (param_7 == 0) goto LAB_07745a84;
              uVar1 = uVar5 + param_6;
              if (*(uint *)(param_7 + 0x18) <= uVar1) goto LAB_07745b6c;
              lVar12 = lVar6 + (long)(int)uVar5 * 8;
              fVar22 = *(float *)(lVar12 + 0x24);
              lVar14 = param_7 + (long)(int)uVar1 * 8;
              *(float *)(lVar14 + 0x20) = fVar18 + fVar20 * *(float *)(lVar12 + 0x20);
              *(float *)(lVar14 + 0x24) = fVar19 + fVar21 * fVar22;
              if (iVar2 == 1) {
                if (param_8 == 0) goto LAB_07745a84;
                if (*(uint *)(param_8 + 0x18) <= uVar1) goto LAB_07745b6c;
                *(float *)(param_8 + (long)(int)uVar1 * 4 + 0x20) = (float)iVar23;
              }
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_07745b6c;
            uVar5 = *(uint *)(lVar11 + 0x18);
            uVar10 = uVar10 + 1;
            bVar4 = bVar4 | uVar13 != *puVar16;
          } while ((int)uVar10 < (int)uVar5);
        }
        lVar11 = *(long *)(param_3 + 0x80);
        uVar13 = uVar13 + 1;
        if (lVar11 == 0) break;
      } while( true );
    }
  }
LAB_07745a84:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


