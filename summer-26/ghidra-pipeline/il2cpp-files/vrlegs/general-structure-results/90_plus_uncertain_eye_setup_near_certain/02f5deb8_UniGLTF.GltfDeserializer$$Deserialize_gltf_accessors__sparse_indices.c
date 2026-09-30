/*
FUNCTION_NAME: UniGLTF.GltfDeserializer$$Deserialize_gltf_accessors__sparse_indices
ENTRY_POINT: 02f5deb8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f5df74) */
/* WARNING: Removing unreachable block (ram,0x02f5df80) */

void UniGLTF_GltfDeserializer__Deserialize_gltf_accessors__sparse_indices
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  uint in_w10;
  undefined8 uVar2;
  long unaff_x21;
  char cStack0000000000000008;
  char cStack000000000000000c;
  
  if ((*(byte *)(param_3 + 0x130) <= in_w10) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) == param_3))
  {
    uVar2 = *(undefined8 *)(unaff_x21 + 0x38);
    cStack0000000000000008 = '\0';
                    /* try { // try from 02f5deec to 0305def3 has its CatchHandler @ 02f5e7e0 */
    FUN_027e0bd8(uVar2,&stack0x00000008,0);
    *(undefined1 *)(unaff_x21 + 0x29) = 0;
                    /* try { // try from 02f5def4 to 0305dfdb has its CatchHandler @ 02f5dca8 */
    if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar1 = FUN_02745e48(0);
    *(undefined8 *)(unaff_x21 + 0x30) = uVar1;
    if (cStack0000000000000008 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
    }
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6ee0();
}


