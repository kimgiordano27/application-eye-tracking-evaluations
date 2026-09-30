/*
FUNCTION_NAME: UnityEngine.Quaternion$$.cctor
ENTRY_POINT: 068c624c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Quaternion___cctor(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  ulong unaff_x24;
  long *unaff_x25;
  int unaff_w27;
  undefined8 *unaff_x28;
  long unaff_x29;
  float fVar10;
  float unaff_s8;
  undefined8 in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  
  while( true ) {
    uStack0000000000000018 = param_1[1];
    uStack0000000000000010 = *param_1;
    uStack0000000000000020 = param_1[2];
    uStack0000000000000038 = *(undefined4 *)(param_1 + 5);
    uStack0000000000000030 = (undefined4)param_1[4];
    uStack0000000000000034 = (undefined4)((ulong)param_1[4] >> 0x20);
    uStack0000000000000028 = (undefined4)param_1[3];
    uStack000000000000002c = (undefined4)((ulong)param_1[3] >> 0x20);
    lVar4 = FUN_06a634a0(&stack0x00000010,0);
    if (lVar4 == 0) break;
    FUN_069d3b50(lVar4,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x25);
    }
    uVar3 = FUN_069d69b8();
    if ((((unaff_w21 & uVar3 & 1) != 0) && (0 < unaff_w27)) &&
       ((unaff_w27 < *(int *)(unaff_x20 + 0x3e4) ||
        ((unaff_w27 == *(int *)(unaff_x20 + 0x3e4) &&
         (fVar10 = (float)FUN_06a6357c(&stack0x00000010,0), unaff_s8 <= fVar10)))))) {
LAB_068c63c0:
      plVar7 = (long *)FUN_068b3948();
      puVar2 = OVRPlugin_OVRP_1_19_0_TypeInfo;
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_068c6408;
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_068c63f0;
    }
    lVar4 = *(long *)(unaff_x20 + 0x30);
    uVar5 = FUN_06a634a0(&stack0x00000010,0);
    if (lVar4 == 0) break;
    uVar6 = FUN_06858f90(lVar4,uVar5,&stack0x00000008,0);
    if ((uVar6 & 1) == 0) goto LAB_068c63c0;
    uVar6 = FUN_042e4df8();
    if ((uVar6 & 1) == 0) {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) break;
      uVar3 = *(uint *)(unaff_x19 + 0x18);
      if (uVar3 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar3 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar3 * 8 + 0x20) = in_stack_00000008;
      }
      else {
        FUN_042e4a64();
      }
      lVar4 = *(long *)(unaff_x20 + 0x398);
      if (lVar4 == 0) break;
      unaff_x28[1] = uStack0000000000000018;
      *unaff_x28 = uStack0000000000000010;
      unaff_x28[3] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      unaff_x28[2] = uStack0000000000000020;
      puVar2 = System_IO_Path_<>c_TypeInfo;
      *(ulong *)((long)unaff_x28 + 0x24) = CONCAT44(uStack0000000000000038,uStack0000000000000034);
      *(ulong *)((long)unaff_x28 + 0x1c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      FUN_052550dc(lVar4,in_stack_00000008,&stack0x00000090,*(undefined8 *)puVar2);
      if (*(char *)(unaff_x20 + 0x2e0) != '\0') goto LAB_068c63c0;
    }
    unaff_x24 = unaff_x24 + 1;
    unaff_x29 = unaff_x29 + 0x2c;
    if ((long)*(int *)(unaff_x20 + 0x3c8) <= (long)unaff_x24) goto LAB_068c63c0;
    lVar4 = *(long *)(unaff_x20 + 0x3c0);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    param_1 = (undefined8 *)(lVar4 + unaff_x29);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar9 = piVar9 + 4;
    if (uVar6 == 0) break;
LAB_068c63f0:
    if (*(long *)(piVar9 + -2) == *(long *)OVRPlugin_OVRP_1_19_0_TypeInfo) {
      puVar8 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_068c6424;
    }
  }
LAB_068c6408:
  puVar8 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)OVRPlugin_OVRP_1_19_0_TypeInfo,0);
LAB_068c6424:
  uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_PassData_TypeInfo +
                0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar4 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar4 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_068c64a8;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar2,3);
LAB_068c64a8:
    (*(code *)*puVar8)(plVar7);
    iVar1 = *(int *)(unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0595236c(*(undefined8 *)(unaff_x19 + 0x10),0,iVar1,0);
    }
    FUN_042e4c6c();
  }
  return;
}


