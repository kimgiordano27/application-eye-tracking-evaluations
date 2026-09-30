/*
FUNCTION_NAME: FUN_020e83e0
ENTRY_POINT: 020e83e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_020e83e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar4 = Method_System_Array_IndexOf<Camera>__;
  puVar3 = Method_System_Array_IndexOf<byte>__;
  puVar2 = Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__;
  puVar1 = Method_System_Array_FindIndex<string>__;
  if ((DAT_0482faa5 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(Method_System_Array_IndexOf<byte>__);
    thunk_FUN_01efb3a4(Method_System_Array_IndexOf<char>__);
    thunk_FUN_01efb3a4(Method_System_Array_IndexOf<Enum>__);
    thunk_FUN_01efb3a4(Method_System_Array_IndexOf<int>__);
    thunk_FUN_01efb3a4(Method_System_Array_IndexOf<object>__);
    thunk_FUN_01efb3a4(Method_System_Array_IndexOf<Spline>__);
    thunk_FUN_01efb3a4(Method_System_Array_FindIndex<OVRPlugin_BoneCapsule>__);
    thunk_FUN_01efb3a4(Method_System_Array_FindIndex<string>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSelected__
                      );
    thunk_FUN_01efb3a4(Method_System_Array_IndexOf<SplineKnotIndex>__);
    thunk_FUN_01efb3a4(Method_System_Array_IndexOf<Camera>__);
    thunk_FUN_01efb3a4(Method_System_Array_IndexOf<string>__);
    thunk_FUN_01efb3a4(Method_System_Array_IndexOf<Volume>__);
    thunk_FUN_01efb3a4(Method_System_Array_IndexOf<object>__);
    thunk_FUN_01efb3a4(Method_System_Array_LastIndexOf<Delegate>__);
    DAT_0482faa5 = 1;
  }
  uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_030f2380(uVar8,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x50),uVar8);
  uVar8 = FUN_022c6694(param_1,*(undefined8 *)puVar3);
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar10);
    lVar10 = *(long *)puVar4;
  }
  puVar2 = Method_System_Array_IndexOf<Enum>__;
  puVar1 = Method_System_Array_IndexOf<char>__;
  lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar11 == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar10);
      lVar10 = *(long *)puVar4;
    }
    uVar12 = **(undefined8 **)(lVar10 + 0xb8);
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Array_IndexOf<int>__);
    FUN_02e6c0a0(lVar11,uVar12,*(undefined8 *)Method_System_Array_IndexOf<SplineKnotIndex>__,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar9 = lVar11;
    thunk_FUN_01f51358(plVar9,lVar11);
  }
  uVar8 = FUN_0230b6f4(uVar8,lVar11,*(undefined8 *)puVar2);
  uVar8 = FUN_02308ab0(uVar8,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  thunk_FUN_01f51358();
  FUN_020e86e8(param_1,0);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar7 = FUN_04030d58(*(long *)(param_1 + 0x28),
                         *(undefined8 *)Method_System_Array_LastIndexOf<Delegate>__,0);
    *(undefined4 *)(param_1 + 0x5c) = uVar7;
    puVar6 = Method_System_Array_IndexOf<Volume>__;
    puVar5 = Method_System_Array_IndexOf<string>__;
    puVar4 = Method_System_Array_IndexOf<Spline>__;
    puVar3 = Method_System_Array_IndexOf<object>__;
    puVar2 = 
    Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSelected__
    ;
    puVar1 = 
    Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
    ;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar7 = FUN_04030d58(*(long *)(param_1 + 0x28),
                           *(undefined8 *)Method_System_Array_IndexOf<object>__,0);
      *(undefined4 *)(param_1 + 0x58) = uVar7;
      uVar7 = FUN_04030fb8(*(undefined8 *)puVar6,0);
      *(undefined4 *)(param_1 + 0x60) = uVar7;
      uVar7 = FUN_04030fb8(*(undefined8 *)puVar5,0);
      *(undefined4 *)(param_1 + 100) = uVar7;
      uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_034f6024(uVar8,param_1,*(undefined8 *)puVar3,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03763f48(uVar8,0);
      uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_034f6024(uVar8,param_1,*(undefined8 *)puVar4,0);
      FUN_03764100(uVar8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


