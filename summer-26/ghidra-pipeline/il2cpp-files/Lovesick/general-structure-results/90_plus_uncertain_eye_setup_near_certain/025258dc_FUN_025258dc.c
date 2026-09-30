/*
FUNCTION_NAME: FUN_025258dc
ENTRY_POINT: 025258dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_025258dc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined4 local_788;
  undefined8 local_784;
  undefined8 local_77c;
  undefined8 uStack_774;
  undefined4 local_76c;
  undefined8 local_768;
  undefined8 local_760;
  undefined1 auStack_758 [112];
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined1 auStack_6c0 [68];
  undefined1 auStack_67c [68];
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined1 auStack_5f0 [72];
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  ulong local_598;
  ulong uStack_590;
  undefined8 uStack_588;
  long *plStack_580;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined4 local_550;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined4 local_530;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [112];
  undefined8 local_340;
  undefined8 uStack_338;
  ulong local_330;
  ulong uStack_328;
  undefined8 local_320;
  long *plStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  ulong local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined2 local_2c4 [2];
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  ulong local_2b0;
  ulong uStack_2a8;
  undefined8 local_2a0;
  long *plStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  if ((DAT_03782a38 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseField_UxmlTraits<string>__ctor__);
    thunk_FUN_00d48444(StringLiteral_10519);
    thunk_FUN_00d48444(StringLiteral_3541);
    thunk_FUN_00d48444(UnityEngine_UIElements_UIR_Allocator2D_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SuperTextMesh>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                      );
    thunk_FUN_00d48444(StringLiteral_983);
    thunk_FUN_00d48444(Method_System_IO_Compression_DeflateStream_Write__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadCharsAsync>d__14>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_uint>_get_Item__);
    thunk_FUN_00d48444(PTR_DAT_033ec4c0);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_Internal_TileDepthRangePass_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<byte>_GetHashCode__);
    thunk_FUN_00d48444(StringLiteral_8968);
    thunk_FUN_00d48444(System_Collections_Generic_IList<JsonSchemaModel>_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<PlayerInput>_GetEnumerator__
                      );
    thunk_FUN_00d48444(SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Linq_Lookup_Grouping<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_System_Collections_Generic_IList<TElement>_RemoveAt__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<Data_VolumeBoundsData>_get_HasValue__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    DAT_03782a38 = 1;
  }
  puVar6 = StringLiteral_8968;
  uStack_138 = 0;
  local_140 = 0;
  local_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_150 = 0;
  local_1e0 = 0;
  local_230 = 0;
  local_278 = 0;
  local_280 = 0;
  local_2c4[0] = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_288 = 0;
  local_290 = 0;
  plStack_298 = (long *)0x0;
  local_2a0 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uVar14 = FUN_02546db4(param_2,0);
  uVar30 = 0;
  if ((uVar14 & 1) != 0) {
    local_340 = 0;
    local_5a8 = CONCAT44(local_5a8._4_4_,*(undefined4 *)(param_2 + 1));
    FUN_01347274(&local_340,&local_5a8,*(undefined8 *)puVar6);
    uVar30 = local_340;
  }
  uVar14 = FUN_02546df0(param_2,0);
  uVar18 = 0;
  if ((uVar14 & 1) != 0) {
    local_340 = 0;
    local_5a8 = CONCAT44(local_5a8._4_4_,*(undefined4 *)((long)param_2 + 0xb4));
    FUN_01347274(&local_340,&local_5a8,*(undefined8 *)puVar6);
    uVar18 = local_340;
  }
  uVar14 = FUN_02546dc0(param_2,0);
  uVar19 = 0;
  if ((uVar14 & 1) != 0) {
    local_340 = 0;
    local_5a8 = CONCAT44(local_5a8._4_4_,*(undefined4 *)((long)param_2 + 0xc));
    FUN_01347274(&local_340,&local_5a8,*(undefined8 *)puVar6);
    uVar19 = local_340;
  }
  puVar4 = Method_System_Collections_Generic_Dictionary<uint,_uint>_get_Item__;
  uVar14 = FUN_02546dcc(param_2,0);
  if ((uVar14 & 1) != 0) {
    local_5a8 = param_2[2];
    uStack_5a0 = param_2[3];
    uStack_338 = 0;
    local_340 = 0;
    local_330 = local_330 & 0xffffffff00000000;
    FUN_01347274(&local_340,&local_5a8,*(undefined8 *)puVar4);
    uStack_88 = uStack_338;
    local_90 = local_340;
    local_80 = (undefined4)local_330;
  }
  uVar14 = FUN_02546e2c(param_2,0);
  uVar20 = 0;
  uVar25 = 0;
  if ((uVar14 & 1) != 0) {
    local_5a8 = param_2[0x1b];
    uStack_338 = 0;
    local_340 = 0;
    uStack_5a0 = CONCAT44(uStack_5a0._4_4_,*(undefined4 *)(param_2 + 0x1c));
    FUN_01347274(&local_340,&local_5a8,
                 *(undefined8 *)UnityEngine_Rendering_Universal_Internal_TileDepthRangePass_TypeInfo
                );
    uVar20 = uStack_338;
    uVar25 = local_340;
  }
  uVar14 = FUN_02546e14(param_2,0);
  uVar21 = 0;
  if ((uVar14 & 1) != 0) {
    local_340 = 0;
    local_5a8 = CONCAT44(local_5a8._4_4_,*(undefined4 *)((long)param_2 + 0xc4));
    FUN_01347274(&local_340,&local_5a8,*(undefined8 *)puVar6);
    uVar21 = local_340;
  }
  uVar14 = FUN_02546e20(param_2,0);
  if ((uVar14 & 1) != 0) {
    local_5a8 = param_2[0x19];
    uStack_5a0 = param_2[0x1a];
    uStack_338 = 0;
    local_340 = 0;
    local_330 = local_330 & 0xffffffff00000000;
    FUN_01347274(&local_340,&local_5a8,*(undefined8 *)puVar4);
    uStack_a8 = uStack_338;
    local_b0 = local_340;
    local_a0 = (undefined4)local_330;
  }
  uVar14 = FUN_02546e38(param_2,0);
  puVar4 = PTR_DAT_033ec4c0;
  if ((uVar14 & 1) != 0) {
    memcpy(auStack_3b0,(void *)((long)param_2 + 0xe4),0x6c);
    uStack_2d8 = 0;
    local_2e0 = 0;
    uStack_2e8 = 0;
    local_2f0 = 0;
    uStack_2f8 = 0;
    local_300 = 0;
    uStack_308 = 0;
    local_310 = 0;
    plStack_318 = (long *)0x0;
    local_320 = 0;
    uStack_328 = 0;
    local_330 = 0;
    uStack_338 = 0;
    local_340 = 0;
    FUN_01347274(&local_340,auStack_3b0,*(undefined8 *)puVar4);
    memcpy(&local_120,&local_340,0x70);
  }
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_248 = 0;
  local_250 = 0;
  local_130 = local_80;
  uStack_138 = uStack_88;
  local_140 = local_90;
  local_1e0 = 0;
  local_230 = 0;
  local_150 = local_a0;
  uStack_158 = uStack_a8;
  local_160 = local_b0;
  memcpy(&local_1d0,&local_120,0x70);
  uVar14 = FUN_02546da8(param_2,0);
  uVar22 = 0;
  uVar26 = 0;
  if ((uVar14 & 1) != 0) {
    local_5a8 = *param_2;
    uStack_338 = 0;
    local_340 = 0;
    FUN_01347274(&local_340,&local_5a8,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadCharsAsync>d__14>__
                );
    uVar22 = uStack_338;
    uVar26 = local_340;
  }
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>_Dispose__;
  uVar14 = FUN_02546dd8(param_2,0);
  if ((uVar14 & 1) != 0) {
    uStack_3e8 = param_2[5];
    local_3f0 = param_2[4];
    uStack_3d8 = param_2[7];
    local_3e0 = param_2[6];
    uStack_3c8 = param_2[9];
    local_3d0 = param_2[8];
    uStack_3b8 = param_2[0xb];
    local_3c0 = param_2[10];
    local_300 = local_300 & 0xffffffff00000000;
    uStack_308 = 0;
    local_310 = 0;
    plStack_318 = (long *)0x0;
    local_320 = 0;
    uStack_328 = 0;
    local_330 = 0;
    uStack_338 = 0;
    local_340 = 0;
    FUN_01347274(&local_340,&local_3f0,*(undefined8 *)puVar4);
    memcpy(&local_220,&local_340,0x44);
  }
  uVar14 = FUN_02546de4(param_2,0);
  if ((uVar14 & 1) != 0) {
    uStack_428 = param_2[0xd];
    local_430 = param_2[0xc];
    uStack_418 = param_2[0xf];
    local_420 = param_2[0xe];
    uStack_408 = param_2[0x11];
    uStack_410 = param_2[0x10];
    uStack_3f8 = param_2[0x13];
    local_400 = param_2[0x12];
    local_300 = local_300 & 0xffffffff00000000;
    uStack_308 = 0;
    local_310 = 0;
    plStack_318 = (long *)0x0;
    local_320 = 0;
    uStack_328 = 0;
    local_330 = 0;
    uStack_338 = 0;
    local_340 = 0;
    FUN_01347274(&local_340,&local_430,*(undefined8 *)puVar4);
    memcpy(&local_270,&local_340,0x44);
  }
  uVar14 = FUN_02546dfc(param_2,0);
  uVar23 = 0;
  uVar27 = 0;
  if ((uVar14 & 1) != 0) {
    local_5a8 = param_2[0x17];
    uStack_338 = 0;
    local_340 = 0;
    FUN_01347274(&local_340,&local_5a8,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<byte>_GetHashCode__);
    uVar23 = uStack_338;
    uVar27 = local_340;
  }
  uVar14 = FUN_02546e08(param_2,0);
  uVar24 = 0;
  if ((uVar14 & 1) != 0) {
    local_340 = 0;
    local_5a8 = CONCAT44(local_5a8._4_4_,*(undefined4 *)(param_2 + 0x18));
    FUN_01347274(&local_340,&local_5a8,*(undefined8 *)puVar6);
    uVar24 = local_340;
  }
  uVar14 = FUN_02546e44(param_2,0);
  puVar6 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  uVar29 = 0;
  if ((uVar14 & 1) == 0)
  goto 
  UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement__get_placementPosition
  ;
  uVar29 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = (undefined8 *)(param_1 + 0x58);
  uVar14 = FUN_0268b4e0(uVar29,0,0);
  if ((uVar14 & 1) == 0) {
LAB_02525fc4:
    uVar29 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_02681b9c(uVar29,0,0);
    if ((uVar14 & 1) != 0) {
      local_4a0 = param_2[0x2e];
      uStack_4b8 = param_2[0x2b];
      local_4c0 = param_2[0x2a];
      uStack_4a8 = param_2[0x2d];
      uStack_4b0 = param_2[0x2c];
      uVar14 = FUN_025407e0(&local_4c0,0);
      if ((uVar14 & 1) != 0) {
        uStack_4d8 = *(undefined8 *)(param_1 + 0x70);
        local_4e0 = *(undefined8 *)(param_1 + 0x68);
        uStack_4c8 = *(undefined8 *)(param_1 + 0x80);
        uStack_4d0 = *(undefined8 *)(param_1 + 0x78);
        uStack_4e8 = *(undefined8 *)(param_1 + 0x60);
        local_4f0 = *puVar1;
        local_500 = param_2[0x2e];
        uStack_518 = param_2[0x2b];
        local_520 = param_2[0x2a];
        uStack_508 = param_2[0x2d];
        uStack_510 = param_2[0x2c];
        FUN_025403f4(&local_5a8,&local_4f0,&local_520,0);
        plStack_318 = plStack_580;
        local_320 = uStack_588;
        uStack_328 = uStack_590;
        local_330 = local_598;
        uStack_338 = uStack_5a0;
        local_340 = local_5a8;
        *(ulong *)(param_1 + 0x70) = uStack_590;
        *(ulong *)(param_1 + 0x68) = local_598;
        *(long **)(param_1 + 0x80) = plStack_580;
        *(undefined8 *)(param_1 + 0x78) = uStack_588;
        *(undefined8 *)(param_1 + 0x60) = uStack_5a0;
        *puVar1 = local_5a8;
      }
    }
  }
  else {
    local_440 = param_2[0x2e];
    uStack_458 = param_2[0x2b];
    local_460 = param_2[0x2a];
    uStack_448 = param_2[0x2d];
    uStack_450 = param_2[0x2c];
    uVar14 = FUN_025407e0(&local_460,0);
    if ((uVar14 & 1) == 0) goto LAB_02525fc4;
    local_470 = param_2[0x2e];
    uStack_488 = param_2[0x2b];
    local_490 = param_2[0x2a];
    uStack_478 = param_2[0x2d];
    uStack_480 = param_2[0x2c];
    plStack_318 = (long *)0x0;
    local_320 = 0;
    uStack_328 = 0;
    local_330 = 0;
    uStack_338 = 0;
    local_340 = 0;
    FUN_0254021c(&local_340,&local_490,0);
    *(undefined8 *)(param_1 + 0x60) = uStack_338;
    *puVar1 = local_340;
    *(ulong *)(param_1 + 0x70) = uStack_328;
    *(ulong *)(param_1 + 0x68) = local_330;
    *(long **)(param_1 + 0x80) = plStack_318;
    *(undefined8 *)(param_1 + 0x78) = local_320;
  }
  uVar29 = *(undefined8 *)(param_1 + 0x80);
UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility_Placement__get_placementPosition:
  puVar6 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<string>__ctor__;
  uVar14 = FUN_02546e50(param_2,0);
  uVar31 = 0;
  if ((uVar14 & 1) != 0) {
    uVar31 = *(undefined4 *)(param_2 + 0x2f);
  }
  lVar15 = *(long *)puVar6;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *(long *)puVar6;
  }
  lVar15 = **(long **)(lVar15 + 0xb8);
  if (lVar15 != 0) {
    lVar28 = *(long *)Method_System_Collections_Generic_List<SuperTextMesh>__ctor__;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    uVar14 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 200));
    if ((uVar14 & 1) == 0) {
      *(undefined4 *)(lVar15 + 0x18) = 0;
    }
    else {
      iVar3 = *(int *)(lVar15 + 0x18);
      *(undefined4 *)(lVar15 + 0x18) = 0;
      if (0 < iVar3) {
        FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar3,0);
      }
    }
    lVar15 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    if (lVar15 != 0) {
      lVar28 = *(long *)
                Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
      ;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      uVar14 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 200));
      if ((uVar14 & 1) == 0) {
        *(undefined4 *)(lVar15 + 0x18) = 0;
      }
      else {
        iVar3 = *(int *)(lVar15 + 0x18);
        *(undefined4 *)(lVar15 + 0x18) = 0;
        if (0 < iVar3) {
          FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar3,0);
        }
      }
      puVar9 = StringLiteral_4747;
      puVar8 = StringLiteral_3541;
      puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__;
      puVar5 = UnityEngine_UIElements_UIR_Allocator2D_TypeInfo;
      puVar4 = System_Collections_Generic_IList<JsonSchemaModel>_TypeInfo;
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_01323390(*(long *)(param_1 + 0x40),&local_340,*(undefined8 *)StringLiteral_983);
        plStack_298 = plStack_318;
        local_2a0 = local_320;
        uStack_2b8 = uStack_338;
        local_2c0 = local_340;
        uStack_2a8 = uStack_328;
        local_2b0 = local_330;
        uStack_288 = uStack_308;
        local_290 = local_310;
        while (uVar14 = FUN_012b894c(&local_2c0,*(undefined8 *)puVar8), (uVar14 & 1) != 0) {
          FUN_00cbb534(&local_340,&local_2c0,*(undefined8 *)puVar5);
          plVar11 = plStack_318;
          uVar14 = uStack_328;
          local_2c4[0] = 0;
          uVar10 = (undefined4)local_320;
          lVar15 = *(long *)(*(long *)puVar4 + 0x20);
          if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
            lVar15 = FUN_00d5941c();
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
          if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
            lVar15 = FUN_00d5941c();
          }
          pcVar16 = (char *)thunk_FUN_00d32ed4(local_2c4,*(undefined8 *)(lVar15 + 0x80));
          if (*pcVar16 != '\0') {
            FUN_00cbb824(local_2c4,*(undefined8 *)Method_System_IO_Compression_DeflateStream_Write__
                        );
            uStack_338 = 0xffffffffffffffff;
            local_330 = CONCAT44(local_330._4_4_,uVar10);
            local_340 = *(undefined8 *)
                         Method_System_Linq_Lookup_Grouping<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_System_Collections_Generic_IList<TElement>_RemoveAt__
            ;
            uVar17 = FUN_017a7f78(&local_340,0);
            FUN_01600424(*(undefined8 *)Method_System_Nullable<Data_VolumeBoundsData>_get_HasValue__
                         ,uVar17,*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                         ,0);
          }
          lVar15 = *(long *)puVar6;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar15 = *(long *)puVar6;
          }
          if (**(long **)(lVar15 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if ((plVar11 != (long *)0x0) &&
             (*plVar11 != *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar11);
          }
          FUN_00bc0bd0(**(long **)(lVar15 + 0xb8),plVar11,*(undefined8 *)puVar7);
          lVar15 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00ac20f0(lVar15,uVar14 & 0xffffffff,*(undefined8 *)puVar9);
        }
        FUN_012b8948(&local_2c0,*(undefined8 *)StringLiteral_10519);
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_02549144(*(long *)(param_1 + 0x18),&local_278,&local_280,0);
          lVar15 = *(long *)puVar6;
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar15 = *(long *)puVar6;
          }
          uVar13 = local_278;
          uVar12 = local_280;
          lVar28 = *(long *)(param_1 + 0x38);
          uVar17 = **(undefined8 **)(lVar15 + 0xb8);
          uVar2 = (*(undefined8 **)(lVar15 + 0xb8))[1];
          uStack_538 = uStack_138;
          local_540 = local_140;
          local_530 = local_130;
          uStack_558 = uStack_158;
          local_560 = local_160;
          local_550 = local_150;
          memcpy(&local_340,&local_1d0,0x70);
          memcpy(&local_5a8,&local_220,0x44);
          memcpy(auStack_5f0,&local_270,0x44);
          if (lVar28 != 0) {
            uStack_790 = uStack_538;
            local_798 = local_540;
            local_788 = local_530;
            uStack_774 = uStack_558;
            local_77c = local_560;
            local_76c = local_550;
            local_7a0 = uVar19;
            local_784 = uVar21;
            local_768 = uVar25;
            local_760 = uVar20;
            memcpy(auStack_758,&local_340,0x70);
            uStack_6d8 = 0;
            local_6e8 = uVar30;
            local_6e0 = uVar18;
            local_6d0 = uVar26;
            local_6c8 = uVar22;
            memcpy(auStack_6c0,&local_5a8,0x44);
            memcpy(auStack_67c,auStack_5f0,0x44);
            local_608 = uVar12;
            local_5f4 = 0;
            uStack_610 = uVar13;
            local_638 = uVar17;
            uStack_630 = uVar2;
            local_628 = uVar27;
            local_620 = uVar23;
            local_618 = uVar24;
            local_600 = uVar29;
            local_5f8 = uVar31;
            (**(code **)(lVar28 + 0x18))
                      (*(undefined8 *)(lVar28 + 0x40),&local_7a0,*(undefined8 *)(lVar28 + 0x28));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


