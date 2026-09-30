/*
FUNCTION_NAME: FUN_06b030b4
ENTRY_POINT: 06b030b4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_06b030b4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 06b030c0 to 06c030cb has its CatchHandler @ 06b02ef0 */
                    /* try { // try from 06b030cc to 06c030d3 has its CatchHandler @ 06b030d4 */
  if ((DAT_073ab3c2 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06b030a0 with catch @ 06b030d4
                       catch(type#2 @ 00000000) { ... } // from try @ 06b030cc with catch @ 06b030d4
                        */
    FUN_02fe925c(OVRPlugin_SystemHeadset_TypeInfo);
    FUN_02fe925c(OVRPlugin_Sizef_TypeInfo);
    DAT_073ab3c2 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_04431714(*(long *)(param_1 + 0x20),param_2,*(undefined8 *)OVRPlugin_Sizef_TypeInfo);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar1 = FUN_04430e8c(*(long *)(param_1 + 0x10),param_2,
                           *(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo);
      uVar3 = FUN_06b02ea8(param_1,uVar1);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


