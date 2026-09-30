/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance$$Start
ENTRY_POINT: 060fd7c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_XRPokeFollowAffordance__Start(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined8 in_stack_00000018;
  
  FUN_02d965b8();
  FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteValue<ulong>__);
  FUN_02d965b8(
              Method_Unity_Netcode_FastBufferWriter_WriteValue<NetworkObject_SceneObject_TransformData>__
              );
  FUN_02d965b8(
              Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<ForceNetworkSerializeByMemcpy<Guid>>__
              );
  *(undefined1 *)(unaff_x20 + 0x53a) = 1;
  puVar2 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  lVar10 = *(long *)(unaff_x19 + 8);
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = FUN_060f4bd4(*(long *)(lVar10 + 0x10),0);
    if (*(int *)(*(long *)PTR_DAT_069fc218 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_063052bc(0);
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar6 = FUN_060f4b28(*(long *)(lVar10 + 0x10),0);
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<double>__);
    FUN_0611ee74(uVar7,uVar4,uVar5,uVar6,0);
    if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar8 = FUN_061201dc(*(long *)(lVar10 + 0x18),uVar7,0,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_stack_00000018 =
         FUN_0481d028(lVar8,*(undefined8 *)
                             Method_Unity_Netcode_FastBufferWriter_WriteValueSafe<ForceNetworkSerializeByMemcpy<Guid>>__
                     );
    uVar9 = FUN_047e6248(&stack0x00000018,
                         *(undefined8 *)
                          Method_Unity_Netcode_FastBufferWriter_WriteValue<NetworkObject_SceneObject_TransformData>__
                        );
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
      LeanTween__value(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031f8a88(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  lVar8 = FUN_047e6288(&stack0x00000018,
                       *(undefined8 *)Method_Unity_Netcode_FastBufferWriter_WriteValue<ulong>__);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar4 = *(undefined8 *)(lVar8 + 0x20);
  uVar9 = FUN_0536c9cc(uVar4,0);
  if ((uVar9 & 1) != 0) {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = FUN_060f4a7c(*(long *)(lVar10 + 0x10),0);
  }
  puVar3 = OVRPlugin_SkeletonType_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar3);
  return;
}


