/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_GetPassthroughPreferences
ENTRY_POINT: 01fa1388
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_87_0__ovrp_GetPassthroughPreferences(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  
  do {
    lVar3 = (**(code **)(param_1 + 0x1b8))(unaff_x19,*(undefined8 *)(param_1 + 0x1c0));
    if (param_2 == lVar3) {
LAB_01fa14cc:
      uVar6 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar7 = thunk_FUN_0124bba8();
      FUN_01ee31d4(uVar7,uVar6,0);
      uVar6 = thunk_FUN_01279b34(PTR_DAT_027c2018);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar7,uVar6);
    }
    lVar3 = (**(code **)(*unaff_x19 + 0x1b8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x1c0));
    if (lVar3 == 0) {
LAB_01fa14c4:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar4 = FUN_01f805b8(lVar3,0);
    if ((uVar4 & 1) != 0) {
      lVar3 = (**(code **)(*unaff_x21 + 0x1b8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1c0));
      if (lVar3 == 0) goto LAB_01fa14c4;
      uVar2 = FUN_01f805b8(lVar3,0);
      unaff_w23 = unaff_w23 | uVar2;
    }
    do {
      uVar4 = FUN_01ee3bc8(unaff_x19,0,0);
      if ((uVar4 & 1) == 0) {
        plVar5 = (long *)(**(code **)(*unaff_x21 + 0x1b8))
                                   (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1c0));
        if ((unaff_x19 == (long *)0x0) ||
           (uVar6 = (**(code **)(*unaff_x19 + 0x1b8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x1c0))
           , plVar5 == (long *)0x0)) goto LAB_01fa14c4;
        uVar4 = (**(code **)(*plVar5 + 0x278))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x280));
        if ((uVar4 & 1) != 0) goto LAB_01fa145c;
        lVar3 = (**(code **)(*unaff_x19 + 0x1b8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x1c0));
        if (lVar3 == 0) goto LAB_01fa14c4;
        uVar4 = FUN_01f805b8(lVar3,0);
        if ((uVar4 & 1) != 0) goto LAB_01fa145c;
      }
      else {
LAB_01fa145c:
        unaff_x19 = unaff_x21;
      }
      do {
        unaff_w24 = unaff_w24 + 1;
        if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w24) {
          if ((unaff_w23 & 1) != 0) {
            if ((unaff_x19 == (long *)0x0) ||
               (lVar3 = (**(code **)(*unaff_x19 + 0x1b8))
                                  (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x1c0)), lVar3 == 0))
            goto LAB_01fa14c4;
            uVar4 = FUN_01f805b8(lVar3,0);
            if ((uVar4 & 1) != 0) goto LAB_01fa14cc;
          }
          return unaff_x19;
        }
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        unaff_x21 = *(long **)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
        if (unaff_x21 == (long *)0x0) goto LAB_01fa14c4;
        uVar2 = FUN_01ef07cc(unaff_x21,0);
        uVar1 = FUN_01ef07cc(unaff_x21,0);
      } while ((uVar2 & unaff_w25) != uVar1);
      uVar4 = FUN_01ee3bf4(unaff_x19,0,0);
    } while ((uVar4 & 1) == 0);
    param_2 = (**(code **)(*unaff_x21 + 0x1b8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1c0));
    if (unaff_x19 == (long *)0x0) goto LAB_01fa14c4;
    param_1 = *unaff_x19;
  } while( true );
}


