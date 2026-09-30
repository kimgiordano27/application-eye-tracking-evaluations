/*
FUNCTION_NAME: FUN_0108f1ec
ENTRY_POINT: 0108f1ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0108f1ec(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_34;
  
  if ((DAT_037762ad & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(PTR_DAT_033ecb70);
    thunk_FUN_00d48444(PTR_DAT_033ead30);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_107__);
    thunk_FUN_00d48444(OVR_OpenVR_IVROverlay__SetOverlayTransformOverlayRelative_TypeInfo);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_CastToEnumInstruction_TypeInfo);
    DAT_037762ad = 1;
  }
  if (param_2 != 0) {
    lVar7 = *(long *)(param_2 + 200);
    lVar6 = *(long *)(param_2 + 0x38);
    iVar1 = *(int *)(param_2 + 0x40);
    if (((lVar7 != 0) || (lVar6 != 0)) || (iVar1 != -999)) {
      uVar4 = FUN_015f5b28(*param_1,*(undefined8 *)
                                     OVR_OpenVR_IVROverlay__SetOverlayTransformOverlayRelative_TypeInfo
                           ,0);
      *param_1 = uVar4;
      if (lVar7 != 0) {
        uVar5 = FUN_015f6780(*(undefined8 *)
                              System_Linq_Expressions_Interpreter_CastToEnumInstruction_TypeInfo,
                             *(undefined8 *)(param_2 + 200),0);
        uVar4 = FUN_015f5b28(uVar4,uVar5,0);
        *param_1 = uVar4;
      }
      if (lVar6 != 0) {
        uVar5 = FUN_015f6780(*(undefined8 *)PTR_DAT_033ecb70,*(undefined8 *)(param_2 + 0x38),0);
                    /* try { // try from 0108f2f4 to 0118f397 has its CatchHandler @ 0108f2f4
                       catch() { ... } // from try @ 0108f2f4 with catch @ 0108f2f4
                       catch() { ... } // from try @ 0108f3c4 with catch @ 0108f2f4
                       catch() { ... } // from try @ 0108f3ec with catch @ 0108f2f4
                       catch() { ... } // from try @ 0108f418 with catch @ 0108f2f4
                       catch() { ... } // from try @ 0108f448 with catch @ 0108f2f4 */
        uVar4 = FUN_015f5b28(uVar4,uVar5,0);
        *param_1 = uVar4;
      }
      puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_107__;
      puVar2 = PTR_DAT_033ead30;
      if (iVar1 != -999) {
        local_34 = *(undefined4 *)(param_2 + 0x40);
        uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                   ,&local_34);
        uVar5 = FUN_015f6780(*(undefined8 *)puVar3,uVar5,0);
        uVar4 = FUN_015f5b28(uVar4,uVar5,0);
        *param_1 = uVar4;
      }
      uVar4 = FUN_015f5b28(uVar4,*(undefined8 *)puVar2,0);
      *param_1 = uVar4;
    }
  }
  return;
}


