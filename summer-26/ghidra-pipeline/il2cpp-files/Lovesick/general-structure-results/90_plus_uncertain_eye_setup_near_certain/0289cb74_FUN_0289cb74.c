/*
FUNCTION_NAME: FUN_0289cb74
ENTRY_POINT: 0289cb74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0289cb74(undefined4 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_03789758 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_129_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11754);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseSlider<float>_AdjustDragElement__);
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_ScriptableSettings<XRDeviceSimulatorSettings>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRHumanBody,_ARHumanBody>_get_trackableId__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0b78);
    thunk_FUN_00d48444(PTR_DAT_033ee828);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_Collections_HashSetList<object>_TypeInfo);
    DAT_03789758 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  if (param_2 != 0) {
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                Unity_XR_CoreUtils_Collections_HashSetList<object>_TypeInfo);
    puVar3 = 
    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRHumanBody,_ARHumanBody>_get_trackableId__;
    if (lVar7 != 0) {
      FUN_01320e50(lVar7,*(undefined8 *)PTR_DAT_033ee828);
      if (DAT_037897e8 == (code *)0x0) {
        DAT_037897e8 = (code *)FUN_00da4f14(
                                           "UnityEngine.XR.InputTracking::GetDeviceIdsAtXRNode_Internal(UnityEngine.XR.XRNode,System.Collections.Generic.List`1<System.UInt64>)"
                                           );
      }
      puVar2 = PTR_DAT_033f0b78;
      (*DAT_037897e8)(param_1,lVar7);
      lVar11 = *(long *)puVar3;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      uVar8 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
      if ((uVar8 & 1) == 0) {
        *(undefined4 *)(param_2 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(param_2 + 0x18);
        *(undefined4 *)(param_2 + 0x18) = 0;
        if (0 < iVar1) {
          FUN_0179519c(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
        }
      }
      puVar6 = StringLiteral_11754;
      puVar5 = Method_Unity_XR_CoreUtils_ScriptableSettings<XRDeviceSimulatorSettings>__ctor__;
      puVar4 = Method_UnityEngine_UIElements_BaseSlider<float>_AdjustDragElement__;
      puVar3 = OVRPlugin_OVRP_1_129_0_TypeInfo;
      FUN_01323390(lVar7,&local_68,*(undefined8 *)puVar2);
      while (uVar8 = FUN_012b894c(&local_68,*(undefined8 *)puVar6), (uVar8 & 1) != 0) {
        lVar7 = FUN_00cf57f8(&local_68,*(undefined8 *)puVar4);
        if (lVar7 != -1) {
          if (DAT_037897b0 == (code *)0x0) {
            DAT_037897b0 = (code *)FUN_00da4f14(
                                               "UnityEngine.XR.InputDevices::IsDeviceValid(System.UInt64)"
                                               );
          }
          uVar8 = (*DAT_037897b0)(lVar7);
          if ((uVar8 & 1) != 0) {
            FUN_00ccd958(param_2,lVar7,1,*(undefined8 *)puVar5);
          }
        }
      }
      FUN_012b8948(&local_68,*(undefined8 *)puVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  thunk_FUN_00d48444(PTR_DAT_033f37c8);
  uVar9 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar10 = thunk_FUN_00d48444(StringLiteral_8967);
  FUN_016ec5b8(uVar9,uVar10,0);
  uVar10 = thunk_FUN_00d48444(
                             Method_System_Runtime_InteropServices_MemoryMarshal_CreateReadOnlySpan<char>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar9,uVar10);
}


