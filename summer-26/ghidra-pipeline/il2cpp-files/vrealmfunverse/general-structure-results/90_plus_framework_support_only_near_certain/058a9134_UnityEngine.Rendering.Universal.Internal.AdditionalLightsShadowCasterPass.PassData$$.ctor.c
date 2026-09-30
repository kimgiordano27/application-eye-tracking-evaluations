/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass.PassData$$.ctor
ENTRY_POINT: 058a9134
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass_PassData___ctor
               (undefined8 param_1,undefined8 param_2)

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
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  char *pcVar19;
  undefined8 uVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long *unaff_x19;
  undefined **unaff_x20;
  undefined8 *puVar27;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar28;
  undefined8 *unaff_x23;
  undefined4 *puVar29;
  undefined8 unaff_x24;
  undefined4 *unaff_x25;
  long unaff_x26;
  undefined1 *unaff_x28;
  long lVar30;
  ushort *puVar31;
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
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  ulong in_stack_00000388;
  
  do {
    puVar27 = (undefined8 *)unaff_x20[0x48];
    plVar13 = (long *)FUN_02b3c908(*puVar27,param_2);
    thunk_FUN_02bb0e9c(unaff_x28 + 0x10,plVar13);
    plVar14 = (long *)FUN_02b3c908(*puVar27,3);
    thunk_FUN_02bb0e9c(unaff_x28 + 0x18,plVar14);
    lVar15 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar15 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
    }
    if (**(long **)(lVar15 + 0xb8) == 0) goto thunk_FUN_02b3cac4;
    FUN_0452f928(**(long **)(lVar15 + 0xb8),unaff_x26,unaff_x28 + 0x40,
                 *(undefined8 *)Method_System_Nullable<MissingMemberHandling>_get_HasValue__);
    lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
    FUN_0588d214(lVar15,0);
    thunk_FUN_02bb0e9c(unaff_x28 + 0x38,lVar15);
    if ((((lVar15 == 0) || (*(undefined4 *)(lVar15 + 0x28) = unaff_x25[0x19], lVar15 == 0)) ||
        (*(undefined4 *)(lVar15 + 0x2c) = unaff_x25[0x1a], lVar15 == 0)) ||
       ((*(undefined4 *)(lVar15 + 0x30) = unaff_x25[0x1b], lVar15 == 0 ||
        (*(undefined4 *)(lVar15 + 0x34) = unaff_x25[0x1c], lVar15 == 0)))) goto thunk_FUN_02b3cac4;
    *(undefined1 *)(lVar15 + 0x38) = *(undefined1 *)((long)unaff_x25 + 0x7d);
    if (*(long *)(unaff_x26 + 200) == 0) goto thunk_FUN_02b3cac4;
    FUN_036b96a4(&stack0x00000350,*(long *)(unaff_x26 + 200),
                 *(undefined8 *)Method_System_Nullable<int>_GetValueOrDefault__);
    in_stack_000001c0 = in_stack_00000350;
    in_stack_000001c8 = in_stack_00000358;
    _uStack00000000000001d0 = in_stack_00000360;
    in_stack_000001d8 = in_stack_00000368;
    in_stack_000001e0 = in_stack_00000370;
    while (uVar16 = FUN_0470872c(&stack0x000001c0,
                                 *(undefined8 *)Method_System_Nullable<short>_get_HasValue__),
          (uVar16 & 1) != 0) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar5 = uStack00000000000001d0;
      uVar16 = _uStack00000000000001d0 & 0xffff;
      lVar30 = *(long *)(lVar15 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar30 == 0) {
LAB_058a9898:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar22 = *(long *)(lVar30 + 0x10);
      lVar24 = *unaff_x19;
      *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
      if (lVar22 == 0) goto LAB_058a9898;
      uVar6 = *(uint *)(lVar30 + 0x18);
      if (uVar6 < *(uint *)(lVar22 + 0x18)) {
        *(uint *)(lVar30 + 0x18) = uVar6 + 1;
        *(uint *)(lVar22 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03753114(lVar30,uVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_04708728(&stack0x000001c0,*(undefined8 *)Method_System_Nullable<short>_GetValueOrDefault__);
    uVar16 = 0;
    do {
      lVar30 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
      FUN_03752884(lVar30,*(undefined8 *)PTR_DAT_06316c58);
      if (plVar13 == (long *)0x0) goto thunk_FUN_02b3cac4;
      if ((lVar30 != 0) &&
         (lVar22 = thunk_FUN_02b79548(lVar30,*(undefined8 *)(*plVar13 + 0x40)), lVar22 == 0)) {
LAB_058aa1a0:
        uVar12 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar12,0);
      }
      if (*(uint *)(plVar13 + 3) <= uVar16) {
LAB_058aa19c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar13[uVar16 + 4] = lVar30;
      thunk_FUN_02bb0e9c(plVar13 + uVar16 + 4,lVar30);
      lVar30 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
      FUN_03752884(lVar30,*(undefined8 *)PTR_DAT_06316c58);
      if (plVar14 == (long *)0x0) goto thunk_FUN_02b3cac4;
      if ((lVar30 != 0) &&
         (lVar22 = thunk_FUN_02b79548(lVar30,*(undefined8 *)(*plVar14 + 0x40)), lVar22 == 0))
      goto LAB_058aa1a0;
      if (*(uint *)(plVar14 + 3) <= uVar16) goto LAB_058aa19c;
      plVar14[uVar16 + 4] = lVar30;
      thunk_FUN_02bb0e9c(plVar14 + uVar16 + 4,lVar30);
      lVar30 = *(long *)(unaff_x26 + 0xa8);
      if (lVar30 == 0) goto thunk_FUN_02b3cac4;
      if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_058aa19c;
      lVar30 = *(long *)(lVar30 + uVar16 * 8 + 0x20);
      if (lVar30 == 0) goto thunk_FUN_02b3cac4;
      FUN_03816fc8(&stack0x00000350,lVar30,
                   *(undefined8 *)
                    Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
LAB_058a9424:
      uVar17 = FUN_04738544(&stack0x000002c0,*unaff_x22);
      if ((uVar17 & 1) != 0) {
        if (*(long *)(unaff_x26 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar17 = FUN_03816854(*(long *)(unaff_x26 + 0xd8),in_stack_00000360,
                              in_stack_00000368 & 0xffffffff,*unaff_x23);
        if ((uVar17 & 1) == 0) {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(plVar13 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar30 = plVar13[uVar16 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (lVar30 != 0) {
            lVar22 = *(long *)(lVar30 + 0x10);
            lVar24 = *unaff_x19;
            *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
            if (lVar22 != 0) {
              uVar7 = *(uint *)(lVar30 + 0x18);
              uVar6 = (uint)in_stack_00000360 & 0xffff;
              if (uVar7 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar30 + 0x18) = uVar7 + 1;
                *(uint *)(lVar22 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
              }
              else {
                FUN_03753114(lVar30,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
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
      lVar30 = *(long *)(unaff_x26 + 0xb0);
      if (lVar30 == 0) goto thunk_FUN_02b3cac4;
      if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_058aa19c;
      lVar30 = *(long *)(lVar30 + uVar16 * 8 + 0x20);
      if (lVar30 == 0) goto thunk_FUN_02b3cac4;
      FUN_03816fc8(&stack0x00000350,lVar30,
                   *(undefined8 *)
                    Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
      in_stack_00000350 = 0;
      while (uVar17 = FUN_04738544(&stack0x000002c0,*unaff_x22), (uVar17 & 1) != 0) {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(plVar14 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar30 = plVar14[uVar16 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar30 == 0) {
LAB_058a95f4:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar22 = *(long *)(lVar30 + 0x10);
        lVar24 = *unaff_x19;
        *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
        if (lVar22 == 0) goto LAB_058a95f4;
        uVar7 = *(uint *)(lVar30 + 0x18);
        uVar6 = (uint)in_stack_00000360 & 0xffff;
        if (uVar7 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar30 + 0x18) = uVar7 + 1;
          *(uint *)(lVar22 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
        }
        else {
          FUN_03753114(lVar30,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_04738540(&stack0x000002c0,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 3);
    lVar30 = *(long *)(in_stack_00000048 + 0x30);
    if (DAT_066d31da == '\0') {
      FUN_02b3c81c(
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                  );
      DAT_066d31da = '\x01';
    }
    if (lVar30 == 0) goto thunk_FUN_02b3cac4;
    iVar28 = unaff_x25[0x10];
    uVar6 = unaff_x25[0x11];
    uVar16 = (ulong)uVar6;
    lVar24 = *(long *)
              Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
    ;
    lVar22 = *(long *)(lVar24 + 0x38);
    if (lVar22 == 0) {
      FUN_02b76274(lVar24);
      lVar22 = *(long *)(lVar24 + 0x38);
    }
    lVar30 = FUN_0322b7a0(*(undefined8 *)(lVar30 + 0x40),*(undefined8 *)(lVar22 + 0x10));
    if ((int)uVar6 < 0) {
      FUN_04d9bcc4(0);
    }
    else if (uVar6 != 0) {
      puVar31 = (ushort *)(lVar30 + (long)iVar28 * 0x18);
      do {
        if (lVar15 == 0) goto thunk_FUN_02b3cac4;
        uVar5 = *puVar31;
        lVar30 = *(long *)(lVar15 + 0x18);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar30 == 0) goto thunk_FUN_02b3cac4;
        lVar22 = *(long *)(lVar30 + 0x10);
        lVar24 = *unaff_x19;
        *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
        if (lVar22 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar30 + 0x18);
        if (uVar6 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar30 + 0x18) = uVar6 + 1;
          *(uint *)(lVar22 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
        }
        else {
          FUN_03753114(lVar30,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        uVar16 = uVar16 - 1;
        puVar31 = puVar31 + 0xc;
      } while (uVar16 != 0);
    }
    if ((*in_stack_00000028 == 0) || (lVar15 = *(long *)(*in_stack_00000028 + 0x10), lVar15 == 0))
    goto thunk_FUN_02b3cac4;
    memcpy(&stack0x00000300,&stack0x000001f0,0x48);
    lVar30 = *(long *)(lVar15 + 0x10);
    lVar22 = *(long *)Method_System_Nullable<MonoSslPolicyErrors>__ctor__;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar30 == 0) goto thunk_FUN_02b3cac4;
    uVar6 = *(uint *)(lVar15 + 0x18);
    if (uVar6 < *(uint *)(lVar30 + 0x18)) {
      lVar30 = lVar30 + (long)(int)uVar6 * 0x48;
      *(uint *)(lVar15 + 0x18) = uVar6 + 1;
      memcpy((void *)(lVar30 + 0x20),&stack0x00000300,0x48);
      thunk_FUN_02bb0e9c(lVar30 + 0x20,0);
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x00000350,&stack0x00000300,0x48);
      Unity_Collections_NativeList<ResourceUnversionedData>__get_IsEmpty
                (lVar15,&stack0x00000350,uVar12);
    }
    iVar28 = iStack0000000000000030 + 1;
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
    lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
    if ((*(ushort *)
          (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__ +
                    0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    if (*(int *)(lVar15 + 8) <= iVar28) {
      if (*(long *)(in_stack_00000048 + 0x30) != 0) {
        in_stack_000001b8 = 0xffffffff;
        in_stack_000001b0 = *(long *)(in_stack_00000048 + 0x30);
        uVar16 = FUN_058a14e4(&stack0x000001b0);
        puVar9 = Method_OVRTask<List<bool>>_GetAwaiter__;
        puVar8 = 
        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
        ;
        if ((uVar16 & 1) != 0) break;
        goto LAB_058a9c3c;
      }
      goto thunk_FUN_02b3cac4;
    }
    if (*(long *)(in_stack_00000048 + 0x18) == 0) goto thunk_FUN_02b3cac4;
    unaff_x26 = FUN_037a6268(*(long *)(in_stack_00000048 + 0x18),iVar28,
                             *(undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__
                            );
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
    _iStack0000000000000030 = CONCAT44(uStack0000000000000034,iVar28);
    unaff_x25 = (undefined4 *)
                FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar28,
                             *(undefined8 *)
                              Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    lVar15 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar15 == 0) goto thunk_FUN_02b3cac4;
    uVar11 = *unaff_x25;
    unaff_x28 = &stack0x000001f0;
    if (DAT_066d31dc == '\0') {
      FUN_02b3c81c(
                  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                  );
      DAT_066d31dc = '\x01';
    }
    lVar15 = *(long *)(lVar15 + 0x28);
    if (lVar15 == 0) goto thunk_FUN_02b3cac4;
    puVar27 = (undefined8 *)
              FUN_0463ca1c(lVar15,uVar11,
                           *(undefined8 *)
                            Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                          );
    uVar12 = FUN_058a7d14(*puVar27);
    thunk_FUN_02bb0e9c(&stack0x000001f0,uVar12);
    if (unaff_x26 == 0) goto thunk_FUN_02b3cac4;
    unaff_x20 = &Method_Unity_Collections_NativeParallelMultiHashMap<int,_InstanceHandle>__ctor__;
    param_2 = 3;
    in_stack_00000358 = unaff_x24;
  } while( true );
  while( true ) {
    if (0 < *(int *)(lVar15 + 0x2a0)) {
      lVar22 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_GetAwaiter__);
      FUN_0588d2c0(lVar22,0);
      uVar12 = FUN_058a7208(*(undefined8 *)(in_stack_00000048 + 0x30),lVar15);
      if (lVar22 == 0) goto thunk_FUN_02b3cac4;
      *(undefined8 *)(lVar22 + 0x10) = uVar12;
      thunk_FUN_02bb0e9c();
      lVar24 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
      FUN_037a5cd0(lVar24,*(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
      plVar13 = (long *)(lVar22 + 0x18);
      *plVar13 = lVar24;
      thunk_FUN_02bb0e9c(plVar13,lVar24);
      iVar28 = 0;
      while( true ) {
        iVar3 = *(int *)(lVar15 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (iVar3 <= iVar28) break;
        lVar24 = *plVar13;
        uVar12 = FUN_058a6d28(*(undefined8 *)(in_stack_00000048 + 0x30),lVar15,iVar28);
        if (lVar24 == 0) goto thunk_FUN_02b3cac4;
        lVar23 = *(long *)(lVar24 + 0x10);
        lVar25 = *(long *)puVar9;
        *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
        if (lVar23 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar24 + 0x18);
        if (uVar6 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar24 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar23 + (long)(int)uVar6 * 8 + 0x20) = uVar12;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar24,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
        iVar28 = iVar28 + 1;
      }
      uVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetStateMachine__
                                 );
      FUN_044a5fa0(uVar12,*(undefined8 *)Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Create__
                  );
      *(undefined8 *)(lVar22 + 0x20) = uVar12;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar22 + 0x20),uVar12);
      *(long *)(lVar22 + 0x28) = lVar30;
      thunk_FUN_02bb0e9c((long *)(lVar22 + 0x28),lVar30);
      puVar10 = Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
      if (lVar30 == 0) goto thunk_FUN_02b3cac4;
      if (0 < *(int *)(lVar30 + 0x18)) {
        iVar28 = 0;
        do {
          uVar11 = FUN_03752e1c(lVar30,iVar28,*(undefined8 *)PTR_DAT_06316cc0);
          if (*in_stack_00000028 == 0) goto thunk_FUN_02b3cac4;
          lVar15 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar15 == 0) ||
             (FUN_039b61b8(&stack0x00000350,lVar15,uVar11,*(undefined8 *)puVar10),
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
             (lVar15 = *(long *)(*in_stack_00000028 + 0x10), lVar15 == 0)) goto thunk_FUN_02b3cac4;
          FUN_039b621c(lVar15,uVar11,&stack0x00000350,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetAwaiter__);
          iVar28 = iVar28 + 1;
          _iStack0000000000000030 = in_stack_00000388;
        } while (iVar28 < *(int *)(lVar30 + 0x18));
      }
    }
    uVar16 = FUN_058a14e4(&stack0x000001b0);
    if ((uVar16 & 1) == 0) break;
    lVar15 = FUN_058a148c(&stack0x000001b0);
    lVar30 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar30,*(undefined8 *)PTR_DAT_06316c58);
    iVar28 = *(int *)(lVar15 + 0x298);
    if (iVar28 < *(int *)(lVar15 + 0x29c) + 1) {
      if (lVar30 == 0) goto thunk_FUN_02b3cac4;
      lVar22 = *unaff_x19;
      do {
        lVar24 = *(long *)(lVar30 + 0x10);
        *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
        if (lVar24 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar30 + 0x18);
        if (uVar6 < *(uint *)(lVar24 + 0x18)) {
          *(uint *)(lVar30 + 0x18) = uVar6 + 1;
          *(int *)(lVar24 + (long)(int)uVar6 * 4 + 0x20) = iVar28;
        }
        else {
          FUN_03753114(lVar30,iVar28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          lVar22 = *unaff_x19;
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 < *(int *)(lVar15 + 0x29c) + 1);
    }
  }
LAB_058a9c3c:
  lVar15 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar15 != 0) {
    iVar28 = 0;
    do {
      lVar15 = *(long *)(lVar15 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (*(int *)(lVar15 + 8) <= iVar28) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar18 = (int *)FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar28,
                                    *(undefined8 *)
                                     Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__)
      ;
      if (((*in_stack_00000028 == 0) || (lVar15 = *(long *)(*in_stack_00000028 + 0x10), lVar15 == 0)
          ) || (FUN_039b61b8(&stack0x00000350,lVar15,*piVar18,
                             *(undefined8 *)
                              Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__),
               in_stack_00000388 == 0)) break;
      lVar15 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar15 != 0) {
        lVar30 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_066d31d0 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
          DAT_066d31d0 = '\x01';
        }
        puVar8 = 
        Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
        ;
        if (lVar30 == 0) break;
        iVar3 = piVar18[10];
        uVar6 = piVar18[0xb];
        uVar16 = (ulong)uVar6;
        lVar24 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
        lVar22 = *(long *)(lVar24 + 0x38);
        if (lVar22 == 0) {
          FUN_02b76274(lVar24);
          lVar22 = *(long *)(lVar24 + 0x38);
        }
        lVar30 = FUN_0322b7b4(*(undefined8 *)(lVar30 + 0x30),*(undefined8 *)(lVar22 + 0x10));
        if ((int)uVar6 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar6 != 0) {
          puVar29 = (undefined4 *)(lVar30 + (long)iVar3 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar30 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar30 == 0))
            goto thunk_FUN_02b3cac4;
            pcVar19 = (char *)UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                        (lVar30,*(undefined8 *)(puVar29 + -2),*puVar29,0);
            if (*pcVar19 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              iVar3 = *(int *)(pcVar19 + 4);
              plVar13 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02b76218(*(long *)(*(long *)
                                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar13 + (long)iVar3 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_058ac454(&stack0x00000350,4,*piVar18,0);
                uVar12 = 0;
              }
              else {
                uVar12 = FUN_058ad664(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar18,0);
              }
              uVar20 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),piVar18,
                                    &stack0x000000f0,uVar12);
              in_stack_000000e0 = FUN_04bffdac(*(undefined8 *)puVar8,uVar20,0);
              uVar11 = in_stack_000000f0;
              lVar30 = *(long *)(lVar15 + 0x20);
              in_stack_000000e8 = 0;
              thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar12 == 0xd);
              if (lVar30 == 0) goto thunk_FUN_02b3cac4;
              FUN_044a87e4(lVar30,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                          );
            }
            uVar16 = uVar16 - 1;
            puVar29 = puVar29 + 3;
          } while (uVar16 != 0);
        }
        if (-1 < piVar18[8]) {
          lVar30 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_066d31d1 == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                        );
            DAT_066d31d1 = '\x01';
          }
          if (lVar30 == 0) break;
          iVar3 = piVar18[0xc];
          uVar6 = piVar18[0xd];
          lVar24 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
          ;
          lVar22 = *(long *)(lVar24 + 0x38);
          if (lVar22 == 0) {
            FUN_02b76274(lVar24);
            lVar22 = *(long *)(lVar24 + 0x38);
          }
          lVar30 = FUN_0322b7c8(*(undefined8 *)(lVar30 + 0x38),*(undefined8 *)(lVar22 + 0x10));
          if ((int)uVar6 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar6 != 0) {
            uVar16 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              puVar27 = (undefined8 *)(lVar30 + (long)iVar3 * 0xc + uVar16 * 0xc);
              _iStack0000000000000030 =
                   _iStack0000000000000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar27 + 1);
              lVar22 = FUN_058ab2a4(*(long *)(in_stack_00000048 + 0x30),*puVar27,
                                    _iStack0000000000000030,0);
              if (*(int *)(lVar22 + 8) != *piVar18) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0))
                goto thunk_FUN_02b3cac4;
                lVar22 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                   (lVar22,*puVar27,*(undefined4 *)(puVar27 + 1),0);
                iVar4 = *(int *)(lVar22 + 8);
                if (0 < iVar4) {
                  iVar26 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    uVar12 = *puVar27;
                    if (DAT_066d31cb == '\0') {
                      FUN_02b3c81c();
                      DAT_066d31cb = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    lVar24 = *(long *)(lVar24 + 0x20);
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
                    if (lVar24 == 0) goto thunk_FUN_02b3cac4;
                    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(puVar27 + 1)) goto LAB_058aa19c;
                    piVar21 = (int *)FUN_03ab59e0(lVar24 + (long)(int)*(uint *)(puVar27 + 1) * 8 +
                                                  0x20,iVar26 + ((int)((ulong)uVar12 >> 0x20) +
                                                                iVar1 * ((uint)uVar12 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__
                                                 );
                    lVar22 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar22 == 0) goto thunk_FUN_02b3cac4;
                    iVar1 = *piVar21;
                    plVar13 = *(long **)(lVar22 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02b76218(*(long *)(*(long *)
                                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                            + 0x20));
                      lVar22 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar13 + (long)iVar1 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar12 = FUN_058ad664(lVar22,piVar18[8],in_stack_00000060,0);
                    uVar20 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar18,uVar12);
                    in_stack_000000e0 =
                         FUN_04bffdac(*(undefined8 *)
                                       Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__,
                                      uVar20,0);
                    lVar22 = *(long *)(lVar15 + 0x20);
                    in_stack_000000e8 = 0;
                    thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar12 == 0xd);
                    if (lVar22 == 0) goto thunk_FUN_02b3cac4;
                    FUN_044a87e4(lVar22,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                                );
                    iVar26 = iVar26 + 1;
                  } while (iVar4 != iVar26);
                }
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar6);
          }
        }
      }
      lVar15 = *(long *)(in_stack_00000048 + 0x30);
      iVar28 = iVar28 + 1;
    } while (lVar15 != 0);
  }
thunk_FUN_02b3cac4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


