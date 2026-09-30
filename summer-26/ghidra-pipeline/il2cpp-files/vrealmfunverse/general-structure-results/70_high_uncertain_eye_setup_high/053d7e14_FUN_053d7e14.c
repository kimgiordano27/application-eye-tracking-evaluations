/*
FUNCTION_NAME: FUN_053d7e14
ENTRY_POINT: 053d7e14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong FUN_053d7e14(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  if ((DAT_066d0a22 & 1) == 0) {
    FUN_02b3c81c(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
    DAT_066d0a22 = 1;
  }
  puVar1 = OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo;
  if (((param_1 != 0) && (*(long *)(param_1 + 0x20) != 0)) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x40), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x848))(plVar2,*(undefined8 *)(*plVar2 + 0x850));
    uVar3 = FUN_053d7840();
                    /* try { // try from 053d7e74 to 054d7e97 has its CatchHandler @ 053d7fac */
    lVar6 = *(long *)puVar1;
    uVar9 = uVar3 & 0xffffffff;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar6);
      lVar6 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar7 != 0) {
      uVar8 = (uint)uVar3;
      if ((int)uVar8 < *(int *)(lVar7 + 0x18)) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* try { // try from 053d7eb0 to 054d7eb7 has its CatchHandler @ 053d7fa8 */
          thunk_FUN_02b9ad44(lVar6);
          lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          if (lVar7 == 0) goto LAB_053d7fd4;
        }
                    /* try { // try from 053d7ecc to 054d7ee7 has its CatchHandler @ 053d7fb8 */
        if (*(uint *)(lVar7 + 0x18) <= uVar8) {
LAB_053d7fd8:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar3 = FUN_053e0cc8(param_1,*(undefined8 *)(lVar7 + (long)(int)uVar8 * 8 + 0x20));
        if ((uVar3 & 1) != 0) {
LAB_053d7ee8:
          return uVar9 & 0xffffffff;
        }
                    /* try { // try from 053d7efc to 054d7f03 has its CatchHandler @ 053d7fb4 */
        lVar6 = *(long *)puVar1;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar6);
        lVar6 = *(long *)puVar1;
      }
                    /* try { // try from 053d7f14 to 054d7f17 has its CatchHandler @ 053d7fa4 */
      uVar8 = *(uint *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (0 < (int)uVar8) {
        uVar9 = 0;
        do {
          lVar6 = *(long *)puVar1;
                    /* try { // try from 053d7f30 to 054d7f47 has its CatchHandler @ 053d7fb0 */
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar6 = *(long *)puVar1;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar6 == 0) goto LAB_053d7fd4;
                    /* try { // try from 053d7f48 to 054d7fd3 has its CatchHandler @ 053d7dbc */
          if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_053d7fd8;
          uVar3 = FUN_053e0cc8(param_1,*(undefined8 *)(lVar6 + uVar9 * 8 + 0x20));
          if ((uVar3 & 1) != 0) goto LAB_053d7ee8;
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
      }
      uVar4 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_60_0_TypeInfo);
      uVar4 = FUN_0540c734(uVar4,0);
      thunk_FUN_02ba3594(PTR_DAT_06320988);
      uVar5 = thunk_FUN_02b79644();
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d7f14 with catch @ 053d7fa4
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d7eb0 with catch @ 053d7fa8
                        */
      FUN_04c82410(uVar5,uVar4,0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d7e74 with catch @ 053d7fac
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d7f30 with catch @ 053d7fb0
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d7efc with catch @ 053d7fb4
                        */
      uVar4 = FUN_0540c738(uVar5,0);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 053d7ecc with catch @ 053d7fb8
                        */
      uVar5 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_62_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar4,uVar5);
    }
  }
LAB_053d7fd4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 053d7fd4 to 054d7fd7 has its CatchHandler @ 053d7fdc */
  FUN_02b3cac4();
}


