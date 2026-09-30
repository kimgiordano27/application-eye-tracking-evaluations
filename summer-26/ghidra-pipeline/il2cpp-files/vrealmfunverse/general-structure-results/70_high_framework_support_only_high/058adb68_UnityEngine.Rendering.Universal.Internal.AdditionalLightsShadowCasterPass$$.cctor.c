/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass$$.cctor
ENTRY_POINT: 058adb68
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  short *psVar4;
  long lVar5;
  ulong uVar6;
  short *psVar7;
  int in_w8;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  short *unaff_x26;
  int unaff_w27;
  int iVar11;
  undefined8 unaff_x29;
  long lVar12;
  undefined1 auVar13 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  int in_stack_00000038;
  
  do {
    if (in_w8 == 0) {
      thunk_FUN_02b9ad44();
    }
    psVar4 = (short *)FUN_0499dea4(unaff_x22 + 0xd0,unaff_w27,*unaff_x19);
    if (DAT_066d3287 == '\0') {
      FUN_02b3c81c();
      DAT_066d3287 = '\x01';
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (((*unaff_x26 == *psVar4) && (*(int *)(psVar4 + 8) == *(int *)(unaff_x26 + 8))) &&
       (*(int *)(psVar4 + 10) == *(int *)(unaff_x26 + 10))) goto LAB_058adc28;
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
      iVar8 = *(int *)(unaff_x22 + 0x29c);
      for (iVar11 = *(int *)(unaff_x22 + 0x298); iVar11 <= iVar8; iVar11 = iVar11 + 1) {
        lVar5 = FUN_03ab2128(unaff_x20 + 0x18,iVar11,
                             *(undefined8 *)
                              Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
        if (DAT_066d31d0 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
          DAT_066d31d0 = '\x01';
        }
        iVar8 = *(int *)(lVar5 + 0x28);
        uVar1 = *(uint *)(lVar5 + 0x2c);
        uVar10 = (ulong)uVar1;
        lVar12 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
        lVar9 = *(long *)(lVar12 + 0x38);
        if (lVar9 == 0) {
          FUN_02b76274(lVar12);
          lVar9 = *(long *)(lVar12 + 0x38);
        }
        lVar9 = FUN_0322b7b4(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(lVar9 + 0x10));
        if ((int)uVar1 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar1 != 0) {
          psVar4 = (short *)(lVar9 + (long)iVar8 * 0xc);
          do {
            if (*(int *)(*unaff_x24 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (*unaff_x26 == *psVar4) {
              unaff_x25 = unaff_x25 & 0xffffffff00000000 | (ulong)*(uint *)(psVar4 + 4);
              uVar6 = FUN_058abd20(lVar5,*(undefined8 *)psVar4,unaff_x25);
              if ((uVar6 & 1) == 0) {
                uVar10 = 3;
                goto LAB_058ad86c;
              }
            }
            uVar10 = uVar10 - 1;
            psVar4 = psVar4 + 6;
          } while (uVar10 != 0);
        }
        iVar8 = *(int *)(unaff_x22 + 0x29c);
        unaff_x29 = in_stack_00000020;
      }
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == in_stack_00000010) {
        auVar13 = FUN_058bc3f8(unaff_x29);
        puVar3 = 
        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
        ;
        puVar2 = PTR_DAT_06322b80;
        if (auVar13._8_4_ < 1) goto LAB_058adea4;
        uVar10 = 0;
        goto LAB_058adda0;
      }
      unaff_x26 = (short *)(in_stack_00000008 + unaff_x21 * 0x18);
      unaff_w27 = 0;
      unaff_x19 = (undefined8 *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
      ;
    }
    in_w8 = *(int *)(*unaff_x23 + 0xe4);
  } while( true );
LAB_058aded4:
  uVar10 = 6;
  goto LAB_058ad86c;
LAB_058adda0:
  do {
    psVar4 = (short *)(auVar13._0_8_ + uVar10 * 0x18);
    iVar11 = 0;
    while( true ) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (*(int *)(unaff_x22 + 400) <= iVar11) break;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      psVar7 = (short *)FUN_0499dea4(unaff_x22 + 0xd0,iVar11,*(undefined8 *)puVar3);
      if (DAT_066d3287 == '\0') {
        FUN_02b3c81c(puVar2);
        DAT_066d3287 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (((*psVar4 == *psVar7) && (*(int *)(psVar7 + 8) == *(int *)(psVar4 + 8))) &&
         (*(int *)(psVar7 + 10) == *(int *)(psVar4 + 10))) goto LAB_058ade88;
      iVar11 = iVar11 + 1;
    }
    if (in_stack_00000038 == 0) goto LAB_058aded4;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0499de70(&stack0x0000005c,psVar4,
                 *(undefined8 *)Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
    in_stack_00000038 = in_stack_00000038 + -1;
LAB_058ade88:
    uVar10 = uVar10 + 1;
  } while (uVar10 != (auVar13._8_8_ & 0xffffffff));
LAB_058adea4:
  if ((*(int *)(unaff_x22 + 0x2a0) < 8) || (uVar10 = FUN_058ae018(unaff_x20), (uVar10 & 1) != 0)) {
    uVar10 = 0xd;
  }
  else {
    uVar10 = 7;
  }
LAB_058ad86c:
  return uVar10 | in_stack_00000018 << 0x20;
}


