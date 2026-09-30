/*
FUNCTION_NAME: OVRPlugin$$PollEvent
ENTRY_POINT: 05d8f1a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__PollEvent(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  do {
    *(undefined4 *)(unaff_x19 + 0x20) = 0;
    do {
      if (unaff_w22 < 1) {
        *(float *)(unaff_x19 + 0x28) =
             *(float *)(unaff_x19 + 0x28) + (float)*(int *)(unaff_x20 + 0x18) / DAT_0139ff38;
        if ((*(long *)(unaff_x19 + 0x10) != 0) &&
           (lVar2 = FUN_06ba57a4(*(long *)(unaff_x19 + 0x10),0), lVar2 != 0)) {
          FUN_06ba4a24(lVar2,*(undefined8 *)(unaff_x19 + 0x18),0,0);
          return;
        }
LAB_05d8f230:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      iVar1 = (int)param_1 - in_w3;
      if (unaff_w22 <= iVar1) {
        iVar1 = unaff_w22;
      }
      FUN_05946528();
      in_w3 = iVar1 + *(int *)(unaff_x19 + 0x20);
      *(int *)(unaff_x19 + 0x20) = in_w3;
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_05d8f230;
      param_1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x18);
      unaff_w22 = unaff_w22 - iVar1;
      if ((int)param_1 < in_w3) {
        thunk_FUN_032e1da0(PTR_DAT_0727b240);
        uVar3 = thunk_FUN_032a56a0();
        FUN_0595ad2c(uVar3,0);
        uVar4 = thunk_FUN_032e1da0(PTR_DAT_072b1a30);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar3,uVar4);
      }
    } while (in_w3 != (int)param_1);
    in_w3 = 0;
  } while( true );
}


