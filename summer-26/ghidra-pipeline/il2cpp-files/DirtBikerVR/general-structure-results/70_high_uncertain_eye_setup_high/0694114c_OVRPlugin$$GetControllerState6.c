/*
FUNCTION_NAME: OVRPlugin$$GetControllerState6
ENTRY_POINT: 0694114c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState6(void)

{
  float fVar1;
  ulong uVar2;
  undefined1 in_w8;
  long lVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  long unaff_x20;
  float fVar5;
  float fVar6;
  
  *(undefined1 *)(unaff_x20 + 0xfaa) = in_w8;
  if (((unaff_x19[2] == 0) || (lVar3 = *(long *)(unaff_x19[2] + 0xe8), lVar3 == 0)) ||
     (lVar3 = *(long *)(lVar3 + 0x40), lVar3 == 0)) {
LAB_06941284:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(char *)(lVar3 + 0x138) != '\0') {
    lVar3 = *(long *)(lVar3 + 0x88);
    if (lVar3 == 0) goto LAB_06941284;
    if (*(char *)(lVar3 + 0x10) != '\0') {
      fVar5 = *(float *)(lVar3 + 0x14) *
              *(float *)((long)unaff_x19 + 0x24) * *(float *)(lVar3 + 0x14);
      fVar6 = 1.0;
      if (fVar5 <= 1.0) {
        fVar6 = fVar5;
      }
      fVar1 = 0.0;
      if (0.0 <= fVar5) {
        fVar1 = fVar6;
      }
      (**(code **)(*unaff_x19 + 0x318))(fVar1);
      if (((unaff_x19[2] == 0) || (lVar3 = *(long *)(unaff_x19[2] + 0xe8), lVar3 == 0)) ||
         ((lVar3 = *(long *)(lVar3 + 0x40), lVar3 == 0 ||
          (lVar3 = *(long *)(lVar3 + 0x88), lVar3 == 0)))) goto LAB_06941284;
      (**(code **)(*unaff_x19 + 0x308))(*(float *)(unaff_x19 + 7) * *(float *)(lVar3 + 0x14));
      puVar4 = (undefined8 *)(*unaff_x19 + 0x2e8);
      goto LAB_06941260;
    }
  }
  lVar3 = unaff_x19[6];
  if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_07c9c218(lVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  (**(code **)(*unaff_x19 + 0x318))(0);
  puVar4 = (undefined8 *)(*unaff_x19 + 0x328);
LAB_06941260:
                    /* WARNING: Could not recover jumptable at 0x06941274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)();
  return;
}


