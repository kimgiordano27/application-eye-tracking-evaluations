/*
FUNCTION_NAME: FUN_05ce197c
ENTRY_POINT: 05ce197c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05ce197c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  
  puVar3 = 
  Method_Unity_Burst_FunctionPointer<XRGrabInteractable_EaseAttachBurst_00000F65_PostfixBurstDelegate>_get_Value__
  ;
  if ((DAT_06dc2d55 & 1) == 0) {
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>__ctor__);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_Complete__);
    FUN_02d965b8(Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Add__);
    FUN_02d965b8(
                Method_Unity_Burst_FunctionPointer<XRGrabInteractable_EaseAttachBurst_00000F65_PostfixBurstDelegate>_get_Value__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
    FUN_02d965b8(Method_Google_Future<GoogleSignInUser>_WaitForResult__);
    FUN_02d965b8(PTR_DAT_06a0aa48);
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_get_targetObject__
                );
    FUN_02d965b8(PTR_DAT_06a15ef0);
    FUN_02d965b8(PTR_DAT_069fba08);
    DAT_06dc2d55 = 1;
  }
  lVar8 = *(long *)puVar3;
  *(undefined2 *)(param_1 + 0x90) = 0x101;
  puVar1 = OVRPlugin_OVRP_1_102_0_TypeInfo;
  iVar7 = *(int *)(lVar8 + 0xe4);
  *(undefined4 *)(param_1 + 0x70) = 100000;
  if (iVar7 == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar3;
  }
  puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
  LeanTween__value((undefined8 *)(param_1 + 0xb0));
  iVar7 = *(int *)(*(long *)puVar1 + 0xe4);
  *(undefined4 *)(param_1 + 0xf0) = 300000;
  if (iVar7 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0552d150(param_1,0);
  lVar8 = *(long *)puVar2;
  *(undefined8 *)(param_1 + 0x18) = DAT_010fbef8;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar9 = FUN_05cd427c(0);
  puVar1 = PTR_DAT_06a15ef0;
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05cd43d0(param_1,param_2,*(undefined8 *)puVar1,0);
  }
  puVar1 = PTR_DAT_069ff488;
  if (param_2 == 0) {
UnityEngine_InputSystem_InputManager__add_onDeviceStateChange:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar8 = FUN_05c0c424(param_2,0);
  lVar12 = *(long *)puVar1;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar12);
    lVar12 = *(long *)puVar1;
  }
  puVar6 = Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_Add__;
  puVar5 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_get_targetObject__;
  puVar4 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<TapGesture>_Complete__;
  puVar2 = PTR_DAT_06a0aa48;
  if (lVar8 != *(long *)(*(long *)(lVar12 + 0xb8) + 8)) {
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar10 = thunk_FUN_02dd3144();
    uVar11 = thunk_FUN_02dfd288(PTR_DAT_06a1a9f0);
    FUN_05453f78(uVar10,uVar11,0);
    uVar11 = thunk_FUN_02dfd288(
                               Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_AsList__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar10,uVar11);
  }
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>__ctor__
                             );
  FUN_05ce1dc0(uVar10,param_1,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0xb8) = uVar10;
  LeanTween__value((undefined8 *)(param_1 + 0xb8),uVar10);
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_0552aca4(uVar10,0);
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  LeanTween__value((undefined8 *)(param_1 + 0x38),uVar10);
  plVar13 = (long *)(param_1 + 0x48);
  *plVar13 = param_2;
  LeanTween__value(plVar13,param_2);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar10 = FUN_05ce0cf0(*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  LeanTween__value((undefined8 *)(param_1 + 0x50),uVar10);
  if (*(long *)(param_1 + 0x48) == 0)
  goto UnityEngine_InputSystem_InputManager__add_onDeviceStateChange;
  lVar8 = FUN_05c0c728(*(long *)(param_1 + 0x48),0);
  if (lVar8 != 0) {
    if ((*plVar13 == 0) || (lVar8 = FUN_05c0c728(*plVar13,0), lVar8 == 0))
    goto UnityEngine_InputSystem_InputManager__add_onDeviceStateChange;
    if (*(int *)(lVar8 + 0x10) != 0) {
      if ((*plVar13 == 0) || (lVar8 = FUN_05c0c728(*plVar13,0), lVar8 == 0))
      goto UnityEngine_InputSystem_InputManager__add_onDeviceStateChange;
      uVar10 = *(undefined8 *)PTR_DAT_069fba08;
      iVar7 = FUN_05372384(lVar8,0x3a,0);
      lVar12 = lVar8;
      if (iVar7 != -1) {
        uVar10 = FUN_0536f444(lVar8,0,iVar7,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar1);
        }
        lVar12 = FUN_05c13fdc(uVar10,0);
        uVar10 = FUN_0536f444(lVar8,iVar7 + 1,*(int *)(lVar8 + 0x10) - (iVar7 + 1),0);
        uVar10 = FUN_05c13fdc(uVar10,0);
      }
      lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_Google_Future<GoogleSignInUser>_WaitForResult__);
      FUN_05ce7c2c(lVar8,lVar12,uVar10,**(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8))
      ;
      if (lVar8 != 0) goto LAB_05ce1d2c;
    }
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar8 = *(long *)puVar3;
  }
  lVar8 = **(long **)(lVar8 + 0xb8);
LAB_05ce1d2c:
  *(long *)(param_1 + 0x40) = lVar8;
  LeanTween__value((long *)(param_1 + 0x40),lVar8);
  return;
}


