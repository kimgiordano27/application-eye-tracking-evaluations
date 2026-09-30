/*
FUNCTION_NAME: OVRPlugin$$GetRenderModelProperties
ENTRY_POINT: 05681880
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin__GetRenderModelProperties(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  puVar1 = System_Collections_Generic_List<VisualElement>_TypeInfo;
  if ((*(byte *)(unaff_x20 + 0x72d) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff500);
    FUN_02d965b8(PTR_DAT_06a1e048);
    FUN_02d965b8(PTR_DAT_069ff508);
    FUN_02d965b8(PTR_DAT_069ff510);
    FUN_02d965b8(System_Func<OvrGpuSkinnerMorphTargetsOnlyDrawCall>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<VisualElement>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<VisualElementAsset>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff760);
    *(undefined1 *)(unaff_x20 + 0x72d) = 1;
  }
  in_stack_00000008 = *(undefined8 *)puVar1;
  uVar2 = FUN_0536c9cc(param_1,0);
  puVar1 = System_Func<OvrGpuSkinnerMorphTargetsOnlyDrawCall>_TypeInfo;
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)System_Func<OvrGpuSkinnerMorphTargetsOnlyDrawCall>_TypeInfo;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar3 = *(long *)puVar1;
    }
    if (*(long *)(*(long *)(lVar3 + 0xb8) + 0x38) == 0) {
      uVar4 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff510);
      FUN_04e92874(uVar4,*(undefined8 *)PTR_DAT_069ff508);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar3 = *(long *)puVar1;
      }
      puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x38);
      *puVar5 = uVar4;
      LeanTween__value(puVar5,uVar4);
      lVar3 = *(long *)puVar1;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
    if (lVar3 == 0) {
OVRPlugin__LoadRenderModel:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar2 = FUN_04e95158(lVar3,param_1,&stack0x00000008,*(undefined8 *)PTR_DAT_06a1e048);
    if ((uVar2 & 1) == 0) {
      in_stack_00000008 =
           FUN_0536d554(*(undefined8 *)System_Collections_Generic_List<VisualElementAsset>_TypeInfo,
                        param_1,*(undefined8 *)PTR_DAT_069ff760,0);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar3);
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
      if (lVar3 == 0) goto OVRPlugin__LoadRenderModel;
      FUN_04e935f0(lVar3,param_1,in_stack_00000008,*(undefined8 *)PTR_DAT_069ff500);
    }
  }
  return in_stack_00000008;
}


