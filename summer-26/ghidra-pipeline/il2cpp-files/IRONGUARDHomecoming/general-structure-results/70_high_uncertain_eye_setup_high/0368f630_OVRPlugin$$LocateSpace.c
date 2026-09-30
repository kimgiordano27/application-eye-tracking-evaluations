/*
FUNCTION_NAME: OVRPlugin$$LocateSpace
ENTRY_POINT: 0368f630
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__LocateSpace(void)

{
  bool in_ZR;
  bool in_CY;
  long lVar1;
  float *pfVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 unaff_s13;
  float unaff_s15;
  float in_stack_00000000;
  undefined8 in_stack_00000010;
  
  if (in_CY && !in_ZR) {
    return 0;
  }
  if ((*(long *)(unaff_x20 + 0x20) != 0) &&
     (lVar1 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0), lVar1 != 0)) {
    fVar6 = in_stack_00000010._4_4_;
    uVar3 = FUN_0407ba80(lVar1,0);
    *unaff_x19 = uVar3;
    unaff_x19[1] = unaff_s13;
    unaff_x19[2] = fVar6;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar1 = FUN_04070398(*(long *)(unaff_x20 + 0x20),0);
      if (*(char *)(unaff_x24 + 0xe9b) == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        *(undefined1 *)(unaff_x24 + 0xe9b) = 1;
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar6 = SQRT(in_stack_00000010._4_4_ * in_stack_00000010._4_4_ + unaff_s15 * unaff_s15 + 0.0);
      if (fVar6 <= in_stack_00000000) {
        if (*(char *)(unaff_x23 + 0xe12) == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          *(undefined1 *)(unaff_x23 + 0xe12) = 1;
        }
        pfVar2 = *(float **)(*unaff_x22 + 0xb8);
        fVar4 = *pfVar2;
        fVar5 = pfVar2[1];
        fVar6 = pfVar2[2];
      }
      else {
        fVar5 = 0.0 / fVar6;
        fVar4 = -unaff_s15 / fVar6;
        fVar6 = -in_stack_00000010._4_4_ / fVar6;
      }
      if (lVar1 != 0) {
        uVar3 = FUN_0407e3a8(fVar4,lVar1,0);
        unaff_x19[3] = uVar3;
        unaff_x19[4] = fVar5;
        unaff_x19[5] = fVar6;
        uVar3 = FUN_0368ed88();
        unaff_x19[6] = uVar3;
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


