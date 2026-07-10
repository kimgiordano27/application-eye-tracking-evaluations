/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRLoaderBase$$InitializeInternal
ENTRY_POINT: 036d8f94
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 UnityEngine_XR_OpenXR_OpenXRLoaderBase__InitializeInternal(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_UnityEngine_XR_OpenXR_OpenXRLoaderBase_TypeInfo_03cb70a0;
  if ((DAT_03ef7259 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Application_TypeInfo_03cb5e98);
    FUN_01c5c92c(PTR_UnityEngine_Debug_TypeInfo_03cb5ae0);
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_OrderByDescending<OpenXRFeature,_int>___03ce7330)
    ;
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_ThenBy<OpenXRFeature,_string>___03ce7338);
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_ToArray<OpenXRFeature>___03ce7340);
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_Where<OpenXRFeature>___03ce7248);
    FUN_01c5c92c(PTR_System_Func<OpenXRFeature,_int>_TypeInfo_03ce7348);
    FUN_01c5c92c(PTR_System_Func<OpenXRFeature,_bool>_TypeInfo_03ce7250);
    FUN_01c5c92c(PTR_System_Func<OpenXRFeature,_string>_TypeInfo_03ce7258);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_TypeInfo_03ce69d0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ProcessOpenXRMessageLoop___03ce7350
                );
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_OpenXRLoaderBase_TypeInfo_03cb70a0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_0___03ce7358
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_1___03ce7360
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_2___03ce7368
                );
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_TypeInfo_03ce7370);
    FUN_01c5c92c(PTR_UnityEngine_Events_UnityAction_TypeInfo_03cb5e88);
    FUN_01c5c92c(PTR_StringLiteral_2761_03ce7378);
    DAT_03ef7259 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  if (DAT_03ef754d == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_OpenXRLoaderBase_TypeInfo_03cb70a0);
    DAT_03ef754d = '\x01';
  }
  puVar2 = PTR_UnityEngine_XR_OpenXR_Input_OpenXRInput_TypeInfo_03ce69d0;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
    lVar3 = *(long *)puVar1;
  }
  plVar4 = (long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  *plVar4 = param_1;
  thunk_FUN_01cc8040(plVar4,param_1);
  *(undefined4 *)(param_1 + 0x28) = 1;
  UnityEngine_XR_OpenXR_OpenXRLoaderBase__Internal_SetSuccessfullyInitialized(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  UnityEngine_XR_OpenXR_Input_OpenXRInput__RegisterLayouts();
  UnityEngine_XR_OpenXR_Features_OpenXRFeature__Initialize();
  uVar5 = UnityEngine_XR_OpenXR_OpenXRLoaderBase__LoadOpenXRSymbols();
  puVar2 = PTR_StringLiteral_2761_03ce7378;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_UnityEngine_Debug_TypeInfo_03cb5ae0 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    UnityEngine_Debug__LogError(*(undefined8 *)puVar2,0);
    return 0;
  }
  lVar3 = UnityEngine_XR_OpenXR_OpenXRSettings__GetInstance(0);
  lVar6 = UnityEngine_XR_OpenXR_OpenXRSettings__GetInstance(0);
  puVar2 = PTR_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_TypeInfo_03ce7370;
  if (lVar6 != 0) {
    uVar8 = *(undefined8 *)(lVar6 + 0x18);
    lVar6 = *(long *)PTR_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_TypeInfo_03ce7370;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar6 = *(long *)puVar2;
    }
    puVar7 = *(undefined8 **)(lVar6 + 0xb8);
    lVar9 = puVar7[1];
    if (lVar9 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar7;
      lVar9 = thunk_FUN_01c8fc48(*(undefined8 *)
                                  PTR_System_Func<OpenXRFeature,_bool>_TypeInfo_03ce7250);
      System_Func<object,_bool>___ctor
                (lVar9,uVar10,
                 *(undefined8 *)
                  PTR_Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_0___03ce7358
                 ,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar4 = lVar9;
      thunk_FUN_01cc8040(plVar4,lVar9);
    }
    uVar8 = System_Linq_Enumerable__Where<object>
                      (uVar8,lVar9,
                       *(undefined8 *)
                        PTR_Method_System_Linq_Enumerable_Where<OpenXRFeature>___03ce7248);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(lVar6);
      lVar6 = *(long *)puVar2;
    }
    puVar7 = *(undefined8 **)(lVar6 + 0xb8);
    lVar9 = puVar7[2];
    if (lVar9 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(lVar6);
        puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar7;
      lVar9 = thunk_FUN_01c8fc48(*(undefined8 *)
                                  PTR_System_Func<OpenXRFeature,_int>_TypeInfo_03ce7348);
      System_Func<object,_int>___ctor
                (lVar9,uVar10,
                 *(undefined8 *)
                  PTR_Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_1___03ce7360
                 ,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar4 = lVar9;
      thunk_FUN_01cc8040(plVar4,lVar9);
    }
    uVar8 = System_Linq_Enumerable__OrderByDescending<object,_int>
                      (uVar8,lVar9,
                       *(undefined8 *)
                        PTR_Method_System_Linq_Enumerable_OrderByDescending<OpenXRFeature,_int>___03ce7330
                      );
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(lVar6);
      lVar6 = *(long *)puVar2;
    }
    puVar7 = *(undefined8 **)(lVar6 + 0xb8);
    lVar9 = puVar7[3];
    if (lVar9 == 0) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(lVar6);
        puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar7;
      lVar9 = thunk_FUN_01c8fc48(*(undefined8 *)
                                  PTR_System_Func<OpenXRFeature,_string>_TypeInfo_03ce7258);
      System_Func<object,_object>___ctor
                (lVar9,uVar10,
                 *(undefined8 *)
                  PTR_Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_2___03ce7368
                 ,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar4 = lVar9;
      thunk_FUN_01cc8040(plVar4,lVar9);
    }
    uVar8 = System_Linq_Enumerable__ThenBy<object,_object>
                      (uVar8,lVar9,
                       *(undefined8 *)
                        PTR_Method_System_Linq_Enumerable_ThenBy<OpenXRFeature,_string>___03ce7338);
    uVar8 = System_Linq_Enumerable__ToArray<object>
                      (uVar8,*(undefined8 *)
                              PTR_Method_System_Linq_Enumerable_ToArray<OpenXRFeature>___03ce7340);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = uVar8;
      thunk_FUN_01cc8040((undefined8 *)(lVar3 + 0x18),uVar8);
      UnityEngine_XR_OpenXR_Features_OpenXRFeature__HookGetInstanceProcAddr();
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar5 = UnityEngine_XR_OpenXR_OpenXRLoaderBase__Internal_InitializeSession();
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      UnityEngine_XR_OpenXR_OpenXRLoaderBase__RequestOpenXRFeatures(param_1);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_XR_OpenXR_OpenXRLoaderBase__RegisterOpenXRCallbacks();
      uVar8 = UnityEngine_XR_OpenXR_OpenXRSettings__GetInstance(0);
      if (*(int *)(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80);
      }
      uVar5 = UnityEngine_Object__op_Inequality(0,uVar8,0);
      if ((uVar5 & 1) != 0) {
        lVar3 = UnityEngine_XR_OpenXR_OpenXRSettings__GetInstance(0);
        if (lVar3 == 0) goto LAB_036d94dc;
        UnityEngine_XR_OpenXR_OpenXRSettings__ApplyRenderSettings();
      }
      uVar5 = UnityEngine_XR_OpenXR_OpenXRLoaderBase__CreateSubsystems(param_1);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      if (DAT_03ef754e == '\0') {
        FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_Features_OpenXRFeature_TypeInfo_03ce7380);
        DAT_03ef754e = '\x01';
      }
      if (**(char **)(*(long *)PTR_UnityEngine_XR_OpenXR_Features_OpenXRFeature_TypeInfo_03ce7380 +
                     0xb8) != '\0') {
        return 0;
      }
      UnityEngine_XR_OpenXR_OpenXRLoaderBase__SetApplicationInfo();
      uVar8 = UnityEngine_XR_OpenXR_OpenXRAnalytics__SendInitializeEvent(1);
      UnityEngine_XR_OpenXR_Features_OpenXRFeature__ReceiveLoaderEvent(uVar8,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_XR_OpenXR_OpenXRLoaderBase__DebugLogEnabledSpecExtensions();
      uVar8 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_UnityEngine_Events_UnityAction_TypeInfo_03cb5e88
                                );
      UnityEngine_Events_UnityAction___ctor
                (uVar8,param_1,
                 *(undefined8 *)
                  PTR_Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ProcessOpenXRMessageLoop___03ce7350
                 ,0);
      if (*(int *)(*(long *)PTR_UnityEngine_Application_TypeInfo_03cb5e98 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_Application__add_onBeforeRender(uVar8,0);
      *(undefined4 *)(param_1 + 0x28) = 2;
      return 1;
    }
  }
LAB_036d94dc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


