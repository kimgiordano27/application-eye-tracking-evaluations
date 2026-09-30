/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass$$GetPointLightShadowFrustumFovBiasInDegrees
ENTRY_POINT: 058a9274
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass__GetPointLightShadowFrustumFovBiasInDegrees
               (void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  char *pcVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar25;
  undefined8 *unaff_x23;
  undefined4 *puVar26;
  undefined8 unaff_x24;
  undefined4 *unaff_x25;
  long *plVar27;
  long unaff_x26;
  long lVar28;
  ushort *puVar29;
  long *in_stack_00000028;
  int iStack0000000000000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  int in_stack_00000110;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  ushort uStack00000000000001d0;
  ulong in_stack_000001d8;
  undefined8 in_stack_000001e0;
  long *in_stack_00000200;
  long *in_stack_00000208;
  long in_stack_00000228;
  undefined8 uVar30;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  ulong in_stack_00000388;
  
code_r0x058a9274:
  while (uVar14 = FUN_0470872c(&stack0x000001c0,
                               *(undefined8 *)Method_System_Nullable<short>_get_HasValue__),
        (uVar14 & 1) != 0) {
    if (in_stack_00000228 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar5 = uStack00000000000001d0;
    uVar14 = _uStack00000000000001d0 & 0xffff;
    lVar28 = *(long *)(in_stack_00000228 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (lVar28 == 0) {
LAB_058a9898:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar19 = *(long *)(lVar28 + 0x10);
    lVar21 = *unaff_x19;
    *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
    if (lVar19 == 0) goto LAB_058a9898;
    uVar6 = *(uint *)(lVar28 + 0x18);
    if (uVar6 < *(uint *)(lVar19 + 0x18)) {
      *(uint *)(lVar28 + 0x18) = uVar6 + 1;
      *(uint *)(lVar19 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
    }
    else {
      FUN_03753114(lVar28,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  FUN_04708728(&stack0x000001c0,*(undefined8 *)Method_System_Nullable<short>_GetValueOrDefault__);
  uVar14 = 0;
  do {
    lVar28 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar28,*(undefined8 *)PTR_DAT_06316c58);
    if (in_stack_00000200 == (long *)0x0) goto thunk_FUN_02b3cac4;
    if ((lVar28 != 0) &&
       (lVar19 = thunk_FUN_02b79548(lVar28,*(undefined8 *)(*in_stack_00000200 + 0x40)), lVar19 == 0)
       ) {
LAB_058aa1a0:
      uVar30 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar30,0);
    }
    if (*(uint *)(in_stack_00000200 + 3) <= uVar14) {
LAB_058aa19c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    in_stack_00000200[uVar14 + 4] = lVar28;
    thunk_FUN_02bb0e9c(in_stack_00000200 + uVar14 + 4,lVar28);
    lVar28 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar28,*(undefined8 *)PTR_DAT_06316c58);
    if (in_stack_00000208 == (long *)0x0) goto thunk_FUN_02b3cac4;
    if ((lVar28 != 0) &&
       (lVar19 = thunk_FUN_02b79548(lVar28,*(undefined8 *)(*in_stack_00000208 + 0x40)), lVar19 == 0)
       ) goto LAB_058aa1a0;
    if (*(uint *)(in_stack_00000208 + 3) <= uVar14) goto LAB_058aa19c;
    in_stack_00000208[uVar14 + 4] = lVar28;
    thunk_FUN_02bb0e9c(in_stack_00000208 + uVar14 + 4,lVar28);
    lVar28 = *(long *)(unaff_x26 + 0xa8);
    if (lVar28 == 0) goto thunk_FUN_02b3cac4;
    if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_058aa19c;
    lVar28 = *(long *)(lVar28 + uVar14 * 8 + 0x20);
    if (lVar28 == 0) goto thunk_FUN_02b3cac4;
    FUN_03816fc8(&stack0x00000350,lVar28,
                 *(undefined8 *)
                  Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
LAB_058a9424:
    uVar15 = FUN_04738544(&stack0x000002c0,*unaff_x22);
    if ((uVar15 & 1) != 0) {
      if (*(long *)(unaff_x26 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar15 = FUN_03816854(*(long *)(unaff_x26 + 0xd8),in_stack_00000360,
                            in_stack_00000368 & 0xffffffff,*unaff_x23);
      if ((uVar15 & 1) == 0) {
        if (in_stack_00000200 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(in_stack_00000200 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar28 = in_stack_00000200[uVar14 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar28 != 0) {
          lVar19 = *(long *)(lVar28 + 0x10);
          lVar21 = *unaff_x19;
          *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
          if (lVar19 != 0) {
            uVar7 = *(uint *)(lVar28 + 0x18);
            uVar6 = (uint)in_stack_00000360 & 0xffff;
            if (uVar7 < *(uint *)(lVar19 + 0x18)) {
              *(uint *)(lVar28 + 0x18) = uVar7 + 1;
              *(uint *)(lVar19 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
            }
            else {
              FUN_03753114(lVar28,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_058a9424;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_058a9424;
    }
    FUN_04738540(&stack0x000002c0,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
    lVar28 = *(long *)(unaff_x26 + 0xb0);
    if (lVar28 == 0) goto thunk_FUN_02b3cac4;
    if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_058aa19c;
    lVar28 = *(long *)(lVar28 + uVar14 * 8 + 0x20);
    if (lVar28 == 0) goto thunk_FUN_02b3cac4;
    FUN_03816fc8(&stack0x00000350,lVar28,
                 *(undefined8 *)
                  Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
    uVar30 = 0;
    while (uVar15 = FUN_04738544(&stack0x000002c0,*unaff_x22), (uVar15 & 1) != 0) {
      if (in_stack_00000208 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(in_stack_00000208 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar28 = in_stack_00000208[uVar14 + 4];
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar28 == 0) {
LAB_058a95f4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar19 = *(long *)(lVar28 + 0x10);
      lVar21 = *unaff_x19;
      *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
      if (lVar19 == 0) goto LAB_058a95f4;
      uVar7 = *(uint *)(lVar28 + 0x18);
      uVar6 = (uint)in_stack_00000360 & 0xffff;
      if (uVar7 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar28 + 0x18) = uVar7 + 1;
        *(uint *)(lVar19 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
      }
      else {
        FUN_03753114(lVar28,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    FUN_04738540(&stack0x000002c0,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
    uVar14 = uVar14 + 1;
  } while (uVar14 != 3);
  lVar28 = *(long *)(in_stack_00000048 + 0x30);
  if (DAT_066d31da == '\0') {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    DAT_066d31da = '\x01';
  }
  if (lVar28 == 0) goto thunk_FUN_02b3cac4;
  iVar25 = unaff_x25[0x10];
  uVar6 = unaff_x25[0x11];
  uVar14 = (ulong)uVar6;
  lVar21 = *(long *)
            Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
  ;
  lVar19 = *(long *)(lVar21 + 0x38);
  if (lVar19 == 0) {
    FUN_02b76274(lVar21);
    lVar19 = *(long *)(lVar21 + 0x38);
  }
  lVar28 = FUN_0322b7a0(*(undefined8 *)(lVar28 + 0x40),*(undefined8 *)(lVar19 + 0x10));
  if ((int)uVar6 < 0) {
    FUN_04d9bcc4(0);
  }
  else if (uVar6 != 0) {
    puVar29 = (ushort *)(lVar28 + (long)iVar25 * 0x18);
    do {
      if (in_stack_00000228 == 0) goto thunk_FUN_02b3cac4;
      uVar5 = *puVar29;
      lVar28 = *(long *)(in_stack_00000228 + 0x18);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar28 == 0) goto thunk_FUN_02b3cac4;
      lVar19 = *(long *)(lVar28 + 0x10);
      lVar21 = *unaff_x19;
      *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
      if (lVar19 == 0) goto thunk_FUN_02b3cac4;
      uVar6 = *(uint *)(lVar28 + 0x18);
      if (uVar6 < *(uint *)(lVar19 + 0x18)) {
        *(uint *)(lVar28 + 0x18) = uVar6 + 1;
        *(uint *)(lVar19 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03753114(lVar28,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar14 = uVar14 - 1;
      puVar29 = puVar29 + 0xc;
    } while (uVar14 != 0);
  }
  if ((*in_stack_00000028 == 0) || (lVar28 = *(long *)(*in_stack_00000028 + 0x10), lVar28 == 0))
  goto thunk_FUN_02b3cac4;
  memcpy(&stack0x00000300,&stack0x000001f0,0x48);
  lVar19 = *(long *)(lVar28 + 0x10);
  lVar21 = *(long *)Method_System_Nullable<MonoSslPolicyErrors>__ctor__;
  *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
  if (lVar19 == 0) goto thunk_FUN_02b3cac4;
  uVar6 = *(uint *)(lVar28 + 0x18);
  if (uVar6 < *(uint *)(lVar19 + 0x18)) {
    lVar19 = lVar19 + (long)(int)uVar6 * 0x48;
    *(uint *)(lVar28 + 0x18) = uVar6 + 1;
    memcpy((void *)(lVar19 + 0x20),&stack0x00000300,0x48);
    thunk_FUN_02bb0e9c(lVar19 + 0x20,0);
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70);
    memcpy(&stack0x00000350,&stack0x00000300,0x48);
    Unity_Collections_NativeList<ResourceUnversionedData>__get_IsEmpty
              (lVar28,&stack0x00000350,uVar13);
  }
  iVar25 = iStack0000000000000030 + 1;
  if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
  lVar28 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
  if ((*(ushort *)
        (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__ +
                  0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  if (iVar25 < *(int *)(lVar28 + 8)) {
    if (*(long *)(in_stack_00000048 + 0x18) == 0) goto thunk_FUN_02b3cac4;
    unaff_x26 = FUN_037a6268(*(long *)(in_stack_00000048 + 0x18),iVar25,
                             *(undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__
                            );
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
    _iStack0000000000000030 = CONCAT44(uStack0000000000000034,iVar25);
    unaff_x25 = (undefined4 *)
                FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar25,
                             *(undefined8 *)
                              Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    lVar28 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar28 == 0) goto thunk_FUN_02b3cac4;
    uVar11 = *unaff_x25;
    if (DAT_066d31dc == '\0') {
      FUN_02b3c81c(
                  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                  );
      DAT_066d31dc = '\x01';
    }
    lVar28 = *(long *)(lVar28 + 0x28);
    if (lVar28 == 0) goto thunk_FUN_02b3cac4;
    puVar12 = (undefined8 *)
              FUN_0463ca1c(lVar28,uVar11,
                           *(undefined8 *)
                            Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                          );
    uVar13 = FUN_058a7d14(*puVar12);
    thunk_FUN_02bb0e9c(&stack0x000001f0,uVar13);
    puVar8 = Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__;
    if (unaff_x26 == 0) goto thunk_FUN_02b3cac4;
    in_stack_00000200 =
         (long *)FUN_02b3c908(*(undefined8 *)
                               Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__,3);
    thunk_FUN_02bb0e9c(&stack0x00000200,in_stack_00000200);
    in_stack_00000208 = (long *)FUN_02b3c908(*(undefined8 *)puVar8,3);
    thunk_FUN_02bb0e9c(&stack0x00000208,in_stack_00000208);
    lVar28 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
    if (*(int *)(lVar28 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar28 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
    }
    if (**(long **)(lVar28 + 0xb8) == 0) goto thunk_FUN_02b3cac4;
    FUN_0452f928(**(long **)(lVar28 + 0xb8),unaff_x26,&stack0x00000230,
                 *(undefined8 *)Method_System_Nullable<MissingMemberHandling>_get_HasValue__);
    in_stack_00000228 =
         thunk_FUN_02b79644(*(undefined8 *)
                             Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
    FUN_0588d214(in_stack_00000228,0);
    thunk_FUN_02bb0e9c(&stack0x00000228,in_stack_00000228);
    if ((((in_stack_00000228 == 0) ||
         (*(undefined4 *)(in_stack_00000228 + 0x28) = unaff_x25[0x19], in_stack_00000228 == 0)) ||
        (*(undefined4 *)(in_stack_00000228 + 0x2c) = unaff_x25[0x1a], in_stack_00000228 == 0)) ||
       ((*(undefined4 *)(in_stack_00000228 + 0x30) = unaff_x25[0x1b], in_stack_00000228 == 0 ||
        (*(undefined4 *)(in_stack_00000228 + 0x34) = unaff_x25[0x1c], in_stack_00000228 == 0))))
    goto thunk_FUN_02b3cac4;
    *(undefined1 *)(in_stack_00000228 + 0x38) = *(undefined1 *)((long)unaff_x25 + 0x7d);
    if (*(long *)(unaff_x26 + 200) == 0) goto thunk_FUN_02b3cac4;
    FUN_036b96a4(&stack0x00000350,*(long *)(unaff_x26 + 200),
                 *(undefined8 *)Method_System_Nullable<int>_GetValueOrDefault__);
    in_stack_000001c0 = uVar30;
    in_stack_000001c8 = unaff_x24;
    _uStack00000000000001d0 = in_stack_00000360;
    in_stack_000001d8 = in_stack_00000368;
    in_stack_000001e0 = in_stack_00000370;
    goto code_r0x058a9274;
  }
  if (*(long *)(in_stack_00000048 + 0x30) != 0) {
    in_stack_000001b8 = 0xffffffff;
    in_stack_000001b0 = *(long *)(in_stack_00000048 + 0x30);
    uVar14 = FUN_058a14e4(&stack0x000001b0);
    puVar9 = Method_OVRTask<List<bool>>_GetAwaiter__;
    puVar8 = 
    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
    ;
    if ((uVar14 & 1) != 0) goto LAB_058a9924;
    goto LAB_058a9c3c;
  }
  goto thunk_FUN_02b3cac4;
  while( true ) {
    if (0 < *(int *)(lVar28 + 0x2a0)) {
      lVar21 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_GetAwaiter__);
      FUN_0588d2c0(lVar21,0);
      uVar13 = FUN_058a7208(*(undefined8 *)(in_stack_00000048 + 0x30),lVar28);
      if (lVar21 == 0) goto thunk_FUN_02b3cac4;
      *(undefined8 *)(lVar21 + 0x10) = uVar13;
      thunk_FUN_02bb0e9c();
      lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
      FUN_037a5cd0(lVar22,*(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
      plVar27 = (long *)(lVar21 + 0x18);
      *plVar27 = lVar22;
      thunk_FUN_02bb0e9c(plVar27,lVar22);
      iVar25 = 0;
      while( true ) {
        iVar3 = *(int *)(lVar28 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (iVar3 <= iVar25) break;
        lVar22 = *plVar27;
        uVar13 = FUN_058a6d28(*(undefined8 *)(in_stack_00000048 + 0x30),lVar28,iVar25);
        if (lVar22 == 0) goto thunk_FUN_02b3cac4;
        lVar20 = *(long *)(lVar22 + 0x10);
        lVar23 = *(long *)puVar9;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar20 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar22 + 0x18);
        if (uVar6 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar22 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar20 + (long)(int)uVar6 * 8 + 0x20) = uVar13;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar22,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        iVar25 = iVar25 + 1;
      }
      uVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetStateMachine__
                                 );
      FUN_044a5fa0(uVar13,*(undefined8 *)Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Create__
                  );
      *(undefined8 *)(lVar21 + 0x20) = uVar13;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar21 + 0x20),uVar13);
      *(long *)(lVar21 + 0x28) = lVar19;
      thunk_FUN_02bb0e9c((long *)(lVar21 + 0x28),lVar19);
      puVar10 = Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
      if (lVar19 == 0) goto thunk_FUN_02b3cac4;
      if (0 < *(int *)(lVar19 + 0x18)) {
        iVar25 = 0;
        do {
          uVar11 = FUN_03752e1c(lVar19,iVar25,*(undefined8 *)PTR_DAT_06316cc0);
          if (*in_stack_00000028 == 0) goto thunk_FUN_02b3cac4;
          lVar28 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar28 == 0) ||
             (FUN_039b61b8(&stack0x00000350,lVar28,uVar11,*(undefined8 *)puVar10),
             in_stack_00000170 = uVar30, in_stack_00000178 = unaff_x24,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0))
          goto thunk_FUN_02b3cac4;
          *(long *)(in_stack_00000388 + 0x10) = lVar21;
          thunk_FUN_02bb0e9c((long *)(in_stack_00000388 + 0x10),lVar21);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          unaff_x24 = in_stack_00000178;
          uVar30 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar28 = *(long *)(*in_stack_00000028 + 0x10), lVar28 == 0)) goto thunk_FUN_02b3cac4;
          FUN_039b621c(lVar28,uVar11,&stack0x00000350,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetAwaiter__);
          iVar25 = iVar25 + 1;
          _iStack0000000000000030 = in_stack_00000388;
        } while (iVar25 < *(int *)(lVar19 + 0x18));
      }
    }
    uVar14 = FUN_058a14e4(&stack0x000001b0);
    if ((uVar14 & 1) == 0) break;
LAB_058a9924:
    lVar28 = FUN_058a148c(&stack0x000001b0);
    lVar19 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar19,*(undefined8 *)PTR_DAT_06316c58);
    iVar25 = *(int *)(lVar28 + 0x298);
    if (iVar25 < *(int *)(lVar28 + 0x29c) + 1) {
      if (lVar19 == 0) goto thunk_FUN_02b3cac4;
      lVar21 = *unaff_x19;
      do {
        lVar22 = *(long *)(lVar19 + 0x10);
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (lVar22 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar19 + 0x18);
        if (uVar6 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar19 + 0x18) = uVar6 + 1;
          *(int *)(lVar22 + (long)(int)uVar6 * 4 + 0x20) = iVar25;
        }
        else {
          FUN_03753114(lVar19,iVar25,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
          lVar21 = *unaff_x19;
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 < *(int *)(lVar28 + 0x29c) + 1);
    }
  }
LAB_058a9c3c:
  lVar28 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar28 != 0) {
    iVar25 = 0;
    do {
      lVar28 = *(long *)(lVar28 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (*(int *)(lVar28 + 8) <= iVar25) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar16 = (int *)FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar25,
                                    *(undefined8 *)
                                     Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__)
      ;
      if (((*in_stack_00000028 == 0) || (lVar28 = *(long *)(*in_stack_00000028 + 0x10), lVar28 == 0)
          ) || (FUN_039b61b8(&stack0x00000350,lVar28,*piVar16,
                             *(undefined8 *)
                              Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__),
               in_stack_00000388 == 0)) break;
      lVar28 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar28 != 0) {
        lVar19 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_066d31d0 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
          DAT_066d31d0 = '\x01';
        }
        puVar8 = 
        Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
        ;
        if (lVar19 == 0) break;
        iVar3 = piVar16[10];
        uVar6 = piVar16[0xb];
        uVar14 = (ulong)uVar6;
        lVar22 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
        lVar21 = *(long *)(lVar22 + 0x38);
        if (lVar21 == 0) {
          FUN_02b76274(lVar22);
          lVar21 = *(long *)(lVar22 + 0x38);
        }
        lVar19 = FUN_0322b7b4(*(undefined8 *)(lVar19 + 0x30),*(undefined8 *)(lVar21 + 0x10));
        if ((int)uVar6 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar6 != 0) {
          puVar26 = (undefined4 *)(lVar19 + (long)iVar3 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar19 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar19 == 0))
            goto thunk_FUN_02b3cac4;
            pcVar17 = (char *)UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                        (lVar19,*(undefined8 *)(puVar26 + -2),*puVar26,0);
            if (*pcVar17 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              iVar3 = *(int *)(pcVar17 + 4);
              plVar27 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02b76218(*(long *)(*(long *)
                                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar27 + (long)iVar3 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_058ac454(&stack0x00000350,4,*piVar16,0);
                uVar30 = 0;
              }
              else {
                uVar30 = FUN_058ad664(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar16,0);
              }
              uVar13 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),piVar16,
                                    &stack0x000000f0,uVar30);
              in_stack_000000e0 = FUN_04bffdac(*(undefined8 *)puVar8,uVar13,0);
              uVar11 = in_stack_000000f0;
              lVar19 = *(long *)(lVar28 + 0x20);
              in_stack_000000e8 = 0;
              thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar30 == 0xd);
              if (lVar19 == 0) goto thunk_FUN_02b3cac4;
              FUN_044a87e4(lVar19,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                          );
            }
            uVar14 = uVar14 - 1;
            puVar26 = puVar26 + 3;
          } while (uVar14 != 0);
        }
        if (-1 < piVar16[8]) {
          lVar19 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_066d31d1 == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                        );
            DAT_066d31d1 = '\x01';
          }
          if (lVar19 == 0) break;
          iVar3 = piVar16[0xc];
          uVar6 = piVar16[0xd];
          lVar22 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
          ;
          lVar21 = *(long *)(lVar22 + 0x38);
          if (lVar21 == 0) {
            FUN_02b76274(lVar22);
            lVar21 = *(long *)(lVar22 + 0x38);
          }
          lVar19 = FUN_0322b7c8(*(undefined8 *)(lVar19 + 0x38),*(undefined8 *)(lVar21 + 0x10));
          if ((int)uVar6 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar6 != 0) {
            uVar14 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              puVar12 = (undefined8 *)(lVar19 + (long)iVar3 * 0xc + uVar14 * 0xc);
              _iStack0000000000000030 =
                   _iStack0000000000000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
              lVar21 = FUN_058ab2a4(*(long *)(in_stack_00000048 + 0x30),*puVar12,
                                    _iStack0000000000000030,0);
              if (*(int *)(lVar21 + 8) != *piVar16) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar21 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar21 == 0))
                goto thunk_FUN_02b3cac4;
                lVar21 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                   (lVar21,*puVar12,*(undefined4 *)(puVar12 + 1),0);
                iVar4 = *(int *)(lVar21 + 8);
                if (0 < iVar4) {
                  iVar24 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar21 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar21 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    uVar30 = *puVar12;
                    if (DAT_066d31cb == '\0') {
                      FUN_02b3c81c();
                      DAT_066d31cb = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    lVar22 = *(long *)(lVar22 + 0x20);
                    iVar1 = *(int *)(lVar21 + 0x28);
                    iVar2 = *(int *)(lVar21 + 0x2c);
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if (DAT_066d2bb3 == '\0') {
                      FUN_02b3c81c();
                      DAT_066d2bb3 = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if (lVar22 == 0) goto thunk_FUN_02b3cac4;
                    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(puVar12 + 1)) goto LAB_058aa19c;
                    piVar18 = (int *)FUN_03ab59e0(lVar22 + (long)(int)*(uint *)(puVar12 + 1) * 8 +
                                                  0x20,iVar24 + ((int)((ulong)uVar30 >> 0x20) +
                                                                iVar1 * ((uint)uVar30 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__
                                                 );
                    lVar21 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar21 == 0) goto thunk_FUN_02b3cac4;
                    iVar1 = *piVar18;
                    plVar27 = *(long **)(lVar21 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02b76218(*(long *)(*(long *)
                                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                            + 0x20));
                      lVar21 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar27 + (long)iVar1 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar30 = FUN_058ad664(lVar21,piVar16[8],in_stack_00000060,0);
                    uVar13 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar16,uVar30);
                    in_stack_000000e0 =
                         FUN_04bffdac(*(undefined8 *)
                                       Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__,
                                      uVar13,0);
                    lVar21 = *(long *)(lVar28 + 0x20);
                    in_stack_000000e8 = 0;
                    thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar30 == 0xd);
                    if (lVar21 == 0) goto thunk_FUN_02b3cac4;
                    FUN_044a87e4(lVar21,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                                );
                    iVar24 = iVar24 + 1;
                  } while (iVar4 != iVar24);
                }
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar6);
          }
        }
      }
      lVar28 = *(long *)(in_stack_00000048 + 0x30);
      iVar25 = iVar25 + 1;
    } while (lVar28 != 0);
  }
thunk_FUN_02b3cac4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


