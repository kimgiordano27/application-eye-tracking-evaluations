/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights.SetupLightPassData$$.ctor
ENTRY_POINT: 058a8bac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 195
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_Rendering_Universal_Internal_DeferredLights_SetupLightPassData___ctor(long param_1)

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
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long *plVar17;
  long *plVar18;
  int *piVar19;
  char *pcVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  int iVar29;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 uVar30;
  int unaff_w28;
  ushort *puVar31;
  undefined1 *unaff_x29;
  long in_stack_00000020;
  long *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  int in_stack_00000110;
  undefined8 in_stack_00000170;
  undefined1 *in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined1 *in_stack_000001c8;
  ushort uStack00000000000001d0;
  ulong in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_00000268;
  undefined1 *puVar32;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000288;
  undefined8 uVar33;
  ulong in_stack_00000298;
  undefined8 uVar34;
  undefined1 *in_stack_00000358;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  long in_stack_00000380;
  ulong in_stack_00000388;
  
  while (((*(long *)(param_1 + 0x30) != 0 &&
          (lVar22 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar22 != 0)) &&
         (lVar22 = *(long *)(lVar22 + 0x30), lVar22 != 0))) {
    if (*(uint *)(lVar22 + 0x18) <= unaff_x25) {
LAB_058aa19c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar22 = *(long *)(lVar22 + unaff_x25 * 8 + 0x20);
    if (lVar22 == 0) break;
    puVar12 = (undefined8 *)
              FUN_0463ca1c(lVar22,unaff_w28,
                           *(undefined8 *)
                            Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                          );
    uVar30 = *puVar12;
    uVar13 = FUN_04c09ac4(uVar30,0);
    uVar34 = *(undefined8 *)Method_System_Nullable<NullValueHandling>_GetValueOrDefault__;
    if ((uVar13 & 1) == 0) {
      uVar34 = uVar30;
    }
    thunk_FUN_02bb0e9c(&stack0x00000260);
    uVar30 = CONCAT71((int7)((ulong)in_stack_00000268 >> 8),*unaff_x29);
    if (unaff_x25 == 0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_0589b900(&stack0x00000238,unaff_w28,0,0);
      if (*(long *)(in_stack_00000048 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_0589896c(*(long *)(in_stack_00000048 + 0x10),&stack0x00000238,&stack0x00000248);
    }
    while( true ) {
      puVar32 = (undefined1 *)CONCAT44(*(undefined4 *)(unaff_x29 + 0x10),(int)uVar30);
      uVar13 = CONCAT44((int)((ulong)in_stack_00000270 >> 0x20),*(undefined4 *)(unaff_x29 + 8));
      lVar22 = thunk_FUN_02b79644(*(undefined8 *)Method_System_Nullable<NullValueHandling>__ctor__);
      FUN_0588c804(lVar22,0);
      thunk_FUN_02bb0e9c(unaff_x26 + 0x30,lVar22);
      if (((((lVar22 == 0) ||
            (*(undefined4 *)(lVar22 + 0x10) = *(undefined4 *)(unaff_x29 + 0x18), lVar22 == 0)) ||
           ((*(undefined4 *)(lVar22 + 0x14) = *(undefined4 *)(unaff_x29 + 0x1c), lVar22 == 0 ||
            ((*(undefined4 *)(lVar22 + 0x18) = *(undefined4 *)(unaff_x29 + 0x20), lVar22 == 0 ||
             (*(undefined4 *)(lVar22 + 0x20) = *(undefined4 *)(unaff_x29 + 0x24), lVar22 == 0))))))
          || (*(undefined4 *)(lVar22 + 0x24) = 0, lVar22 == 0)) ||
         (*(undefined1 *)(lVar22 + 0x1c) = unaff_x29[0x2e], lVar22 == 0)) goto thunk_FUN_02b3cac4;
      *(undefined1 *)(lVar22 + 0x28) = unaff_x29[0x2c];
      puVar9 = PTR_DAT_06316c60;
      uVar33 = CONCAT71((int7)((ulong)in_stack_00000288 >> 8),unaff_x29[0x14]);
      uVar14 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
      puVar8 = PTR_DAT_06316c58;
      FUN_03752884(uVar14,*(undefined8 *)PTR_DAT_06316c58);
      thunk_FUN_02bb0e9c(unaff_x26 + 0x18,uVar14);
      uVar30 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
      FUN_03752884(uVar30,*(undefined8 *)puVar8);
      thunk_FUN_02bb0e9c(unaff_x26 + 0x20,uVar30);
      FUN_041797f8(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                   *(undefined8 *)
                    Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
      if (in_stack_00000020 == 0) goto thunk_FUN_02b3cac4;
      uVar15 = FUN_04352180(in_stack_00000020,0,
                            *(undefined8 *)Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__
                           );
      if ((uVar15 & 1) != 0) {
        FUN_041797f8(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                     *(undefined8 *)
                      Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
        uVar14 = FUN_04351eec(in_stack_00000020,0,
                              *(undefined8 *)
                               Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__);
        thunk_FUN_02bb0e9c(unaff_x26 + 0x18,uVar14);
      }
      FUN_041797f8(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                   *(undefined8 *)
                    Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
      if (in_stack_00000030 == 0) goto thunk_FUN_02b3cac4;
      uVar15 = FUN_04352180(in_stack_00000030,0,
                            *(undefined8 *)Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__
                           );
      if ((uVar15 & 1) != 0) {
        FUN_041797f8(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                     *(undefined8 *)
                      Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
        uVar30 = FUN_04351eec(in_stack_00000030,0,
                              *(undefined8 *)
                               Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__);
        thunk_FUN_02bb0e9c(unaff_x26 + 0x20,uVar30);
      }
      puVar8 = Method_System_Nullable<MouseButton>__ctor__;
      if ((*in_stack_00000028 == 0) || (lVar23 = *(long *)(*in_stack_00000028 + 0x18), lVar23 == 0))
      goto thunk_FUN_02b3cac4;
      if (*(uint *)(lVar23 + 0x18) <= unaff_x25) goto LAB_058aa19c;
      lVar23 = *(long *)(lVar23 + unaff_x25 * 8 + 0x20);
      if (lVar23 == 0) goto thunk_FUN_02b3cac4;
      lVar24 = *(long *)(lVar23 + 0x10);
      *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
      if (lVar24 == 0) goto thunk_FUN_02b3cac4;
      uVar6 = *(uint *)(lVar23 + 0x18);
      if (uVar6 < *(uint *)(lVar24 + 0x18)) {
        lVar24 = lVar24 + (long)(int)uVar6 * 0x40;
        *(uint *)(lVar23 + 0x18) = uVar6 + 1;
        *(undefined1 **)(lVar24 + 0x28) = puVar32;
        *(undefined8 *)(lVar24 + 0x20) = uVar34;
        *(ulong *)(lVar24 + 0x38) = uVar14;
        *(ulong *)(lVar24 + 0x30) = uVar13;
        *(undefined8 *)(lVar24 + 0x48) = uVar33;
        *(undefined8 *)(lVar24 + 0x40) = uVar30;
        *(ulong *)(lVar24 + 0x58) = in_stack_00000298;
        *(long *)(lVar24 + 0x50) = lVar22;
        thunk_FUN_02bb0e9c(lVar24 + 0x20,0);
        uVar34 = 0;
      }
      else {
        FUN_039b9384(lVar23,&stack0x00000350,
                     *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) + 0x70));
        in_stack_00000358 = puVar32;
        in_stack_00000360 = uVar13;
        in_stack_00000368 = uVar14;
        in_stack_00000370 = uVar30;
        in_stack_00000378 = uVar33;
        in_stack_00000380 = lVar22;
        in_stack_00000388 = in_stack_00000298;
      }
      unaff_w28 = unaff_w28 + 1;
      if (unaff_w24 == unaff_w28) {
        do {
          unaff_x25 = unaff_x25 + 1;
          if (unaff_x25 == 3) {
            lVar22 = *(long *)(in_stack_00000048 + 0x30);
            if (lVar22 == 0) goto thunk_FUN_02b3cac4;
            iVar29 = 0;
            goto LAB_058a9014;
          }
          if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
              (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0)) ||
             (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto thunk_FUN_02b3cac4;
          if (*(uint *)(lVar22 + 0x18) <= unaff_x25) goto LAB_058aa19c;
          lVar22 = *(long *)(lVar22 + unaff_x25 * 8 + 0x20);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02b76218();
          }
          unaff_w24 = *(int *)(lVar22 + 8);
        } while (unaff_w24 < 1);
        unaff_w28 = 0;
      }
      if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
          (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0)) ||
         (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto thunk_FUN_02b3cac4;
      if (*(uint *)(lVar22 + 0x18) <= unaff_x25) goto LAB_058aa19c;
      unaff_x29 = (undefined1 *)
                  FUN_03ab61ec(lVar22 + unaff_x25 * 8 + 0x20,unaff_w28,
                               *(undefined8 *)
                                Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__
                              );
      in_stack_00000268 = 0;
      in_stack_00000270 = 0;
      in_stack_00000288 = 0;
      in_stack_00000298 = 0;
      param_1 = in_stack_00000048;
      if (unaff_w28 != 0) break;
      uVar34 = *(undefined8 *)PTR_DAT_0632d930;
      thunk_FUN_02bb0e9c(&stack0x00000260);
      uVar30 = 1;
    }
  }
  goto thunk_FUN_02b3cac4;
LAB_058a9014:
  lVar22 = *(long *)(lVar22 + 0x18);
  if ((*(ushort *)
        (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__ +
                  0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  if (*(int *)(lVar22 + 8) <= iVar29) {
    if (*(long *)(in_stack_00000048 + 0x30) != 0) {
      in_stack_000001b8 = 0xffffffff;
      in_stack_000001b0 = *(long *)(in_stack_00000048 + 0x30);
      uVar13 = FUN_058a14e4(&stack0x000001b0);
      puVar9 = Method_OVRTask<List<bool>>_GetAwaiter__;
      puVar8 = 
      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
      ;
      if ((uVar13 & 1) != 0) goto LAB_058a9924;
      goto LAB_058a9c3c;
    }
    goto thunk_FUN_02b3cac4;
  }
  if (*(long *)(in_stack_00000048 + 0x18) == 0) goto thunk_FUN_02b3cac4;
  lVar22 = FUN_037a6268(*(long *)(in_stack_00000048 + 0x18),iVar29,
                        *(undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__);
  if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar29);
  puVar16 = (undefined4 *)
            FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar29,
                         *(undefined8 *)
                          Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
  lVar23 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar23 == 0) goto thunk_FUN_02b3cac4;
  uVar11 = *puVar16;
  if (DAT_066d31dc == '\0') {
    FUN_02b3c81c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                );
    DAT_066d31dc = '\x01';
  }
  lVar23 = *(long *)(lVar23 + 0x28);
  if (lVar23 == 0) goto thunk_FUN_02b3cac4;
  puVar12 = (undefined8 *)
            FUN_0463ca1c(lVar23,uVar11,
                         *(undefined8 *)
                          Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                        );
  uVar30 = FUN_058a7d14(*puVar12);
  thunk_FUN_02bb0e9c(&stack0x000001f0,uVar30);
  puVar8 = Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__;
  if (lVar22 == 0) goto thunk_FUN_02b3cac4;
  plVar17 = (long *)FUN_02b3c908(*(undefined8 *)
                                  Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__,3
                                );
  thunk_FUN_02bb0e9c(&stack0x00000200,plVar17);
  plVar18 = (long *)FUN_02b3c908(*(undefined8 *)puVar8,3);
  thunk_FUN_02bb0e9c(&stack0x00000208,plVar18);
  lVar23 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar23 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
  }
  if (**(long **)(lVar23 + 0xb8) == 0) goto thunk_FUN_02b3cac4;
  FUN_0452f928(**(long **)(lVar23 + 0xb8),lVar22,&stack0x00000230,
               *(undefined8 *)Method_System_Nullable<MissingMemberHandling>_get_HasValue__);
  lVar23 = thunk_FUN_02b79644(*(undefined8 *)
                               Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
  FUN_0588d214(lVar23,0);
  thunk_FUN_02bb0e9c(&stack0x00000228,lVar23);
  if ((((lVar23 == 0) || (*(undefined4 *)(lVar23 + 0x28) = puVar16[0x19], lVar23 == 0)) ||
      (*(undefined4 *)(lVar23 + 0x2c) = puVar16[0x1a], lVar23 == 0)) ||
     ((*(undefined4 *)(lVar23 + 0x30) = puVar16[0x1b], lVar23 == 0 ||
      (*(undefined4 *)(lVar23 + 0x34) = puVar16[0x1c], lVar23 == 0)))) goto thunk_FUN_02b3cac4;
  *(undefined1 *)(lVar23 + 0x38) = *(undefined1 *)((long)puVar16 + 0x7d);
  if (*(long *)(lVar22 + 200) == 0) goto thunk_FUN_02b3cac4;
  FUN_036b96a4(&stack0x00000350,*(long *)(lVar22 + 200),
               *(undefined8 *)Method_System_Nullable<int>_GetValueOrDefault__);
  in_stack_000001c0 = uVar34;
  in_stack_000001c8 = in_stack_00000358;
  _uStack00000000000001d0 = in_stack_00000360;
  in_stack_000001d8 = in_stack_00000368;
  in_stack_000001e0 = in_stack_00000370;
  while (uVar13 = FUN_0470872c(&stack0x000001c0,
                               *(undefined8 *)Method_System_Nullable<short>_get_HasValue__),
        (uVar13 & 1) != 0) {
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar5 = uStack00000000000001d0;
    uVar13 = _uStack00000000000001d0 & 0xffff;
    lVar24 = *(long *)(lVar23 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (lVar24 == 0) {
LAB_058a9898:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar25 = *(long *)(lVar24 + 0x10);
    lVar26 = *unaff_x19;
    *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
    if (lVar25 == 0) goto LAB_058a9898;
    uVar6 = *(uint *)(lVar24 + 0x18);
    if (uVar6 < *(uint *)(lVar25 + 0x18)) {
      *(uint *)(lVar24 + 0x18) = uVar6 + 1;
      *(uint *)(lVar25 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
    }
    else {
      FUN_03753114(lVar24,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  FUN_04708728(&stack0x000001c0,*(undefined8 *)Method_System_Nullable<short>_GetValueOrDefault__);
  uVar13 = 0;
  do {
    lVar24 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar24,*(undefined8 *)PTR_DAT_06316c58);
    if (plVar17 == (long *)0x0) goto thunk_FUN_02b3cac4;
    if ((lVar24 != 0) &&
       (lVar25 = thunk_FUN_02b79548(lVar24,*(undefined8 *)(*plVar17 + 0x40)), lVar25 == 0)) {
LAB_058aa1a0:
      uVar34 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar34,0);
    }
    if (*(uint *)(plVar17 + 3) <= uVar13) goto LAB_058aa19c;
    plVar17[uVar13 + 4] = lVar24;
    thunk_FUN_02bb0e9c(plVar17 + uVar13 + 4,lVar24);
    lVar24 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar24,*(undefined8 *)PTR_DAT_06316c58);
    if (plVar18 == (long *)0x0) goto thunk_FUN_02b3cac4;
    if ((lVar24 != 0) &&
       (lVar25 = thunk_FUN_02b79548(lVar24,*(undefined8 *)(*plVar18 + 0x40)), lVar25 == 0))
    goto LAB_058aa1a0;
    if (*(uint *)(plVar18 + 3) <= uVar13) goto LAB_058aa19c;
    plVar18[uVar13 + 4] = lVar24;
    thunk_FUN_02bb0e9c(plVar18 + uVar13 + 4,lVar24);
    lVar24 = *(long *)(lVar22 + 0xa8);
    if (lVar24 == 0) goto thunk_FUN_02b3cac4;
    if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_058aa19c;
    lVar24 = *(long *)(lVar24 + uVar13 * 8 + 0x20);
    if (lVar24 == 0) goto thunk_FUN_02b3cac4;
    FUN_03816fc8(&stack0x00000350,lVar24,
                 *(undefined8 *)
                  Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
LAB_058a9424:
    uVar14 = FUN_04738544(&stack0x000002c0,*unaff_x22);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(lVar22 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar14 = FUN_03816854(*(long *)(lVar22 + 0xd8),in_stack_00000360,
                            in_stack_00000368 & 0xffffffff,*unaff_x23);
      if ((uVar14 & 1) == 0) {
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(plVar17 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar24 = plVar17[uVar13 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar24 != 0) {
          lVar25 = *(long *)(lVar24 + 0x10);
          lVar26 = *unaff_x19;
          *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
          if (lVar25 != 0) {
            uVar7 = *(uint *)(lVar24 + 0x18);
            uVar6 = (uint)in_stack_00000360 & 0xffff;
            if (uVar7 < *(uint *)(lVar25 + 0x18)) {
              *(uint *)(lVar24 + 0x18) = uVar7 + 1;
              *(uint *)(lVar25 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
            }
            else {
              FUN_03753114(lVar24,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
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
    lVar24 = *(long *)(lVar22 + 0xb0);
    if (lVar24 == 0) goto thunk_FUN_02b3cac4;
    if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_058aa19c;
    lVar24 = *(long *)(lVar24 + uVar13 * 8 + 0x20);
    if (lVar24 == 0) goto thunk_FUN_02b3cac4;
    FUN_03816fc8(&stack0x00000350,lVar24,
                 *(undefined8 *)
                  Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
    uVar34 = 0;
    while (uVar14 = FUN_04738544(&stack0x000002c0,*unaff_x22), (uVar14 & 1) != 0) {
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(plVar18 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar24 = plVar18[uVar13 + 4];
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar24 == 0) {
LAB_058a95f4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar25 = *(long *)(lVar24 + 0x10);
      lVar26 = *unaff_x19;
      *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
      if (lVar25 == 0) goto LAB_058a95f4;
      uVar7 = *(uint *)(lVar24 + 0x18);
      uVar6 = (uint)in_stack_00000360 & 0xffff;
      if (uVar7 < *(uint *)(lVar25 + 0x18)) {
        *(uint *)(lVar24 + 0x18) = uVar7 + 1;
        *(uint *)(lVar25 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
      }
      else {
        FUN_03753114(lVar24,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    FUN_04738540(&stack0x000002c0,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
    uVar13 = uVar13 + 1;
  } while (uVar13 != 3);
  lVar22 = *(long *)(in_stack_00000048 + 0x30);
  if (DAT_066d31da == '\0') {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    DAT_066d31da = '\x01';
  }
  if (lVar22 == 0) goto thunk_FUN_02b3cac4;
  iVar1 = puVar16[0x10];
  uVar6 = puVar16[0x11];
  uVar13 = (ulong)uVar6;
  lVar25 = *(long *)
            Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
  ;
  lVar24 = *(long *)(lVar25 + 0x38);
  if (lVar24 == 0) {
    FUN_02b76274(lVar25);
    lVar24 = *(long *)(lVar25 + 0x38);
  }
  lVar22 = FUN_0322b7a0(*(undefined8 *)(lVar22 + 0x40),*(undefined8 *)(lVar24 + 0x10));
  if ((int)uVar6 < 0) {
    FUN_04d9bcc4(0);
  }
  else if (uVar6 != 0) {
    puVar31 = (ushort *)(lVar22 + (long)iVar1 * 0x18);
    do {
      if (lVar23 == 0) goto thunk_FUN_02b3cac4;
      uVar5 = *puVar31;
      lVar22 = *(long *)(lVar23 + 0x18);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar22 == 0) goto thunk_FUN_02b3cac4;
      lVar24 = *(long *)(lVar22 + 0x10);
      lVar25 = *unaff_x19;
      *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
      if (lVar24 == 0) goto thunk_FUN_02b3cac4;
      uVar6 = *(uint *)(lVar22 + 0x18);
      if (uVar6 < *(uint *)(lVar24 + 0x18)) {
        *(uint *)(lVar22 + 0x18) = uVar6 + 1;
        *(uint *)(lVar24 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03753114(lVar22,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar13 = uVar13 - 1;
      puVar31 = puVar31 + 0xc;
    } while (uVar13 != 0);
  }
  if ((*in_stack_00000028 == 0) || (lVar22 = *(long *)(*in_stack_00000028 + 0x10), lVar22 == 0))
  goto thunk_FUN_02b3cac4;
  memcpy(&stack0x00000300,&stack0x000001f0,0x48);
  lVar23 = *(long *)(lVar22 + 0x10);
  lVar24 = *(long *)Method_System_Nullable<MonoSslPolicyErrors>__ctor__;
  *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
  if (lVar23 == 0) goto thunk_FUN_02b3cac4;
  uVar6 = *(uint *)(lVar22 + 0x18);
  if (uVar6 < *(uint *)(lVar23 + 0x18)) {
    lVar23 = lVar23 + (long)(int)uVar6 * 0x48;
    *(uint *)(lVar22 + 0x18) = uVar6 + 1;
    memcpy((void *)(lVar23 + 0x20),&stack0x00000300,0x48);
    thunk_FUN_02bb0e9c(lVar23 + 0x20,0);
  }
  else {
    uVar30 = *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70);
    memcpy(&stack0x00000350,&stack0x00000300,0x48);
    Unity_Collections_NativeList<ResourceUnversionedData>__get_IsEmpty
              (lVar22,&stack0x00000350,uVar30);
  }
  lVar22 = *(long *)(in_stack_00000048 + 0x30);
  iVar29 = iVar29 + 1;
  in_stack_00000358 = &stack0x000002c0;
  if (lVar22 == 0) goto thunk_FUN_02b3cac4;
  goto LAB_058a9014;
  while( true ) {
    if (0 < *(int *)(lVar22 + 0x2a0)) {
      lVar24 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_GetAwaiter__);
      FUN_0588d2c0(lVar24,0);
      uVar30 = FUN_058a7208(*(undefined8 *)(in_stack_00000048 + 0x30),lVar22);
      if (lVar24 == 0) goto thunk_FUN_02b3cac4;
      *(undefined8 *)(lVar24 + 0x10) = uVar30;
      thunk_FUN_02bb0e9c();
      lVar25 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
      FUN_037a5cd0(lVar25,*(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
      plVar17 = (long *)(lVar24 + 0x18);
      *plVar17 = lVar25;
      thunk_FUN_02bb0e9c(plVar17,lVar25);
      iVar29 = 0;
      while( true ) {
        iVar1 = *(int *)(lVar22 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (iVar1 <= iVar29) break;
        lVar25 = *plVar17;
        uVar30 = FUN_058a6d28(*(undefined8 *)(in_stack_00000048 + 0x30),lVar22,iVar29);
        if (lVar25 == 0) goto thunk_FUN_02b3cac4;
        lVar26 = *(long *)(lVar25 + 0x10);
        lVar27 = *(long *)puVar9;
        *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
        if (lVar26 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar25 + 0x18);
        if (uVar6 < *(uint *)(lVar26 + 0x18)) {
          *(uint *)(lVar25 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar26 + (long)(int)uVar6 * 8 + 0x20) = uVar30;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar25,uVar30,
                       *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
        }
        iVar29 = iVar29 + 1;
      }
      uVar30 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetStateMachine__
                                 );
      FUN_044a5fa0(uVar30,*(undefined8 *)Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Create__
                  );
      *(undefined8 *)(lVar24 + 0x20) = uVar30;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar24 + 0x20),uVar30);
      *(long *)(lVar24 + 0x28) = lVar23;
      thunk_FUN_02bb0e9c((long *)(lVar24 + 0x28),lVar23);
      puVar10 = Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
      if (lVar23 == 0) goto thunk_FUN_02b3cac4;
      if (0 < *(int *)(lVar23 + 0x18)) {
        iVar29 = 0;
        do {
          uVar11 = FUN_03752e1c(lVar23,iVar29,*(undefined8 *)PTR_DAT_06316cc0);
          if (*in_stack_00000028 == 0) goto thunk_FUN_02b3cac4;
          lVar22 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar22 == 0) ||
             (FUN_039b61b8(&stack0x00000350,lVar22,uVar11,*(undefined8 *)puVar10),
             in_stack_00000170 = uVar34, in_stack_00000178 = in_stack_00000358,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0))
          goto thunk_FUN_02b3cac4;
          *(long *)(in_stack_00000388 + 0x10) = lVar24;
          thunk_FUN_02bb0e9c((long *)(in_stack_00000388 + 0x10),lVar24);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          in_stack_00000358 = in_stack_00000178;
          uVar34 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar22 = *(long *)(*in_stack_00000028 + 0x10), lVar22 == 0)) goto thunk_FUN_02b3cac4;
          FUN_039b621c(lVar22,uVar11,&stack0x00000350,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetAwaiter__);
          iVar29 = iVar29 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar29 < *(int *)(lVar23 + 0x18));
      }
    }
    uVar13 = FUN_058a14e4(&stack0x000001b0);
    if ((uVar13 & 1) == 0) break;
LAB_058a9924:
    lVar22 = FUN_058a148c(&stack0x000001b0);
    lVar23 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar23,*(undefined8 *)PTR_DAT_06316c58);
    iVar29 = *(int *)(lVar22 + 0x298);
    if (iVar29 < *(int *)(lVar22 + 0x29c) + 1) {
      if (lVar23 == 0) goto thunk_FUN_02b3cac4;
      lVar24 = *unaff_x19;
      do {
        lVar25 = *(long *)(lVar23 + 0x10);
        *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
        if (lVar25 == 0) goto thunk_FUN_02b3cac4;
        uVar6 = *(uint *)(lVar23 + 0x18);
        if (uVar6 < *(uint *)(lVar25 + 0x18)) {
          *(uint *)(lVar23 + 0x18) = uVar6 + 1;
          *(int *)(lVar25 + (long)(int)uVar6 * 4 + 0x20) = iVar29;
        }
        else {
          FUN_03753114(lVar23,iVar29,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
          lVar24 = *unaff_x19;
        }
        iVar29 = iVar29 + 1;
      } while (iVar29 < *(int *)(lVar22 + 0x29c) + 1);
    }
  }
LAB_058a9c3c:
  lVar22 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar22 != 0) {
    iVar29 = 0;
    do {
      lVar22 = *(long *)(lVar22 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (*(int *)(lVar22 + 8) <= iVar29) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar19 = (int *)FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar29,
                                    *(undefined8 *)
                                     Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__)
      ;
      if (((*in_stack_00000028 == 0) || (lVar22 = *(long *)(*in_stack_00000028 + 0x10), lVar22 == 0)
          ) || (FUN_039b61b8(&stack0x00000350,lVar22,*piVar19,
                             *(undefined8 *)
                              Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__),
               in_stack_00000388 == 0)) break;
      lVar22 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar22 != 0) {
        lVar23 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_066d31d0 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
          DAT_066d31d0 = '\x01';
        }
        puVar8 = 
        Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
        ;
        if (lVar23 == 0) break;
        iVar1 = piVar19[10];
        uVar6 = piVar19[0xb];
        uVar13 = (ulong)uVar6;
        lVar25 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
        lVar24 = *(long *)(lVar25 + 0x38);
        if (lVar24 == 0) {
          FUN_02b76274(lVar25);
          lVar24 = *(long *)(lVar25 + 0x38);
        }
        lVar23 = FUN_0322b7b4(*(undefined8 *)(lVar23 + 0x30),*(undefined8 *)(lVar24 + 0x10));
        if ((int)uVar6 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar6 != 0) {
          puVar16 = (undefined4 *)(lVar23 + (long)iVar1 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0))
            goto thunk_FUN_02b3cac4;
            pcVar20 = (char *)UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                        (lVar23,*(undefined8 *)(puVar16 + -2),*puVar16,0);
            if (*pcVar20 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              iVar1 = *(int *)(pcVar20 + 4);
              plVar17 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02b76218(*(long *)(*(long *)
                                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar17 + (long)iVar1 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_058ac454(&stack0x00000350,4,*piVar19,0);
                uVar34 = 0;
              }
              else {
                uVar34 = FUN_058ad664(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar19,0);
              }
              uVar30 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),piVar19,
                                    &stack0x000000f0,uVar34);
              in_stack_000000e0 = FUN_04bffdac(*(undefined8 *)puVar8,uVar30,0);
              uVar11 = in_stack_000000f0;
              lVar23 = *(long *)(lVar22 + 0x20);
              in_stack_000000e8 = 0;
              thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar34 == 0xd);
              if (lVar23 == 0) goto thunk_FUN_02b3cac4;
              FUN_044a87e4(lVar23,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                          );
            }
            uVar13 = uVar13 - 1;
            puVar16 = puVar16 + 3;
          } while (uVar13 != 0);
        }
        if (-1 < piVar19[8]) {
          lVar23 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_066d31d1 == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                        );
            DAT_066d31d1 = '\x01';
          }
          if (lVar23 == 0) break;
          iVar1 = piVar19[0xc];
          uVar6 = piVar19[0xd];
          lVar25 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
          ;
          lVar24 = *(long *)(lVar25 + 0x38);
          if (lVar24 == 0) {
            FUN_02b76274(lVar25);
            lVar24 = *(long *)(lVar25 + 0x38);
          }
          lVar23 = FUN_0322b7c8(*(undefined8 *)(lVar23 + 0x38),*(undefined8 *)(lVar24 + 0x10));
          if ((int)uVar6 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar6 != 0) {
            uVar13 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              puVar12 = (undefined8 *)(lVar23 + (long)iVar1 * 0xc + uVar13 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
              lVar24 = FUN_058ab2a4(*(long *)(in_stack_00000048 + 0x30),*puVar12,in_stack_00000030,0
                                   );
              if (*(int *)(lVar24 + 8) != *piVar19) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0))
                goto thunk_FUN_02b3cac4;
                lVar24 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                   (lVar24,*puVar12,*(undefined4 *)(puVar12 + 1),0);
                iVar4 = *(int *)(lVar24 + 8);
                if (0 < iVar4) {
                  iVar28 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    uVar34 = *puVar12;
                    if (DAT_066d31cb == '\0') {
                      FUN_02b3c81c();
                      DAT_066d31cb = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar25 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar25 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    lVar25 = *(long *)(lVar25 + 0x20);
                    iVar2 = *(int *)(lVar24 + 0x28);
                    iVar3 = *(int *)(lVar24 + 0x2c);
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
                    if (lVar25 == 0) goto thunk_FUN_02b3cac4;
                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(puVar12 + 1)) goto LAB_058aa19c;
                    piVar21 = (int *)FUN_03ab59e0(lVar25 + (long)(int)*(uint *)(puVar12 + 1) * 8 +
                                                  0x20,iVar28 + ((int)((ulong)uVar34 >> 0x20) +
                                                                iVar2 * ((uint)uVar34 & 0xffff)) *
                                                                iVar3,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__
                                                 );
                    lVar24 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar24 == 0) goto thunk_FUN_02b3cac4;
                    iVar2 = *piVar21;
                    plVar17 = *(long **)(lVar24 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02b76218(*(long *)(*(long *)
                                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                            + 0x20));
                      lVar24 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar17 + (long)iVar2 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar34 = FUN_058ad664(lVar24,piVar19[8],in_stack_00000060,0);
                    uVar30 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar19,uVar34);
                    in_stack_000000e0 =
                         FUN_04bffdac(*(undefined8 *)
                                       Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__,
                                      uVar30,0);
                    lVar24 = *(long *)(lVar22 + 0x20);
                    in_stack_000000e8 = 0;
                    thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar34 == 0xd);
                    if (lVar24 == 0) goto thunk_FUN_02b3cac4;
                    FUN_044a87e4(lVar24,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                                );
                    iVar28 = iVar28 + 1;
                  } while (iVar4 != iVar28);
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar6);
          }
        }
      }
      lVar22 = *(long *)(in_stack_00000048 + 0x30);
      iVar29 = iVar29 + 1;
    } while (lVar22 != 0);
  }
thunk_FUN_02b3cac4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


