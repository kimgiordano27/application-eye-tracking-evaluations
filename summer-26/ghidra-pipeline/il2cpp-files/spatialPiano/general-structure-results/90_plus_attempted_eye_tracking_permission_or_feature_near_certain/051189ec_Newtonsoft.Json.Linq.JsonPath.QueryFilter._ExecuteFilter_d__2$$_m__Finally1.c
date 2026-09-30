/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryFilter.<ExecuteFilter>d__2$$<>m__Finally1
ENTRY_POINT: 051189ec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 133
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;data_collection;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__<>m__Finally1(void)

{
  bool in_ZR;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  undefined8 uVar6;
  
  if (!in_ZR) {
    uVar6 = thunk_FUN_02f6ef30(Unity_AppUI_UI_FieldLabel_UxmlSerializedData_var);
    thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
    uVar4 = thunk_FUN_02f45270();
    FUN_05055664(uVar4,uVar6,0);
    uVar6 = thunk_FUN_02f6ef30(
                              UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar4,uVar6);
  }
  *(undefined4 *)(unaff_x19 + 9) = 4;
  plVar1 = (long *)(**(code **)(*unaff_x19 + 0x1a8))();
  lVar2 = *(long *)(PTR_DAT_067c9338 + 0xe0);
  if (plVar1 != (long *)0x0) {
    if (*(byte *)(lVar2 + 0x130) <= *(byte *)(*plVar1 + 0x130)) {
      if (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2) {
        plVar1 = (long *)0x0;
      }
      goto LAB_05118cb0;
    }
  }
  plVar1 = (long *)0x0;
LAB_05118cb0:
  lVar5 = unaff_x19[2];
  *(undefined4 *)(unaff_x19 + 9) = 8;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar3 = FUN_050ed374(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x938))(plVar1,unaff_x19[2],*(undefined8 *)(*plVar1 + 0x940));
      uVar6 = FUN_05117c74();
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


