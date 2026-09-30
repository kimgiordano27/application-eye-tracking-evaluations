/*
FUNCTION_NAME: OVRExternalComposition$$SetCameraTargetTexture
ENTRY_POINT: 04edb284
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRExternalComposition__SetCameraTargetTexture(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  FUN_02b3c81c();
  FUN_02b3c81c(OVRPlugin_Qpl_Annotation_Builder_var);
  FUN_02b3c81c(
              <>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0x5a9) = 1;
  if (*(char *)(unaff_x19 + 0x41) == '\0') {
    return;
  }
  lVar5 = *(long *)(unaff_x19 + 0x30);
  uVar2 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06322dd8);
  FUN_03fbdb0c();
  if (lVar5 != 0) {
    FUN_04af041c(lVar5,uVar2,
                 *(undefined8 *)
                  <>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>_TypeInfo
                );
    puVar1 = PTR_DAT_063136e0;
    lVar5 = *(long *)(unaff_x19 + 0x30);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(lVar5 + 0x1f8);
      uVar2 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063136e0);
      FUN_03fbbd20();
      lVar3 = FUN_04dc0fdc(uVar6,uVar2,0);
      if (lVar3 != 0) {
        uVar2 = *(undefined8 *)puVar1;
        lVar4 = thunk_FUN_02b79548(lVar3,uVar2);
        if (lVar4 != 0) {
          uVar2 = *(undefined8 *)puVar1;
          *(long *)(lVar5 + 0x1f8) = lVar4;
          lVar4 = thunk_FUN_02b79548(lVar3,uVar2);
          if (lVar4 != 0) goto LAB_04edb39c;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar3,uVar2);
      }
      lVar4 = 0;
      *(undefined8 *)(lVar5 + 0x1f8) = 0;
LAB_04edb39c:
      thunk_FUN_02bb0e9c(lVar5 + 0x1f8,lVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


