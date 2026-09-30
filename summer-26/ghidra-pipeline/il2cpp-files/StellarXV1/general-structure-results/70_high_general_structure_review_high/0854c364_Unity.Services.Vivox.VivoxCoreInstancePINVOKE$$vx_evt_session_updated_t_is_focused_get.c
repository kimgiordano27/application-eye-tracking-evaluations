/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_is_focused_get
ENTRY_POINT: 0854c364
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_is_focused_get
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  undefined8 *puVar1;
  int in_w8;
  long lVar2;
  undefined8 *in_x10;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = param_4._8_8_;
  uVar8 = param_4._0_8_;
  uVar6 = param_3._8_8_;
  uVar4 = param_3._0_8_;
  while( true ) {
    in_x10[1] = uVar6;
    *in_x10 = uVar4;
    in_x10[3] = uVar9;
    in_x10[2] = uVar8;
    lVar2 = *(long *)(unaff_x19 + 0x100);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) {
LAB_0854c3c8:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x21 = unaff_x21 + 1;
    puVar1 = (undefined8 *)(lVar2 + unaff_x23);
    unaff_x23 = unaff_x23 + 0x40;
    lVar2 = *(long *)(*unaff_x20 + 0xb8);
    uVar8 = *(undefined8 *)(lVar2 + 0x60);
    uVar6 = *(undefined8 *)(lVar2 + 0x78);
    uVar4 = *(undefined8 *)(lVar2 + 0x70);
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
    uVar9 = *(undefined8 *)(lVar2 + 0x40);
    uVar7 = *(undefined8 *)(lVar2 + 0x58);
    uVar5 = *(undefined8 *)(lVar2 + 0x50);
    puVar1[5] = *(undefined8 *)(lVar2 + 0x68);
    puVar1[4] = uVar8;
    puVar1[7] = uVar6;
    puVar1[6] = uVar4;
    puVar1[1] = uVar3;
    *puVar1 = uVar9;
    puVar1[3] = uVar7;
    puVar1[2] = uVar5;
    if (unaff_x21 == 2) {
      *(undefined4 *)(unaff_x19 + 0x108) = 0xffffffff;
      return;
    }
    lVar2 = *(long *)(unaff_x19 + 0xf8);
    if (in_w8 == 0) {
      FUN_04077588();
      in_w8 = 1;
      *(undefined1 *)(unaff_x22 + 0x628) = 1;
    }
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x21) goto LAB_0854c3c8;
    in_x10 = (undefined8 *)(lVar2 + unaff_x23);
    lVar2 = *(long *)(*unaff_x20 + 0xb8);
    uVar7 = *(undefined8 *)(lVar2 + 0x60);
    uVar5 = *(undefined8 *)(lVar2 + 0x78);
    uVar3 = *(undefined8 *)(lVar2 + 0x70);
    uVar6 = *(undefined8 *)(lVar2 + 0x48);
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    uVar9 = *(undefined8 *)(lVar2 + 0x58);
    uVar8 = *(undefined8 *)(lVar2 + 0x50);
    in_x10[5] = *(undefined8 *)(lVar2 + 0x68);
    in_x10[4] = uVar7;
    in_x10[7] = uVar5;
    in_x10[6] = uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


