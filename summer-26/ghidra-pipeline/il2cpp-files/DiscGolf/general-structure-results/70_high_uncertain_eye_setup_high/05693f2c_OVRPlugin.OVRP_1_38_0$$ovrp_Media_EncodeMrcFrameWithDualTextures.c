/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrameWithDualTextures
ENTRY_POINT: 05693f2c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrameWithDualTextures(long param_1)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar2;
  long unaff_x21;
  
                    /* try { // try from 05693f2c to 0579444f has its CatchHandler @ 05693f2c
                       catch() { ... } // from try @ 05693f2c with catch @ 05693f2c
                       catch() { ... } // from try @ 0569450c with catch @ 05693f2c
                       catch() { ... } // from try @ 0569472c with catch @ 05693f2c
                       catch() { ... } // from try @ 05694950 with catch @ 05693f2c
                       catch() { ... } // from try @ 05694a00 with catch @ 05693f2c
                       catch() { ... } // from try @ 05694a64 with catch @ 05693f2c
                       catch() { ... } // from try @ 05694aa8 with catch @ 05693f2c
                       catch() { ... } // from try @ 05694ae4 with catch @ 05693f2c */
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x990));
  FUN_02d965b8(UnityEngine_Pool_ObjectPool<List<Material>>_TypeInfo);
  FUN_02d965b8(OVRTask<OVRPlugin_Result>_TypeInfo);
  FUN_02d965b8(PTR_DAT_069fc678);
  FUN_02d965b8(OVRTask<OVRAnchor>_TypeInfo);
  FUN_02d965b8(OVRTask<object>_TypeInfo);
  FUN_02d965b8(PTR_DAT_069fc010);
  FUN_02d965b8(PTR_DAT_069fc768);
  FUN_02d965b8(PTR_DAT_06a0cd70);
  FUN_02d965b8(UnityEngine_Pool_ObjectPool<List<NativeSlice<ushort>>>_TypeInfo);
  FUN_02d965b8(OVRTask<Int32Enum>_TypeInfo);
  FUN_02d965b8(OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x7d4) = 1;
  uVar2 = *unaff_x19;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_0634eb94(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_066501b4(UnityEngine_Pool_ObjectPool<List<Material>>_TypeInfo);
  return;
}


