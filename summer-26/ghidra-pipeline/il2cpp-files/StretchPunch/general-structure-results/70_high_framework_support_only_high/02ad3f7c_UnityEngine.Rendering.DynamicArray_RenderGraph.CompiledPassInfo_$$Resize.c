/*
FUNCTION_NAME: UnityEngine.Rendering.DynamicArray<RenderGraph.CompiledPassInfo>$$Resize
ENTRY_POINT: 02ad3f7c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>__Resize(uint param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000088;
  
  if (param_1 < unaff_w20) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar4 = FUN_033aadfc();
  if ((int)(iVar4 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar10);
  }
  lVar10 = thunk_FUN_01de26bc();
  if (lVar10 != 0) {
    FUN_02ad25dc();
    return;
  }
  lVar10 = thunk_FUN_01de26bc();
  if (lVar10 == 0) {
    plVar6 = (long *)thunk_FUN_01de26bc();
    if (plVar6 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar10 = *(long *)(unaff_x21 + 0x18);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar12 = 0;
      lVar1 = lVar10;
      do {
        if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(lVar1 + 0x20)) {
          in_stack_00000070 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          in_stack_00000068 = 0;
          in_stack_00000060 = 0;
          FUN_0306cacc(&stack0x00000050,*(undefined4 *)(lVar1 + 0x28));
          lVar7 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
            uVar9 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar9,0);
          }
          if (*(uint *)(plVar6 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar6[(long)(int)unaff_w20 + 4] = lVar7;
          thunk_FUN_01e10808(plVar6 + (long)(int)unaff_w20 + 4,lVar7);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar12 = uVar12 + 1;
        lVar1 = lVar1 + 0x30;
      } while (uVar2 != uVar12);
    }
  }
  else {
    iVar4 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar4) {
      puVar11 = *(undefined8 **)(unaff_x21 + 0x18);
      if (puVar11 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar12 = 0;
      puVar3 = puVar11;
      do {
        if (*(uint *)(puVar11 + 3) <= uVar12) goto LAB_02ad4220;
        if (-1 < *(int *)(puVar3 + 4)) {
          in_stack_00000088._4_4_ = *(undefined4 *)(puVar3 + 5);
          thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                             (long)&stack0x00000088 + 4);
          if (*(uint *)(puVar11 + 3) <= uVar12) {
LAB_02ad4220:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          in_stack_00000058 = puVar3[7];
          in_stack_00000050 = puVar3[6];
          in_stack_00000068 = puVar3[9];
          in_stack_00000060 = puVar3[8];
          thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                             &stack0x00000050);
          FUN_0336f7b8();
          if (*(uint *)(lVar10 + 0x18) <= unaff_w20) goto LAB_02ad4220;
          lVar1 = lVar10 + (long)(int)unaff_w20 * 0x10;
          puVar5 = (undefined8 *)(lVar1 + 0x20);
          *(undefined8 *)(lVar1 + 0x28) = 0;
          *puVar5 = 0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01e10808(puVar5,0);
          iVar4 = *(int *)(unaff_x21 + 0x20);
        }
        uVar12 = uVar12 + 1;
        puVar3 = puVar3 + 6;
      } while ((long)uVar12 < (long)iVar4);
    }
  }
  return;
}


