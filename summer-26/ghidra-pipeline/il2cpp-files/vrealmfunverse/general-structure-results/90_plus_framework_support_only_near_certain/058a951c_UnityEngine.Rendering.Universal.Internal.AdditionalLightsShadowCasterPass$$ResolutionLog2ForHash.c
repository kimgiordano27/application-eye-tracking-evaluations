/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass$$ResolutionLog2ForHash
ENTRY_POINT: 058a951c
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


void UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass__ResolutionLog2ForHash
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  char *pcVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar24;
  undefined8 *unaff_x23;
  undefined4 *puVar25;
  undefined8 unaff_x24;
  undefined4 *unaff_x25;
  long *plVar26;
  long unaff_x26;
  long lVar27;
  ushort *puVar28;
  ulong unaff_x29;
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
  undefined8 uVar29;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  ulong in_stack_00000388;
  
  do {
    FUN_03816fc8(&stack0x00000350,param_1,param_2);
    uVar29 = 0;
    while( true ) {
      uVar14 = FUN_04738544(&stack0x000002c0,*unaff_x22);
      if ((uVar14 & 1) == 0) break;
      if (in_stack_00000208 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(in_stack_00000208 + 3) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar27 = in_stack_00000208[unaff_x29 + 4];
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar27 == 0) {
LAB_058a95f4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar18 = *(long *)(lVar27 + 0x10);
      lVar20 = *unaff_x19;
      *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_058a95f4;
      uVar7 = *(uint *)(lVar27 + 0x18);
      uVar1 = (uint)in_stack_00000360 & 0xffff;
      if (uVar7 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar27 + 0x18) = uVar7 + 1;
        *(uint *)(lVar18 + (long)(int)uVar7 * 4 + 0x20) = uVar1;
      }
      else {
        FUN_03753114(lVar27,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    FUN_04738540(&stack0x000002c0,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
    unaff_x29 = unaff_x29 + 1;
    if (unaff_x29 == 3) {
      lVar27 = *(long *)(in_stack_00000048 + 0x30);
      if (DAT_066d31da == '\0') {
        FUN_02b3c81c(
                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                    );
        DAT_066d31da = '\x01';
      }
      if (lVar27 == 0) goto thunk_FUN_02b3cac4;
      iVar24 = unaff_x25[0x10];
      uVar1 = unaff_x25[0x11];
      uVar14 = (ulong)uVar1;
      lVar20 = *(long *)
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
      ;
      lVar18 = *(long *)(lVar20 + 0x38);
      if (lVar18 == 0) {
        FUN_02b76274(lVar20);
        lVar18 = *(long *)(lVar20 + 0x38);
      }
      lVar27 = FUN_0322b7a0(*(undefined8 *)(lVar27 + 0x40),*(undefined8 *)(lVar18 + 0x10));
      if ((int)uVar1 < 0) {
        FUN_04d9bcc4(0);
      }
      else if (uVar1 != 0) {
        puVar28 = (ushort *)(lVar27 + (long)iVar24 * 0x18);
        do {
          if (in_stack_00000228 == 0) goto thunk_FUN_02b3cac4;
          uVar6 = *puVar28;
          lVar27 = *(long *)(in_stack_00000228 + 0x18);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (lVar27 == 0) goto thunk_FUN_02b3cac4;
          lVar18 = *(long *)(lVar27 + 0x10);
          lVar20 = *unaff_x19;
          *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
          if (lVar18 == 0) goto thunk_FUN_02b3cac4;
          uVar1 = *(uint *)(lVar27 + 0x18);
          if (uVar1 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar27 + 0x18) = uVar1 + 1;
            *(uint *)(lVar18 + (long)(int)uVar1 * 4 + 0x20) = (uint)uVar6;
          }
          else {
            FUN_03753114(lVar27,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          uVar14 = uVar14 - 1;
          puVar28 = puVar28 + 0xc;
        } while (uVar14 != 0);
      }
      if ((*in_stack_00000028 == 0) || (lVar27 = *(long *)(*in_stack_00000028 + 0x10), lVar27 == 0))
      goto thunk_FUN_02b3cac4;
      memcpy(&stack0x00000300,&stack0x000001f0,0x48);
      lVar18 = *(long *)(lVar27 + 0x10);
      lVar20 = *(long *)Method_System_Nullable<MonoSslPolicyErrors>__ctor__;
      *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
      if (lVar18 == 0) goto thunk_FUN_02b3cac4;
      uVar1 = *(uint *)(lVar27 + 0x18);
      if (uVar1 < *(uint *)(lVar18 + 0x18)) {
        lVar18 = lVar18 + (long)(int)uVar1 * 0x48;
        *(uint *)(lVar27 + 0x18) = uVar1 + 1;
        memcpy((void *)(lVar18 + 0x20),&stack0x00000300,0x48);
        thunk_FUN_02bb0e9c(lVar18 + 0x20,0);
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70);
        memcpy(&stack0x00000350,&stack0x00000300,0x48);
        Unity_Collections_NativeList<ResourceUnversionedData>__get_IsEmpty
                  (lVar27,&stack0x00000350,uVar13);
      }
      iVar24 = iStack0000000000000030 + 1;
      if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
      lVar27 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (*(int *)(lVar27 + 8) <= iVar24) {
        if (*(long *)(in_stack_00000048 + 0x30) != 0) {
          in_stack_000001b8 = 0xffffffff;
          in_stack_000001b0 = *(long *)(in_stack_00000048 + 0x30);
          uVar14 = FUN_058a14e4(&stack0x000001b0);
          puVar9 = Method_OVRTask<List<bool>>_GetAwaiter__;
          puVar8 = 
          Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
          ;
          if ((uVar14 & 1) != 0) break;
          goto LAB_058a9c3c;
        }
        goto thunk_FUN_02b3cac4;
      }
      if (*(long *)(in_stack_00000048 + 0x18) == 0) goto thunk_FUN_02b3cac4;
      unaff_x26 = FUN_037a6268(*(long *)(in_stack_00000048 + 0x18),iVar24,
                               *(undefined8 *)
                                Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__);
      if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
      _iStack0000000000000030 = CONCAT44(uStack0000000000000034,iVar24);
      unaff_x25 = (undefined4 *)
                  FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar24,
                               *(undefined8 *)
                                Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
      lVar27 = *(long *)(in_stack_00000048 + 0x30);
      if (lVar27 == 0) goto thunk_FUN_02b3cac4;
      uVar11 = *unaff_x25;
      if (DAT_066d31dc == '\0') {
        FUN_02b3c81c(
                    Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                    );
        DAT_066d31dc = '\x01';
      }
      lVar27 = *(long *)(lVar27 + 0x28);
      if (lVar27 == 0) goto thunk_FUN_02b3cac4;
      puVar12 = (undefined8 *)
                FUN_0463ca1c(lVar27,uVar11,
                             *(undefined8 *)
                              Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                            );
      uVar13 = FUN_058a7d14(*puVar12);
      thunk_FUN_02bb0e9c(&stack0x000001f0,uVar13);
      puVar8 = Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__;
      if (unaff_x26 == 0) goto thunk_FUN_02b3cac4;
      in_stack_00000200 =
           (long *)FUN_02b3c908(*(undefined8 *)
                                 Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__,3)
      ;
      thunk_FUN_02bb0e9c(&stack0x00000200,in_stack_00000200);
      in_stack_00000208 = (long *)FUN_02b3c908(*(undefined8 *)puVar8,3);
      thunk_FUN_02bb0e9c(&stack0x00000208,in_stack_00000208);
      lVar27 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
      if (*(int *)(lVar27 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar27 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
      }
      if (**(long **)(lVar27 + 0xb8) == 0) goto thunk_FUN_02b3cac4;
      FUN_0452f928(**(long **)(lVar27 + 0xb8),unaff_x26,&stack0x00000230,
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
      in_stack_000001c0 = uVar29;
      in_stack_000001c8 = unaff_x24;
      _uStack00000000000001d0 = in_stack_00000360;
      in_stack_000001d8 = in_stack_00000368;
      in_stack_000001e0 = in_stack_00000370;
      while (uVar14 = FUN_0470872c(&stack0x000001c0,
                                   *(undefined8 *)Method_System_Nullable<short>_get_HasValue__),
            (uVar14 & 1) != 0) {
        if (in_stack_00000228 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar6 = uStack00000000000001d0;
        uVar14 = _uStack00000000000001d0 & 0xffff;
        lVar27 = *(long *)(in_stack_00000228 + 0x20);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar27 == 0) {
LAB_058a9898:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar18 = *(long *)(lVar27 + 0x10);
        lVar20 = *unaff_x19;
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        if (lVar18 == 0) goto LAB_058a9898;
        uVar1 = *(uint *)(lVar27 + 0x18);
        if (uVar1 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar27 + 0x18) = uVar1 + 1;
          *(uint *)(lVar18 + (long)(int)uVar1 * 4 + 0x20) = (uint)uVar6;
        }
        else {
          FUN_03753114(lVar27,uVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_04708728(&stack0x000001c0,*(undefined8 *)Method_System_Nullable<short>_GetValueOrDefault__
                  );
      unaff_x29 = 0;
    }
    lVar27 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar27,*(undefined8 *)PTR_DAT_06316c58);
    if (in_stack_00000200 == (long *)0x0) goto thunk_FUN_02b3cac4;
    if ((lVar27 != 0) &&
       (lVar18 = thunk_FUN_02b79548(lVar27,*(undefined8 *)(*in_stack_00000200 + 0x40)), lVar18 == 0)
       ) {
LAB_058aa1a0:
      uVar29 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar29,0);
    }
    if (*(uint *)(in_stack_00000200 + 3) <= unaff_x29) {
LAB_058aa19c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    in_stack_00000200[unaff_x29 + 4] = lVar27;
    thunk_FUN_02bb0e9c(in_stack_00000200 + unaff_x29 + 4,lVar27);
    lVar27 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar27,*(undefined8 *)PTR_DAT_06316c58);
    if (in_stack_00000208 == (long *)0x0) goto thunk_FUN_02b3cac4;
    if ((lVar27 != 0) &&
       (lVar18 = thunk_FUN_02b79548(lVar27,*(undefined8 *)(*in_stack_00000208 + 0x40)), lVar18 == 0)
       ) goto LAB_058aa1a0;
    if (*(uint *)(in_stack_00000208 + 3) <= unaff_x29) goto LAB_058aa19c;
    in_stack_00000208[unaff_x29 + 4] = lVar27;
    thunk_FUN_02bb0e9c(in_stack_00000208 + unaff_x29 + 4,lVar27);
    lVar27 = *(long *)(unaff_x26 + 0xa8);
    if (lVar27 == 0) goto thunk_FUN_02b3cac4;
    if (*(uint *)(lVar27 + 0x18) <= unaff_x29) goto LAB_058aa19c;
    lVar27 = *(long *)(lVar27 + unaff_x29 * 8 + 0x20);
    if (lVar27 == 0) goto thunk_FUN_02b3cac4;
    FUN_03816fc8(&stack0x00000350,lVar27,
                 *(undefined8 *)
                  Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
LAB_058a9424:
    uVar14 = FUN_04738544(&stack0x000002c0,*unaff_x22);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(unaff_x26 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar14 = FUN_03816854(*(long *)(unaff_x26 + 0xd8),in_stack_00000360,
                            in_stack_00000368 & 0xffffffff,*unaff_x23);
      if ((uVar14 & 1) == 0) {
        if (in_stack_00000200 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(in_stack_00000200 + 3) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar27 = in_stack_00000200[unaff_x29 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar27 != 0) {
          lVar18 = *(long *)(lVar27 + 0x10);
          lVar20 = *unaff_x19;
          *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
          if (lVar18 != 0) {
            uVar7 = *(uint *)(lVar27 + 0x18);
            uVar1 = (uint)in_stack_00000360 & 0xffff;
            if (uVar7 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar27 + 0x18) = uVar7 + 1;
              *(uint *)(lVar18 + (long)(int)uVar7 * 4 + 0x20) = uVar1;
            }
            else {
              FUN_03753114(lVar27,uVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
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
    lVar27 = *(long *)(unaff_x26 + 0xb0);
    if (lVar27 == 0) goto thunk_FUN_02b3cac4;
    if (*(uint *)(lVar27 + 0x18) <= unaff_x29) goto LAB_058aa19c;
    param_1 = *(long *)(lVar27 + unaff_x29 * 8 + 0x20);
    if (param_1 == 0) goto thunk_FUN_02b3cac4;
    param_2 = *(undefined8 *)Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__;
  } while( true );
  while( true ) {
    if (0 < *(int *)(lVar27 + 0x2a0)) {
      lVar20 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_GetAwaiter__);
      FUN_0588d2c0(lVar20,0);
      uVar13 = FUN_058a7208(*(undefined8 *)(in_stack_00000048 + 0x30),lVar27);
      if (lVar20 == 0) goto thunk_FUN_02b3cac4;
      *(undefined8 *)(lVar20 + 0x10) = uVar13;
      thunk_FUN_02bb0e9c();
      lVar21 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
      FUN_037a5cd0(lVar21,*(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
      plVar26 = (long *)(lVar20 + 0x18);
      *plVar26 = lVar21;
      thunk_FUN_02bb0e9c(plVar26,lVar21);
      iVar24 = 0;
      while( true ) {
        iVar4 = *(int *)(lVar27 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (iVar4 <= iVar24) break;
        lVar21 = *plVar26;
        uVar13 = FUN_058a6d28(*(undefined8 *)(in_stack_00000048 + 0x30),lVar27,iVar24);
        if (lVar21 == 0) goto thunk_FUN_02b3cac4;
        lVar19 = *(long *)(lVar21 + 0x10);
        lVar22 = *(long *)puVar9;
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        if (lVar19 == 0) goto thunk_FUN_02b3cac4;
        uVar1 = *(uint *)(lVar21 + 0x18);
        if (uVar1 < *(uint *)(lVar19 + 0x18)) {
          *(uint *)(lVar21 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar19 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar21,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
        iVar24 = iVar24 + 1;
      }
      uVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetStateMachine__
                                 );
      FUN_044a5fa0(uVar13,*(undefined8 *)Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Create__
                  );
      *(undefined8 *)(lVar20 + 0x20) = uVar13;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar20 + 0x20),uVar13);
      *(long *)(lVar20 + 0x28) = lVar18;
      thunk_FUN_02bb0e9c((long *)(lVar20 + 0x28),lVar18);
      puVar10 = Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
      if (lVar18 == 0) goto thunk_FUN_02b3cac4;
      if (0 < *(int *)(lVar18 + 0x18)) {
        iVar24 = 0;
        do {
          uVar11 = FUN_03752e1c(lVar18,iVar24,*(undefined8 *)PTR_DAT_06316cc0);
          if (*in_stack_00000028 == 0) goto thunk_FUN_02b3cac4;
          lVar27 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar27 == 0) ||
             (FUN_039b61b8(&stack0x00000350,lVar27,uVar11,*(undefined8 *)puVar10),
             in_stack_00000170 = uVar29, in_stack_00000178 = unaff_x24,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0))
          goto thunk_FUN_02b3cac4;
          *(long *)(in_stack_00000388 + 0x10) = lVar20;
          thunk_FUN_02bb0e9c((long *)(in_stack_00000388 + 0x10),lVar20);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          unaff_x24 = in_stack_00000178;
          uVar29 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000028 + 0x10), lVar27 == 0)) goto thunk_FUN_02b3cac4;
          FUN_039b621c(lVar27,uVar11,&stack0x00000350,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetAwaiter__);
          iVar24 = iVar24 + 1;
          _iStack0000000000000030 = in_stack_00000388;
        } while (iVar24 < *(int *)(lVar18 + 0x18));
      }
    }
    uVar14 = FUN_058a14e4(&stack0x000001b0);
    if ((uVar14 & 1) == 0) break;
    lVar27 = FUN_058a148c(&stack0x000001b0);
    lVar18 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar18,*(undefined8 *)PTR_DAT_06316c58);
    iVar24 = *(int *)(lVar27 + 0x298);
    if (iVar24 < *(int *)(lVar27 + 0x29c) + 1) {
      if (lVar18 == 0) goto thunk_FUN_02b3cac4;
      lVar20 = *unaff_x19;
      do {
        lVar21 = *(long *)(lVar18 + 0x10);
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar21 == 0) goto thunk_FUN_02b3cac4;
        uVar1 = *(uint *)(lVar18 + 0x18);
        if (uVar1 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar18 + 0x18) = uVar1 + 1;
          *(int *)(lVar21 + (long)(int)uVar1 * 4 + 0x20) = iVar24;
        }
        else {
          FUN_03753114(lVar18,iVar24,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          lVar20 = *unaff_x19;
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 < *(int *)(lVar27 + 0x29c) + 1);
    }
  }
LAB_058a9c3c:
  lVar27 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar27 != 0) {
    iVar24 = 0;
    do {
      lVar27 = *(long *)(lVar27 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (*(int *)(lVar27 + 8) <= iVar24) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar15 = (int *)FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar24,
                                    *(undefined8 *)
                                     Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__)
      ;
      if (((*in_stack_00000028 == 0) || (lVar27 = *(long *)(*in_stack_00000028 + 0x10), lVar27 == 0)
          ) || (FUN_039b61b8(&stack0x00000350,lVar27,*piVar15,
                             *(undefined8 *)
                              Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__),
               in_stack_00000388 == 0)) break;
      lVar27 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar27 != 0) {
        lVar18 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_066d31d0 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
          DAT_066d31d0 = '\x01';
        }
        puVar8 = 
        Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
        ;
        if (lVar18 == 0) break;
        iVar4 = piVar15[10];
        uVar1 = piVar15[0xb];
        uVar14 = (ulong)uVar1;
        lVar21 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
        lVar20 = *(long *)(lVar21 + 0x38);
        if (lVar20 == 0) {
          FUN_02b76274(lVar21);
          lVar20 = *(long *)(lVar21 + 0x38);
        }
        lVar18 = FUN_0322b7b4(*(undefined8 *)(lVar18 + 0x30),*(undefined8 *)(lVar20 + 0x10));
        if ((int)uVar1 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar1 != 0) {
          puVar25 = (undefined4 *)(lVar18 + (long)iVar4 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar18 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar18 == 0))
            goto thunk_FUN_02b3cac4;
            pcVar16 = (char *)UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                        (lVar18,*(undefined8 *)(puVar25 + -2),*puVar25,0);
            if (*pcVar16 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              iVar4 = *(int *)(pcVar16 + 4);
              plVar26 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02b76218(*(long *)(*(long *)
                                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar26 + (long)iVar4 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_058ac454(&stack0x00000350,4,*piVar15,0);
                uVar29 = 0;
              }
              else {
                uVar29 = FUN_058ad664(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar15,0);
              }
              uVar13 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),piVar15,
                                    &stack0x000000f0,uVar29);
              in_stack_000000e0 = FUN_04bffdac(*(undefined8 *)puVar8,uVar13,0);
              uVar11 = in_stack_000000f0;
              lVar18 = *(long *)(lVar27 + 0x20);
              in_stack_000000e8 = 0;
              thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar29 == 0xd);
              if (lVar18 == 0) goto thunk_FUN_02b3cac4;
              FUN_044a87e4(lVar18,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                          );
            }
            uVar14 = uVar14 - 1;
            puVar25 = puVar25 + 3;
          } while (uVar14 != 0);
        }
        if (-1 < piVar15[8]) {
          lVar18 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_066d31d1 == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                        );
            DAT_066d31d1 = '\x01';
          }
          if (lVar18 == 0) break;
          iVar4 = piVar15[0xc];
          uVar1 = piVar15[0xd];
          lVar21 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
          ;
          lVar20 = *(long *)(lVar21 + 0x38);
          if (lVar20 == 0) {
            FUN_02b76274(lVar21);
            lVar20 = *(long *)(lVar21 + 0x38);
          }
          lVar18 = FUN_0322b7c8(*(undefined8 *)(lVar18 + 0x38),*(undefined8 *)(lVar20 + 0x10));
          if ((int)uVar1 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar1 != 0) {
            uVar14 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              puVar12 = (undefined8 *)(lVar18 + (long)iVar4 * 0xc + uVar14 * 0xc);
              _iStack0000000000000030 =
                   _iStack0000000000000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
              lVar20 = FUN_058ab2a4(*(long *)(in_stack_00000048 + 0x30),*puVar12,
                                    _iStack0000000000000030,0);
              if (*(int *)(lVar20 + 8) != *piVar15) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar20 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar20 == 0))
                goto thunk_FUN_02b3cac4;
                lVar20 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                   (lVar20,*puVar12,*(undefined4 *)(puVar12 + 1),0);
                iVar5 = *(int *)(lVar20 + 8);
                if (0 < iVar5) {
                  iVar23 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar20 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar20 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    uVar29 = *puVar12;
                    if (DAT_066d31cb == '\0') {
                      FUN_02b3c81c();
                      DAT_066d31cb = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar21 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar21 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    lVar21 = *(long *)(lVar21 + 0x20);
                    iVar2 = *(int *)(lVar20 + 0x28);
                    iVar3 = *(int *)(lVar20 + 0x2c);
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
                    if (lVar21 == 0) goto thunk_FUN_02b3cac4;
                    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(puVar12 + 1)) goto LAB_058aa19c;
                    piVar17 = (int *)FUN_03ab59e0(lVar21 + (long)(int)*(uint *)(puVar12 + 1) * 8 +
                                                  0x20,iVar23 + ((int)((ulong)uVar29 >> 0x20) +
                                                                iVar2 * ((uint)uVar29 & 0xffff)) *
                                                                iVar3,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__
                                                 );
                    lVar20 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar20 == 0) goto thunk_FUN_02b3cac4;
                    iVar2 = *piVar17;
                    plVar26 = *(long **)(lVar20 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02b76218(*(long *)(*(long *)
                                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                            + 0x20));
                      lVar20 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar26 + (long)iVar2 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar29 = FUN_058ad664(lVar20,piVar15[8],in_stack_00000060,0);
                    uVar13 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar15,uVar29);
                    in_stack_000000e0 =
                         FUN_04bffdac(*(undefined8 *)
                                       Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__,
                                      uVar13,0);
                    lVar20 = *(long *)(lVar27 + 0x20);
                    in_stack_000000e8 = 0;
                    thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar29 == 0xd);
                    if (lVar20 == 0) goto thunk_FUN_02b3cac4;
                    FUN_044a87e4(lVar20,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                                );
                    iVar23 = iVar23 + 1;
                  } while (iVar5 != iVar23);
                }
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar1);
          }
        }
      }
      lVar27 = *(long *)(in_stack_00000048 + 0x30);
      iVar24 = iVar24 + 1;
    } while (lVar27 != 0);
  }
thunk_FUN_02b3cac4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


