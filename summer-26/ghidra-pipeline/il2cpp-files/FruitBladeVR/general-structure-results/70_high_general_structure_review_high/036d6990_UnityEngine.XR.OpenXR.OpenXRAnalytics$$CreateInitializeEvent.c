/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRAnalytics$$CreateInitializeEvent
ENTRY_POINT: 036d6990
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_16;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_OpenXR_OpenXRAnalytics__CreateInitializeEvent(void *param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  
  puVar2 = PTR_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo_03ce7230;
  if ((DAT_03ef71f5 & 1) == 0) {
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_Select<OpenXRFeature,_string>___03ce7238);
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_Select<string,_string>___03ce7240);
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_ToArray<string>___03ccce28);
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_Where<OpenXRFeature>___03ce7248);
    FUN_01c5c92c(PTR_System_Func<OpenXRFeature,_bool>_TypeInfo_03ce7250);
    FUN_01c5c92c(PTR_System_Func<string,_string>_TypeInfo_03ccbc38);
    FUN_01c5c92c(PTR_System_Func<OpenXRFeature,_string>_TypeInfo_03ce7258);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_0___03ce7260
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_1___03ce7268
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_2___03ce7270
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3___03ce7278
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_4___03ce7280
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_5___03ce7288
                );
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo_03ce7230);
    DAT_03ef71f5 = 1;
  }
  local_60[0] = 0;
  uStack_98 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_a0 = (ulong)param_2 & 0xffffffffffffff01;
  uStack_98 = UnityEngine_XR_OpenXR_OpenXRRuntime__get_name();
  thunk_FUN_01cc8040((ulong)&local_a0 | 8,uStack_98);
  local_90 = UnityEngine_XR_OpenXR_OpenXRRuntime__get_version();
  thunk_FUN_01cc8040(&local_90,local_90);
  local_88 = UnityEngine_XR_OpenXR_OpenXRRuntime__get_pluginVersion();
  thunk_FUN_01cc8040(&local_88,local_88);
  local_80 = UnityEngine_XR_OpenXR_OpenXRRuntime__get_apiVersion();
  thunk_FUN_01cc8040(&local_80,local_80);
  uVar5 = UnityEngine_XR_OpenXR_OpenXRRuntime__GetEnabledExtensions();
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c(lVar7);
    lVar7 = *(long *)puVar2;
  }
  puVar4 = PTR_Method_System_Linq_Enumerable_Select<string,_string>___03ce7240;
  puVar1 = PTR_Method_System_Linq_Enumerable_ToArray<string>___03ccce28;
  puVar8 = *(undefined8 **)(lVar7 + 0xb8);
  lVar9 = puVar8[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(lVar7);
      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_System_Func<string,_string>_TypeInfo_03ccbc38);
    System_Func<object,_object>___ctor
              (lVar9,uVar10,
               *(undefined8 *)
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_0___03ce7260
               ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar6 = lVar9;
    thunk_FUN_01cc8040(plVar6,lVar9);
  }
  uVar5 = System_Linq_Enumerable__Select<object,_object>(uVar5,lVar9,*(undefined8 *)puVar4);
  local_70 = System_Linq_Enumerable__ToArray<object>(uVar5,*(undefined8 *)puVar1);
  thunk_FUN_01cc8040(&local_70,local_70);
  uVar5 = UnityEngine_XR_OpenXR_OpenXRRuntime__GetAvailableExtensions();
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c(lVar7);
    lVar7 = *(long *)puVar2;
  }
  puVar8 = *(undefined8 **)(lVar7 + 0xb8);
  lVar9 = puVar8[2];
  if (lVar9 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(lVar7);
      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar8;
    lVar9 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_System_Func<string,_string>_TypeInfo_03ccbc38);
    System_Func<object,_object>___ctor
              (lVar9,uVar10,
               *(undefined8 *)
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_1___03ce7268
               ,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar6 = lVar9;
    thunk_FUN_01cc8040(plVar6,lVar9);
  }
  uVar5 = System_Linq_Enumerable__Select<object,_object>(uVar5,lVar9,*(undefined8 *)puVar4);
  uStack_78 = System_Linq_Enumerable__ToArray<object>(uVar5,*(undefined8 *)puVar1);
  thunk_FUN_01cc8040(&uStack_78,uStack_78);
  lVar7 = UnityEngine_XR_OpenXR_OpenXRSettings__GetInstance(0);
  if (lVar7 != 0) {
    lVar9 = *(long *)puVar2;
    uVar5 = *(undefined8 *)(lVar7 + 0x18);
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar9 = *(long *)puVar2;
    }
    puVar4 = PTR_Method_System_Linq_Enumerable_Where<OpenXRFeature>___03ce7248;
    puVar8 = *(undefined8 **)(lVar9 + 0xb8);
    lVar7 = puVar8[3];
    if (lVar7 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar7 = thunk_FUN_01c8fc48(*(undefined8 *)
                                  PTR_System_Func<OpenXRFeature,_bool>_TypeInfo_03ce7250);
      System_Func<object,_bool>___ctor
                (lVar7,uVar10,
                 *(undefined8 *)
                  PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_2___03ce7270
                 ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar6 = lVar7;
      thunk_FUN_01cc8040(plVar6,lVar7);
    }
    uVar5 = System_Linq_Enumerable__Where<object>(uVar5,lVar7,*(undefined8 *)puVar4);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(lVar7);
      lVar7 = *(long *)puVar2;
    }
    puVar3 = PTR_Method_System_Linq_Enumerable_Select<OpenXRFeature,_string>___03ce7238;
    puVar8 = *(undefined8 **)(lVar7 + 0xb8);
    lVar9 = puVar8[4];
    if (lVar9 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(lVar7);
        puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar9 = thunk_FUN_01c8fc48(*(undefined8 *)
                                  PTR_System_Func<OpenXRFeature,_string>_TypeInfo_03ce7258);
      System_Func<object,_object>___ctor
                (lVar9,uVar10,
                 *(undefined8 *)
                  PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3___03ce7278
                 ,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar6 = lVar9;
      thunk_FUN_01cc8040(plVar6,lVar9);
    }
    uVar5 = System_Linq_Enumerable__Select<object,_object>(uVar5,lVar9,*(undefined8 *)puVar3);
    local_68 = System_Linq_Enumerable__ToArray<object>(uVar5,*(undefined8 *)puVar1);
    thunk_FUN_01cc8040(&local_68,local_68);
    lVar7 = UnityEngine_XR_OpenXR_OpenXRSettings__GetInstance(0);
    if (lVar7 != 0) {
      lVar9 = *(long *)puVar2;
      uVar5 = *(undefined8 *)(lVar7 + 0x18);
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        lVar9 = *(long *)puVar2;
      }
      puVar8 = *(undefined8 **)(lVar9 + 0xb8);
      lVar7 = puVar8[5];
      if (lVar7 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar10 = *puVar8;
        lVar7 = thunk_FUN_01c8fc48(*(undefined8 *)
                                    PTR_System_Func<OpenXRFeature,_bool>_TypeInfo_03ce7250);
        System_Func<object,_bool>___ctor
                  (lVar7,uVar10,
                   *(undefined8 *)
                    PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_4___03ce7280
                   ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
        *plVar6 = lVar7;
        thunk_FUN_01cc8040(plVar6,lVar7);
      }
      uVar5 = System_Linq_Enumerable__Where<object>(uVar5,lVar7,*(undefined8 *)puVar4);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(lVar7);
        lVar7 = *(long *)puVar2;
      }
      puVar8 = *(undefined8 **)(lVar7 + 0xb8);
      lVar9 = puVar8[6];
      if (lVar9 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(lVar7);
          puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar10 = *puVar8;
        lVar9 = thunk_FUN_01c8fc48(*(undefined8 *)
                                    PTR_System_Func<OpenXRFeature,_string>_TypeInfo_03ce7258);
        System_Func<object,_object>___ctor
                  (lVar9,uVar10,
                   *(undefined8 *)
                    PTR_Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_5___03ce7288
                   ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
        *plVar6 = lVar9;
        thunk_FUN_01cc8040(plVar6,lVar9);
      }
      uVar5 = System_Linq_Enumerable__Select<object,_object>(uVar5,lVar9,*(undefined8 *)puVar3);
      local_60[0] = System_Linq_Enumerable__ToArray<object>(uVar5,*(undefined8 *)puVar1);
      thunk_FUN_01cc8040(local_60,local_60[0]);
      memcpy(param_1,&local_a0,0x48);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


