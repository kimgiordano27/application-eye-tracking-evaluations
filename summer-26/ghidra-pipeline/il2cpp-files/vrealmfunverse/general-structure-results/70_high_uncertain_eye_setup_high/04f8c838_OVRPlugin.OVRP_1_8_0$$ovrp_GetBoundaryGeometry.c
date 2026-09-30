/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryGeometry
ENTRY_POINT: 04f8c838
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryGeometry(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_04f8c85c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04f8c85c:
  uVar3 = (*(code *)*puVar2)();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x20),uVar3);
  if (*(char *)(unaff_x19 + 0x54) != '\0') {
    lVar4 = FUN_05c89410();
    if ((lVar4 == 0) ||
       (lVar4 = FUN_031d8ac4(lVar4,*(undefined8 *)System_Func<PointerCancelEvent>_TypeInfo),
       lVar4 == 0)) {
LAB_04f8c8fc:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar5 = *(long *)(lVar4 + 0x20 + lVar6 * 8);
        if (lVar5 == 0) goto LAB_04f8c8fc;
        FUN_05c56fc0(lVar5,0,0);
        uVar1 = *(uint *)(lVar4 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
  }
  return;
}


