/*
FUNCTION_NAME: Shapes.Rectangle$$set_Fill
ENTRY_POINT: 037a8d5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Shapes_Rectangle__set_Fill(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined8 *unaff_x21;
  undefined8 *puVar7;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(StringLiteral_431);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<IWitByteDataSentHandler>__);
  *(undefined1 *)(unaff_x19 + 0x531) = 1;
  lVar3 = thunk_FUN_01f117cc(*unaff_x21);
  FUN_035ac8e8(lVar3,0);
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if (lVar3 != 0) {
    puVar7 = (undefined8 *)(lVar3 + 0x10);
    *puVar7 = unaff_x20;
    thunk_FUN_01f51358(puVar7);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_0403fb8c(0);
    puVar2 = Method_UnityEngine_Component_GetComponents<ISpeakerTextPreprocessor>__;
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_0406e738(*puVar7,0);
      return uVar5;
    }
    uVar5 = **(undefined8 **)
              (*(long *)Method_UnityEngine_Component_GetComponents<ISpeakerTextPreprocessor>__ +
              0xb8);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403ea2c(*(undefined8 *)
                    Method_UnityEngine_Component_GetComponents<IWitByteDataSentHandler>__,0);
      return 0;
    }
    lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_Component_GetComponents<IWitByteDataReadyHandler>__
                              );
    FUN_025f2a84(uVar5,lVar3,*(undefined8 *)StringLiteral_432,0);
    if (lVar6 != 0) {
      uVar5 = FUN_030f321c(lVar6,uVar5,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponents<ISpeakerTextPostprocessor>__)
      ;
      lVar3 = **(long **)(*(long *)puVar2 + 0xb8);
      if (lVar3 != 0) {
        uVar5 = FUN_04032c10(lVar3,uVar5,0);
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


