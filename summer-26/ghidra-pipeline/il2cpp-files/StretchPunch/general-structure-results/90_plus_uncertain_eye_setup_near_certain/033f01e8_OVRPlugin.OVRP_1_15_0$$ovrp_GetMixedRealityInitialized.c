/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetMixedRealityInitialized
ENTRY_POINT: 033f01e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetMixedRealityInitialized(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  uint unaff_w24;
  ulong unaff_x25;
  ulong uVar8;
  uint uVar9;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  uVar7 = CONCAT44(in_stack_00000008,uStack0000000000000004);
  do {
    lVar5 = *unaff_x23;
    if ((int)param_1 < 9) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar5 = *unaff_x23;
      }
      lVar6 = **(long **)(lVar5 + 0xb8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(lVar6 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      uVar9 = *(uint *)(lVar6 + (long)(int)param_1 * 4 + 0x20);
    }
    else {
      uVar9 = 1000000000;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    unaff_x25 = (unaff_x25 & 0xffffffff) * (ulong)uVar9;
    unaff_w21 = param_1 + unaff_w21;
    uVar7 = uVar7 * uVar9 + (unaff_x25 >> 0x20);
    uVar8 = uVar7 >> 0x20;
    uStack0000000000000000 = (undefined4)unaff_x25;
    if ((unaff_w21 < 0) && (uVar9 == unaff_w24)) goto LAB_033f01c8;
    do {
      uStack0000000000000004 = (undefined4)uVar7;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      *(ulong *)(unaff_x19 + 2) = CONCAT44(uStack0000000000000004,uStack0000000000000000);
      unaff_x19[1] = (int)uVar8;
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
          uVar8 = *(ulong *)(unaff_x20 + 2);
          uVar7 = 0;
          if (uVar8 != 0) {
            uVar7 = *(ulong *)(unaff_x19 + 2) / uVar8;
          }
          *(ulong *)(unaff_x19 + 2) = *(ulong *)(unaff_x19 + 2) - uVar7 * uVar8;
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
        uVar9 = unaff_x20[2];
        uVar7 = (ulong)uVar9;
        unaff_x19[1] = 0;
        iVar1 = 0;
        if (uVar7 != 0) {
          iVar1 = (int)(CONCAT44(uVar3,unaff_x19[3]) / uVar7);
        }
        uVar8 = CONCAT44(unaff_x19[3] - iVar1 * uVar9,unaff_x19[2]);
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        *(ulong *)(unaff_x19 + 2) = uVar8 - uVar4 * uVar7;
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
      uVar7 = CONCAT44(unaff_x19[1],uStack0000000000000004);
      uVar8 = (ulong)(uint)unaff_x19[1];
LAB_033f01c8:
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      param_1 = FUN_033f2328();
    } while (param_1 == 0);
  } while( true );
}


