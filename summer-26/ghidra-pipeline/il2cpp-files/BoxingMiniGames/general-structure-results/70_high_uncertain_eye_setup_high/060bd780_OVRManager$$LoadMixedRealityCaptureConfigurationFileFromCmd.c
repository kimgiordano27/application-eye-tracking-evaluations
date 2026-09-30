/*
FUNCTION_NAME: OVRManager$$LoadMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 060bd780
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__LoadMixedRealityCaptureConfigurationFileFromCmd(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long *plVar7;
  undefined4 uVar8;
  
  plVar7 = *(long **)(unaff_x26 + 0x8e0);
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *plVar7) {
                    /* try { // try from 060bd7c4 to 061bd7cb has its CatchHandler @ 060bd86c */
                    /* try { // try from 060bd7cc to 061bd83b has its CatchHandler @ 060bd5c4 */
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_060bd7d0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30();
LAB_060bd7d0:
  uVar8 = (*(code *)*puVar1)();
  lVar3 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x25) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_060bd82c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30();
LAB_060bd82c:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *plVar2;
  lVar3 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_060bd88c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30(plVar2,lVar3,0);
LAB_060bd88c:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x24) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 6) * 0x10 + 0x138);
        goto LAB_060bd8ec;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30();
LAB_060bd8ec:
  (*(code *)*puVar1)(uVar8);
  return;
}


