/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$.cctor
ENTRY_POINT: 04f8bea4
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


long OVRPlugin_OVRP_1_3_0___cctor(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *in_x9;
  ulong uVar6;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar7;
  
  lVar2 = FUN_02b3c908(*in_x9,*(undefined4 *)(param_1 + 0x18));
  uVar6 = 0;
  lVar7 = 0x20;
  do {
    lVar3 = *unaff_x22;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *unaff_x22;
    }
    lVar5 = **(long **)(lVar3 + 0xb8);
    if (lVar5 == 0) {
LAB_04f8bfb0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar6) {
      return lVar2;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar5 == 0) goto LAB_04f8bfb0;
    }
    lVar3 = FUN_037a6268(lVar5,uVar6 & 0xffffffff,*unaff_x23);
    if (lVar3 == 0) goto LAB_04f8bfb0;
    iVar1 = *(int *)(lVar3 + 0x18) + -1;
    uVar4 = FUN_02b3c908(*unaff_x24,iVar1);
    if (lVar2 == 0) goto LAB_04f8bfb0;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) {
LAB_04f8bfb4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar3 = lVar2 + uVar6 * 8;
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    thunk_FUN_02bb0e9c(lVar2 + lVar7,uVar4);
    if (**(long **)(*unaff_x22 + 0xb8) == 0) goto LAB_04f8bfb0;
    uVar4 = FUN_037a6268(**(long **)(*unaff_x22 + 0xb8),uVar6 & 0xffffffff,*unaff_x23);
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_04f8bfb4;
    FUN_04d9f2a8(uVar4,*(undefined8 *)(lVar3 + 0x20),iVar1,0);
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 8;
  } while( true );
}


