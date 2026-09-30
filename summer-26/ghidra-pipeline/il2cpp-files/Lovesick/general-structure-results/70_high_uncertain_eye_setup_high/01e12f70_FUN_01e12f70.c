/*
FUNCTION_NAME: FUN_01e12f70
ENTRY_POINT: 01e12f70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


ulong FUN_01e12f70(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
                    /* try { // try from 01e12f70 to 01f12f7b has its CatchHandler @ 01e12ec4 */
                    /* try { // try from 01e12f7c to 01f12f83 has its CatchHandler @ 01e12f84 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01e12f64 with catch @ 01e12f84
                       catch(type#2 @ 00000000) { ... } // from try @ 01e12f7c with catch @ 01e12f84
                        */
  if ((DAT_0377faa8 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_SpaceComponentType___TypeInfo);
    DAT_0377faa8 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    if ((param_2 < *(uint *)(lVar2 + 0x18)) && (param_3 < *(uint *)(lVar2 + 0x18))) {
      uVar3 = (uint)*(ushort *)(lVar2 + (long)(int)param_2 * 2 + 0x20);
      uVar4 = (uint)*(ushort *)(lVar2 + (long)(int)param_3 * 2 + 0x20);
      if (((uVar3 != **(ushort **)(*(long *)OVRPlugin_SpaceComponentType___TypeInfo + 0xb8)) &&
          (uVar4 != **(ushort **)(*(long *)OVRPlugin_SpaceComponentType___TypeInfo + 0xb8))) ||
         (uVar1 = FUN_01de0ed0(param_1,param_2,param_3,0), (int)uVar1 == 0)) {
        uVar1 = (ulong)(uVar3 - uVar4);
      }
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


