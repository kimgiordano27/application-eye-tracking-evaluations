/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 05672268
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_fixedFoveatedRenderingSupported(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  
  FUN_02d965b8();
  FUN_02d965b8(System_Collections_Generic_List<JsonObject>_TypeInfo);
  FUN_02d965b8(System_Func<Exception,_bool>_TypeInfo);
  FUN_02d965b8(System_Func<KeyValuePair<uint,_NetworkPrefab>,_uint>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x671) = 1;
  in_stack_00000008 = 0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar1 = FUN_0564363c(unaff_w19,(long)&stack0x00000008 + 4,0);
  if (iVar1 == 0) {
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    iVar1 = FUN_05643534(unaff_w19,&stack0x00000008,0);
    if (iVar1 == 0) {
      uStack0000000000000004 = in_stack_00000008._4_4_;
      uVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                  System_Func<KeyValuePair<uint,_NetworkPrefab>,_uint>_TypeInfo,
                                 &stack0x00000004);
      uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)System_Func<Exception,_bool>_TypeInfo);
      uVar2 = FUN_0536e0dc(*(undefined8 *)System_Collections_Generic_List<JsonObject>_TypeInfo,uVar2
                           ,uVar3,0);
      return uVar2;
    }
  }
  return **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
}


