/*
FUNCTION_NAME: FUN_05ff5dec
ENTRY_POINT: 05ff5dec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 109
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_12;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_05ff5dec(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 local_60 [16];
  
  if ((DAT_076dcfeb & 1) == 0) {
    thunk_FUN_032e1da0(UnityEngine_InputSystem_Controls_DpadControl_DpadAxisControl_var);
    thunk_FUN_032e1da0(PTR_DAT_07291940);
    thunk_FUN_032e1da0(PTR_DAT_072918c0);
    thunk_FUN_032e1da0(PTR_DAT_0727fc00);
    thunk_FUN_032e1da0(PTR_DAT_07295978);
    thunk_FUN_032e1da0(PTR_DAT_07295980);
    thunk_FUN_032e1da0(PTR_DAT_07295988);
    thunk_FUN_032e1da0(UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
    thunk_FUN_032e1da0(PTR_DAT_07279c00);
    thunk_FUN_032e1da0(PTR_DAT_07295990);
    thunk_FUN_032e1da0(System_Xml_Serialization_EnumMap_EnumMapMember_var);
    thunk_FUN_032e1da0(PTR_DAT_0727edd8);
    thunk_FUN_032e1da0(
                      UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_XR_OpenXR_Features_Interactions_HPReverbG2ControllerProfile_ReverbG2Controller_var
                      );
    DAT_076dcfeb = 1;
  }
  puVar4 = PTR_DAT_072918c0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  lVar13 = *(long *)(param_1 + 8);
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                                UnityEngine_XR_OpenXR_Features_Interactions_HPReverbG2ControllerProfile_ReverbG2Controller_var
                              );
    FUN_059660a0(lVar7,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_0333a630();
    if (*(int *)(*(long *)PTR_DAT_0727fc00 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_059872e0(param_1 + 10,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar12 = *(long *)(lVar13 + 0x60);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar6 = *(int *)(lVar12 + 0x18);
    iVar1 = *(int *)(lVar12 + 0x1c);
    iVar2 = *(int *)(*(long *)(lVar12 + 0x10) + 0x18);
    iVar3 = param_1[0xc];
    if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar6 = FUN_05924844(iVar2 - (iVar1 + iVar6),iVar3,0);
    *(int *)(lVar7 + 0x18) = iVar6;
    if (iVar6 == 0) {
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar8 = thunk_FUN_032a56a0();
      FUN_059236c0(uVar8,0);
      uVar11 = thunk_FUN_032e1da0(
                                 UnityEngine_XR_OpenXR_Features_Interactions_HTCViveControllerProfile_ViveController_var
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar8,uVar11);
    }
    if ((char)param_1[0xd] == '\0') {
      lVar7 = *(long *)(lVar13 + 0x60);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      plVar9 = *(long **)(lVar13 + 0x28);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar7 = (**(code **)(*plVar9 + 0x2d8))
                        (plVar9,*(undefined8 *)(lVar7 + 0x10),
                         *(int *)(lVar7 + 0x18) + *(int *)(lVar7 + 0x1c),iVar6,
                         *(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar9 + 0x2e0));
    }
    else {
      uVar8 = thunk_FUN_032a56a0(*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_XRUpdate_var);
      FUN_055c5e7c(uVar8,lVar7,
                   *(undefined8 *)
                    UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice_var
                   ,0);
      if (*(int *)(*(long *)PTR_DAT_0727edd8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar7 = FUN_03b51fac(uVar8,*(undefined8 *)System_Xml_Serialization_EnumMap_EnumMapMember_var);
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    local_60 = FUN_04a471d0(lVar7,0,*(undefined8 *)PTR_DAT_07295990);
    uVar10 = FUN_04ed5440(local_60,*(undefined8 *)PTR_DAT_07295988);
    if ((uVar10 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
      thunk_FUN_0333a630(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_03557728(param_1 + 2,local_60,param_1,
                   *(undefined8 *)UnityEngine_InputSystem_Controls_DpadControl_DpadAxisControl_var);
      return;
    }
  }
  iVar6 = FUN_04ed548c(local_60,*(undefined8 *)PTR_DAT_07295980);
  if (-1 < iVar6) {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar13 = *(long *)(lVar13 + 0x60);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar1 = *(int *)(lVar13 + 0x20) + iVar6;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + iVar6;
    *(int *)(lVar13 + 0x20) = iVar1;
    if (iVar6 == 0) {
      *(undefined1 *)(lVar13 + 0x24) = 1;
      iVar6 = -(uint)(0 < iVar1);
    }
  }
  *param_1 = -2;
  puVar5 = PTR_DAT_07291940;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_0460136c(param_1 + 2,iVar6,*(undefined8 *)puVar5);
  return;
}


