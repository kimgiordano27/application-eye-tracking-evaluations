/*
FUNCTION_NAME: OVRPlugin$$ShutdownInsightPassthrough
ENTRY_POINT: 07476018
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShutdownInsightPassthrough(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long lVar6;
  
  thunk_FUN_03db619c();
  uVar1 = FUN_08a52164();
  if ((uVar1 & 1) != 0) {
    uVar3 = 0;
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
LAB_074760fc:
    thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x48),uVar3);
    return;
  }
  if (unaff_x22 != 0) {
    uVar1 = FUN_04ec2c70();
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (unaff_x20 != (long *)0x0) {
      lVar4 = *unaff_x20;
      lVar6 = *(long *)(unaff_x19 + 0x60);
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09222ff8) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_074760d0;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370();
LAB_074760d0:
      uVar3 = (*(code *)*puVar2)();
      if (lVar6 != 0) {
        puVar2 = (undefined8 *)(lVar6 + 0x10);
        *puVar2 = uVar3;
        thunk_FUN_03d1023c(puVar2,uVar3);
        uVar3 = *(undefined8 *)(unaff_x19 + 0x60);
        *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
        goto LAB_074760fc;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


