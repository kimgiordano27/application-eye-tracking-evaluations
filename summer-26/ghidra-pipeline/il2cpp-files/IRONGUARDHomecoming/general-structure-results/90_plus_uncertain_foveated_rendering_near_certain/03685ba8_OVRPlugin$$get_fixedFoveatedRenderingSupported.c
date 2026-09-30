/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 03685ba8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;paired_state_refs;foveation_rendering;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;frame_or_lifecycle_behavior;functionality_foveated_rendering
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__get_fixedFoveatedRenderingSupported
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = _UNK_00c918c8;
  uVar3 = _DAT_00c918c0;
  uVar2 = _UNK_00c905e8;
  uVar1 = _DAT_00c905e0;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03685b88 with catch @ 03685bac
                        */
                    /* try { // try from 03685bc4 to 03785bdb has its CatchHandler @ 03685c14 */
  *(long *)(param_3 + 0x48) = param_1._8_8_;
  *(long *)(param_3 + 0x40) = param_1._0_8_;
  *(long *)(param_3 + 0x58) = param_2._8_8_;
  *(long *)(param_3 + 0x50) = param_2._0_8_;
  *(undefined8 *)(param_3 + 0x78) = uVar2;
  *(undefined8 *)(param_3 + 0x70) = uVar1;
  *(undefined8 *)(param_3 + 0x88) = uVar4;
  *(undefined8 *)(param_3 + 0x80) = uVar3;
  *(undefined4 *)(param_3 + 0x90) = 0x3e99999a;
  thunk_FUN_0406f928(param_3,0);
  return;
}


