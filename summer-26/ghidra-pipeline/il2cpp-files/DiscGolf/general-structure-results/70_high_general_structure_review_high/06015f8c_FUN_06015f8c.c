/*
FUNCTION_NAME: FUN_06015f8c
ENTRY_POINT: 06015f8c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_18;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x06016244) */

undefined8 FUN_06015f8c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 extraout_x1;
  long lVar18;
  undefined8 uVar19;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar9 = Method_System_Runtime_Remoting_Messaging_CADMessageBase_GetSignature__;
  puVar3 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_StabilizeTransform_00001197_PostfixBurstDelegate>__
  ;
  puVar2 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_StabilizePosition_00001198_PostfixBurstDelegate>__
  ;
  if ((DAT_06dc4a93 & 1) == 0) {
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<SortingHelpers_SquareDistanceAttachPointEvaluator_SqDistanceToInteractable_00001981_PostfixBurstDelegate>__
                );
    FUN_02d965b8(UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_var);
    FUN_02d965b8(System_Threading_Volatile_VolatileObject_var);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_var);
    FUN_02d965b8(Method_System_Runtime_Remoting_Messaging_CADMessageBase_GetSignature__);
    FUN_02d965b8(PTR_DAT_069fe8c8);
    FUN_02d965b8(Method_Unity_Burst_BurstCompiler_Compile__);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRCameraSubsystemDescriptor_Cinfo_var);
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_StabilizeTransform_00001197_PostfixBurstDelegate>__
                );
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRTransformStabilizer_StabilizePosition_00001198_PostfixBurstDelegate>__
                );
    FUN_02d965b8(Method_Unity_Burst_BurstCompiler_Compile__);
    DAT_06dc4a93 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_03f1cd34(lVar11,*(undefined8 *)puVar3);
  lVar12 = *(long *)puVar9;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar12 = *(long *)puVar9;
  }
  puVar8 = Method_Unity_Burst_BurstCompiler_Compile__;
  puVar7 = Method_Unity_Burst_BurstCompiler_Compile__;
  puVar6 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<SortingHelpers_SquareDistanceAttachPointEvaluator_SqDistanceToInteractable_00001981_PostfixBurstDelegate>__
  ;
  puVar5 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate>__
  ;
  puVar4 = System_Threading_Volatile_VolatileObject_var;
  puVar3 = UnityEngine_UIElements_VisualTreeAsset_UxmlObjectEntry_var;
  puVar2 = PTR_DAT_069fe8c8;
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04010c90(&local_a8,lVar12,
               *(undefined8 *)UnityEngine_XR_ARSubsystems_XRCameraSubsystemDescriptor_Cinfo_var);
  local_80 = local_a8;
  local_a8 = 0;
  uStack_78 = puStack_a0;
  local_70 = local_98;
  puStack_a0 = &local_80;
  while( true ) {
    uVar13 = FUN_05156804(&local_80,*(undefined8 *)puVar4);
    uVar16 = local_70;
    lVar12 = local_a8;
    if ((uVar13 & 1) == 0) {
      FUN_05156800(puStack_a0,*(undefined8 *)puVar3);
      if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar12);
      }
      iVar10 = FUN_035ff40c(lVar11,*(undefined8 *)puVar5);
      puVar2 = Method_System_Runtime_Remoting_Messaging_CADMessageBase_GetSignature__;
      if (iVar10 == 0) {
        thunk_FUN_02dfd288(Method_System_Runtime_Remoting_Messaging_CADMessageBase_GetSignature__);
        FUN_0297e1b4();
        lVar11 = thunk_FUN_02dfd288(puVar2);
        uVar17 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
        uVar16 = thunk_FUN_02dfd288(PTR_DAT_069fc558);
        uVar14 = thunk_FUN_02dfd288(
                                   Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__
                                   );
        uVar16 = thunk_FUN_03831920(uVar16,uVar17,uVar14);
        uVar14 = thunk_FUN_02dfd288(
                                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp__
                                   );
      }
      else {
        iVar10 = FUN_035ff40c(lVar11,*(undefined8 *)puVar5);
        if (iVar10 < 2) {
          uVar16 = FUN_03604ee0(lVar11,*(undefined8 *)puVar6);
          FUN_03604ee0(lVar11,*(undefined8 *)puVar6);
          uVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
          FUN_06015c30(uVar14,uVar16,extraout_x1);
          return uVar14;
        }
        lVar12 = thunk_FUN_02dfd288(
                                   Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                                   );
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar12 = thunk_FUN_02dfd288(
                                   Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                                   );
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        uVar16 = thunk_FUN_02dfd288(PTR_DAT_069fc558);
        uVar14 = thunk_FUN_02dfd288(
                                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp__
                                   );
        if (lVar12 == 0) {
          lVar12 = thunk_FUN_02dfd288(
                                     Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                                     );
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          puVar2 = Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__;
          lVar12 = thunk_FUN_02dfd288(
                                     Method_System_Runtime_Remoting_Channels_CADSerializer_DeserializeMessage__
                                     );
          uVar19 = **(undefined8 **)(lVar12 + 0xb8);
          thunk_FUN_02dfd288(
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp__
                            );
          lVar12 = thunk_FUN_02dd3144();
          uVar17 = thunk_FUN_02dfd288(Method_Oculus_Avatar2_CAPI_OvrAvatar2_Update__);
          FUN_03b745c8(lVar12,uVar19,uVar17,0);
          lVar18 = thunk_FUN_02dfd288(puVar2);
          *(long *)(*(long *)(lVar18 + 0xb8) + 8) = lVar12;
          lVar18 = thunk_FUN_02dfd288(puVar2);
          LeanTween__value(*(long *)(lVar18 + 0xb8) + 8,lVar12);
        }
        uVar17 = thunk_FUN_02dfd288(
                                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp__
                                   );
        uVar17 = thunk_FUN_0360ad50(lVar11,lVar12,uVar17);
        uVar19 = thunk_FUN_02dfd288(
                                   Method_Unity_Burst_BurstCompilerOptions_HasBurstCompileAttribute__
                                   );
        uVar16 = thunk_FUN_03831920(uVar16,uVar17,uVar19);
      }
      uVar16 = FUN_05362cb4(uVar14,uVar16,0);
      thunk_FUN_02dfd288(PTR_DAT_06a0eb68);
      uVar14 = thunk_FUN_02dd3144();
      FUN_060104cc(uVar14,uVar16);
      uVar16 = thunk_FUN_02dfd288(Method_Oculus_Avatar2_CAPI_ovrAvatar2VertexBuffer_GetNormals__);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar14,uVar16);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar14 = FUN_0556fbfc(param_1,uVar16,0);
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_04a54b1c(&local_b8,uVar14,uVar16,*(undefined8 *)puVar8);
    if (lVar11 == 0) break;
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar18 = *(long *)puVar7;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
      puVar15 = (undefined8 *)(lVar12 + 0x20);
      *puVar15 = local_b8;
      *(undefined8 *)(lVar12 + 0x28) = uStack_b0;
      LeanTween__value(puVar15,0);
    }
    else {
      FUN_03f1d5e0(lVar11,local_b8,uStack_b0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


