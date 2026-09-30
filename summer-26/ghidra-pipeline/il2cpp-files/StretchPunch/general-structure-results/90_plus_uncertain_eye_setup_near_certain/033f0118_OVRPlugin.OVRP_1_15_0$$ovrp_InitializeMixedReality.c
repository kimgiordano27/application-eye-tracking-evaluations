/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_InitializeMixedReality
ENTRY_POINT: 033f0118
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_15_0__ovrp_InitializeMixedReality(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  int iVar9;
  long unaff_x21;
  long *unaff_x23;
  uint unaff_w24;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  
  do {
    if (unaff_x21 < 9) {
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        param_1 = *unaff_x23;
      }
      lVar6 = **(long **)(param_1 + 0xb8);
      if (lVar6 == 0) {
LAB_033f037c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x21) {
LAB_033f0380:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      uVar5 = *(uint *)(lVar6 + unaff_x21 * 4 + 0x20);
    }
    else {
      uVar5 = 1000000000;
    }
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar8 = (ulong)(uint)unaff_x20[2] * (ulong)uVar5;
    lVar6 = CONCAT44(unaff_x20[1],unaff_x20[3]) * (ulong)uVar5 + (uVar8 >> 0x20);
    unaff_x20[2] = (int)uVar8;
    unaff_x20[3] = (int)lVar6;
    unaff_x20[1] = (int)((ulong)lVar6 >> 0x20);
    if (unaff_x21 + -9 == 0 || unaff_x21 < 9) {
      iVar9 = 0;
      do {
        if (iVar9 < 0) {
          *unaff_x19 = *unaff_x20;
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar10 = *(ulong *)(unaff_x19 + 2);
          uStack0000000000000000 = (undefined4)uVar10;
          uStack0000000000000004 = (undefined4)(uVar10 >> 0x20);
          uVar11 = (ulong)(uint)unaff_x19[1];
          uVar8 = CONCAT44(unaff_x19[1],uStack0000000000000004);
          while( true ) {
            uStack0000000000000004 = (undefined4)uVar8;
            uVar1 = CONCAT44((int)uVar11,uStack0000000000000004);
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar5 = FUN_033f2328();
            if (uVar5 == 0) break;
            lVar6 = *unaff_x23;
            if ((int)uVar5 < 9) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar6 = *unaff_x23;
              }
              lVar7 = **(long **)(lVar6 + 0xb8);
              if (lVar7 == 0) goto LAB_033f037c;
              if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_033f0380;
              uVar12 = *(uint *)(lVar7 + (long)(int)uVar5 * 4 + 0x20);
            }
            else {
              uVar12 = 1000000000;
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar10 = (uVar10 & 0xffffffff) * (ulong)uVar12;
            iVar9 = uVar5 + iVar9;
            uVar1 = uVar8 * uVar12 + (uVar10 >> 0x20);
            uVar11 = uVar1 >> 0x20;
            uStack0000000000000000 = (undefined4)uVar10;
            if ((-1 < iVar9) || (uVar8 = uVar1, uVar12 != unaff_w24)) break;
          }
          uStack0000000000000004 = (undefined4)uVar1;
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          *(ulong *)(unaff_x19 + 2) = CONCAT44(uStack0000000000000004,uStack0000000000000000);
          unaff_x19[1] = (int)(uVar1 >> 0x20);
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          iVar2 = unaff_x19[1];
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
        }
        else {
          iVar2 = unaff_x19[1];
        }
        if (iVar2 == 0) {
          uVar10 = *(ulong *)(unaff_x20 + 2);
          uVar8 = 0;
          if (uVar10 != 0) {
            uVar8 = *(ulong *)(unaff_x19 + 2) / uVar10;
          }
          *(ulong *)(unaff_x19 + 2) = *(ulong *)(unaff_x19 + 2) - uVar8 * uVar10;
          return;
        }
        iVar2 = unaff_x20[1];
        iVar3 = unaff_x20[3];
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (iVar3 != 0 || iVar2 != 0) {
          OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose();
          return;
        }
        uVar4 = unaff_x19[1];
        uVar5 = unaff_x20[2];
        uVar8 = (ulong)uVar5;
        unaff_x19[1] = 0;
        iVar2 = 0;
        if (uVar8 != 0) {
          iVar2 = (int)(CONCAT44(uVar4,unaff_x19[3]) / uVar8);
        }
        uVar10 = CONCAT44(unaff_x19[3] - iVar2 * uVar5,unaff_x19[2]);
        uVar11 = 0;
        if (uVar8 != 0) {
          uVar11 = uVar10 / uVar8;
        }
        *(ulong *)(unaff_x19 + 2) = uVar10 - uVar11 * uVar8;
        if (-1 < iVar9) {
          return;
        }
      } while( true );
    }
    param_1 = *unaff_x23;
    unaff_x21 = unaff_x21 + -9;
  } while( true );
}


