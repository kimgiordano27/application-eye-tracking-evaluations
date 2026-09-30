/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractionManager$$ClearInteractorSelection
ENTRY_POINT: 059aeac8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__ClearInteractorSelection
               (void *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int extraout_w1;
  float *in_x9;
  void *pvVar12;
  ulong uVar13;
  int *unaff_x21;
  int unaff_w23;
  undefined8 uVar14;
  long *unaff_x24;
  long lVar15;
  void *unaff_x28;
  long lVar16;
  int *unaff_x29;
  void *__src;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float unaff_s8;
  float unaff_s9;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iStack000000000000002c;
  undefined8 in_stack_00000030;
  int *in_stack_00000038;
  int *piStack0000000000000068;
  void *pvStack0000000000000070;
  int iStack000000000000008c;
  uint uStack0000000000000090;
  int iStack0000000000000094;
  float *pfStack0000000000000098;
  float *pfStack00000000000000a8;
  uint in_stack_000000b0;
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
  undefined8 in_stack_00000738;
  int in_stack_000007d0;
  int *in_stack_000007f8;
  float *in_stack_00000800;
  
  uStack0000000000000090 = in_stack_000000b0 & 1;
  piStack0000000000000068 = in_stack_000007f8;
  pvStack0000000000000070 = param_1;
  pfStack0000000000000098 = in_x9;
  pfStack00000000000000a8 = in_stack_00000800;
  FUN_03a851e0();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar5 = Method_System_Array_Resize<SecondarySpriteTexture>__;
  puVar4 = PTR_DAT_06312c90;
  iVar8 = FUN_05990984(0);
  iStack0000000000000094 = unaff_w23;
  if (iVar8 <= unaff_w23) {
    iStack0000000000000094 = iVar8;
  }
  iStack000000000000008c = iStack0000000000000094 + extraout_w1;
  iVar8 = iStack000000000000008c + 0x3e;
  if (-1 < iStack000000000000008c + 0x1f) {
    iVar8 = iStack000000000000008c + 0x1f;
  }
  *unaff_x29 = iVar8 >> 5;
  *unaff_x21 = 4;
  do {
    iVar8 = *unaff_x21 * 2;
    *unaff_x21 = iVar8;
    iVar10 = 0;
    if (iVar8 != 0) {
      iVar10 = (iVar8 + -1 + (int)in_stack_00000738) / iVar8;
    }
    iVar2 = 0;
    if (iVar8 != 0) {
      iVar2 = (iVar8 + -1 + (int)((ulong)in_stack_00000738 >> 0x20)) / iVar8;
    }
    *in_stack_000000b8 = CONCAT44(iVar2,iVar10);
    iVar8 = *unaff_x29;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar9 = FUN_05990924(0);
    piVar7 = piStack0000000000000068;
  } while (iVar9 < iVar10 * in_stack_000007d0 * iVar2 * iVar8);
  iStack00000000000000b4 = in_stack_000007d0;
  if ((in_stack_000000b0 & 1) == 0) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar8 = FUN_0599091c(0);
    if (DAT_066d31ca == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
      DAT_066d31ca = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    dVar18 = (double)Newtonsoft_Json_Converters_XmlNodeConverter__ReadJson
                               ((double)unaff_s9,0x4000000000000000,0);
    if (DAT_066d31ca == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
      DAT_066d31ca = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    dVar19 = (double)Newtonsoft_Json_Converters_XmlNodeConverter__ReadJson
                               ((double)unaff_s8,0x4000000000000000,0);
    cVar6 = DAT_066d31ca;
    iVar10 = 0;
    if (iStack00000000000000b4 != 0) {
      iVar10 = iVar8 / iStack00000000000000b4;
    }
    *pfStack00000000000000a8 =
         (float)iVar10 / (((float)dVar18 - (float)dVar19) * (float)(*unaff_x29 + 2));
    if (cVar6 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
      DAT_066d31ca = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    dVar18 = (double)Newtonsoft_Json_Converters_XmlNodeConverter__ReadJson
                               ((double)unaff_s8,0x4000000000000000,0);
    cVar6 = DAT_066d31ca;
    *pfStack0000000000000098 = -((float)dVar18 * *pfStack00000000000000a8);
    if (cVar6 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312c90);
      DAT_066d31ca = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    dVar18 = (double)Newtonsoft_Json_Converters_XmlNodeConverter__ReadJson
                               ((double)unaff_s9,0x4000000000000000,0);
    fVar17 = *pfStack00000000000000a8 * (float)dVar18;
    fVar20 = *pfStack0000000000000098;
  }
  else {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar10 = FUN_0599091c(0);
    iVar8 = 0;
    if (iStack00000000000000b4 != 0) {
      iVar8 = iVar10 / iStack00000000000000b4;
    }
    fVar17 = (float)iVar8 / ((unaff_s9 - unaff_s8) * (float)(*unaff_x29 + 2));
    fVar20 = -(unaff_s8 * fVar17);
    *pfStack00000000000000a8 = fVar17;
    *pfStack0000000000000098 = fVar20;
    fVar17 = *pfStack00000000000000a8 * unaff_s9;
  }
  iVar8 = -0x80000000;
  if (fVar17 + fVar20 != INFINITY) {
    iVar8 = (int)(fVar17 + fVar20);
  }
  *piVar7 = iVar8;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  iVar8 = FUN_04d7c48c(iVar8,0,0);
  *piVar7 = iVar8;
  if (1 < iStack0000000000000094) {
    uVar13 = 0;
    lVar16 = 1;
    uVar3 = iStack0000000000000094 - 1;
    pvVar12 = unaff_x28;
    do {
      memcpy(&stack0x00000498,(void *)((long)unaff_x28 + lVar16 * 0x88),0x88);
      lVar15 = lVar16;
      __src = pvVar12;
      do {
        memcpy(&stack0x00000610,__src,0x88);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        memcpy(&stack0x00000278,&stack0x00000610,0x88);
        memcpy(&stack0x000001f0,&stack0x00000498,0x88);
        uVar11 = FUN_059af42c(&stack0x00000278,&stack0x000001f0);
        if ((uVar11 & 1) == 0) goto LAB_059aeeb0;
        memcpy((void *)((long)__src + 0x88),__src,0x88);
        lVar15 = lVar15 + -1;
        __src = (void *)((long)__src + -0x88);
      } while (0 < lVar15);
      lVar15 = 0;
LAB_059aeeb0:
      memcpy((void *)((long)unaff_x28 + (long)(int)lVar15 * 0x88),&stack0x00000498,0x88);
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 1;
      pvVar12 = (void *)((long)pvVar12 + 0x88);
    } while (uVar13 != uVar3);
  }
  iVar2 = iStack00000000000000b4;
  iStack000000000000002c = iStack000000000000008c * iStack00000000000000b4;
  FUN_03a89830(&stack0x000005f0,iStack000000000000002c,3,1,
               *(undefined8 *)Method_System_Array_Empty<ShapeRecognizer_FingerFeatureConfig>__);
  pvVar12 = pvStack0000000000000070;
  memcpy(&stack0x00000410,pvStack0000000000000070,0x80);
  FUN_03a8a754(&stack0x000005f0,0,*in_stack_00000038 * iVar2,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
              );
  iVar8 = *in_stack_00000038;
  uVar14 = *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<OnApplicationPause>d__38>__
  ;
  memcpy(&stack0x00000610,&stack0x00000410,0x80);
  auVar21 = FUN_031e5134(&stack0x00000610,iVar8 * iVar2,0x20,0,0,uVar14);
  memcpy(&stack0x00000390,pvVar12,0x80);
  iVar8 = iStack0000000000000094 * iVar2;
  FUN_03a8a754(&stack0x000005f0,*in_stack_00000038 * iVar2,iVar8,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
              );
  uVar14 = *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneManager_<QueryForExistingAnchorsTransform>d__39>__
  ;
  memcpy(&stack0x00000610,&stack0x00000390,0x80);
  auVar21 = FUN_031e51d4(&stack0x00000610,iVar8,0x20,auVar21._0_8_,auVar21._8_8_,uVar14);
  iVar8 = *piStack0000000000000068 + 0x7f;
  iVar10 = *piStack0000000000000068 + 0xfe;
  if (-1 < iVar8) {
    iVar10 = iVar8;
  }
  auVar22 = FUN_031e53b4(&stack0x00000610,(iVar10 >> 7) * iVar2,1,auVar21._0_8_,auVar21._8_8_,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27>__
                        );
  pfStack0000000000000098 = auVar22._8_8_;
  pfStack00000000000000a8 = auVar22._0_8_;
  FUN_05c351e4(&stack0x000005e0,0);
  puVar4 = Method_System_Array_Empty<XPathResultType>__;
  FUN_0499d47c(&stack0x000001b0,in_stack_00000030,0,
               *(undefined8 *)Method_System_Array_Empty<XPathResultType>__);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
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
  FUN_059ae6c4(in_stack_000000b0 & 1,&stack0x00000170,&stack0x000005dc,&stack0x000005d8,
               &stack0x000005c8);
  FUN_0499d47c(&stack0x00000130,in_stack_00000030,1,*(undefined8 *)puVar4);
  in_stack_000000f8 = in_stack_00000138;
  in_stack_000000f0 = in_stack_00000130;
  in_stack_00000108 = in_stack_00000148;
  in_stack_00000100 = in_stack_00000140;
  in_stack_00000118 = in_stack_00000158;
  in_stack_00000110 = in_stack_00000150;
  in_stack_00000128 = in_stack_00000168;
  in_stack_00000120 = in_stack_00000160;
  FUN_059ae6c4(in_stack_000000b0 & 1,&stack0x000000f0,&stack0x000005c4,&stack0x000005c0,
               &stack0x000005b0);
  iVar8 = iStack000000000000002c;
  uVar3 = *(int *)((long)in_stack_000000b8 + 4) * 4 + 0x83;
  uVar1 = uVar3 & 0x7f;
  if (-1 < (int)-uVar3) {
    uVar1 = -(-uVar3 & 0x7f);
  }
  FUN_03a14e64(&stack0x000005a0,iStack000000000000002c * ((int)(uVar3 - uVar1) >> 2),3,1,
               *(undefined8 *)Method_System_Array_Empty<Event_Type>__);
  memcpy(&stack0x00000300,pvStack0000000000000070,0x80);
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_MRUK_<LocalizeTrackable>d__135>__
  ;
  in_stack_000000e8 = 0;
  FUN_0499cee4(in_stack_000005dc,in_stack_000005c4,&stack0x000000e8,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_MRUK_<LocalizeTrackable>d__135>__
              );
  in_stack_000000e0 = 0;
  FUN_0499cee4(in_stack_000005d8,in_stack_000005c0,&stack0x000000e0,*(undefined8 *)puVar4);
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
  uVar14 = *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__19>__
  ;
  memcpy(&stack0x00000648,&stack0x00000300,0x80);
  auVar21 = FUN_031e5314(&stack0x00000610,iVar8,1,auVar21._0_8_,auVar21._8_8_,uVar14);
  auVar21 = FUN_031e5274(&stack0x00000610,
                         (int)((ulong)*in_stack_000000b8 >> 0x20) * iStack00000000000000b4,1,
                         auVar21._0_8_,auVar21._8_8_,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_OVRSceneModelLoader_<OnLoadSceneModelFailedPermissionNotGranted>d__10>__
                        );
  auVar22 = FUN_03a89bec(&stack0x000005f0,pfStack00000000000000a8,pfStack0000000000000098,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>,_OVRSceneManager_<<LoadSceneModel>g__AwaitTask_40_0>d>__
                        );
  auVar21 = FUN_03a1520c(&stack0x000005a0,auVar21._0_8_,auVar21._8_8_,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_ImmersiveSceneDebugger_<>c_<<GetLaunchSpaceSetupDebugger>b__80_0>d>__
                        );
  FUN_05c35308(auVar22._0_8_,auVar22._8_8_,auVar21._0_8_,auVar21._8_8_,0);
  return;
}


