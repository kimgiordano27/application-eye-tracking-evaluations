/*
FUNCTION_NAME: OVRPlugin$$SaveSpaceList
ENTRY_POINT: 069530ec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SaveSpaceList(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  long lVar3;
  undefined8 *unaff_x27;
  float fVar4;
  float fVar5;
  undefined8 in_stack_00000010;
  
  __cxa_end_catch();
  FUN_061c1960(in_stack_00000010,*unaff_x27);
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9b8();
  }
  lVar3 = *(long *)(unaff_x19 + 0x58);
  lVar1 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_0695312c();
  if ((lVar3 != 0) && (lVar1 != 0)) {
    fVar5 = *(float *)(lVar3 + 0x10);
    fVar4 = (float)(**(code **)(lVar1 + 0x18))
                             (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    uVar2 = *unaff_x22;
    *(float *)(lVar3 + 0x10) = fVar5 + fVar4;
    lVar3 = *(long *)(unaff_x19 + 0x38);
    lVar1 = thunk_FUN_03ac74bc(uVar2);
    FUN_0695312c();
    if ((lVar3 != 0) && (lVar1 != 0)) {
      fVar5 = *(float *)(lVar3 + 0x10);
      fVar4 = (float)(**(code **)(lVar1 + 0x18))
                               (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      uVar2 = *unaff_x22;
      *(float *)(lVar3 + 0x10) = fVar5 + fVar4;
      lVar3 = *(long *)(unaff_x19 + 0x50);
      lVar1 = thunk_FUN_03ac74bc(uVar2);
      FUN_0695312c();
      if ((lVar3 != 0) && (lVar1 != 0)) {
        fVar5 = *(float *)(lVar3 + 0x10);
        fVar4 = (float)(**(code **)(lVar1 + 0x18))
                                 (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        uVar2 = *unaff_x22;
        *(float *)(lVar3 + 0x10) = fVar5 + fVar4;
        lVar3 = *(long *)(unaff_x19 + 0x30);
        lVar1 = thunk_FUN_03ac74bc(uVar2);
        FUN_0695312c();
        if ((lVar3 != 0) && (lVar1 != 0)) {
          fVar5 = *(float *)(lVar3 + 0x10);
          fVar4 = (float)(**(code **)(lVar1 + 0x18))
                                   (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
          *(float *)(lVar3 + 0x10) = fVar5 + fVar4;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


