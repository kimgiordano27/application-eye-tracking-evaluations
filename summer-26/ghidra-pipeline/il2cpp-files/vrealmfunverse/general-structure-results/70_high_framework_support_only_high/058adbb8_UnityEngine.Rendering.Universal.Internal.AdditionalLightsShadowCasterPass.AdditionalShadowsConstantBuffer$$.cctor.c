/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass.AdditionalShadowsConstantBuffer$$.cctor
ENTRY_POINT: 058adbb8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer___cctor
                (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  short *psVar6;
  uint in_w8;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ushort *puVar10;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  short *psVar11;
  ushort *unaff_x26;
  int unaff_w27;
  int iVar12;
  ushort *unaff_x28;
  undefined8 unaff_x29;
  long lVar13;
  undefined1 auVar14 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  int in_stack_00000038;
  
  do {
    if (((*unaff_x26 == in_w8) && (*(int *)(unaff_x28 + 8) == *(int *)(unaff_x26 + 8))) &&
       (*(int *)(unaff_x28 + 10) == *(int *)(unaff_x26 + 10))) goto LAB_058adc28;
    unaff_w27 = unaff_w27 + 1;
    while( true ) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (unaff_w27 < *(int *)(unaff_x22 + 400)) break;
      if (in_stack_00000038 == 0) goto LAB_058aded4;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_0499de70(&stack0x0000005c,unaff_x26,
                   *(undefined8 *)Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
      in_stack_00000038 = in_stack_00000038 + -1;
LAB_058adc28:
      iVar7 = *(int *)(unaff_x22 + 0x29c);
      for (iVar12 = *(int *)(unaff_x22 + 0x298); iVar12 <= iVar7; iVar12 = iVar12 + 1) {
        lVar4 = FUN_03ab2128(unaff_x20 + 0x18,iVar12,
                             *(undefined8 *)
                              Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
        if (DAT_066d31d0 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
          DAT_066d31d0 = '\x01';
        }
        iVar7 = *(int *)(lVar4 + 0x28);
        uVar1 = *(uint *)(lVar4 + 0x2c);
        uVar9 = (ulong)uVar1;
        lVar13 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
        lVar8 = *(long *)(lVar13 + 0x38);
        if (lVar8 == 0) {
          FUN_02b76274(lVar13);
          lVar8 = *(long *)(lVar13 + 0x38);
        }
        lVar8 = FUN_0322b7b4(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(lVar8 + 0x10));
        if ((int)uVar1 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar1 != 0) {
          puVar10 = (ushort *)(lVar8 + (long)iVar7 * 0xc);
          do {
            if (*(int *)(*unaff_x24 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (*unaff_x26 == *puVar10) {
              unaff_x25 = unaff_x25 & 0xffffffff00000000 | (ulong)*(uint *)(puVar10 + 4);
              uVar5 = FUN_058abd20(lVar4,*(undefined8 *)puVar10,unaff_x25);
              if ((uVar5 & 1) == 0) {
                uVar9 = 3;
                goto LAB_058ad86c;
              }
            }
            uVar9 = uVar9 - 1;
            puVar10 = puVar10 + 6;
          } while (uVar9 != 0);
        }
        iVar7 = *(int *)(unaff_x22 + 0x29c);
        unaff_x29 = in_stack_00000020;
      }
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == in_stack_00000010) {
        auVar14 = FUN_058bc3f8(unaff_x29);
        puVar3 = 
        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
        ;
        puVar2 = PTR_DAT_06322b80;
        if (auVar14._8_4_ < 1) goto LAB_058adea4;
        uVar9 = 0;
        goto LAB_058adda0;
      }
      unaff_x26 = (ushort *)(in_stack_00000008 + unaff_x21 * 0x18);
      unaff_w27 = 0;
      unaff_x19 = (undefined8 *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
      ;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    unaff_x28 = (ushort *)FUN_0499dea4(unaff_x22 + 0xd0,unaff_w27,*unaff_x19);
    if (DAT_066d3287 == '\0') {
      FUN_02b3c81c();
      DAT_066d3287 = '\x01';
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_w8 = (uint)*unaff_x28;
  } while( true );
LAB_058aded4:
  uVar9 = 6;
  goto LAB_058ad86c;
LAB_058adda0:
  do {
    psVar11 = (short *)(auVar14._0_8_ + uVar9 * 0x18);
    iVar12 = 0;
    while( true ) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (*(int *)(unaff_x22 + 400) <= iVar12) break;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      psVar6 = (short *)FUN_0499dea4(unaff_x22 + 0xd0,iVar12,*(undefined8 *)puVar3);
      if (DAT_066d3287 == '\0') {
        FUN_02b3c81c(puVar2);
        DAT_066d3287 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (((*psVar11 == *psVar6) && (*(int *)(psVar6 + 8) == *(int *)(psVar11 + 8))) &&
         (*(int *)(psVar6 + 10) == *(int *)(psVar11 + 10))) goto LAB_058ade88;
      iVar12 = iVar12 + 1;
    }
    if (in_stack_00000038 == 0) goto LAB_058aded4;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0499de70(&stack0x0000005c,psVar11,
                 *(undefined8 *)Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
    in_stack_00000038 = in_stack_00000038 + -1;
LAB_058ade88:
    uVar9 = uVar9 + 1;
  } while (uVar9 != (auVar14._8_8_ & 0xffffffff));
LAB_058adea4:
  if ((*(int *)(unaff_x22 + 0x2a0) < 8) || (uVar9 = FUN_058ae018(unaff_x20), (uVar9 & 1) != 0)) {
    uVar9 = 0xd;
  }
  else {
    uVar9 = 7;
  }
LAB_058ad86c:
  return uVar9 | in_stack_00000018 << 0x20;
}


