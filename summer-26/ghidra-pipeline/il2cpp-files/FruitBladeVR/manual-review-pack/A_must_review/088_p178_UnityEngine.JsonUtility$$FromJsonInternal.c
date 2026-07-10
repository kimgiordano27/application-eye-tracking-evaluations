/*
FUNCTION_NAME: UnityEngine.JsonUtility$$FromJsonInternal
ENTRY_POINT: 037dd7e4
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


void UnityEngine_JsonUtility__FromJsonInternal(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 037dd780 with catch @ 037dd7f4
                        */
  if ((DAT_03efb409 & 1) == 0) {
                    /* try { // try from 037dd810 to 038dd813 has its CatchHandler @ 037dd81c */
    FUN_01c5c92c(&Method_System_ReadOnlySpan<char>_GetPinnableReference__);
                    /* catch() { ... } // from try @ 037dd810 with catch @ 037dd81c */
                    /* try { // try from 037dd820 to 038dd827 has its CatchHandler @ 037dd830 */
    FUN_01c5c92c(&Method_System_ReadOnlySpan<char>_get_Length__);
                    /* try { // try from 037dd828 to 038dd833 has its CatchHandler @ 037dd730 */
    DAT_03efb409 = 1;
  }
  local_50 = 0;
  local_48 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 037dd820 with catch @ 037dd830
                        */
  local_60 = 0;
  uStack_58 = 0;
                    /* try { // try from 037dd834 to 038dd883 has its CatchHandler @ 037dd834
                       catch() { ... } // from try @ 037dd834 with catch @ 037dd834
                       catch() { ... } // from try @ 037dd8a8 with catch @ 037dd834
                       catch() { ... } // from try @ 037dd92c with catch @ 037dd834 */
  if (param_1 == 0) {
    local_60 = 0;
    uStack_58 = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
                    /* try { // try from 037dd8a8 to 038dd913 has its CatchHandler @ 037dd834 */
    uVar1 = System_UIntPtr__op_Explicit(1,0);
    uVar1 = System_UIntPtr__op_Explicit(uVar1,0);
    local_40 = 0;
    uStack_38 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor(&local_40,uVar1,0,0);
    uStack_58 = uStack_38;
    local_60 = local_40;
  }
  else {
    if (DAT_03ef35e4 == '\0') {
      FUN_01c5c92c(&Method_System_ReadOnlySpan<char>__ctor__);
      DAT_03ef35e4 = '\x01';
    }
    local_50 = System_String__GetRawStringData(param_1,0);
    local_48 = (ulong)*(uint *)(param_1 + 0x10);
                    /* try { // try from 037dd884 to 038dd8a7 has its CatchHandler @ 037dd8f8 */
    uVar1 = System_ReadOnlySpan<char>__GetPinnableReference
                      (&local_50,Method_System_ReadOnlySpan<char>_GetPinnableReference__);
    UnityEngine_Bindings_ManagedSpanWrapper___ctor(&local_60,uVar1,local_48 & 0xffffffff,0);
  }
  if (DAT_03efb418 == (code *)0x0) {
    DAT_03efb418 = (code *)FUN_01c5c8f0(
                                       "UnityEngine.JsonUtility::FromJsonInternal_Injected(UnityEngine.Bindings.ManagedSpanWrapper&,System.Object,System.Type)"
                                       );
                    /* catch(type#1 @ 03a66278) { ... } // from try @ 037dd884 with catch @ 037dd8f8
                        */
  }
  (*DAT_03efb418)(&local_60,param_2,param_3);
                    /* try { // try from 037dd914 to 038dd917 has its CatchHandler @ 037dd920 */
  return;
}


