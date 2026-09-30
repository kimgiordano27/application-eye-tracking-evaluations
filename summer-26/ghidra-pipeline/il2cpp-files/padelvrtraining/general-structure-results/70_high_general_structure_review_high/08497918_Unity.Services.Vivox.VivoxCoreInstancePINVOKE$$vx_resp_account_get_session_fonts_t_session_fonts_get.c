/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_get_session_fonts_t_session_fonts_get
ENTRY_POINT: 08497918
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_get_session_fonts_t_session_fonts_get
               (undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  uVar1 = (*(code *)*param_1)();
  *(undefined4 *)(unaff_x24 + 0x70) = uVar1;
  lVar4 = *unaff_x25;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
        goto LAB_0849798c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_0849798c:
  (*(code *)*puVar2)();
  if ((extraout_x1 & 0xff) != 0) {
    lVar4 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
          goto LAB_084979f0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370();
LAB_084979f0:
    uVar3 = (*(code *)*puVar2)();
    *(undefined8 *)(unaff_x24 + 0x58) = uVar3;
    thunk_FUN_03d1023c();
  }
  lVar4 = *unaff_x25;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_08497a5c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_08497a5c:
  (*(code *)*puVar2)();
  if ((extraout_x1_00 & 0xff) != 0) {
    lVar4 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
          goto LAB_08497ac0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370();
LAB_08497ac0:
    uVar3 = (*(code *)*puVar2)();
    *(undefined8 *)(unaff_x24 + 0x68) = uVar3;
  }
  return;
}


