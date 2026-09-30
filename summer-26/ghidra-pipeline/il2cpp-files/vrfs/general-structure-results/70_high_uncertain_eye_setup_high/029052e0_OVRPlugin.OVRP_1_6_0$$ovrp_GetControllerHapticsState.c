/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetControllerHapticsState
ENTRY_POINT: 029052e0
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_6_0__ovrp_GetControllerHapticsState(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x21;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0x360));
  *(undefined1 *)(unaff_x19 + 0xc82) = 1;
  puVar1 = PTR_DAT_06deb360;
  if (unaff_x21 == 0) {
    return 0;
  }
  lVar2 = thunk_FUN_015d0480();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
  lVar2 = *(long *)puVar1;
  plVar3 = (long *)thunk_FUN_015d0480();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
        goto LAB_02905388;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_015c2a80(plVar3,lVar2,8);
LAB_02905388:
                    /* WARNING: Could not recover jumptable at 0x0290539c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar4)(plVar3,0,puVar4[1]);
  return uVar5;
}


