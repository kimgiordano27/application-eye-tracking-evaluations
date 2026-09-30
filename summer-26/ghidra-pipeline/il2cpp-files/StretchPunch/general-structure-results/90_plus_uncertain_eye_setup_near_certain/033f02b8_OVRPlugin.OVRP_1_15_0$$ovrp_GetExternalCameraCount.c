/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraCount
ENTRY_POINT: 033f02b8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraCount(void)

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
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  uint unaff_w24;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  
  do {
    thunk_FUN_01dc4f30();
joined_r0x033f02bc:
    do {
      if (unaff_w22 == 0) {
        uVar9 = *(ulong *)(unaff_x20 + 2);
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = *(ulong *)(unaff_x19 + 2) / uVar9;
        }
        *(ulong *)(unaff_x19 + 2) = *(ulong *)(unaff_x19 + 2) - uVar8 * uVar9;
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
      uVar9 = CONCAT44(unaff_x19[3] - iVar2 * uVar5,unaff_x19[2]);
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar9 / uVar8;
      }
      *(ulong *)(unaff_x19 + 2) = uVar9 - uVar10 * uVar8;
      if (-1 < unaff_w21) {
        return;
      }
      if (unaff_w21 < 0) {
        *unaff_x19 = *unaff_x20;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar9 = *(ulong *)(unaff_x19 + 2);
        uStack0000000000000000 = (undefined4)uVar9;
        uStack0000000000000004 = (undefined4)(uVar9 >> 0x20);
        uVar10 = (ulong)(uint)unaff_x19[1];
        uVar8 = CONCAT44(unaff_x19[1],uStack0000000000000004);
        while( true ) {
          uStack0000000000000004 = (undefined4)uVar8;
          uVar1 = CONCAT44((int)uVar10,uStack0000000000000004);
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
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            uVar11 = *(uint *)(lVar7 + (long)(int)uVar5 * 4 + 0x20);
          }
          else {
            uVar11 = 1000000000;
          }
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar9 = (uVar9 & 0xffffffff) * (ulong)uVar11;
          unaff_w21 = uVar5 + unaff_w21;
          uVar1 = uVar8 * uVar11 + (uVar9 >> 0x20);
          uVar10 = uVar1 >> 0x20;
          uStack0000000000000000 = (undefined4)uVar9;
          if ((-1 < unaff_w21) || (uVar8 = uVar1, uVar11 != unaff_w24)) break;
        }
        uStack0000000000000004 = (undefined4)uVar1;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        *(ulong *)(unaff_x19 + 2) = CONCAT44(uStack0000000000000004,uStack0000000000000000);
        unaff_x19[1] = (int)(uVar1 >> 0x20);
      }
      if (*(int *)(*unaff_x23 + 0xe0) != 0) {
        unaff_w22 = unaff_x19[1];
        goto joined_r0x033f02bc;
      }
      thunk_FUN_01dc4f30();
      unaff_w22 = unaff_x19[1];
    } while (*(int *)(*unaff_x23 + 0xe0) != 0);
  } while( true );
}


