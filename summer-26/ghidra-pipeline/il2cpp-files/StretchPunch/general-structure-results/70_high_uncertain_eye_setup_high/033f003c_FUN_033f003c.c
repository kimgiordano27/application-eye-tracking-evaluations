/*
FUNCTION_NAME: FUN_033f003c
ENTRY_POINT: 033f003c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_033f003c(uint *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined4 local_60;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  
  if ((DAT_044a6b82 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9323);
    DAT_044a6b82 = 1;
  }
  puVar3 = StringLiteral_9323;
  local_60 = 0;
  uStack_5c._0_4_ = 0;
  uStack_5c._4_4_ = 0;
  uStack_54 = 0;
  if ((param_2[3] == 0 && param_2[2] == 0) && param_2[1] == 0) {
    thunk_FUN_01dd295c(StringLiteral_9346);
    uVar7 = thunk_FUN_01de27b8();
    FUN_0337ebbc(uVar7,0);
    uVar8 = thunk_FUN_01dd295c(StringLiteral_9347);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar7,uVar8);
  }
  if ((param_1[3] != 0 || param_1[2] != 0) || param_1[1] != 0) {
    *param_2 = *param_1 & 0x80000000 | *param_2 & 0x7fffffff;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar4 = FUN_033f2530(param_1,param_2);
    if (uVar4 == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      if (*param_1 < *param_2) {
        *param_1 = *param_2;
      }
    }
    else if (-1 < (int)(*param_1 ^ uVar4)) {
      iVar2 = *param_1 - *param_2;
      iVar11 = iVar2 * 0x100 >> 0x18;
      if (0xffffff < iVar2 * 0x100) {
        lVar6 = (long)iVar11;
        do {
          lVar5 = *(long *)puVar3;
          if (lVar6 < 9) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar5 = *(long *)puVar3;
            }
            lVar9 = **(long **)(lVar5 + 0xb8);
            if (lVar9 == 0) {
LAB_033f037c:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if (*(uint *)(lVar9 + 0x18) <= (uint)lVar6) {
LAB_033f0380:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            uVar4 = *(uint *)(lVar9 + lVar6 * 4 + 0x20);
          }
          else {
            uVar4 = 1000000000;
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          lVar9 = lVar6 + -9;
          uVar10 = (ulong)param_2[2] * (ulong)uVar4;
          lVar5 = CONCAT44(param_2[1],param_2[3]) * (ulong)uVar4 + (uVar10 >> 0x20);
          param_2[2] = (uint)uVar10;
          param_2[3] = (uint)lVar5;
          param_2[1] = (uint)((ulong)lVar5 >> 0x20);
          bVar1 = 8 < lVar6;
          lVar6 = lVar9;
        } while (lVar9 != 0 && bVar1);
        iVar11 = 0;
      }
      do {
        if (iVar11 < 0) {
          *param_1 = *param_2;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar12 = *(ulong *)(param_1 + 2);
          local_60 = (undefined4)uVar12;
          uStack_5c._0_4_ = (undefined4)(uVar12 >> 0x20);
          uVar10 = CONCAT44(param_1[1],(undefined4)uStack_5c);
          uVar13 = (ulong)param_1[1];
          while( true ) {
            uStack_5c = uVar10;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar4 = FUN_033f2328(&local_60,iVar11 + 0x1c);
            uVar10 = CONCAT44((int)uVar13,(undefined4)uStack_5c);
            if (uVar4 == 0) break;
            lVar6 = *(long *)puVar3;
            if ((int)uVar4 < 9) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar6 = *(long *)puVar3;
              }
              lVar5 = **(long **)(lVar6 + 0xb8);
              if (lVar5 == 0) goto LAB_033f037c;
              if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_033f0380;
              uVar14 = *(uint *)(lVar5 + (long)(int)uVar4 * 4 + 0x20);
            }
            else {
              uVar14 = 1000000000;
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar12 = (uVar12 & 0xffffffff) * (ulong)uVar14;
            iVar11 = uVar4 + iVar11;
            uVar10 = uStack_5c * uVar14 + (uVar12 >> 0x20);
            uVar13 = uVar10 >> 0x20;
            uStack_5c._4_4_ = (undefined4)(uVar10 >> 0x20);
            local_60 = (undefined4)uVar12;
            if ((-1 < iVar11) || (uVar14 != 1000000000)) break;
          }
          uStack_5c._0_4_ = (undefined4)uVar10;
          uVar7 = CONCAT44((undefined4)uStack_5c,local_60);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          *(undefined8 *)(param_1 + 2) = uVar7;
          param_1[1] = (uint)(uVar10 >> 0x20);
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          uVar4 = param_1[1];
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
        }
        else {
          uVar4 = param_1[1];
        }
        if (uVar4 == 0) {
          uVar12 = *(ulong *)(param_2 + 2);
          uVar10 = 0;
          if (uVar12 != 0) {
            uVar10 = *(ulong *)(param_1 + 2) / uVar12;
          }
          *(ulong *)(param_1 + 2) = *(ulong *)(param_1 + 2) - uVar10 * uVar12;
          return;
        }
        uVar4 = param_2[1];
        uVar14 = param_2[3];
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (uVar14 != 0 || uVar4 != 0) {
          OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(param_1,param_2,iVar11);
          return;
        }
        uVar4 = param_1[1];
        uVar14 = param_2[2];
        uVar10 = (ulong)uVar14;
        param_1[1] = 0;
        iVar2 = 0;
        if (uVar10 != 0) {
          iVar2 = (int)(CONCAT44(uVar4,param_1[3]) / uVar10);
        }
        uVar12 = CONCAT44(param_1[3] - iVar2 * uVar14,param_1[2]);
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar12 / uVar10;
        }
        *(ulong *)(param_1 + 2) = uVar12 - uVar13 * uVar10;
      } while (iVar11 < 0);
    }
  }
  return;
}


