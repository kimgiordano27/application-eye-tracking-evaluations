/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 031f20a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 120
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined4 Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic(code *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long *unaff_x19;
  long unaff_x21;
  char *pcStack0000000000000000;
  
  if (param_1 == (code *)0x0) {
                    /* catch() { ... } // from try @ 031f2090 with catch @ 031f20bc */
                    /* try { // try from 031f20c4 to 032f20cb has its CatchHandler @ 031f20e0 */
                    /* try { // try from 031f20cc to 032f20d7 has its CatchHandler @ 031f1f24 */
    pcStack0000000000000000 = "AudioPluginOculusSpatializer";
                    /* try { // try from 031f20d8 to 032f20df has its CatchHandler @ 031f20e0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f20c4 with catch @ 031f20e0
                       catch(type#2 @ 00000000) { ... } // from try @ 031f20d8 with catch @ 031f20e0
                        */
    param_1 = (code *)thunk_FUN_01afad98();
    *(code **)(unaff_x21 + 0x3b0) = param_1;
  }
  pcStack0000000000000000 = (char *)0x0;
  uVar1 = (*param_1)();
  if (pcStack0000000000000000 == (char *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_01b47fd0(*(undefined8 *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__,1);
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      puVar3 = (undefined4 *)pcStack0000000000000000;
      puVar5 = (undefined4 *)(lVar2 + 0x20);
      do {
        uVar4 = uVar4 - 1;
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  *unaff_x19 = lVar2;
  thunk_FUN_01b4f09c();
  if (pcStack0000000000000000 != (char *)0x0) {
    thunk_FUN_01afb0ac();
  }
  return uVar1;
}


