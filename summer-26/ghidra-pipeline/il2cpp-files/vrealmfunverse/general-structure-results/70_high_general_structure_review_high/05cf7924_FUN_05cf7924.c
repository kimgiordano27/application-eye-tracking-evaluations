/*
FUNCTION_NAME: FUN_05cf7924
ENTRY_POINT: 05cf7924
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_05cf7924(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  puVar1 = PTR_DAT_06322938;
  if ((DAT_066da6a5 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312db8);
    FUN_02b3c81c(PTR_DAT_06322938);
    FUN_02b3c81c(PTR_DAT_06314e28);
    FUN_02b3c81c(Method_UnityEngine_ScriptableObject_CreateInstance<VolumeProfile>__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_ScrollView_OnVerticalSliderViewDataRestored__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_Create__);
    FUN_02b3c81c(Method_System_Threading_SendOrPostCallback_Invoke__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Sensor_get_samplingFrequency__);
    DAT_066da6a5 = 1;
  }
  puVar2 = PTR_DAT_06314e28;
  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_05ce503c(lVar6,0);
  param_1[2] = lVar6;
  thunk_FUN_02bb0e9c(param_1 + 2,lVar6);
  param_1[6] = 0;
  thunk_FUN_02bb0e9c(param_1 + 6,0);
  *(undefined4 *)(param_1 + 7) = 0;
  cVar4 = DAT_066c1e96;
  *(undefined2 *)(param_1 + 9) = 0;
  if (cVar4 == '\0') {
    FUN_02b3c81c(PTR_DAT_063132f8);
    DAT_066c1e96 = '\x01';
  }
  lVar6 = *(long *)PTR_DAT_063132f8;
  param_1[0xf] = **(long **)(lVar6 + 0xb8);
  puVar1 = Method_UnityEngine_ScriptableObject_CreateInstance<VolumeProfile>__;
  param_1[0x10] = **(long **)(lVar6 + 0xb8);
  FUN_04dbdb8c(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar7 = FUN_05ce3d74(0);
  lVar6 = param_1[0xc];
  uVar14 = *(undefined4 *)((long)param_1 + 100);
  lVar11 = param_1[0xd];
  uVar15 = *(undefined4 *)((long)param_1 + 0x6c);
  uVar8 = FUN_05cf78a8(param_1);
  uVar5 = FUN_04b73170(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar1);
  }
  lVar6 = FUN_05ced814((int)lVar6,uVar14,(int)lVar11,uVar15,lVar7,uVar8,uVar5,0);
  plVar9 = param_1 + 5;
  *plVar9 = lVar6;
  thunk_FUN_02bb0e9c(plVar9,lVar6);
  puVar1 = Method_UnityEngine_InputSystem_Sensor_get_samplingFrequency__;
  plVar9 = (long *)*plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    lVar11 = param_1[5];
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_05cf7d80(lVar6,lVar11);
    plVar9 = param_1 + 3;
    *plVar9 = lVar6;
    thunk_FUN_02bb0e9c(plVar9,lVar6);
    puVar3 = Method_UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_Create__;
    puVar2 = Method_UnityEngine_UIElements_ScrollView_OnVerticalSliderViewDataRestored__;
    puVar1 = PTR_DAT_06312db8;
    if (param_1[2] == 0) goto LAB_05cf7d7c;
    lVar11 = param_1[5];
    lVar13 = param_1[3];
    uVar8 = FUN_05ce4e9c(param_1[2],0);
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
    FUN_05cf4604(lVar6,lVar13,lVar11,uVar8);
    plVar10 = param_1 + 4;
    *plVar10 = lVar6;
    thunk_FUN_02bb0e9c(plVar10,lVar6);
    lVar6 = param_1[2];
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_04cf4310(uVar8,param_1,*(undefined8 *)puVar3,0);
    if (lVar6 == 0) goto LAB_05cf7d7c;
    FUN_05ce4d64(lVar6,uVar8,0);
    puVar2 = Method_System_Threading_SendOrPostCallback_Invoke__;
    if (*plVar10 == 0) goto LAB_05cf7d7c;
    plVar12 = (long *)(*plVar10 + 0x28);
    lVar6 = *plVar12;
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_04cf4310(uVar8,param_1,*(undefined8 *)puVar2,0);
    plVar10 = (long *)FUN_04dc0fdc(lVar6,uVar8,0);
    if (plVar10 == (long *)0x0) {
      *plVar12 = 0;
    }
    else {
      lVar6 = *(long *)puVar1;
      if ((*plVar10 != lVar6) || (*plVar12 = (long)plVar10, *plVar10 != lVar6)) goto LAB_05cf7d48;
    }
    thunk_FUN_02bb0e9c(plVar12,plVar10);
    param_1[8] = lVar7;
    thunk_FUN_02bb0e9c(param_1 + 8,lVar7);
    if (param_1[3] == 0) goto LAB_05cf7d7c;
    plVar12 = (long *)(param_1[3] + 0x40);
    lVar6 = *plVar12;
    uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_04cf4310(uVar8,param_1,*(undefined8 *)(*param_1 + 0x180),0);
    plVar10 = (long *)FUN_04dc0fdc(lVar6,uVar8,0);
    if (plVar10 == (long *)0x0) {
      *plVar12 = 0;
    }
    else {
      lVar6 = *(long *)puVar1;
      if ((*plVar10 != lVar6) || (*plVar12 = (long)plVar10, *plVar10 != lVar6)) goto LAB_05cf7d48;
    }
    thunk_FUN_02bb0e9c(plVar12,plVar10);
    if (*plVar9 != 0) {
      plVar9 = (long *)(*plVar9 + 0x48);
      lVar6 = *plVar9;
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
      FUN_04cf4310(uVar8,param_1,*(undefined8 *)(*param_1 + 400),0);
      plVar10 = (long *)FUN_04dc0fdc(lVar6,uVar8,0);
      if (plVar10 == (long *)0x0) {
        *plVar9 = 0;
      }
      else {
        lVar6 = *(long *)puVar1;
        if ((*plVar10 != lVar6) || (*plVar9 = (long)plVar10, *plVar10 != lVar6)) {
LAB_05cf7d48:
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar10);
        }
      }
      thunk_FUN_02bb0e9c(plVar9,plVar10);
      return;
    }
  }
LAB_05cf7d7c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


