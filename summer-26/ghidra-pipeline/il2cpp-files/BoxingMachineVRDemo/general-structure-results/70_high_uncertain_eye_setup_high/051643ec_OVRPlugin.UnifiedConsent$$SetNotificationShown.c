/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$SetNotificationShown
ENTRY_POINT: 051643ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__SetNotificationShown(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int unaff_w23;
  undefined8 *unaff_x24;
  long *unaff_x26;
  
  do {
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 3) * 0x10 + 0x138);
          goto LAB_05164438;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_05164438:
    lVar2 = (*(code *)*puVar1)();
    if (lVar2 == 0) {
LAB_05164658:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_03aac1c4(lVar2,unaff_w23,*unaff_x24);
    FUN_05163090();
    unaff_w23 = unaff_w23 + 1;
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
          goto LAB_051643cc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_051643cc:
    lVar2 = (*(code *)*puVar1)();
    if (lVar2 == 0) goto LAB_05164658;
    if (*(int *)(lVar2 + 0x18) <= unaff_w23) {
      FUN_051652f4();
      (**(code **)(*unaff_x19 + 0x588))();
      (**(code **)(*unaff_x20 + 0x1e8))();
      return;
    }
    param_1 = *unaff_x21;
  } while( true );
}


