/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.AdditionalLightsShadowCasterPass$$GetLightTypeIdentifierForShadowParams
ENTRY_POINT: 058a9874
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


void UnityEngine_Rendering_Universal_Internal_AdditionalLightsShadowCasterPass__GetLightTypeIdentifierForShadowParams
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
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  char *pcVar20;
  undefined8 uVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long *unaff_x19;
  long lVar27;
  long lVar28;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar29;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  long lVar30;
  ushort *puVar31;
  long unaff_x29;
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
  
code_r0x058a9874:
  Unity_Collections_NativeList<ResourceUnversionedData>__get_IsEmpty
            (unaff_x25,&stack0x00000350,unaff_x26);
  do {
    iVar29 = iStack0000000000000030 + 1;
    if (*(long *)(unaff_x29 + 0x30) == 0) goto thunk_FUN_02b3cac4;
    lVar27 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x18);
    if ((*(ushort *)
          (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__ +
                    0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    if (*(int *)(lVar27 + 8) <= iVar29) {
      if (*(long *)(unaff_x29 + 0x30) == 0) goto thunk_FUN_02b3cac4;
      in_stack_000001b8 = 0xffffffff;
      in_stack_000001b0 = *(long *)(unaff_x29 + 0x30);
      uVar17 = FUN_058a14e4(&stack0x000001b0);
      puVar9 = Method_OVRTask<List<bool>>_GetAwaiter__;
      puVar8 = 
      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
      ;
      if ((uVar17 & 1) != 0) goto LAB_058a9924;
      goto LAB_058a9c3c;
    }
    if (*(long *)(unaff_x29 + 0x18) == 0) goto thunk_FUN_02b3cac4;
    lVar27 = FUN_037a6268(*(long *)(unaff_x29 + 0x18),iVar29,
                          *(undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__);
    if (*(long *)(unaff_x29 + 0x30) == 0) goto thunk_FUN_02b3cac4;
    _iStack0000000000000030 = CONCAT44(uStack0000000000000034,iVar29);
    puVar12 = (undefined4 *)
              FUN_03ab2128(*(long *)(unaff_x29 + 0x30) + 0x18,iVar29,
                           *(undefined8 *)
                            Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    lVar28 = *(long *)(unaff_x29 + 0x30);
    if (lVar28 == 0) goto thunk_FUN_02b3cac4;
    uVar11 = *puVar12;
    if (DAT_066d31dc == '\0') {
      FUN_02b3c81c(
                  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                  );
      DAT_066d31dc = '\x01';
    }
    lVar28 = *(long *)(lVar28 + 0x28);
    if (lVar28 == 0) goto thunk_FUN_02b3cac4;
    puVar13 = (undefined8 *)
              FUN_0463ca1c(lVar28,uVar11,
                           *(undefined8 *)
                            Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                          );
    uVar14 = FUN_058a7d14(*puVar13);
    thunk_FUN_02bb0e9c(&stack0x000001f0,uVar14);
    puVar8 = Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__;
    if (lVar27 == 0) goto thunk_FUN_02b3cac4;
    plVar15 = (long *)FUN_02b3c908(*(undefined8 *)
                                    Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__
                                   ,3);
    thunk_FUN_02bb0e9c(&stack0x00000200,plVar15);
    plVar16 = (long *)FUN_02b3c908(*(undefined8 *)puVar8,3);
    thunk_FUN_02bb0e9c(&stack0x00000208,plVar16);
    lVar28 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
    if (*(int *)(lVar28 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar28 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
    }
    if (**(long **)(lVar28 + 0xb8) == 0) goto thunk_FUN_02b3cac4;
    FUN_0452f928(**(long **)(lVar28 + 0xb8),lVar27,&stack0x00000230,
                 *(undefined8 *)Method_System_Nullable<MissingMemberHandling>_get_HasValue__);
    lVar28 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
    FUN_0588d214(lVar28,0);
    thunk_FUN_02bb0e9c(&stack0x00000228,lVar28);
    if ((((lVar28 == 0) || (*(undefined4 *)(lVar28 + 0x28) = puVar12[0x19], lVar28 == 0)) ||
        (*(undefined4 *)(lVar28 + 0x2c) = puVar12[0x1a], lVar28 == 0)) ||
       ((*(undefined4 *)(lVar28 + 0x30) = puVar12[0x1b], lVar28 == 0 ||
        (*(undefined4 *)(lVar28 + 0x34) = puVar12[0x1c], lVar28 == 0)))) goto thunk_FUN_02b3cac4;
    *(undefined1 *)(lVar28 + 0x38) = *(undefined1 *)((long)puVar12 + 0x7d);
    if (*(long *)(lVar27 + 200) == 0) goto thunk_FUN_02b3cac4;
    FUN_036b96a4(&stack0x00000350,*(long *)(lVar27 + 200),
                 *(undefined8 *)Method_System_Nullable<int>_GetValueOrDefault__);
    in_stack_000001c0 = in_stack_00000350;
    in_stack_000001c8 = in_stack_00000358;
    _uStack00000000000001d0 = in_stack_00000360;
    in_stack_000001d8 = in_stack_00000368;
    in_stack_000001e0 = in_stack_00000370;
    while (uVar17 = FUN_0470872c(&stack0x000001c0,
                                 *(undefined8 *)Method_System_Nullable<short>_get_HasValue__),
          (uVar17 & 1) != 0) {
      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar5 = uStack00000000000001d0;
      uVar17 = _uStack00000000000001d0 & 0xffff;
      lVar30 = *(long *)(lVar28 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar30 == 0) {
LAB_058a9898:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar23 = *(long *)(lVar30 + 0x10);
      lVar24 = *unaff_x19;
      *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
      if (lVar23 == 0) goto LAB_058a9898;
      uVar6 = *(uint *)(lVar30 + 0x18);
      if (uVar6 < *(uint *)(lVar23 + 0x18)) {
        *(uint *)(lVar30 + 0x18) = uVar6 + 1;
        *(uint *)(lVar23 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03753114(lVar30,uVar17,
                     *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_04708728(&stack0x000001c0,*(undefined8 *)Method_System_Nullable<short>_GetValueOrDefault__);
    uVar17 = 0;
    do {
      lVar30 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
      FUN_03752884(lVar30,*(undefined8 *)PTR_DAT_06316c58);
      if (plVar15 == (long *)0x0) goto thunk_FUN_02b3cac4;
      if ((lVar30 != 0) &&
         (lVar23 = thunk_FUN_02b79548(lVar30,*(undefined8 *)(*plVar15 + 0x40)), lVar23 == 0)) {
LAB_058aa1a0:
        uVar14 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar14,0);
      }
      if (*(uint *)(plVar15 + 3) <= uVar17) {
LAB_058aa19c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar15[uVar17 + 4] = lVar30;
      thunk_FUN_02bb0e9c(plVar15 + uVar17 + 4,lVar30);
      lVar30 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
      FUN_03752884(lVar30,*(undefined8 *)PTR_DAT_06316c58);
      if (plVar16 == (long *)0x0) goto thunk_FUN_02b3cac4;
      if ((lVar30 != 0) &&
         (lVar23 = thunk_FUN_02b79548(lVar30,*(undefined8 *)(*plVar16 + 0x40)), lVar23 == 0))
      goto LAB_058aa1a0;
      if (*(uint *)(plVar16 + 3) <= uVar17) goto LAB_058aa19c;
      plVar16[uVar17 + 4] = lVar30;
      thunk_FUN_02bb0e9c(plVar16 + uVar17 + 4,lVar30);
      lVar30 = *(long *)(lVar27 + 0xa8);
      if (lVar30 == 0) goto thunk_FUN_02b3cac4;
      if (*(uint *)(lVar30 + 0x18) <= uVar17) goto LAB_058aa19c;
      lVar30 = *(long *)(lVar30 + uVar17 * 8 + 0x20);
      if (lVar30 == 0) goto thunk_FUN_02b3cac4;
      FUN_03816fc8(&stack0x00000350,lVar30,
                   *(undefined8 *)
                    Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
LAB_058a9424:
      uVar18 = FUN_04738544(&stack0x000002c0,*unaff_x22);
      if ((uVar18 & 1) != 0) {
        if (*(long *)(lVar27 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar18 = FUN_03816854(*(long *)(lVar27 + 0xd8),in_stack_00000360,
                              in_stack_00000368 & 0xffffffff,*unaff_x23);
        if ((uVar18 & 1) == 0) {
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(plVar15 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar30 = plVar15[uVar17 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (lVar30 != 0) {
            lVar23 = *(long *)(lVar30 + 0x10);
            lVar24 = *unaff_x19;
            *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
            if (lVar23 != 0) {
              uVar7 = *(uint *)(lVar30 + 0x18);
              uVar6 = (uint)in_stack_00000360 & 0xffff;
              if (uVar7 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar30 + 0x18) = uVar7 + 1;
                *(uint *)(lVar23 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
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
      lVar30 = *(long *)(lVar27 + 0xb0);
      if (lVar30 == 0) goto thunk_FUN_02b3cac4;
      if (*(uint *)(lVar30 + 0x18) <= uVar17) goto LAB_058aa19c;
      lVar30 = *(long *)(lVar30 + uVar17 * 8 + 0x20);
      if (lVar30 == 0) goto thunk_FUN_02b3cac4;
      FUN_03816fc8(&stack0x00000350,lVar30,
                   *(undefined8 *)
                    Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
      in_stack_00000350 = 0;
      while (uVar18 = FUN_04738544(&stack0x000002c0,*unaff_x22), (uVar18 & 1) != 0) {
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(plVar16 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar30 = plVar16[uVar17 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar30 == 0) {
LAB_058a95f4:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar23 = *(long *)(lVar30 + 0x10);
        lVar24 = *unaff_x19;
        *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_058a95f4;
        uVar7 = *(uint *)(lVar30 + 0x18);
        uVar6 = (uint)in_stack_00000360 & 0xffff;
        if (uVar7 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar30 + 0x18) = uVar7 + 1;
          *(uint *)(lVar23 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
        }
        else {
          FUN_03753114(lVar30,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_04738540(&stack0x000002c0,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
      uVar17 = uVar17 + 1;
    } while (uVar17 != 3);
    lVar27 = *(long *)(in_stack_00000048 + 0x30);
    if (DAT_066d31da == '\0') {
      FUN_02b3c81c(
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                  );
      DAT_066d31da = '\x01';
    }
    if (lVar27 == 0) goto thunk_FUN_02b3cac4;
    iVar29 = puVar12[0x10];
    uVar6 = puVar12[0x11];
    uVar17 = (ulong)uVar6;
    lVar23 = *(long *)
              Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
    ;
    lVar30 = *(long *)(lVar23 + 0x38);
    if (lVar30 == 0) {
      FUN_02b76274(lVar23);
      lVar30 = *(long *)(lVar23 + 0x38);
    }
    lVar27 = FUN_0322b7a0(*(undefined8 *)(lVar27 + 0x40),*(undefined8 *)(lVar30 + 0x10));
    if ((int)uVar6 < 0) {
      FUN_04d9bcc4(0);
    }
    else if (uVar6 != 0) {
      puVar31 = (ushort *)(lVar27 + (long)iVar29 * 0x18);
      do {
        if (lVar28 == 0) goto thunk_FUN_02b3cac4;
        uVar5 = *puVar31;
        lVar27 = *(long *)(lVar28 + 0x18);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar27 == 0) goto thunk_FUN_02b3cac4;
        lVar30 = *(long *)(lVar27 + 0x10);
        lVar23 = *unaff_x19;
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        if (lVar30 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar27 + 0x18);
        if (uVar6 < *(uint *)(lVar30 + 0x18)) {
          *(uint *)(lVar27 + 0x18) = uVar6 + 1;
          *(uint *)(lVar30 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
        }
        else {
          FUN_03753114(lVar27,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        uVar17 = uVar17 - 1;
        puVar31 = puVar31 + 0xc;
      } while (uVar17 != 0);
    }
    if ((*in_stack_00000028 == 0) ||
       (unaff_x25 = *(long *)(*in_stack_00000028 + 0x10), unaff_x25 == 0)) goto thunk_FUN_02b3cac4;
    memcpy(&stack0x00000300,&stack0x000001f0,0x48);
    lVar27 = *(long *)(unaff_x25 + 0x10);
    lVar28 = *(long *)Method_System_Nullable<MonoSslPolicyErrors>__ctor__;
    *(int *)(unaff_x25 + 0x1c) = *(int *)(unaff_x25 + 0x1c) + 1;
    if (lVar27 == 0) goto thunk_FUN_02b3cac4;
    uVar6 = *(uint *)(unaff_x25 + 0x18);
    in_stack_00000358 = unaff_x24;
    unaff_x29 = in_stack_00000048;
    if (*(uint *)(lVar27 + 0x18) <= uVar6) break;
    lVar27 = lVar27 + (long)(int)uVar6 * 0x48;
    *(uint *)(unaff_x25 + 0x18) = uVar6 + 1;
    memcpy((void *)(lVar27 + 0x20),&stack0x00000300,0x48);
    thunk_FUN_02bb0e9c(lVar27 + 0x20,0);
  } while( true );
  unaff_x26 = *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70);
  memcpy(&stack0x00000350,&stack0x00000300,0x48);
  goto code_r0x058a9874;
  while( true ) {
    if (0 < *(int *)(lVar27 + 0x2a0)) {
      lVar30 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_GetAwaiter__);
      FUN_0588d2c0(lVar30,0);
      uVar14 = FUN_058a7208(*(undefined8 *)(in_stack_00000048 + 0x30),lVar27);
      if (lVar30 == 0) goto thunk_FUN_02b3cac4;
      *(undefined8 *)(lVar30 + 0x10) = uVar14;
      thunk_FUN_02bb0e9c();
      lVar23 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
      FUN_037a5cd0(lVar23,*(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
      plVar15 = (long *)(lVar30 + 0x18);
      *plVar15 = lVar23;
      thunk_FUN_02bb0e9c(plVar15,lVar23);
      iVar29 = 0;
      while( true ) {
        iVar3 = *(int *)(lVar27 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (iVar3 <= iVar29) break;
        lVar23 = *plVar15;
        uVar14 = FUN_058a6d28(*(undefined8 *)(in_stack_00000048 + 0x30),lVar27,iVar29);
        if (lVar23 == 0) goto thunk_FUN_02b3cac4;
        lVar24 = *(long *)(lVar23 + 0x10);
        lVar25 = *(long *)puVar9;
        *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
        if (lVar24 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar23 + 0x18);
        if (uVar6 < *(uint *)(lVar24 + 0x18)) {
          *(uint *)(lVar23 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar24 + (long)(int)uVar6 * 8 + 0x20) = uVar14;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar23,uVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
        iVar29 = iVar29 + 1;
      }
      uVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetStateMachine__
                                 );
      FUN_044a5fa0(uVar14,*(undefined8 *)Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Create__
                  );
      *(undefined8 *)(lVar30 + 0x20) = uVar14;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar30 + 0x20),uVar14);
      *(long *)(lVar30 + 0x28) = lVar28;
      thunk_FUN_02bb0e9c((long *)(lVar30 + 0x28),lVar28);
      puVar10 = Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
      if (lVar28 == 0) goto thunk_FUN_02b3cac4;
      if (0 < *(int *)(lVar28 + 0x18)) {
        iVar29 = 0;
        do {
          uVar11 = FUN_03752e1c(lVar28,iVar29,*(undefined8 *)PTR_DAT_06316cc0);
          if (*in_stack_00000028 == 0) goto thunk_FUN_02b3cac4;
          lVar27 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar27 == 0) ||
             (FUN_039b61b8(&stack0x00000350,lVar27,uVar11,*(undefined8 *)puVar10),
             in_stack_00000170 = in_stack_00000350, in_stack_00000178 = in_stack_00000358,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0))
          goto thunk_FUN_02b3cac4;
          *(long *)(in_stack_00000388 + 0x10) = lVar30;
          thunk_FUN_02bb0e9c((long *)(in_stack_00000388 + 0x10),lVar30);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          in_stack_00000358 = in_stack_00000178;
          in_stack_00000350 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000028 + 0x10), lVar27 == 0)) goto thunk_FUN_02b3cac4;
          FUN_039b621c(lVar27,uVar11,&stack0x00000350,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetAwaiter__);
          iVar29 = iVar29 + 1;
          _iStack0000000000000030 = in_stack_00000388;
        } while (iVar29 < *(int *)(lVar28 + 0x18));
      }
    }
    uVar17 = FUN_058a14e4(&stack0x000001b0);
    if ((uVar17 & 1) == 0) break;
LAB_058a9924:
    lVar27 = FUN_058a148c(&stack0x000001b0);
    lVar28 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar28,*(undefined8 *)PTR_DAT_06316c58);
    iVar29 = *(int *)(lVar27 + 0x298);
    if (iVar29 < *(int *)(lVar27 + 0x29c) + 1) {
      if (lVar28 == 0) goto thunk_FUN_02b3cac4;
      lVar30 = *unaff_x19;
      do {
        lVar23 = *(long *)(lVar28 + 0x10);
        *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
        if (lVar23 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar28 + 0x18);
        if (uVar6 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar28 + 0x18) = uVar6 + 1;
          *(int *)(lVar23 + (long)(int)uVar6 * 4 + 0x20) = iVar29;
        }
        else {
          FUN_03753114(lVar28,iVar29,
                       *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
          lVar30 = *unaff_x19;
        }
        iVar29 = iVar29 + 1;
      } while (iVar29 < *(int *)(lVar27 + 0x29c) + 1);
    }
  }
LAB_058a9c3c:
  lVar27 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar27 != 0) {
    iVar29 = 0;
    do {
      lVar27 = *(long *)(lVar27 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (*(int *)(lVar27 + 8) <= iVar29) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar19 = (int *)FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar29,
                                    *(undefined8 *)
                                     Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__)
      ;
      if (((*in_stack_00000028 == 0) || (lVar27 = *(long *)(*in_stack_00000028 + 0x10), lVar27 == 0)
          ) || (FUN_039b61b8(&stack0x00000350,lVar27,*piVar19,
                             *(undefined8 *)
                              Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__),
               in_stack_00000388 == 0)) break;
      lVar27 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar27 != 0) {
        lVar28 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_066d31d0 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
          DAT_066d31d0 = '\x01';
        }
        puVar8 = 
        Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
        ;
        if (lVar28 == 0) break;
        iVar3 = piVar19[10];
        uVar6 = piVar19[0xb];
        uVar17 = (ulong)uVar6;
        lVar23 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
        lVar30 = *(long *)(lVar23 + 0x38);
        if (lVar30 == 0) {
          FUN_02b76274(lVar23);
          lVar30 = *(long *)(lVar23 + 0x38);
        }
        lVar28 = FUN_0322b7b4(*(undefined8 *)(lVar28 + 0x30),*(undefined8 *)(lVar30 + 0x10));
        if ((int)uVar6 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar6 != 0) {
          puVar12 = (undefined4 *)(lVar28 + (long)iVar3 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar28 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar28 == 0))
            goto thunk_FUN_02b3cac4;
            pcVar20 = (char *)UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                        (lVar28,*(undefined8 *)(puVar12 + -2),*puVar12,0);
            if (*pcVar20 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              iVar3 = *(int *)(pcVar20 + 4);
              plVar15 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02b76218(*(long *)(*(long *)
                                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar15 + (long)iVar3 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_058ac454(&stack0x00000350,4,*piVar19,0);
                uVar14 = 0;
              }
              else {
                uVar14 = FUN_058ad664(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar19,0);
              }
              uVar21 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),piVar19,
                                    &stack0x000000f0,uVar14);
              in_stack_000000e0 = FUN_04bffdac(*(undefined8 *)puVar8,uVar21,0);
              uVar11 = in_stack_000000f0;
              lVar28 = *(long *)(lVar27 + 0x20);
              in_stack_000000e8 = 0;
              thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar14 == 0xd);
              if (lVar28 == 0) goto thunk_FUN_02b3cac4;
              FUN_044a87e4(lVar28,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                          );
            }
            uVar17 = uVar17 - 1;
            puVar12 = puVar12 + 3;
          } while (uVar17 != 0);
        }
        if (-1 < piVar19[8]) {
          lVar28 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_066d31d1 == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                        );
            DAT_066d31d1 = '\x01';
          }
          if (lVar28 == 0) break;
          iVar3 = piVar19[0xc];
          uVar6 = piVar19[0xd];
          lVar23 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
          ;
          lVar30 = *(long *)(lVar23 + 0x38);
          if (lVar30 == 0) {
            FUN_02b76274(lVar23);
            lVar30 = *(long *)(lVar23 + 0x38);
          }
          lVar28 = FUN_0322b7c8(*(undefined8 *)(lVar28 + 0x38),*(undefined8 *)(lVar30 + 0x10));
          if ((int)uVar6 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar6 != 0) {
            uVar17 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              puVar13 = (undefined8 *)(lVar28 + (long)iVar3 * 0xc + uVar17 * 0xc);
              _iStack0000000000000030 =
                   _iStack0000000000000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar13 + 1);
              lVar30 = FUN_058ab2a4(*(long *)(in_stack_00000048 + 0x30),*puVar13,
                                    _iStack0000000000000030,0);
              if (*(int *)(lVar30 + 8) != *piVar19) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar30 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar30 == 0))
                goto thunk_FUN_02b3cac4;
                lVar30 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                   (lVar30,*puVar13,*(undefined4 *)(puVar13 + 1),0);
                iVar4 = *(int *)(lVar30 + 8);
                if (0 < iVar4) {
                  iVar26 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar30 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar30 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    uVar14 = *puVar13;
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
                    iVar1 = *(int *)(lVar30 + 0x28);
                    iVar2 = *(int *)(lVar30 + 0x2c);
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
                    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(puVar13 + 1)) goto LAB_058aa19c;
                    piVar22 = (int *)FUN_03ab59e0(lVar23 + (long)(int)*(uint *)(puVar13 + 1) * 8 +
                                                  0x20,iVar26 + ((int)((ulong)uVar14 >> 0x20) +
                                                                iVar1 * ((uint)uVar14 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__
                                                 );
                    lVar30 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar30 == 0) goto thunk_FUN_02b3cac4;
                    iVar1 = *piVar22;
                    plVar15 = *(long **)(lVar30 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02b76218(*(long *)(*(long *)
                                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                            + 0x20));
                      lVar30 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar15 + (long)iVar1 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar14 = FUN_058ad664(lVar30,piVar19[8],in_stack_00000060,0);
                    uVar21 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar19,uVar14);
                    in_stack_000000e0 =
                         FUN_04bffdac(*(undefined8 *)
                                       Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__,
                                      uVar21,0);
                    lVar30 = *(long *)(lVar27 + 0x20);
                    in_stack_000000e8 = 0;
                    thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar14 == 0xd);
                    if (lVar30 == 0) goto thunk_FUN_02b3cac4;
                    FUN_044a87e4(lVar30,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                                );
                    iVar26 = iVar26 + 1;
                  } while (iVar4 != iVar26);
                }
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar6);
          }
        }
      }
      lVar27 = *(long *)(in_stack_00000048 + 0x30);
      iVar29 = iVar29 + 1;
    } while (lVar27 != 0);
  }
thunk_FUN_02b3cac4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


