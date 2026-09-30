/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_get_session_fonts_t_session_fonts_set
ENTRY_POINT: 08497894
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_get_session_fonts_t_session_fonts_set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long lVar5;
  long in_x9;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_03d8f370();
      goto LAB_084978c8;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 0xc) * 0x10 + 0x138);
LAB_084978c8:
  uVar3 = (*(code *)*puVar2)();
  if ((uVar3 >> 0x20 & 0xff) != 0) {
    lVar5 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
          goto FUN_0849792c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
                    /* try { // try from 08497910 to 08597973 has its CatchHandler @ 08497d94 */
    puVar2 = (undefined8 *)FUN_03d8f370();
FUN_0849792c:
    uVar1 = (*(code *)*puVar2)();
    *(undefined4 *)(unaff_x24 + 0x70) = uVar1;
  }
  lVar5 = *unaff_x25;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
        goto LAB_0849798c;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_0849798c:
  (*(code *)*puVar2)();
  if ((extraout_x1 & 0xff) != 0) {
    lVar5 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
          goto LAB_084979f0;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370();
LAB_084979f0:
    uVar4 = (*(code *)*puVar2)();
    *(undefined8 *)(unaff_x24 + 0x58) = uVar4;
    thunk_FUN_03d1023c();
  }
  lVar5 = *unaff_x25;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
        goto LAB_08497a5c;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_08497a5c:
  (*(code *)*puVar2)();
  if ((extraout_x1_00 & 0xff) != 0) {
    lVar5 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
          goto LAB_08497ac0;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370();
LAB_08497ac0:
    uVar4 = (*(code *)*puVar2)();
    *(undefined8 *)(unaff_x24 + 0x68) = uVar4;
  }
  return;
}


