/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_UpdateExternalCamera
ENTRY_POINT: 033f0250
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_15_0__ovrp_UpdateExternalCamera(ulong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong in_x9;
  ulong uVar9;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  ulong uVar10;
  uint unaff_w27;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  
  do {
    _uStack0000000000000004 = param_1 * in_x9 + (unaff_x25 >> 0x20);
    uVar10 = _uStack0000000000000004 >> 0x20;
    uStack0000000000000000 = (undefined4)unaff_x25;
    if ((unaff_w21 < 0) && (unaff_w27 == unaff_w24)) goto LAB_033f01c8;
    do {
      uVar5 = CONCAT44(uStack0000000000000004,uStack0000000000000000);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      *(undefined8 *)(unaff_x19 + 2) = uVar5;
      unaff_x19[1] = (int)uVar10;
      do {
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          iVar1 = unaff_x19[1];
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
        }
        else {
          iVar1 = unaff_x19[1];
        }
        if (iVar1 == 0) {
          uVar9 = *(ulong *)(unaff_x20 + 2);
          uVar10 = 0;
          if (uVar9 != 0) {
            uVar10 = *(ulong *)(unaff_x19 + 2) / uVar9;
          }
          *(ulong *)(unaff_x19 + 2) = *(ulong *)(unaff_x19 + 2) - uVar10 * uVar9;
          return;
        }
        iVar1 = unaff_x20[1];
        iVar2 = unaff_x20[3];
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        if (iVar2 != 0 || iVar1 != 0) {
          OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose();
          return;
        }
        uVar3 = unaff_x19[1];
        uVar6 = unaff_x20[2];
        uVar10 = (ulong)uVar6;
        unaff_x19[1] = 0;
        iVar1 = 0;
        if (uVar10 != 0) {
          iVar1 = (int)(CONCAT44(uVar3,unaff_x19[3]) / uVar10);
        }
        uVar9 = CONCAT44(unaff_x19[3] - iVar1 * uVar6,unaff_x19[2]);
        uVar4 = 0;
        if (uVar10 != 0) {
          uVar4 = uVar9 / uVar10;
        }
        *(ulong *)(unaff_x19 + 2) = uVar9 - uVar4 * uVar10;
        if (-1 < unaff_w21) {
          return;
        }
      } while (-1 < unaff_w21);
      *unaff_x19 = *unaff_x20;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      unaff_x25 = *(ulong *)(unaff_x19 + 2);
      uStack0000000000000000 = (undefined4)unaff_x25;
      uStack0000000000000004 = (undefined4)(unaff_x25 >> 0x20);
      _uStack0000000000000004 = CONCAT44(unaff_x19[1],uStack0000000000000004);
      uVar10 = (ulong)(uint)unaff_x19[1];
LAB_033f01c8:
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar6 = FUN_033f2328();
    } while (uVar6 == 0);
    lVar7 = *unaff_x23;
    if ((int)uVar6 < 9) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar7 = *unaff_x23;
      }
      lVar8 = **(long **)(lVar7 + 0xb8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      unaff_w27 = *(uint *)(lVar8 + (long)(int)uVar6 * 4 + 0x20);
    }
    else {
      unaff_w27 = 1000000000;
    }
    param_1 = _uStack0000000000000004;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      param_1 = _uStack0000000000000004;
    }
    in_x9 = (ulong)unaff_w27;
    unaff_x25 = (unaff_x25 & 0xffffffff) * (ulong)unaff_w27;
    unaff_w21 = uVar6 + unaff_w21;
  } while( true );
}


