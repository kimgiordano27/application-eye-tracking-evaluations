/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_ApplicationOptions_SetMatchSessionId_Native
ENTRY_POINT: 0526d020
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Oculus_Platform_CAPI__ovr_ApplicationOptions_SetMatchSessionId_Native(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  
  FUN_02f08768();
  FUN_02f08768(System_ValueTuple<Int32Enum,_int>_TypeInfo);
  FUN_02f08768(PTR_DAT_067c8f20);
  *(undefined1 *)(unaff_x21 + 0xb0d) = 1;
  FUN_052364c4();
  uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar4 = FUN_060f245c(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    uVar7 = FUN_0335692c();
    *(undefined8 *)(unaff_x19 + 0x20) = uVar7;
  }
  if ((*(long *)(unaff_x19 + 0x30) == 0) || (*(long *)(*(long *)(unaff_x19 + 0x30) + 0x18) == 0)) {
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar5 = FUN_060ed7ac(*(long *)(unaff_x19 + 0x20),0),
       puVar3 = System_ValueTuple<Int32Enum,_int>_TypeInfo,
       puVar2 = 
       System_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo,
       puVar1 = 
       UnityEngine_XR_Interaction_Toolkit_XRControllerRecorder_ValueBypass<Vector2>_TypeInfo,
       lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar7 = FUN_033571f8(lVar5,*(undefined8 *)
                                UnityEngine_UIElements_Experimental_ValueAnimation<float>_TypeInfo);
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
    FUN_04e0200c();
    uVar7 = FUN_033a774c(uVar7,uVar6,*(undefined8 *)puVar2);
    uVar7 = FUN_033a45f0(uVar7,*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
  }
  FUN_0526d15c();
  FUN_0526d288();
  FUN_05236568();
  return;
}


