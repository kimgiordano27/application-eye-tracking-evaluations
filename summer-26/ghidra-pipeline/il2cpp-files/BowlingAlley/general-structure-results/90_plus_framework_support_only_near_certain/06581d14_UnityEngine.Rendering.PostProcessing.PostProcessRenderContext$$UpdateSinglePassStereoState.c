/*
FUNCTION_NAME: UnityEngine.Rendering.PostProcessing.PostProcessRenderContext$$UpdateSinglePassStereoState
ENTRY_POINT: 06581d14
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_Rendering_PostProcessing_PostProcessRenderContext__UpdateSinglePassStereoState
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  double in_stack_00000008;
  uint uStack0000000000000010;
  
  uStack0000000000000010 = (uint)*(ushort *)(unaff_x19 + 4);
  lVar3 = thunk_FUN_032a52d0(*unaff_x22,&stack0x00000010);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0)) {
LAB_06581e1c:
    uVar5 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar5,0);
  }
  puVar1 = PTR_DAT_0727e390;
  if (3 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[7] = lVar3;
    thunk_FUN_0333a630(unaff_x20 + 7,lVar3);
    puVar2 = PTR_DAT_07280a18;
    if ((DAT_076dfcf7 & 1) == 0) {
      thunk_FUN_032e1da0(PTR_DAT_07280a18);
      DAT_076dfcf7 = 1;
    }
    in_stack_00000008 =
         *(double *)(unaff_x19 + 8) - *(double *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    lVar3 = thunk_FUN_032a52d0(*(undefined8 *)puVar1,&stack0x00000008);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_032a55a4(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0))
    goto LAB_06581e1c;
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>_Add__
    ;
    if (4 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[8] = lVar3;
      thunk_FUN_0333a630(unaff_x20 + 8,lVar3);
      FUN_057ab6a4(*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


