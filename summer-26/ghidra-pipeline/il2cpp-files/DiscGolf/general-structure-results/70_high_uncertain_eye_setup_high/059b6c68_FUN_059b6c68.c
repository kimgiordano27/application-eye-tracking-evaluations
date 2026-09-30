/*
FUNCTION_NAME: FUN_059b6c68
ENTRY_POINT: 059b6c68
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * FUN_059b6c68(undefined8 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar2 = OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
                    /* try { // try from 059b6c88 to 05ab6c8f has its CatchHandler @ 059b6f88 */
  if ((DAT_06dc14c3 & 1) == 0) {
                    /* try { // try from 059b6c98 to 05ab6c9b has its CatchHandler @ 059b6fac */
                    /* try { // try from 059b6c9c to 05ab6d97 has its CatchHandler @ 059b6ad0 */
    FUN_02d965b8(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    DAT_06dc14c3 = 1;
  }
  plVar4 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,3);
  lVar5 = FUN_0538828c(0);
  if (plVar4 == (long *)0x0) {
LAB_059b6dfc:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 059b6dfc to 05ab6e27 has its CatchHandler @ 059b6fb0 */
    FUN_02d96860();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_059b6e00:
    uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    LeanTween__value(plVar4 + 4,lVar5);
    lVar5 = FUN_053896f8(0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_059b6e00;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar5;
      LeanTween__value(plVar4 + 5,lVar5);
      lVar5 = FUN_053894b0(0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_059b6e00;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = lVar5;
        LeanTween__value(plVar4 + 6,lVar5);
        uVar1 = *(uint *)(plVar4 + 3);
        if (0 < (int)uVar1) {
          lVar5 = 0;
          do {
                    /* try { // try from 059b6d98 to 05ab6dbf has its CatchHandler @ 059b6fb8 */
            if (uVar1 <= (uint)lVar5) goto LAB_059b6df8;
            plVar8 = (long *)plVar4[lVar5 + 4];
            if (plVar8 == (long *)0x0) goto LAB_059b6dfc;
            uVar7 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
            iVar3 = FUN_059b6e0c(param_1,param_2,uVar7);
            *param_3 = iVar3;
            if (iVar3 != 0) {
              return plVar8;
            }
            uVar1 = *(uint *)(plVar4 + 3);
            lVar5 = lVar5 + 1;
          } while ((int)lVar5 < (int)uVar1);
        }
        return (long *)0x0;
      }
    }
  }
LAB_059b6df8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


