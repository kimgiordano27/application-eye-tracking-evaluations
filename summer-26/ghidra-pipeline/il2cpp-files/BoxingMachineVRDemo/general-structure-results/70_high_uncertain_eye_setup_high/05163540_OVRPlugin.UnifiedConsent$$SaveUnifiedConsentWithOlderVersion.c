/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$SaveUnifiedConsentWithOlderVersion
ENTRY_POINT: 05163540
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnifiedConsent__SaveUnifiedConsentWithOlderVersion(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x21;
  ulong unaff_x23;
  long *unaff_x26;
  
  uVar1 = (**(code **)(param_1 + 0x138))();
  uVar2 = thunk_FUN_04e8bd3c(uVar1,*(undefined8 *)PTR_DAT_06782550,0);
  if ((uVar2 & 1) == 0) {
    lVar4 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_051635b8;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051635b8:
    uVar1 = (*(code *)*puVar3)();
    uVar2 = thunk_FUN_04e8bd3c(uVar1,*(undefined8 *)PTR_DAT_06782550,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = *unaff_x21;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_0516362c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516362c:
      uVar1 = (*(code *)*puVar3)();
      uVar2 = thunk_FUN_04e8bd3c(uVar1,*(undefined8 *)PTR_DAT_06782580,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
    if ((unaff_x23 & 1) != 0) {
      FUN_05164b1c();
      if (unaff_x19 == (long *)0x0) goto LAB_05164658;
      (**(code **)(*unaff_x19 + 0x5d8))();
    }
    lVar4 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_051636cc;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051636cc:
    (*(code *)*puVar3)();
    if (unaff_x19 == (long *)0x0) {
LAB_05164658:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*unaff_x19 + 0x698))();
  }
  return;
}


