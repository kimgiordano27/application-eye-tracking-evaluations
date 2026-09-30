/*
FUNCTION_NAME: OVRPassthroughLayer$$CreateOvrPluginStyleObject
ENTRY_POINT: 05158448
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPassthroughLayer__CreateOvrPluginStyleObject(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x19;
  long lVar4;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  
  if ((unaff_x19 != 0) && (lVar1 = thunk_FUN_02d9d438(), lVar1 == 0)) {
    uVar3 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar3,0);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  *(long *)(param_1 + 0x20) = unaff_x19;
  thunk_FUN_02dd37b4();
  if (unaff_x24 != 0) {
    plVar2 = (long *)(**(code **)(unaff_x24 + 0x18))
                               (*(undefined8 *)(unaff_x24 + 0x40),0,param_1,
                                *(undefined8 *)(unaff_x24 + 0x28));
    lVar1 = 0;
    if (plVar2 != (long *)0x0) {
      lVar4 = *unaff_x23;
      lVar1 = thunk_FUN_02d9d438(plVar2,lVar4);
      if (lVar1 == 0) goto LAB_05158584;
    }
    uVar3 = FUN_033a51b8(lVar1,*(undefined8 *)PTR_DAT_067820b8);
    if (*(char *)(unaff_x22 + 0xb6b) == '\0') {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 051582b4 with catch @ 051584d0
                        */
      FUN_02d6084c(PTR_DAT_0677f500);
      *(undefined1 *)(unaff_x22 + 0xb6b) = 1;
    }
    lVar1 = *unaff_x21;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x21;
    }
                    /* try { // try from 051584f4 to 052584f7 has its CatchHandler @ 05158530 */
                    /* try { // try from 051584f8 to 0525851f has its CatchHandler @ 051581fc */
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
    if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x50), lVar1 != 0)) {
      plVar2 = (long *)(**(code **)(lVar1 + 0x18))
                                 (*(undefined8 *)(lVar1 + 0x40),uVar3,*(undefined8 *)(lVar1 + 0x28))
      ;
      if (plVar2 != (long *)0x0) {
                    /* try { // try from 05158520 to 0525852f has its CatchHandler @ 05158530 */
        lVar4 = *(long *)(PTR_DAT_0675e258 + 0xe0);
                    /* catch() { ... } // from try @ 051584f4 with catch @ 05158530
                       catch() { ... } // from try @ 05158520 with catch @ 05158530 */
                    /* try { // try from 05158534 to 05258537 has its CatchHandler @ 05158540 */
                    /* try { // try from 05158538 to 05258543 has its CatchHandler @ 051581fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05158534 with catch @ 05158540
                        */
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)
           ) {
LAB_05158584:
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar2,lVar4);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


