/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_get_session_fonts_t_session_font_count_set
ENTRY_POINT: 08497994
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_get_session_fonts_t_session_font_count_set
               (code *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  (*param_1)();
  if ((extraout_x1 & 0xff) != 0) {
    lVar3 = *unaff_x25;
                    /* try { // try from 084979a8 to 085979af has its CatchHandler @ 08497c70 */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
          goto LAB_084979f0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_084979f0:
                    /* try { // try from 084979f8 to 08597a17 has its CatchHandler @ 08497d38 */
    uVar2 = (*(code *)*puVar1)();
    *(undefined8 *)(unaff_x24 + 0x58) = uVar2;
    thunk_FUN_03d1023c();
  }
  lVar3 = *unaff_x25;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
        goto LAB_08497a5c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_08497a5c:
  (*(code *)*puVar1)();
  if ((extraout_x1_00 & 0xff) != 0) {
    lVar3 = *unaff_x25;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
          goto LAB_08497ac0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370();
LAB_08497ac0:
    uVar2 = (*(code *)*puVar1)();
    *(undefined8 *)(unaff_x24 + 0x68) = uVar2;
  }
  return;
}


