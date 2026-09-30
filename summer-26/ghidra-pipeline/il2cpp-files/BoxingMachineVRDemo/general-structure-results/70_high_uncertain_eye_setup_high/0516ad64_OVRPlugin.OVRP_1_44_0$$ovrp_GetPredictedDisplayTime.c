/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetPredictedDisplayTime
ENTRY_POINT: 0516ad64
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0516affc) */
/* WARNING: Removing unreachable block (ram,0x0516b034) */

int OVRPlugin_OVRP_1_44_0__ovrp_GetPredictedDisplayTime(code *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  
  do {
                    /* try { // try from 0516ad64 to 0526ad67 has its CatchHandler @ 0516adc4 */
    lVar4 = (*param_1)();
                    /* try { // try from 0516ad6c to 0526ad73 has its CatchHandler @ 0516adb8 */
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 0516ad74 to 0526adb3 has its CatchHandler @ 0516acb8 */
    iVar1 = FUN_0516aa08();
    iVar2 = FUN_0516aa08();
    iVar2 = unaff_w24 + iVar1 + iVar2;
    unaff_w24 = iVar2 + 1;
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0516ad04;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516ad04:
    uVar5 = (*(code *)*puVar3)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_0516afc8;
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_0516af80;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0516ad60;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516ad60:
    param_1 = (code *)*puVar3;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0516afbc;
    }
  }
LAB_0516af80:
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516afbc:
  (*(code *)*puVar3)();
LAB_0516afc8:
  iVar2 = iVar2 + 2;
  *(int *)(unaff_x19 + 0x18) = iVar2;
  return iVar2;
}


