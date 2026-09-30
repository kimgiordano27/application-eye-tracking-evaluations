/*
FUNCTION_NAME: OVRManager$$GetSystemHeadsetTheme
ENTRY_POINT: 07a22f34
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetSystemHeadsetTheme(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_07a22f7c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00();
LAB_07a22f7c:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 != 2) {
    return;
  }
  if (*(int *)(unaff_x19 + 0x40) == 0) {
    if (*(char *)(unaff_x19 + 0x50) != '\0') {
      return;
    }
    if (*(char *)(unaff_x19 + 0x60) != '\0') {
      return;
    }
                    /* try { // try from 07a23034 to 07b23117 has its CatchHandler @ 07a23034
                       catch() { ... } // from try @ 07a23034 with catch @ 07a23034
                       catch() { ... } // from try @ 07a231a4 with catch @ 07a23034
                       catch() { ... } // from try @ 07a23230 with catch @ 07a23034
                       catch() { ... } // from try @ 07a2327c with catch @ 07a23034 */
    *(undefined1 *)(unaff_x19 + 0x60) = 1;
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_03b08e64(0,*(undefined8 *)PTR_DAT_092ed130);
      FUN_07a2306c();
      return;
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x40) != 1) {
      return;
    }
    plVar6 = *(long **)(unaff_x19 + 0x38);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092ed130) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_07a23018;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092ed130,0);
LAB_07a23018:
      (*(code *)*puVar2)(plVar6,puVar2[1]);
      FUN_07a23108();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


