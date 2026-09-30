/*
FUNCTION_NAME: QFSW.QC.Internal.CustomParameter$$GetCustomAttributes
ENTRY_POINT: 0296196c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02961bec) */
/* WARNING: Removing unreachable block (ram,0x02961bf8) */

void QFSW_QC_Internal_CustomParameter__GetCustomAttributes(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x21;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_027e0bd8();
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  Animancer_FadeGroup__get_TargetWeight
            (*(long *)(unaff_x20 + 0x20),&stack0x00000008,*(undefined8 *)PTR_DAT_03d06180);
  puVar4 = PTR_DAT_03d06178;
  puVar3 = PTR_DAT_03d06170;
  puVar2 = PTR_DAT_03d06168;
  puVar1 = PTR_DAT_03cd7348;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while( true ) {
    do {
      uVar6 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar3);
      if ((uVar6 & 1) == 0) {
        FUN_021b51c4(&stack0x00000020,*(undefined8 *)puVar2);
        if (in_stack_00000038._4_1_ != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0();
        }
        return;
      }
      FUN_01b7a454(&stack0x00000020,&stack0x00000008,*(undefined8 *)puVar4);
      lVar5 = in_stack_00000008;
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar6 = FUN_02ecc7e0(in_stack_00000008,0);
    } while ((uVar6 & 1) == 0);
    plVar7 = (long *)FUN_02ecd1cc(lVar5,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_026b4574();
    FUN_02ecd1cc(lVar5,0);
    if (plVar7 == (long *)0x0) break;
    (**(code **)(*plVar7 + 0x308))(plVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


