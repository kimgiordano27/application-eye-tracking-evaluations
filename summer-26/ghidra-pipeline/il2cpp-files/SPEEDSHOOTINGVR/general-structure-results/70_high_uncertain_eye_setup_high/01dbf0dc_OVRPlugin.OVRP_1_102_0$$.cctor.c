/*
FUNCTION_NAME: OVRPlugin.OVRP_1_102_0$$.cctor
ENTRY_POINT: 01dbf0dc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_102_0___cctor(long param_1)

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
  
  FUN_00fdc2e4(*(undefined8 *)(param_1 + 0x9c0));
  FUN_00fdc2e4(PTR_DAT_0235a9e0);
  *(undefined1 *)(unaff_x20 + 0xa88) = 1;
  puVar1 = PTR_DAT_02353530;
  lVar7 = *(long *)(unaff_x22 + 0x18);
  thunk_FUN_00ffe618();
  FUN_01dbefa8();
  if (unaff_x19 == 0) {
    uVar6 = thunk_FUN_010400dc(*(undefined8 *)puVar1);
    FUN_01c65af4(uVar6,lVar7,0);
  }
  else {
    if ((lVar7 == 0) ||
       (plVar3 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_023515e8,*(int *)(lVar7 + 0x18) + 1),
       puVar2 = PTR_DAT_0235a9e0, plVar3 == (long *)0x0)) {
LAB_01dbf24c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (0 < (plVar3[3] << 0x20) + -0x100000000) {
      uVar8 = 0;
      plVar9 = plVar3 + 4;
      do {
        lVar4 = FUN_018985f8(lVar7,uVar8 & 0xffffffff,*(undefined8 *)puVar2);
        if (lVar4 == 0) goto LAB_01dbf24c;
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_0103ffe0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_01dbf254;
        if (*(uint *)(plVar3 + 3) <= uVar8) goto LAB_01dbf250;
        *plVar9 = lVar4;
        thunk_FUN_0106e12c(plVar9,lVar4);
        uVar8 = uVar8 + 1;
        plVar9 = plVar9 + 1;
      } while ((long)uVar8 < (long)((int)plVar3[3] + -1));
    }
    lVar7 = thunk_FUN_0103ffe0();
    if (lVar7 == 0) {
LAB_01dbf254:
      uVar6 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar6,0);
    }
    if ((int)plVar3[3] == 0) {
LAB_01dbf250:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    *(long *)((long)plVar3 + ((plVar3[3] << 0x20) + -0x100000000 >> 0x1d) + 0x20) = unaff_x19;
    thunk_FUN_0106e12c();
    uVar6 = thunk_FUN_010400dc(*(undefined8 *)puVar1);
    FUN_01c65690(uVar6,plVar3,0);
  }
  return uVar6;
}


