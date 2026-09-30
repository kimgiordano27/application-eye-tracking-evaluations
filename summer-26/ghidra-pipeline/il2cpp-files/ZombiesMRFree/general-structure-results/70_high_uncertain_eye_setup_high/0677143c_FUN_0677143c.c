/*
FUNCTION_NAME: FUN_0677143c
ENTRY_POINT: 0677143c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0677143c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_06f6dcf0;
  if ((DAT_073a1543 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6dcf0);
    FUN_02fe925c(PTR_DAT_06f8add8);
    FUN_02fe925c(PTR_DAT_06f8ade0);
    FUN_02fe925c(Unity_Entities_TypeManager_SharedTypeIndex<Tooltip>_TypeInfo);
    FUN_02fe925c(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    FUN_02fe925c(PTR_DAT_06f7b348);
    DAT_073a1543 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_068b7394(0);
  puVar3 = Unity_Entities_TypeManager_SharedTypeIndex<Tooltip>_TypeInfo;
  puVar1 = PTR_DAT_06f7b348;
  if ((uVar4 < 0x15) && ((1 << (ulong)(uVar4 & 0x1f) & 0x1c0800U) != 0)) {
                    /* try { // try from 067714f4 to 068716c3 has its CatchHandler @ 067714f4
                       catch() { ... } // from try @ 067714f4 with catch @ 067714f4
                       catch() { ... } // from try @ 067716e0 with catch @ 067714f4
                       catch() { ... } // from try @ 0677170c with catch @ 067714f4
                       catch() { ... } // from try @ 06771734 with catch @ 067714f4
                       catch() { ... } // from try @ 06771774 with catch @ 067714f4 */
    lVar5 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<Tooltip>_TypeInfo;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar5 = *(long *)puVar3;
    }
    puVar2 = 
    System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
    ;
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)puVar1);
    }
    FUN_03dbda3c(uVar7,*(undefined8 *)puVar2);
    lVar6 = *(long *)puVar3;
    lVar5 = **(long **)(lVar6 + 0xb8);
    if (lVar5 == 0) {
LAB_067715a8:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (0 < *(int *)(lVar5 + 0x18)) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(lVar6);
        lVar5 = **(long **)(*(long *)puVar3 + 0xb8);
        if (lVar5 == 0) goto LAB_067715a8;
      }
      lVar5 = FUN_04430018(lVar5,0,*(undefined8 *)PTR_DAT_06f8ade0);
      if (lVar5 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


