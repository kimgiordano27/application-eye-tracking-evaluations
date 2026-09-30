/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_SetEyeBufferSharpenType
ENTRY_POINT: 01fa1404
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


long * OVRPlugin_OVRP_1_87_0__ovrp_SetEyeBufferSharpenType(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  
  do {
    if ((unaff_x19 == (long *)0x0) ||
       (uVar4 = (**(code **)(*unaff_x19 + 0x1b8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x1c0)),
       param_1 == (long *)0x0)) goto LAB_01fa14c4;
    uVar5 = (**(code **)(*param_1 + 0x278))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x280));
                    /* try { // try from 01fa1438 to 020a147b has its CatchHandler @ 01fa16f8 */
    if ((uVar5 & 1) == 0) {
      lVar6 = (**(code **)(*unaff_x19 + 0x1b8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x1c0));
      if (lVar6 == 0) {
LAB_01fa14c4:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar5 = FUN_01f805b8(lVar6,0);
      if ((uVar5 & 1) == 0) goto LAB_01fa1460;
    }
    do {
      unaff_x19 = unaff_x21;
LAB_01fa1460:
      do {
        unaff_w24 = unaff_w24 + 1;
        if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w24) {
          if ((unaff_w23 & 1) != 0) {
            if ((unaff_x19 == (long *)0x0) ||
               (lVar6 = (**(code **)(*unaff_x19 + 0x1b8))
                                  (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x1c0)), lVar6 == 0))
            goto LAB_01fa14c4;
            uVar5 = FUN_01f805b8(lVar6,0);
            if ((uVar5 & 1) != 0) goto LAB_01fa14cc;
          }
          return unaff_x19;
        }
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        unaff_x21 = *(long **)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
        if (unaff_x21 == (long *)0x0) goto LAB_01fa14c4;
        uVar1 = FUN_01ef07cc(unaff_x21,0);
        uVar2 = FUN_01ef07cc(unaff_x21,0);
      } while ((uVar1 & unaff_w25) != uVar2);
      uVar5 = FUN_01ee3bf4(unaff_x19,0,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = (**(code **)(*unaff_x21 + 0x1b8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1c0));
        if (unaff_x19 == (long *)0x0) goto LAB_01fa14c4;
        lVar3 = (**(code **)(*unaff_x19 + 0x1b8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x1c0));
        if (lVar6 == lVar3) {
LAB_01fa14cc:
          uVar4 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar7 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar7,uVar4,0);
          uVar4 = thunk_FUN_01279b34(PTR_DAT_027c2018);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar7,uVar4);
        }
        lVar6 = (**(code **)(*unaff_x19 + 0x1b8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x1c0));
        if (lVar6 == 0) goto LAB_01fa14c4;
        uVar5 = FUN_01f805b8(lVar6,0);
        if ((uVar5 & 1) != 0) {
          lVar6 = (**(code **)(*unaff_x21 + 0x1b8))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1c0));
          if (lVar6 == 0) goto LAB_01fa14c4;
          uVar1 = FUN_01f805b8(lVar6,0);
          unaff_w23 = unaff_w23 | uVar1;
        }
      }
      uVar5 = FUN_01ee3bc8(unaff_x19,0,0);
    } while ((uVar5 & 1) != 0);
    param_1 = (long *)(**(code **)(*unaff_x21 + 0x1b8))
                                (unaff_x21,*(undefined8 *)(*unaff_x21 + 0x1c0));
  } while( true );
}


