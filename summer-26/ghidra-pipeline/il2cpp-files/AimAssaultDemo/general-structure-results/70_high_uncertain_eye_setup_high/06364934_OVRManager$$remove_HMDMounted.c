/*
FUNCTION_NAME: OVRManager$$remove_HMDMounted
ENTRY_POINT: 06364934
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06364ab0) */

void OVRManager__remove_HMDMounted(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
code_r0x06364934:
  puVar1 = (undefined8 *)FUN_0377596c(unaff_x21,param_2,param_3);
  do {
    (*(code *)*puVar1)(unaff_x21,unaff_x22,puVar1[1]);
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06364878;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_06364878:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_0636499c;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_06364984;
    }
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_063648d4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_063648d4:
    lVar2 = (*(code *)*puVar1)();
    if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    unaff_x21 = *(long **)(*(long *)(unaff_x20 + 0x28) + 0xe0);
    unaff_x22 = FUN_06387368(lVar2,0);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar2 = *unaff_x21;
    param_2 = *unaff_x26;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 == 0) break;
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    while (*(long *)(piVar4 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
      if (uVar3 == 0) goto LAB_06364930;
    }
    puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
  } while( true );
LAB_06364930:
  param_3 = 2;
  goto code_r0x06364934;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_06364984:
    if (*(long *)(piVar4 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_063649b8;
    }
  }
LAB_0636499c:
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_063649b8:
  (*(code *)*puVar1)();
  return;
}


