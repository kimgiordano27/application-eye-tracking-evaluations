/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 033cf140
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 120
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__get_eyeTrackingEnabled(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_044a6a14 & 1) == 0) {
    FUN_01d7d918(StringLiteral_8480);
    FUN_01d7d918(StringLiteral_1148);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044a6a14 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar6 = thunk_FUN_01de27b8();
    uVar7 = thunk_FUN_01dd295c(StringLiteral_1645);
    FUN_032870b8(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01dd295c(StringLiteral_8944);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar6,uVar7);
  }
  plVar4 = (long *)thunk_FUN_01dfff04(param_2,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0));
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar5 = FUN_033aa3c0(plVar4,0);
      if ((uVar5 & 1) == 0) {
        uVar6 = thunk_FUN_01dd295c(StringLiteral_8481);
        uVar6 = FUN_033d6e4c(uVar6,0);
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar7 = thunk_FUN_01de27b8();
        uVar9 = thunk_FUN_01dd295c(StringLiteral_1645);
        FUN_03287130(uVar7,uVar6,uVar9,0);
        uVar6 = thunk_FUN_01dd295c(StringLiteral_8944);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7,uVar6);
      }
    }
    puVar2 = StringLiteral_8480;
    puVar1 = StringLiteral_1148;
    if (*(int *)(*(long *)StringLiteral_1148 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar6 = FUN_033c6254(param_1);
    uVar7 = FUN_033c4e1c(param_2);
    uVar3 = FUN_01f26d0c(uVar6,uVar7,*(undefined8 *)puVar2);
    if ((int)uVar3 < 0) {
      uVar6 = 0;
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar8 = FUN_033c6380(param_1);
      if (lVar8 == 0) goto LAB_033cf270;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      uVar6 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8 + 0x20);
    }
    return uVar6;
  }
LAB_033cf270:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


