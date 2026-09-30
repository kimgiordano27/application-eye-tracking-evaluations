/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights$$HasStencilLightsOfType
ENTRY_POINT: 058a4730
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_Rendering_Universal_Internal_DeferredLights__HasStencilLightsOfType(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long in_x9;
  ulong in_x10;
  ulong unaff_x19;
  undefined4 *puVar13;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  byte unaff_w25;
  ulong uVar14;
  undefined4 unaff_w27;
  undefined8 unaff_x28;
  char *unaff_x29;
  undefined1 auVar15 [16];
  long in_stack_00000010;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  uint uStack0000000000000030;
  undefined4 uStack0000000000000034;
  ulong in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000118;
  
code_r0x058a4730:
  bVar6 = !(bool)in_ZR;
  if (*(long *)(in_x9 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  in_x10 = in_x10 & 0xffffffff00000000 | (ulong)*(uint *)(unaff_x23 + 1);
  auVar15 = FUN_058abf08(*(long *)(in_x9 + 0x30),*unaff_x23,in_x10,0);
  puVar13 = auVar15._0_8_;
  if (0 < auVar15._8_4_) {
    uVar14 = auVar15._8_8_ & 0xffffffff;
    do {
      if (*(long *)(in_stack_00000040 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar7 = FUN_03ab2128(*(long *)(in_stack_00000040 + 0x30) + 0x18,*puVar13,
                           *(undefined8 *)
                            Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
      unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)*(uint *)(unaff_x23 + 1);
      uVar8 = FUN_058abd20(lVar7,*unaff_x23,unaff_x22,*(undefined8 *)(in_stack_00000040 + 0x30),0);
      if (*(int *)(lVar7 + 4) == 1) {
        uVar12 = 0;
        bVar6 = unaff_x29[0x2e] == '\0';
        uVar11 = 1;
        if (bVar6) {
          uVar11 = 2;
        }
        goto LAB_058a4824;
      }
      if ((uVar8 & 1) == 0) {
        bVar6 = (bool)(unaff_x29[0x2e] == '\0' | bVar6);
        unaff_w25 = unaff_x29[0x2e] != '\0' | unaff_w25;
      }
      else {
        unaff_w25 = 1;
      }
      uVar14 = uVar14 - 1;
      puVar13 = puVar13 + 2;
    } while (uVar14 != 0);
  }
  uVar12 = 0;
  if ((unaff_w25 & 1) == 0) {
    uVar12 = 3;
  }
  uVar11 = 1;
  if ((unaff_w25 & 1 & bVar6) != 0) {
    uVar11 = 2;
  }
LAB_058a4824:
  puVar5 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  if (bVar6 == false) {
    uVar11 = uVar12;
  }
LAB_058a483c:
  do {
    while( true ) {
      in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000 | unaff_x19;
      FUN_058ac08c(&stack0x00000120,unaff_x28,in_stack_00000028,uStack0000000000000030,uVar11,
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
      cVar9 = *unaff_x29;
      iVar3 = *(int *)(unaff_x29 + 8);
      uVar4 = *(uint *)((long)unaff_x23 + 0xc);
      iVar1 = *(int *)(in_stack_00000010 + 0x29c) + 1;
      if (((uVar2 & 6) != 2) && ((uVar4 & 1) == 0)) break;
      if (*(int *)(in_stack_00000010 + 0x298) <= *(int *)(unaff_x29 + 0x10)) {
        if (cVar9 == '\0') {
          uStack0000000000000030 = 1;
        }
        else {
          uStack0000000000000030 = (uint)(byte)unaff_x29[0x2c];
        }
        goto LAB_058a4658;
      }
      uStack0000000000000030 = 0;
      uVar11 = 0;
      if (iVar3 < iVar1) {
        uVar11 = 3;
      }
      if ((uVar4 >> 1 & 1) != 0) goto LAB_058a4664;
    }
    uStack0000000000000030 = 2;
LAB_058a4658:
    uVar11 = 3;
  } while ((uVar4 >> 1 & 1) == 0);
LAB_058a4664:
  if (*(int *)(in_stack_00000010 + 0x2b8) < 2) {
    uVar11 = 0;
    if (iVar3 < iVar1) {
      uVar11 = 3;
    }
    if ((cVar9 == '\0') || (iVar1 <= iVar3)) goto LAB_058a483c;
    cVar9 = unaff_x29[0x2d];
  }
  else {
    iVar1 = *(int *)(unaff_x29 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06322b80 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    bVar6 = iVar1 == *(int *)((long)unaff_x23 + 4);
    if (*(int *)(in_stack_00000010 + 0x2a0) + *(int *)(in_stack_00000010 + 0x298) <= iVar3)
    goto LAB_058a46e4;
    if (cVar9 == '\0' || !bVar6) {
LAB_058a46bc:
      uVar11 = 3;
      goto LAB_058a483c;
    }
    cVar9 = unaff_x29[0x2d];
    if (unaff_x29[0x2e] == '\0') {
      if (cVar9 == '\0') {
        uVar11 = 2;
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
      uVar11 = 1;
      goto LAB_058a483c;
    }
  }
  uVar11 = 0;
  if (cVar9 != '\0') {
    uVar11 = 3;
  }
  goto LAB_058a483c;
LAB_058a46e4:
  if (cVar9 != '\0' && bVar6) {
    unaff_w25 = unaff_x29[0x2d] == '\0';
    bVar10 = unaff_x29[0x2e] ^ 1;
  }
  else {
    unaff_w25 = false;
    bVar10 = 0;
  }
  in_ZR = bVar10 == 0;
  in_x9 = in_stack_00000040;
  goto code_r0x058a4730;
}


