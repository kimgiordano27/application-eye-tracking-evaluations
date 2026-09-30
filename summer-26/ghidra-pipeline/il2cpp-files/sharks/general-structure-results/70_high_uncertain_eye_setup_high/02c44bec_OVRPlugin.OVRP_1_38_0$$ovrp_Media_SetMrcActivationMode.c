/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcActivationMode
ENTRY_POINT: 02c44bec
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcActivationMode(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  ulong uVar8;
  long *plVar9;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03804068);
    FUN_017fc350(PTR_DAT_03804060);
    FUN_017fc350(PTR_DAT_0380c6a8);
    FUN_017fc350(PTR_DAT_0380c6b0);
    *(undefined1 *)(unaff_x20 + 0xfb) = 1;
  }
  puVar1 = PTR_DAT_03804068;
  lVar7 = *(long *)(unaff_x22 + 0x18);
  thunk_FUN_0181f594();
  FUN_02c4496c();
  if (unaff_x19 == 0) {
    uVar6 = thunk_FUN_01861bbc(*(undefined8 *)puVar1);
    FUN_02b4386c(uVar6,lVar7,0);
  }
  else {
    if ((lVar7 == 0) ||
       (plVar3 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804060,*(int *)(lVar7 + 0x18) + 1),
       puVar2 = PTR_DAT_0380c6b0, plVar3 == (long *)0x0)) {
LAB_02c44d7c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (0 < (plVar3[3] << 0x20) + -0x100000000) {
      uVar8 = 0;
      plVar9 = plVar3 + 4;
      do {
        lVar4 = FUN_02826610(lVar7,uVar8 & 0xffffffff,*(undefined8 *)puVar2);
        if (lVar4 == 0) goto LAB_02c44d7c;
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_01861ac0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_02c44d84;
        if (*(uint *)(plVar3 + 3) <= uVar8) goto LAB_02c44d80;
        *plVar9 = lVar4;
        thunk_FUN_0188fd20(plVar9,lVar4);
        uVar8 = uVar8 + 1;
        plVar9 = plVar9 + 1;
      } while ((long)uVar8 < (long)((int)plVar3[3] + -1));
    }
    lVar7 = thunk_FUN_01861ac0();
    if (lVar7 == 0) {
LAB_02c44d84:
      uVar6 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar6,0);
    }
    if ((int)plVar3[3] == 0) {
LAB_02c44d80:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    *(long *)((long)plVar3 + ((plVar3[3] << 0x20) + -0x100000000 >> 0x1d) + 0x20) = unaff_x19;
    thunk_FUN_0188fd20();
    uVar6 = thunk_FUN_01861bbc(*(undefined8 *)puVar1);
    FUN_02b43408(uVar6,plVar3,0);
  }
  return uVar6;
}


