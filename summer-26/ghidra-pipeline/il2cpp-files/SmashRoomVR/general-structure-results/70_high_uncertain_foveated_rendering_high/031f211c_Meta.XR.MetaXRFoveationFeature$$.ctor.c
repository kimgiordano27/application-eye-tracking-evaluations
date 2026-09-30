/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$.ctor
ENTRY_POINT: 031f211c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined4 Meta_XR_MetaXRFoveationFeature___ctor(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long *unaff_x19;
  undefined4 unaff_w20;
  undefined4 *in_stack_00000000;
  
  if (0 < (int)*(ulong *)(param_1 + 0x18)) {
    uVar2 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    puVar1 = in_stack_00000000;
    puVar3 = (undefined4 *)(param_1 + 0x20);
    do {
      uVar2 = uVar2 - 1;
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
  }
  *unaff_x19 = param_1;
  thunk_FUN_01b4f09c();
  if (in_stack_00000000 != (undefined4 *)0x0) {
    thunk_FUN_01afb0ac();
  }
  return unaff_w20;
}


