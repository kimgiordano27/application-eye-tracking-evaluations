/*
FUNCTION_NAME: FUN_04f78b30
ENTRY_POINT: 04f78b30
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04f78b30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((DAT_066c9be7 & 1) == 0) {
    FUN_02b3c81c(System_Func<Task<SignInResponse>>_TypeInfo);
                    /* try { // try from 04f78b5c to 05078b63 has its CatchHandler @ 04f78ec0 */
    FUN_02b3c81c(System_Func<Task<WebResponse>>_TypeInfo);
    FUN_02b3c81c(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    DAT_066c9be7 = 1;
  }
                    /* try { // try from 04f78b78 to 05078b7f has its CatchHandler @ 04f78eb8 */
  puVar3 = System_Func<Task<WebResponse>>_TypeInfo;
  puVar2 = System_Func<Task<SignInResponse>>_TypeInfo;
  puVar1 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
  if (DAT_066c1d97 == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1d97 = '\x01';
  }
                    /* try { // try from 04f78bb4 to 05078bdf has its CatchHandler @ 04f78ec4 */
  uVar4 = *(undefined8 *)puVar1;
  uVar8 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8);
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  uVar4 = thunk_FUN_02b79644(uVar4);
  FUN_04f1d6f4(uVar4,0);
                    /* try { // try from 04f78be8 to 05078bef has its CatchHandler @ 04f78eb4 */
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x20),uVar4);
  plVar5 = (long *)FUN_02b3c908(*(undefined8 *)puVar2,5);
                    /* try { // try from 04f78c08 to 05078c0f has its CatchHandler @ 04f78e14 */
  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_04f78dac(lVar6,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_04f78d9c:
    uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar4,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
                    /* try { // try from 04f78c4c to 05078c77 has its CatchHandler @ 04f78e18 */
    thunk_FUN_02bb0e9c(plVar5 + 4,lVar6);
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_04f78dac(lVar6,1);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_04f78d9c;
                    /* try { // try from 04f78c7c to 05078c83 has its CatchHandler @ 04f78e0c */
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar6;
      thunk_FUN_02bb0e9c(plVar5 + 5,lVar6);
      lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
      FUN_04f78dac(lVar6,2);
                    /* try { // try from 04f78cb8 to 05078ce3 has its CatchHandler @ 04f78e08 */
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_04f78d9c;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar6;
        thunk_FUN_02bb0e9c(plVar5 + 6,lVar6);
        lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                    /* try { // try from 04f78ce8 to 05078cef has its CatchHandler @ 04f78e00 */
        FUN_04f78dac(lVar6,3);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_04f78d9c;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
          plVar5[7] = lVar6;
                    /* try { // try from 04f78d24 to 05078d4f has its CatchHandler @ 04f78dfc */
          thunk_FUN_02bb0e9c(plVar5 + 7,lVar6);
          lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
          FUN_04f78dac(lVar6,4);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto LAB_04f78d9c;
          if (4 < *(uint *)(plVar5 + 3)) {
            plVar5[8] = lVar6;
            thunk_FUN_02bb0e9c(plVar5 + 8,lVar6);
            *(long *)(param_1 + 0x28) = (long)plVar5;
            thunk_FUN_02bb0e9c((long *)(param_1 + 0x28),plVar5);
            FUN_04dbdb8c(param_1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


