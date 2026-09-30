/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_channel_invite_user_t_base__set
ENTRY_POINT: 08464d08
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_base__set
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long lVar9;
  long unaff_x21;
  
  FUN_03d2d2b0(*(undefined8 *)(param_1 + 0x458));
  FUN_03d2d2b0(PTR_DAT_09233448);
  FUN_03d2d2b0(PTR_DAT_091fd4e8);
  *(undefined1 *)(unaff_x21 + 0xec0) = 1;
  puVar1 = PTR_DAT_0927d4a8;
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0927d4a8) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_base__get
          ;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370();
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_channel_invite_user_t_base__get:
    iVar2 = (*(code *)*puVar3)();
    if (iVar2 == 2) {
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        FUN_062fc4e8(*(long *)(unaff_x20 + 0x10),0,*(undefined8 *)PTR_DAT_091fd4e8);
        return;
      }
    }
    else if (iVar2 == 4) {
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        FUN_062fc560(*(long *)(unaff_x20 + 0x10),*(undefined8 *)PTR_DAT_09233458);
        return;
      }
    }
    else {
      if (iVar2 != 3) {
        thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
        uVar4 = thunk_FUN_03d2ef40();
        FUN_070ccd80(uVar4,0);
        uVar5 = thunk_FUN_03d1e194(PTR_DAT_0927d4e8);
                    /* WARNING: Subroutine does not return */
        FUN_03d2d414(uVar4,uVar5);
      }
      lVar6 = *unaff_x19;
      lVar9 = *(long *)(unaff_x20 + 0x10);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_08464e48;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03d8f370();
LAB_08464e48:
      uVar4 = (*(code *)*puVar3)();
      if (lVar9 != 0) {
        FUN_062fc420(lVar9,uVar4,*(undefined8 *)PTR_DAT_09233448);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


