/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$RenderSSAOBeforeShading
ENTRY_POINT: 058a47a8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_Universal_Internal_DeferredLights__RenderSSAOBeforeShading
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  char cVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  byte unaff_w24;
  byte unaff_w25;
  ulong unaff_x26;
  undefined4 unaff_w27;
  undefined8 unaff_x28;
  char *unaff_x29;
  undefined1 auVar12 [16];
  long in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  uint uStack0000000000000030;
  undefined4 uStack0000000000000034;
  ulong in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000118;
  
code_r0x058a47a8:
  uVar7 = FUN_058abd20(param_1,param_2,unaff_x22,param_4,0);
  if (*(int *)(unaff_x21 + 4) == 1) {
    uVar11 = 0;
    unaff_w24 = unaff_x29[0x2e] == '\0';
    uVar10 = 1;
    if (!(bool)unaff_w24) goto LAB_058a4824;
    uVar10 = 2;
    goto LAB_058a4824;
  }
  if ((uVar7 & 1) == 0) {
    unaff_w24 = unaff_x29[0x2e] == '\0' | unaff_w24;
    unaff_w25 = unaff_x29[0x2e] != '\0' | unaff_w25;
  }
  else {
    unaff_w25 = 1;
  }
  unaff_x26 = unaff_x26 - 1;
  unaff_x20 = unaff_x20 + 2;
  if (unaff_x26 == 0) {
LAB_058a47f0:
    uVar11 = 0;
    if ((unaff_w25 & 1) == 0) {
      uVar11 = 3;
    }
    uVar10 = 1;
    if ((unaff_w25 & 1 & unaff_w24) != 0) {
      uVar10 = 2;
    }
LAB_058a4824:
    puVar5 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
    ;
    if ((unaff_w24 & 1) == 0) {
      uVar10 = uVar11;
    }
LAB_058a483c:
    do {
      while( true ) {
        in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000 | unaff_x19;
        FUN_058ac08c(&stack0x00000120,unaff_x28,in_stack_00000028,uStack0000000000000030,uVar10,
                     unaff_x29[0x14],uStack0000000000000034,unaff_w27);
        if (*(int *)(*(long *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0499dac0(in_stack_00000010 + 0x194,&stack0x00000120,
                     *(undefined8 *)
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                    );
        in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
        memcpy(&stack0x0000005c,(void *)(in_stack_00000010 + 0xd0),0xc4);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (in_stack_00000118._4_4_ <= in_stack_00000020._4_4_) {
          FUN_05814cd4(&stack0x0000014c,0);
          return;
        }
        memcpy(&stack0x0000005c,(void *)(in_stack_00000010 + 0xd0),0xc4);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        unaff_x23 = (undefined8 *)
                    FUN_0499dea4(&stack0x0000005c,in_stack_00000020._4_4_,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                                );
        if (*(long *)(in_stack_00000040 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        unaff_x19 = (ulong)*(uint *)(unaff_x23 + 1);
        uVar2 = *(uint *)((long)unaff_x23 + 0xc);
        uStack0000000000000034 = *(undefined4 *)(unaff_x23 + 2);
        unaff_w27 = *(undefined4 *)((long)unaff_x23 + 0x14);
        unaff_x28 = *unaff_x23;
        in_stack_00000038 = in_stack_00000038 & 0xffffffff00000000 | unaff_x19;
        unaff_x29 = (char *)FUN_058ab2a4(*(long *)(in_stack_00000040 + 0x30),unaff_x28,
                                         in_stack_00000038,0);
        cVar8 = *unaff_x29;
        iVar3 = *(int *)(unaff_x29 + 8);
        uVar4 = *(uint *)((long)unaff_x23 + 0xc);
        iVar1 = *(int *)(in_stack_00000010 + 0x29c) + 1;
        if (((uVar2 & 6) != 2) && ((uVar4 & 1) == 0)) break;
        if (*(int *)(in_stack_00000010 + 0x298) <= *(int *)(unaff_x29 + 0x10)) {
          if (cVar8 == '\0') {
            uStack0000000000000030 = 1;
          }
          else {
            uStack0000000000000030 = (uint)(byte)unaff_x29[0x2c];
          }
          goto LAB_058a4658;
        }
        uStack0000000000000030 = 0;
        uVar10 = 0;
        if (iVar3 < iVar1) {
          uVar10 = 3;
        }
        if ((uVar4 >> 1 & 1) != 0) goto LAB_058a4664;
      }
      uStack0000000000000030 = 2;
LAB_058a4658:
      uVar10 = 3;
    } while ((uVar4 >> 1 & 1) == 0);
LAB_058a4664:
    if (*(int *)(in_stack_00000010 + 0x2b8) < 2) {
      uVar10 = 0;
      if (iVar3 < iVar1) {
        uVar10 = 3;
      }
      if ((cVar8 == '\0') || (iVar1 <= iVar3)) goto LAB_058a483c;
      cVar8 = unaff_x29[0x2d];
    }
    else {
      iVar1 = *(int *)(unaff_x29 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      bVar6 = iVar1 == *(int *)((long)unaff_x23 + 4);
      if (*(int *)(in_stack_00000010 + 0x2a0) + *(int *)(in_stack_00000010 + 0x298) <= iVar3)
      goto LAB_058a46e4;
      if (cVar8 == '\0' || !bVar6) {
LAB_058a46bc:
        uVar10 = 3;
        goto LAB_058a483c;
      }
      cVar8 = unaff_x29[0x2d];
      if (unaff_x29[0x2e] == '\0') {
        if (cVar8 == '\0') {
          uVar10 = 2;
          goto LAB_058a483c;
        }
        if (*(char *)(in_stack_00000010 + 0x2c0) != '\0') {
          if (*(int *)(*(long *)
                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (*(int *)(in_stack_00000010 + 0x294) == 0) goto LAB_058a46bc;
        }
        uVar10 = 1;
        goto LAB_058a483c;
      }
    }
    uVar10 = 0;
    if (cVar8 != '\0') {
      uVar10 = 3;
    }
    goto LAB_058a483c;
  }
  goto LAB_058a4768;
LAB_058a46e4:
  if (cVar8 != '\0' && bVar6) {
    unaff_w25 = unaff_x29[0x2d] == '\0';
    bVar9 = unaff_x29[0x2e] ^ 1;
  }
  else {
    unaff_w25 = false;
    bVar9 = 0;
  }
  unaff_w24 = bVar9 != 0;
  if (*(long *)(in_stack_00000040 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000 | (ulong)*(uint *)(unaff_x23 + 1);
  auVar12 = FUN_058abf08(*(long *)(in_stack_00000040 + 0x30),*unaff_x23,in_stack_00000018,0);
  unaff_x20 = auVar12._0_8_;
  if (0 < auVar12._8_4_) goto code_r0x058a4760;
  goto LAB_058a47f0;
code_r0x058a4760:
  unaff_x26 = auVar12._8_8_ & 0xffffffff;
LAB_058a4768:
  if (*(long *)(in_stack_00000040 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  param_1 = FUN_03ab2128(*(long *)(in_stack_00000040 + 0x30) + 0x18,*unaff_x20,
                         *(undefined8 *)
                          Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
  param_2 = *unaff_x23;
  param_4 = *(undefined8 *)(in_stack_00000040 + 0x30);
  unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)*(uint *)(unaff_x23 + 1);
  unaff_x21 = param_1;
  goto code_r0x058a47a8;
}


