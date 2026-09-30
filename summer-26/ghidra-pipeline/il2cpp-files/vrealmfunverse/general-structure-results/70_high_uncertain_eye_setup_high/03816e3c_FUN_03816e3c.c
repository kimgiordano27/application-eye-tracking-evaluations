/*
FUNCTION_NAME: FUN_03816e3c
ENTRY_POINT: 03816e3c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] FUN_03816e3c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  if (param_2 == 0) {
                    /* try { // try from 03816e58 to 03916e5b has its CatchHandler @ 03816f0c */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03816e5c to 03916ee3 has its CatchHandler @ 03816c20 */
    Oculus_Interaction_ActiveStateTracker__InjectOptionalGameObjects(8);
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar5 = uVar4;
  do {
    uVar5 = uVar5 - 1;
    uVar4 = uVar4 - 1;
    if ((int)uVar4 < 0) {
      uVar2 = 0;
                    /* try { // try from 03816ee4 to 03916ee7 has its CatchHandler @ 03816f08 */
      uVar1 = 0;
      goto 
      System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Default
      ;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) goto LAB_03816efc;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_03816f00;
    if (param_2 == 0) goto LAB_03816efc;
    lVar3 = lVar3 + (ulong)uVar5 * 0xc;
    uVar1 = (**(code **)(param_2 + 0x18))
                      (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar3 + 0x20),
                       *(undefined4 *)(lVar3 + 0x28),*(undefined8 *)(param_2 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
LAB_03816efc:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_03816f00:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 03816e18 with catch @ 03816f00
                        */
    FUN_02b3cacc();
  }
  lVar3 = lVar3 + (ulong)uVar5 * 0xc;
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  uVar1 = (ulong)*(uint *)(lVar3 + 0x28);
System_Collections_Generic_ArraySortHelper<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Default:
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = uVar2;
  return auVar6;
}


