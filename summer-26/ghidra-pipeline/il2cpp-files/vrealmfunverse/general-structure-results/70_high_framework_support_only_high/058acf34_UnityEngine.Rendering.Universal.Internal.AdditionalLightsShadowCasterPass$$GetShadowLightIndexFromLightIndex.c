/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass$$GetShadowLightIndexFromLightIndex
ENTRY_POINT: 058acf34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass__GetShadowLightIndexFromLightIndex
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  short *psVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong uVar7;
  int iVar8;
  short *psVar9;
  ulong unaff_x28;
  long in_stack_00000008;
  long in_stack_00000020;
  uint in_stack_000000a8;
  
  FUN_02b76274();
  lVar4 = FUN_0322b7a0(*(undefined8 *)(unaff_x19 + 0x40),
                       *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x10));
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  puVar1 = PTR_DAT_06322b80;
  if ((int)unaff_x28 < 0) {
    FUN_04d9bcc4(0);
  }
  else if ((int)unaff_x28 != 0) {
    uVar7 = 0;
    do {
      iVar8 = 0;
      psVar9 = (short *)(lVar4 + (long)unaff_w21 * 0x18 + uVar7 * 0x18);
      while( true ) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*(int *)(unaff_x20 + 400) <= iVar8) break;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        psVar5 = (short *)FUN_0499dea4(unaff_x20 + 0xd0,iVar8,*(undefined8 *)puVar2);
        if (DAT_066d3287 == '\0') {
          FUN_02b3c81c(puVar1);
          DAT_066d3287 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (((*psVar9 == *psVar5) && (*(int *)(psVar5 + 8) == *(int *)(psVar9 + 8))) &&
           (*(int *)(psVar5 + 10) == *(int *)(psVar9 + 10))) goto LAB_058ad034;
        iVar8 = iVar8 + 1;
      }
      iVar8 = -1;
LAB_058ad034:
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc0680(&stack0x00000060,uVar7 & 0xffffffff,iVar8,0);
      uVar7 = uVar7 + 1;
    } while (uVar7 != unaff_x28);
  }
  uVar7 = FUN_058aa534(in_stack_00000020,0);
  if ((uVar7 & 1) != 0) {
    in_stack_000000a8 = in_stack_000000a8 | 8;
  }
  if (*(int *)(unaff_x20 + 0x2a8) != 0) {
    uVar6 = FUN_03ab7248(in_stack_00000008 + 0x68,
                         *(int *)(unaff_x20 + 0x2a8) + *(int *)(unaff_x20 + 0x2a4) + -1,
                         *(undefined8 *)Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
    uVar7 = FUN_058a4b2c(&stack0x00000060,uVar6,0);
    if ((uVar7 & 1) != 0) {
      *(undefined1 *)(in_stack_00000020 + 0x7b) = 0;
      iVar8 = *(int *)(unaff_x20 + 0x2a8) + -1;
      goto LAB_058ad114;
    }
  }
  FUN_03ab7378(in_stack_00000008 + 0x68,&stack0x00000060,
               *(undefined8 *)
                Method_UnityEngine_UIElements_ObjectListPool<IBindingRequest>_Release__);
  iVar8 = *(int *)(unaff_x20 + 0x2a8);
  *(int *)(unaff_x20 + 0x2a8) = iVar8 + 1;
  *(undefined1 *)(in_stack_00000020 + 0x7b) = 1;
LAB_058ad114:
  *(int *)(in_stack_00000020 + 0x24) = iVar8;
  return;
}


