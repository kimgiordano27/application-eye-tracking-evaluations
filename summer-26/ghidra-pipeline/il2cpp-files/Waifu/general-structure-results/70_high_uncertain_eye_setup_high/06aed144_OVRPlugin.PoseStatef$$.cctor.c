/*
FUNCTION_NAME: OVRPlugin.PoseStatef$$.cctor
ENTRY_POINT: 06aed144
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PoseStatef___cctor(long param_1,long param_2)

{
  ulong uVar1;
  long unaff_x21;
  ulong uVar2;
  undefined4 *puVar3;
  
                    /* try { // try from 06aed144 to 06bed147 has its CatchHandler @ 06aed1c8 */
                    /* try { // try from 06aed148 to 06bed1cf has its CatchHandler @ 06aecfdc */
  if ((*(byte *)(unaff_x21 + 0x488) & 1) == 0) {
    FUN_0335b6c8(&DAT_083f5380,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0x488) = 1;
  }
  if (param_2 != 0) {
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar2 = 0;
      uVar1 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      puVar3 = (undefined4 *)(param_2 + 0x28);
      do {
        if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        if (*(long *)(param_1 + 0x80) == 0) goto LAB_06aed204;
        FUN_04b7b4fc(puVar3[-2],puVar3[-1],*puVar3,*(undefined4 *)(param_1 + 0x78),
                     *(long *)(param_1 + 0x80),uVar2 & 0xffffffff,DAT_083f5380);
        uVar1 = (ulong)*(uint *)(param_2 + 0x18);
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 3;
                    /* catch() { ... } // from try @ 06aed144 with catch @ 06aed1c8 */
      } while ((long)uVar2 < (long)(int)*(uint *)(param_2 + 0x18));
    }
                    /* try { // try from 06aed1d0 to 06bed1d7 has its CatchHandler @ 06aed1d8 */
    if (*(long *)(param_1 + 0x90) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06aed1d0 with catch @ 06aed1d8
                        */
      FUN_06a5a738(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                   *(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                   *(long *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x80),0);
      if (*(long *)(param_1 + 0x90) != 0) {
        FUN_06a5b090(*(long *)(param_1 + 0x90),0);
        return;
      }
    }
  }
LAB_06aed204:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


