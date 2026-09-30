/*
FUNCTION_NAME: QFSW.QC.Internal.CustomParameter$$GetCustomAttributesData
ENTRY_POINT: 029619bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02961bec) */
/* WARNING: Removing unreachable block (ram,0x02961bf8) */

void QFSW_QC_Internal_CustomParameter__GetCustomAttributesData(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x29;
  undefined8 *puVar4;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long lStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000038;
  
  puVar4 = *(undefined8 **)(unaff_x29 + 0x168);
  uStack0000000000000028 = in_stack_00000010;
  lStack0000000000000020 = in_stack_00000008;
  uStack0000000000000030 = in_stack_00000018;
  while( true ) {
    do {
      uVar2 = FUN_021b51c8(&stack0x00000020,*unaff_x22);
      if ((uVar2 & 1) == 0) {
        FUN_021b51c4(&stack0x00000020,*puVar4);
        if (in_stack_00000038._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0();
        }
        return;
      }
      FUN_01b7a454(&stack0x00000020,&stack0x00000008,*unaff_x23);
      lVar1 = in_stack_00000008;
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar2 = FUN_02ecc7e0(in_stack_00000008,0);
    } while ((uVar2 & 1) == 0);
    plVar3 = (long *)FUN_02ecd1cc(lVar1,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_01a89e68(*unaff_x24);
    FUN_026b4574();
    FUN_02ecd1cc(lVar1,0);
    if (plVar3 == (long *)0x0) break;
    (**(code **)(*plVar3 + 0x308))(plVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


