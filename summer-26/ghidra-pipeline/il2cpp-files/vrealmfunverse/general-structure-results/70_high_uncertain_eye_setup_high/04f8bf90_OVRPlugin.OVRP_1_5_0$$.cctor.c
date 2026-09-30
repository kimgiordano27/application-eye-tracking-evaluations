/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$.cctor
ENTRY_POINT: 04f8bf90
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


void OVRPlugin_OVRP_1_5_0___cctor(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  do {
    lVar2 = *unaff_x22;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *unaff_x22;
    }
    lVar4 = **(long **)(lVar2 + 0xb8);
    if (lVar4 == 0) {
LAB_04f8bfb0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((long)*(int *)(lVar4 + 0x18) <= (long)unaff_x20) {
      return;
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar4 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar4 == 0) goto LAB_04f8bfb0;
    }
    lVar2 = FUN_037a6268(lVar4,unaff_x20 & 0xffffffff,*unaff_x23);
    if (lVar2 == 0) goto LAB_04f8bfb0;
    iVar1 = *(int *)(lVar2 + 0x18) + -1;
    uVar3 = FUN_02b3c908(*unaff_x24,iVar1);
    if (unaff_x19 == 0) goto LAB_04f8bfb0;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_04f8bfb4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar2 = unaff_x19 + unaff_x20 * 8;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_02bb0e9c(unaff_x19 + unaff_x25,uVar3);
    if (**(long **)(*unaff_x22 + 0xb8) == 0) goto LAB_04f8bfb0;
    uVar3 = FUN_037a6268(**(long **)(*unaff_x22 + 0xb8),unaff_x20 & 0xffffffff,*unaff_x23);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_04f8bfb4;
    FUN_04d9f2a8(uVar3,*(undefined8 *)(lVar2 + 0x20),iVar1,0);
    unaff_x20 = unaff_x20 + 1;
    unaff_x25 = unaff_x25 + 8;
  } while( true );
}


