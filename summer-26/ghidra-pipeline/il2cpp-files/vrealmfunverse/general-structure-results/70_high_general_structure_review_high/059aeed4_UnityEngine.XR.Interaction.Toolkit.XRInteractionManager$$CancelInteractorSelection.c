/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractionManager$$CancelInteractorSelection
ENTRY_POINT: 059aeed4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__CancelInteractorSelection(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 in_ZR;
  ulong uVar6;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar7;
  long unaff_x24;
  long lVar8;
  long *unaff_x27;
  long unaff_x28;
  void *__src;
  long unaff_x29;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iStack000000000000002c;
  undefined8 in_stack_00000030;
  int *in_stack_00000038;
  int *in_stack_00000068;
  void *in_stack_00000070;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  uint uStack00000000000000b0;
  int iStack00000000000000b4;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_000005b0;
  undefined4 in_stack_000005b4;
  undefined4 in_stack_000005b8;
  undefined4 in_stack_000005bc;
  undefined4 in_stack_000005c0;
  undefined4 in_stack_000005c4;
  undefined4 in_stack_000005c8;
  undefined4 in_stack_000005cc;
  undefined4 in_stack_000005d0;
  undefined4 in_stack_000005d4;
  undefined4 in_stack_000005d8;
  undefined4 in_stack_000005dc;
  
  do {
    if ((bool)in_ZR) {
      iStack000000000000002c = in_stack_00000088._4_4_ * iStack00000000000000b4;
      FUN_03a89830(&stack0x000005f0,iStack000000000000002c,3,1,
                   *(undefined8 *)Method_System_Array_Empty<ShapeRecognizer_FingerFeatureConfig>__);
      memcpy(&stack0x00000410,in_stack_00000070,0x80);
      FUN_03a8a754(&stack0x000005f0,0,*in_stack_00000038 * iStack00000000000000b4,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
                  );
      iVar4 = *in_stack_00000038;
      uVar7 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<OnApplicationPause>d__38>__
      ;
      memcpy(&stack0x00000610,&stack0x00000410,0x80);
      auVar9 = FUN_031e5134(&stack0x00000610,iVar4 * iStack00000000000000b4,0x20,0,0,uVar7);
      memcpy(&stack0x00000390,in_stack_00000070,0x80);
      FUN_03a8a754(&stack0x000005f0,*in_stack_00000038 * iStack00000000000000b4,
                   in_stack_00000090._4_4_ * iStack00000000000000b4,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
                  );
      uVar7 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<QueryForExistingAnchorsTransform>d__39>__
      ;
      memcpy(&stack0x00000610,&stack0x00000390,0x80);
      auVar9 = FUN_031e51d4(&stack0x00000610,in_stack_00000090._4_4_ * iStack00000000000000b4,0x20,
                            auVar9._0_8_,auVar9._8_8_,uVar7);
      iVar4 = *in_stack_00000068 + 0x7f;
      iVar3 = *in_stack_00000068 + 0xfe;
      if (-1 < iVar4) {
        iVar3 = iVar4;
      }
      auVar10 = FUN_031e53b4(&stack0x00000610,(iVar3 >> 7) * iStack00000000000000b4,1,auVar9._0_8_,
                             auVar9._8_8_,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27>__
                            );
      FUN_05c351e4(&stack0x000005e0,0);
      puVar5 = Method_System_Array_Empty<XPathResultType>__;
      FUN_0499d47c(&stack0x000001b0,in_stack_00000030,0,
                   *(undefined8 *)Method_System_Array_Empty<XPathResultType>__);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      in_stack_00000178 = in_stack_000001b8;
      in_stack_00000170 = in_stack_000001b0;
      in_stack_00000188 = in_stack_000001c8;
      in_stack_00000180 = in_stack_000001c0;
      in_stack_00000198 = in_stack_000001d8;
      in_stack_00000190 = in_stack_000001d0;
      in_stack_000001a8 = in_stack_000001e8;
      in_stack_000001a0 = in_stack_000001e0;
      FUN_059ae6c4(uStack00000000000000b0 & 1,&stack0x00000170,&stack0x000005dc,&stack0x000005d8,
                   &stack0x000005c8);
      FUN_0499d47c(&stack0x00000130,in_stack_00000030,1,*(undefined8 *)puVar5);
      in_stack_000000f8 = in_stack_00000138;
      in_stack_000000f0 = in_stack_00000130;
      in_stack_00000108 = in_stack_00000148;
      in_stack_00000100 = in_stack_00000140;
      in_stack_00000118 = in_stack_00000158;
      in_stack_00000110 = in_stack_00000150;
      in_stack_00000128 = in_stack_00000168;
      in_stack_00000120 = in_stack_00000160;
      FUN_059ae6c4(uStack00000000000000b0 & 1,&stack0x000000f0,&stack0x000005c4,&stack0x000005c0,
                   &stack0x000005b0);
      iVar4 = iStack000000000000002c;
      uVar1 = *(int *)((long)in_stack_000000b8 + 4) * 4 + 0x83;
      uVar2 = uVar1 & 0x7f;
      if (-1 < (int)-uVar1) {
        uVar2 = -(-uVar1 & 0x7f);
      }
      FUN_03a14e64(&stack0x000005a0,iStack000000000000002c * ((int)(uVar1 - uVar2) >> 2),3,1,
                   *(undefined8 *)Method_System_Array_Empty<Event_Type>__);
      memcpy(&stack0x00000300,in_stack_00000070,0x80);
      puVar5 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_MRUK_<LocalizeTrackable>d__135>__
      ;
      in_stack_000000e8 = 0;
      FUN_0499cee4(in_stack_000005dc,in_stack_000005c4,&stack0x000000e8,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_MRUK_<LocalizeTrackable>d__135>__
                  );
      in_stack_000000e0 = 0;
      FUN_0499cee4(in_stack_000005d8,in_stack_000005c0,&stack0x000000e0,*(undefined8 *)puVar5);
      in_stack_000000c8 = 0;
      in_stack_000000c0 = 0;
      in_stack_000000d8 = 0;
      in_stack_000000d0 = 0;
      FUN_0499d3c0(in_stack_000005c8,in_stack_000005cc,in_stack_000005d0,in_stack_000005d4,
                   in_stack_000005b0,in_stack_000005b4,in_stack_000005b8,in_stack_000005bc,
                   &stack0x000000c0,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>,_LocalMatchmaking_<StartAdvertisingColocationSession>d__19>__
                  );
      uVar7 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__19>__
      ;
      memcpy(&stack0x00000648,&stack0x00000300,0x80);
      auVar9 = FUN_031e5314(&stack0x00000610,iVar4,1,auVar9._0_8_,auVar9._8_8_,uVar7);
      auVar9 = FUN_031e5274(&stack0x00000610,
                            (int)((ulong)*in_stack_000000b8 >> 0x20) * iStack00000000000000b4,1,
                            auVar9._0_8_,auVar9._8_8_,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneModelLoader_<OnLoadSceneModelFailedPermissionNotGranted>d__10>__
                           );
      auVar10 = FUN_03a89bec(&stack0x000005f0,auVar10._0_8_,auVar10._8_8_,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>,_OVRSceneManager_<<LoadSceneModel>g__AwaitTask_40_0>d>__
                            );
      auVar9 = FUN_03a1520c(&stack0x000005a0,auVar9._0_8_,auVar9._8_8_,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_ImmersiveSceneDebugger_<>c_<<GetLaunchSpaceSetupDebugger>b__80_0>d>__
                           );
      FUN_05c35308(auVar10._0_8_,auVar10._8_8_,auVar9._0_8_,auVar9._8_8_,0);
      return;
    }
    memcpy(&stack0x00000498,(void *)(unaff_x29 + unaff_x28 * unaff_x23),0x88);
    lVar8 = unaff_x28;
    __src = unaff_x19;
    do {
      memcpy(&stack0x00000610,__src,0x88);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      memcpy(&stack0x00000278,&stack0x00000610,0x88);
      memcpy(&stack0x000001f0,&stack0x00000498,0x88);
      uVar6 = FUN_059af42c(&stack0x00000278,&stack0x000001f0);
      if ((uVar6 & 1) == 0) goto LAB_059aeeb0;
      memcpy((void *)((long)__src + 0x88),__src,0x88);
      lVar8 = lVar8 + -1;
      __src = (void *)((long)__src + -0x88);
    } while (0 < lVar8);
    lVar8 = 0;
LAB_059aeeb0:
    memcpy((void *)(unaff_x22 + (long)(int)lVar8 * (long)(int)unaff_x23),&stack0x00000498,0x88);
    unaff_x20 = unaff_x20 + 1;
    unaff_x28 = unaff_x28 + 1;
    unaff_x19 = (void *)((long)unaff_x19 + 0x88);
    in_ZR = unaff_x20 == unaff_x24;
    unaff_x29 = unaff_x22;
  } while( true );
}


