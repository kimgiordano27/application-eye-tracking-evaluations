/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass$$CalcGuardAngle
ENTRY_POINT: 058a9204
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 104
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;weak_pose_support;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;weak_vector_component_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass__CalcGuardAngle
               (long param_1)

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
  undefined8 uVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar26;
  undefined8 *unaff_x23;
  undefined4 *puVar27;
  undefined8 unaff_x24;
  undefined4 *unaff_x25;
  long *plVar28;
  long unaff_x26;
  long lVar29;
  ushort *puVar30;
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
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  ulong in_stack_00000388;
  
  do {
    *(undefined4 *)(param_1 + 0x2c) = unaff_x25[0x1a];
    if (((in_stack_00000228 == 0) ||
        (*(undefined4 *)(in_stack_00000228 + 0x30) = unaff_x25[0x1b], in_stack_00000228 == 0)) ||
       (*(undefined4 *)(in_stack_00000228 + 0x34) = unaff_x25[0x1c], in_stack_00000228 == 0))
    goto thunk_FUN_02b3cac4;
    *(undefined1 *)(in_stack_00000228 + 0x38) = *(undefined1 *)((long)unaff_x25 + 0x7d);
    if (*(long *)(unaff_x26 + 200) == 0) goto thunk_FUN_02b3cac4;
    FUN_036b96a4(&stack0x00000350,*(long *)(unaff_x26 + 200),
                 *(undefined8 *)Method_System_Nullable<int>_GetValueOrDefault__);
    in_stack_000001c0 = in_stack_00000350;
    in_stack_000001c8 = in_stack_00000358;
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
      uVar5 = uStack00000000000001d0;
      uVar14 = _uStack00000000000001d0 & 0xffff;
      lVar29 = *(long *)(in_stack_00000228 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar29 == 0) {
LAB_058a9898:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar20 = *(long *)(lVar29 + 0x10);
      lVar22 = *unaff_x19;
      *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
      if (lVar20 == 0) goto LAB_058a9898;
      uVar6 = *(uint *)(lVar29 + 0x18);
      if (uVar6 < *(uint *)(lVar20 + 0x18)) {
        *(uint *)(lVar29 + 0x18) = uVar6 + 1;
        *(uint *)(lVar20 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03753114(lVar29,uVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_04708728(&stack0x000001c0,*(undefined8 *)Method_System_Nullable<short>_GetValueOrDefault__);
    uVar14 = 0;
    do {
      lVar29 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
      FUN_03752884(lVar29,*(undefined8 *)PTR_DAT_06316c58);
      if (in_stack_00000200 == (long *)0x0) goto thunk_FUN_02b3cac4;
      if ((lVar29 != 0) &&
         (lVar20 = thunk_FUN_02b79548(lVar29,*(undefined8 *)(*in_stack_00000200 + 0x40)),
         lVar20 == 0)) {
LAB_058aa1a0:
        uVar13 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar13,0);
      }
      if (*(uint *)(in_stack_00000200 + 3) <= uVar14) {
LAB_058aa19c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      in_stack_00000200[uVar14 + 4] = lVar29;
      thunk_FUN_02bb0e9c(in_stack_00000200 + uVar14 + 4,lVar29);
      lVar29 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
      FUN_03752884(lVar29,*(undefined8 *)PTR_DAT_06316c58);
      if (in_stack_00000208 == (long *)0x0) goto thunk_FUN_02b3cac4;
      if ((lVar29 != 0) &&
         (lVar20 = thunk_FUN_02b79548(lVar29,*(undefined8 *)(*in_stack_00000208 + 0x40)),
         lVar20 == 0)) goto LAB_058aa1a0;
      if (*(uint *)(in_stack_00000208 + 3) <= uVar14) goto LAB_058aa19c;
      in_stack_00000208[uVar14 + 4] = lVar29;
      thunk_FUN_02bb0e9c(in_stack_00000208 + uVar14 + 4,lVar29);
      lVar29 = *(long *)(unaff_x26 + 0xa8);
      if (lVar29 == 0) goto thunk_FUN_02b3cac4;
      if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_058aa19c;
      lVar29 = *(long *)(lVar29 + uVar14 * 8 + 0x20);
      if (lVar29 == 0) goto thunk_FUN_02b3cac4;
      FUN_03816fc8(&stack0x00000350,lVar29,
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
          lVar29 = in_stack_00000200[uVar14 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (lVar29 != 0) {
            lVar20 = *(long *)(lVar29 + 0x10);
            lVar22 = *unaff_x19;
            *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
            if (lVar20 != 0) {
              uVar7 = *(uint *)(lVar29 + 0x18);
              uVar6 = (uint)in_stack_00000360 & 0xffff;
              if (uVar7 < *(uint *)(lVar20 + 0x18)) {
                *(uint *)(lVar29 + 0x18) = uVar7 + 1;
                *(uint *)(lVar20 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
              }
              else {
                FUN_03753114(lVar29,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
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
      lVar29 = *(long *)(unaff_x26 + 0xb0);
      if (lVar29 == 0) goto thunk_FUN_02b3cac4;
      if (*(uint *)(lVar29 + 0x18) <= uVar14) goto LAB_058aa19c;
      lVar29 = *(long *)(lVar29 + uVar14 * 8 + 0x20);
      if (lVar29 == 0) goto thunk_FUN_02b3cac4;
      FUN_03816fc8(&stack0x00000350,lVar29,
                   *(undefined8 *)
                    Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
      in_stack_00000350 = 0;
      while (uVar15 = FUN_04738544(&stack0x000002c0,*unaff_x22), (uVar15 & 1) != 0) {
        if (in_stack_00000208 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(in_stack_00000208 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar29 = in_stack_00000208[uVar14 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar29 == 0) {
LAB_058a95f4:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar20 = *(long *)(lVar29 + 0x10);
        lVar22 = *unaff_x19;
        *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_058a95f4;
        uVar7 = *(uint *)(lVar29 + 0x18);
        uVar6 = (uint)in_stack_00000360 & 0xffff;
        if (uVar7 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar29 + 0x18) = uVar7 + 1;
          *(uint *)(lVar20 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
        }
        else {
          FUN_03753114(lVar29,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_04738540(&stack0x000002c0,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
      uVar14 = uVar14 + 1;
    } while (uVar14 != 3);
    lVar29 = *(long *)(in_stack_00000048 + 0x30);
    if (DAT_066d31da == '\0') {
      FUN_02b3c81c(
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                  );
      DAT_066d31da = '\x01';
    }
    if (lVar29 == 0) goto thunk_FUN_02b3cac4;
    iVar26 = unaff_x25[0x10];
    uVar6 = unaff_x25[0x11];
    uVar14 = (ulong)uVar6;
    lVar22 = *(long *)
              Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
    ;
    lVar20 = *(long *)(lVar22 + 0x38);
    if (lVar20 == 0) {
      FUN_02b76274(lVar22);
      lVar20 = *(long *)(lVar22 + 0x38);
    }
    lVar29 = FUN_0322b7a0(*(undefined8 *)(lVar29 + 0x40),*(undefined8 *)(lVar20 + 0x10));
    if ((int)uVar6 < 0) {
      FUN_04d9bcc4(0);
    }
    else if (uVar6 != 0) {
      puVar30 = (ushort *)(lVar29 + (long)iVar26 * 0x18);
      do {
        if (in_stack_00000228 == 0) goto thunk_FUN_02b3cac4;
        uVar5 = *puVar30;
        lVar29 = *(long *)(in_stack_00000228 + 0x18);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar29 == 0) goto thunk_FUN_02b3cac4;
        lVar20 = *(long *)(lVar29 + 0x10);
        lVar22 = *unaff_x19;
        *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
        if (lVar20 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar29 + 0x18);
        if (uVar6 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar29 + 0x18) = uVar6 + 1;
          *(uint *)(lVar20 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
        }
        else {
          FUN_03753114(lVar29,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
        uVar14 = uVar14 - 1;
        puVar30 = puVar30 + 0xc;
      } while (uVar14 != 0);
    }
    if ((*in_stack_00000028 == 0) || (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0))
    goto thunk_FUN_02b3cac4;
    memcpy(&stack0x00000300,&stack0x000001f0,0x48);
    lVar20 = *(long *)(lVar29 + 0x10);
    lVar22 = *(long *)Method_System_Nullable<MonoSslPolicyErrors>__ctor__;
    *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
    if (lVar20 == 0) goto thunk_FUN_02b3cac4;
    uVar6 = *(uint *)(lVar29 + 0x18);
    if (uVar6 < *(uint *)(lVar20 + 0x18)) {
      lVar20 = lVar20 + (long)(int)uVar6 * 0x48;
      *(uint *)(lVar29 + 0x18) = uVar6 + 1;
      memcpy((void *)(lVar20 + 0x20),&stack0x00000300,0x48);
      thunk_FUN_02bb0e9c(lVar20 + 0x20,0);
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x00000350,&stack0x00000300,0x48);
      Unity_Collections_NativeList<ResourceUnversionedData>__get_IsEmpty
                (lVar29,&stack0x00000350,uVar13);
    }
    iVar26 = iStack0000000000000030 + 1;
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
    lVar29 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
    if ((*(ushort *)
          (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__ +
                    0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    if (*(int *)(lVar29 + 8) <= iVar26) {
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
    unaff_x26 = FUN_037a6268(*(long *)(in_stack_00000048 + 0x18),iVar26,
                             *(undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__
                            );
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
    _iStack0000000000000030 = CONCAT44(uStack0000000000000034,iVar26);
    unaff_x25 = (undefined4 *)
                FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar26,
                             *(undefined8 *)
                              Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    lVar29 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar29 == 0) goto thunk_FUN_02b3cac4;
    uVar11 = *unaff_x25;
    if (DAT_066d31dc == '\0') {
      FUN_02b3c81c(
                  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                  );
      DAT_066d31dc = '\x01';
    }
    lVar29 = *(long *)(lVar29 + 0x28);
    if (lVar29 == 0) goto thunk_FUN_02b3cac4;
    puVar12 = (undefined8 *)
              FUN_0463ca1c(lVar29,uVar11,
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
    lVar29 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
    if (*(int *)(lVar29 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar29 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
    }
    if (**(long **)(lVar29 + 0xb8) == 0) goto thunk_FUN_02b3cac4;
    FUN_0452f928(**(long **)(lVar29 + 0xb8),unaff_x26,&stack0x00000230,
                 *(undefined8 *)Method_System_Nullable<MissingMemberHandling>_get_HasValue__);
    param_1 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
    FUN_0588d214(param_1,0);
    thunk_FUN_02bb0e9c(&stack0x00000228,param_1);
    if ((param_1 == 0) ||
       (*(undefined4 *)(param_1 + 0x28) = unaff_x25[0x19], in_stack_00000228 = param_1,
       in_stack_00000358 = unaff_x24, param_1 == 0)) goto thunk_FUN_02b3cac4;
  } while( true );
  while( true ) {
    if (0 < *(int *)(lVar29 + 0x2a0)) {
      lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_GetAwaiter__);
      FUN_0588d2c0(lVar22,0);
      uVar13 = FUN_058a7208(*(undefined8 *)(in_stack_00000048 + 0x30),lVar29);
      if (lVar22 == 0) goto thunk_FUN_02b3cac4;
      *(undefined8 *)(lVar22 + 0x10) = uVar13;
      thunk_FUN_02bb0e9c();
      lVar23 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
      FUN_037a5cd0(lVar23,*(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
      plVar28 = (long *)(lVar22 + 0x18);
      *plVar28 = lVar23;
      thunk_FUN_02bb0e9c(plVar28,lVar23);
      iVar26 = 0;
      while( true ) {
        iVar3 = *(int *)(lVar29 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (iVar3 <= iVar26) break;
        lVar23 = *plVar28;
        uVar13 = FUN_058a6d28(*(undefined8 *)(in_stack_00000048 + 0x30),lVar29,iVar26);
        if (lVar23 == 0) goto thunk_FUN_02b3cac4;
        lVar21 = *(long *)(lVar23 + 0x10);
        lVar24 = *(long *)puVar9;
        *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
        if (lVar21 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar23 + 0x18);
        if (uVar6 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar23 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar21 + (long)(int)uVar6 * 8 + 0x20) = uVar13;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar23,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        iVar26 = iVar26 + 1;
      }
      uVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetStateMachine__
                                 );
      FUN_044a5fa0(uVar13,*(undefined8 *)Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Create__
                  );
      *(undefined8 *)(lVar22 + 0x20) = uVar13;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar22 + 0x20),uVar13);
      *(long *)(lVar22 + 0x28) = lVar20;
      thunk_FUN_02bb0e9c((long *)(lVar22 + 0x28),lVar20);
      puVar10 = Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
      if (lVar20 == 0) goto thunk_FUN_02b3cac4;
      if (0 < *(int *)(lVar20 + 0x18)) {
        iVar26 = 0;
        do {
          uVar11 = FUN_03752e1c(lVar20,iVar26,*(undefined8 *)PTR_DAT_06316cc0);
          if (*in_stack_00000028 == 0) goto thunk_FUN_02b3cac4;
          lVar29 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar29 == 0) ||
             (FUN_039b61b8(&stack0x00000350,lVar29,uVar11,*(undefined8 *)puVar10),
             in_stack_00000170 = in_stack_00000350, in_stack_00000178 = unaff_x24,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0))
          goto thunk_FUN_02b3cac4;
          *(long *)(in_stack_00000388 + 0x10) = lVar22;
          thunk_FUN_02bb0e9c((long *)(in_stack_00000388 + 0x10),lVar22);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          unaff_x24 = in_stack_00000178;
          in_stack_00000350 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0)) goto thunk_FUN_02b3cac4;
          FUN_039b621c(lVar29,uVar11,&stack0x00000350,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetAwaiter__);
          iVar26 = iVar26 + 1;
          _iStack0000000000000030 = in_stack_00000388;
        } while (iVar26 < *(int *)(lVar20 + 0x18));
      }
    }
    uVar14 = FUN_058a14e4(&stack0x000001b0);
    if ((uVar14 & 1) == 0) break;
    lVar29 = FUN_058a148c(&stack0x000001b0);
    lVar20 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar20,*(undefined8 *)PTR_DAT_06316c58);
    iVar26 = *(int *)(lVar29 + 0x298);
    if (iVar26 < *(int *)(lVar29 + 0x29c) + 1) {
      if (lVar20 == 0) goto thunk_FUN_02b3cac4;
      lVar22 = *unaff_x19;
      do {
        lVar23 = *(long *)(lVar20 + 0x10);
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        if (lVar23 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar20 + 0x18);
        if (uVar6 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar20 + 0x18) = uVar6 + 1;
          *(int *)(lVar23 + (long)(int)uVar6 * 4 + 0x20) = iVar26;
        }
        else {
          FUN_03753114(lVar20,iVar26,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          lVar22 = *unaff_x19;
        }
        iVar26 = iVar26 + 1;
      } while (iVar26 < *(int *)(lVar29 + 0x29c) + 1);
    }
  }
LAB_058a9c3c:
  lVar29 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar29 != 0) {
    iVar26 = 0;
    do {
      lVar29 = *(long *)(lVar29 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (*(int *)(lVar29 + 8) <= iVar26) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar16 = (int *)FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar26,
                                    *(undefined8 *)
                                     Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__)
      ;
      if (((*in_stack_00000028 == 0) || (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0)
          ) || (FUN_039b61b8(&stack0x00000350,lVar29,*piVar16,
                             *(undefined8 *)
                              Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__),
               in_stack_00000388 == 0)) break;
      lVar29 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar29 != 0) {
        lVar20 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_066d31d0 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
          DAT_066d31d0 = '\x01';
        }
        puVar8 = 
        Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
        ;
        if (lVar20 == 0) break;
        iVar3 = piVar16[10];
        uVar6 = piVar16[0xb];
        uVar14 = (ulong)uVar6;
        lVar23 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
        lVar22 = *(long *)(lVar23 + 0x38);
        if (lVar22 == 0) {
          FUN_02b76274(lVar23);
          lVar22 = *(long *)(lVar23 + 0x38);
        }
        lVar20 = FUN_0322b7b4(*(undefined8 *)(lVar20 + 0x30),*(undefined8 *)(lVar22 + 0x10));
        if ((int)uVar6 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar6 != 0) {
          puVar27 = (undefined4 *)(lVar20 + (long)iVar3 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar20 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar20 == 0))
            goto thunk_FUN_02b3cac4;
            pcVar17 = (char *)UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                        (lVar20,*(undefined8 *)(puVar27 + -2),*puVar27,0);
            if (*pcVar17 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              iVar3 = *(int *)(pcVar17 + 4);
              plVar28 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02b76218(*(long *)(*(long *)
                                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar28 + (long)iVar3 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_058ac454(&stack0x00000350,4,*piVar16,0);
                uVar13 = 0;
              }
              else {
                uVar13 = FUN_058ad664(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar16,0);
              }
              uVar18 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),piVar16,
                                    &stack0x000000f0,uVar13);
              in_stack_000000e0 = FUN_04bffdac(*(undefined8 *)puVar8,uVar18,0);
              uVar11 = in_stack_000000f0;
              lVar20 = *(long *)(lVar29 + 0x20);
              in_stack_000000e8 = 0;
              thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar13 == 0xd);
              if (lVar20 == 0) goto thunk_FUN_02b3cac4;
              FUN_044a87e4(lVar20,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                          );
            }
            uVar14 = uVar14 - 1;
            puVar27 = puVar27 + 3;
          } while (uVar14 != 0);
        }
        if (-1 < piVar16[8]) {
          lVar20 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_066d31d1 == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                        );
            DAT_066d31d1 = '\x01';
          }
          if (lVar20 == 0) break;
          iVar3 = piVar16[0xc];
          uVar6 = piVar16[0xd];
          lVar23 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
          ;
          lVar22 = *(long *)(lVar23 + 0x38);
          if (lVar22 == 0) {
            FUN_02b76274(lVar23);
            lVar22 = *(long *)(lVar23 + 0x38);
          }
          lVar20 = FUN_0322b7c8(*(undefined8 *)(lVar20 + 0x38),*(undefined8 *)(lVar22 + 0x10));
          if ((int)uVar6 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar6 != 0) {
            uVar14 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              puVar12 = (undefined8 *)(lVar20 + (long)iVar3 * 0xc + uVar14 * 0xc);
              _iStack0000000000000030 =
                   _iStack0000000000000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
              lVar22 = FUN_058ab2a4(*(long *)(in_stack_00000048 + 0x30),*puVar12,
                                    _iStack0000000000000030,0);
              if (*(int *)(lVar22 + 8) != *piVar16) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0))
                goto thunk_FUN_02b3cac4;
                lVar22 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                   (lVar22,*puVar12,*(undefined4 *)(puVar12 + 1),0);
                iVar4 = *(int *)(lVar22 + 8);
                if (0 < iVar4) {
                  iVar25 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    uVar13 = *puVar12;
                    if (DAT_066d31cb == '\0') {
                      FUN_02b3c81c();
                      DAT_066d31cb = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    lVar23 = *(long *)(lVar23 + 0x20);
                    iVar1 = *(int *)(lVar22 + 0x28);
                    iVar2 = *(int *)(lVar22 + 0x2c);
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
                    if (lVar23 == 0) goto thunk_FUN_02b3cac4;
                    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(puVar12 + 1)) goto LAB_058aa19c;
                    piVar19 = (int *)FUN_03ab59e0(lVar23 + (long)(int)*(uint *)(puVar12 + 1) * 8 +
                                                  0x20,iVar25 + ((int)((ulong)uVar13 >> 0x20) +
                                                                iVar1 * ((uint)uVar13 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__
                                                 );
                    lVar22 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar22 == 0) goto thunk_FUN_02b3cac4;
                    iVar1 = *piVar19;
                    plVar28 = *(long **)(lVar22 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02b76218(*(long *)(*(long *)
                                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                            + 0x20));
                      lVar22 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar28 + (long)iVar1 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar13 = FUN_058ad664(lVar22,piVar16[8],in_stack_00000060,0);
                    uVar18 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar16,uVar13);
                    in_stack_000000e0 =
                         FUN_04bffdac(*(undefined8 *)
                                       Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__,
                                      uVar18,0);
                    lVar22 = *(long *)(lVar29 + 0x20);
                    in_stack_000000e8 = 0;
                    thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar13 == 0xd);
                    if (lVar22 == 0) goto thunk_FUN_02b3cac4;
                    FUN_044a87e4(lVar22,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                                );
                    iVar25 = iVar25 + 1;
                  } while (iVar4 != iVar25);
                }
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar6);
          }
        }
      }
      lVar29 = *(long *)(in_stack_00000048 + 0x30);
      iVar26 = iVar26 + 1;
    } while (lVar29 != 0);
  }
thunk_FUN_02b3cac4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


