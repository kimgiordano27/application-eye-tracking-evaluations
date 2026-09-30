/*
FUNCTION_NAME: FUN_05118870
ENTRY_POINT: 05118870
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 130
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_3;validity_or_gating_hits_10;telemetry_or_network_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_05118870(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  plVar2 = param_1;
  if ((DAT_06bb9e0c & 1) == 0) {
    FUN_02f08768(PTR_DAT_067da580);
    FUN_02f08768(UnityEngine_Texture2D_var);
    FUN_02f08768(PTR_DAT_067d9cb8);
    FUN_02f08768(PTR_DAT_067d9d38);
    FUN_02f08768(PTR_DAT_067d98b0);
    FUN_02f08768(UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var);
    FUN_02f08768(System_Xml_Schema_FacetsChecker_FacetsCompiler_var);
    FUN_02f08768(PTR_DAT_067da100);
    plVar2 = (long *)FUN_02f08768(PTR_DAT_067cbce8);
    DAT_06bb9e0c = 1;
  }
  iVar1 = (int)param_1[9];
  puVar8 = (undefined8 *)PTR_DAT_067cbce8;
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      plVar9 = (long *)UnityEngine_Texture2D_var;
      if ((iVar1 == 1) || (plVar9 = (long *)PTR_DAT_067da580, iVar1 == 2)) {
LAB_05118b58:
        lVar5 = *plVar9;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar5 = *plVar9;
        }
        return **(undefined8 **)(lVar5 + 0xb8);
      }
    }
    else {
      plVar9 = (long *)PTR_DAT_067d9cb8;
      if (iVar1 == 3) goto LAB_05118b58;
      if (iVar1 == 4) {
        lVar5 = param_1[7];
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) != 0)) {
          lVar3 = param_1[8];
          if (lVar3 != 0) {
            if (*(int *)(lVar3 + 0x10) == 0) {
              if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar6 = FUN_02f08cb8(lVar5,1,0,*(undefined8 *)PTR_DAT_067d98b0,
                                   *(undefined8 *)
                                    UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                                  );
              return uVar6;
            }
            plVar2 = (long *)FUN_0501e498(lVar3,0);
            if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x051189dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (**(code **)(*plVar2 + 0x2e8))
                                (plVar2,param_1[7],1,0,*(undefined8 *)(*plVar2 + 0x2f0));
              return uVar6;
            }
            goto LAB_05118d30;
          }
          goto LAB_05118d34;
        }
        goto LAB_05118d3c;
      }
    }
LAB_05118d48:
    uVar6 = thunk_FUN_02f6ef30(Unity_AppUI_UI_FieldLabel_UxmlSerializedData_var);
    thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
    uVar7 = thunk_FUN_02f45270();
    FUN_05055664(uVar7,uVar6,0);
LAB_05118d78:
    uVar6 = thunk_FUN_02f6ef30(
                              UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar7,uVar6);
  }
  if (iVar1 < 7) {
    if (iVar1 == 5) {
      if ((param_1[7] != 0) && (*(int *)(param_1[7] + 0x10) != 0)) {
        if (param_1[8] != 0) {
          plVar2 = (long *)FUN_0501e498(param_1[8],0);
          if (plVar2 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar2 + 0x2f8))
                              (plVar2,param_1[7],*(undefined8 *)(*plVar2 + 0x300));
            if (*(int *)(*(long *)PTR_DAT_067d9d38 + 0xe4) == 0) {
              thunk_FUN_02f6670c(*(long *)PTR_DAT_067d9d38);
            }
            uVar4 = FUN_0501716c(uVar6,0,0);
            if ((uVar4 & 1) == 0) {
              return uVar6;
            }
            uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
            uVar6 = FUN_02f0880c(uVar6,2);
            lVar5 = param_1[7];
            FUN_02a7da48();
            FUN_02a81aa0(uVar6,lVar5);
            FUN_02a81ad4(uVar6,0,lVar5);
            lVar5 = param_1[8];
            FUN_02a81aa0(uVar6,lVar5);
            FUN_02a81ad4(uVar6,1,lVar5);
            uVar7 = thunk_FUN_02f6ef30(
                                      Oculus_Interaction_Feedback_FeedbackSettings_OverrideEntry_var
                                      );
            uVar6 = FUN_051187b0(uVar7,uVar6);
            thunk_FUN_02f6ef30(PTR_DAT_067cb8d0);
            uVar7 = thunk_FUN_02f45270();
            FUN_04fe26bc(uVar7,uVar6,0);
            goto LAB_05118d78;
          }
          goto LAB_05118d30;
        }
LAB_05118d34:
        plVar2 = (long *)0x0;
        puVar8 = (undefined8 *)PTR_DAT_067da100;
      }
    }
    else {
      if (iVar1 != 6) goto LAB_05118d48;
      if ((param_1[7] != 0) && (*(int *)(param_1[7] + 0x10) != 0)) {
        if (param_1[8] != 0) {
          uVar6 = FUN_0501e498(param_1[8],0);
          return uVar6;
        }
        goto LAB_05118d34;
      }
    }
LAB_05118d3c:
    FUN_0511871c(plVar2,*puVar8);
    goto LAB_05118d44;
  }
  if (iVar1 == 7) {
    uVar4 = FUN_05015fd8(param_1[6],0,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = param_1[5];
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar2 = (long *)FUN_050ed374(lVar5,0,0);
      puVar8 = (undefined8 *)System_Xml_Schema_FacetsChecker_FacetsCompiler_var;
      if (((ulong)plVar2 & 1) != 0) goto LAB_05118d3c;
    }
    uVar4 = FUN_05015fc0(param_1[6],0,0);
    if ((uVar4 & 1) == 0) {
      plVar2 = (long *)param_1[5];
      if ((plVar2 == (long *)0x0) ||
         (lVar5 = (**(code **)(*plVar2 + 0x458))(plVar2,*(undefined8 *)(*plVar2 + 0x460)),
         lVar5 == 0)) goto LAB_05118d30;
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 4)) goto LAB_05118d44;
      uVar6 = *(undefined8 *)(lVar5 + (long)(int)*(uint *)(param_1 + 4) * 8 + 0x20);
      goto LAB_05118d10;
    }
    plVar2 = (long *)param_1[6];
    if ((plVar2 != (long *)0x0) &&
       (lVar5 = (**(code **)(*plVar2 + 0x318))(plVar2,*(undefined8 *)(*plVar2 + 800)), lVar5 != 0))
    {
      if (*(uint *)(param_1 + 4) < *(uint *)(lVar5 + 0x18)) {
        return *(undefined8 *)(lVar5 + (long)(int)*(uint *)(param_1 + 4) * 8 + 0x20);
      }
      goto LAB_05118d44;
    }
    goto LAB_05118d30;
  }
  if (iVar1 != 8) goto LAB_05118d48;
  *(undefined4 *)(param_1 + 9) = 4;
  plVar2 = (long *)(**(code **)(*param_1 + 0x1a8))
                             (param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x1b0));
  lVar5 = *(long *)(PTR_DAT_067c9338 + 0xe0);
  if (plVar2 == (long *)0x0) {
LAB_05118a38:
    plVar2 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar5 + 0x130)) goto LAB_05118a38;
    if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5) {
      plVar2 = (long *)0x0;
    }
  }
  lVar3 = param_1[2];
  *(undefined4 *)(param_1 + 9) = 8;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_05118d44:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x20);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_050ed374(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (plVar2 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar2 + 0x938))(plVar2,param_1[2],*(undefined8 *)(*plVar2 + 0x940));
LAB_05118d10:
      uVar6 = FUN_05117c74(param_1,uVar6);
      return uVar6;
    }
  }
LAB_05118d30:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


