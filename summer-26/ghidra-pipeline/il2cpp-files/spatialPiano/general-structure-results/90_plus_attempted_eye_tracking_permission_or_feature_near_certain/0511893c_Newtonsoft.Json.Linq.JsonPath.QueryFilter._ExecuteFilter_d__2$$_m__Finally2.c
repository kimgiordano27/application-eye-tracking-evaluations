/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.QueryFilter.<ExecuteFilter>d__2$$<>m__Finally2
ENTRY_POINT: 0511893c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 142
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;data_collection;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Newtonsoft_Json_Linq_JsonPath_QueryFilter_<ExecuteFilter>d__2__<>m__Finally2(ulong param_1)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  int in_w8;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  long lVar7;
  
  if (in_ZR || in_NG != in_OV) {
    puVar6 = (undefined8 *)PTR_DAT_067cbce8;
    if (in_w8 == 5) {
      if ((unaff_x19[7] != 0) && (*(int *)(unaff_x19[7] + 0x10) != 0)) {
        if (unaff_x19[8] != 0) {
          plVar2 = (long *)FUN_0501e498(unaff_x19[8],0);
          if (plVar2 != (long *)0x0) {
            uVar1 = (**(code **)(*plVar2 + 0x2f8))
                              (plVar2,unaff_x19[7],*(undefined8 *)(*plVar2 + 0x300));
            if (*(int *)(*(long *)PTR_DAT_067d9d38 + 0xe4) == 0) {
              thunk_FUN_02f6670c(*(long *)PTR_DAT_067d9d38);
            }
            uVar3 = FUN_0501716c(uVar1,0,0);
            if ((uVar3 & 1) == 0) {
              return uVar1;
            }
            uVar1 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
            uVar1 = FUN_02f0880c(uVar1,2);
            lVar7 = unaff_x19[7];
            FUN_02a7da48();
            FUN_02a81aa0(uVar1,lVar7);
            FUN_02a81ad4(uVar1,0,lVar7);
            lVar7 = unaff_x19[8];
            FUN_02a81aa0(uVar1,lVar7);
            FUN_02a81ad4(uVar1,1,lVar7);
            uVar4 = thunk_FUN_02f6ef30(
                                      Oculus_Interaction_Feedback_FeedbackSettings_OverrideEntry_var
                                      );
            uVar1 = FUN_051187b0(uVar4,uVar1);
            thunk_FUN_02f6ef30(PTR_DAT_067cb8d0);
            uVar4 = thunk_FUN_02f45270();
            FUN_04fe26bc(uVar4,uVar1,0);
            goto LAB_05118d78;
          }
          goto LAB_05118d30;
        }
LAB_05118d34:
        param_1 = 0;
        puVar6 = (undefined8 *)PTR_DAT_067da100;
      }
    }
    else {
      if (in_w8 != 6) goto LAB_05118d48;
      if ((unaff_x19[7] != 0) && (*(int *)(unaff_x19[7] + 0x10) != 0)) {
        if (unaff_x19[8] != 0) {
          uVar1 = FUN_0501e498(unaff_x19[8],0);
          return uVar1;
        }
        goto LAB_05118d34;
      }
    }
LAB_05118d3c:
    FUN_0511871c(param_1,*puVar6);
    goto LAB_05118d44;
  }
  if (in_w8 == 7) {
    uVar3 = FUN_05015fd8(unaff_x19[6],0,0);
    if ((uVar3 & 1) != 0) {
      lVar7 = unaff_x19[5];
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      param_1 = FUN_050ed374(lVar7,0,0);
      puVar6 = (undefined8 *)System_Xml_Schema_FacetsChecker_FacetsCompiler_var;
      if ((param_1 & 1) != 0) goto LAB_05118d3c;
    }
    uVar3 = FUN_05015fc0(unaff_x19[6],0,0);
    if ((uVar3 & 1) == 0) {
      plVar2 = (long *)unaff_x19[5];
      if ((plVar2 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar2 + 0x458))(plVar2,*(undefined8 *)(*plVar2 + 0x460)),
         lVar7 == 0)) goto LAB_05118d30;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(unaff_x19 + 4)) goto LAB_05118d44;
      goto LAB_05118d10;
    }
    plVar2 = (long *)unaff_x19[6];
    if ((plVar2 != (long *)0x0) &&
       (lVar7 = (**(code **)(*plVar2 + 0x318))(plVar2,*(undefined8 *)(*plVar2 + 800)), lVar7 != 0))
    {
      if (*(uint *)(unaff_x19 + 4) < *(uint *)(lVar7 + 0x18)) {
        return *(undefined8 *)(lVar7 + (long)(int)*(uint *)(unaff_x19 + 4) * 8 + 0x20);
      }
      goto LAB_05118d44;
    }
    goto LAB_05118d30;
  }
  if (in_w8 != 8) {
LAB_05118d48:
    uVar1 = thunk_FUN_02f6ef30(Unity_AppUI_UI_FieldLabel_UxmlSerializedData_var);
    thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
    uVar4 = thunk_FUN_02f45270();
    FUN_05055664(uVar4,uVar1,0);
LAB_05118d78:
    uVar1 = thunk_FUN_02f6ef30(
                              UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar4,uVar1);
  }
  *(undefined4 *)(unaff_x19 + 9) = 4;
  plVar2 = (long *)(**(code **)(*unaff_x19 + 0x1a8))();
  lVar7 = *(long *)(PTR_DAT_067c9338 + 0xe0);
  if (plVar2 == (long *)0x0) {
LAB_05118a38:
    plVar2 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar7 + 0x130)) goto LAB_05118a38;
    if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7) {
      plVar2 = (long *)0x0;
    }
  }
  lVar5 = unaff_x19[2];
  *(undefined4 *)(unaff_x19 + 9) = 8;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05118d44:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar1 = *(undefined8 *)(lVar5 + 0x20);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar3 = FUN_050ed374(uVar1,0,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x938))(plVar2,unaff_x19[2],*(undefined8 *)(*plVar2 + 0x940));
LAB_05118d10:
      uVar1 = FUN_05117c74();
      return uVar1;
    }
  }
LAB_05118d30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


