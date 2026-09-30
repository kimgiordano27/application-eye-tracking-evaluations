/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_set_session_3d_position_t_base__set
ENTRY_POINT: 08489bc0
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_set_session_3d_position_t_base__set
               (ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_0927ea00);
    *(undefined1 *)(unaff_x21 + 0x66) = 1;
  }
  lVar2 = FUN_08489830(param_2);
  puVar1 = PTR_DAT_0927ea00;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar8 = *(undefined8 *)PTR_DAT_0927ea00;
  lVar3 = thunk_FUN_03d2ee44(lVar2,uVar8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4(lVar2,uVar8);
  }
  lVar3 = *(long *)puVar1;
  plVar4 = (long *)thunk_FUN_03d2ee44(lVar2,lVar3);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4(lVar2,lVar3);
  }
  lVar2 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar3) {
        puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_08489c70;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_03d8f370(plVar4,lVar3,0);
LAB_08489c70:
  uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  FUN_08489ef4(param_2,uVar8);
  return;
}


