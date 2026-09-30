/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxDestroy
ENTRY_POINT: 06af22c0
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_65_0__ovrp_KtxDestroy
               (float param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  byte unaff_w25;
  float fVar4;
  float fVar5;
  ulong unaff_d8;
  float unaff_s9;
  float unaff_s10;
  long in_stack_00000030;
  undefined8 in_stack_00000048;
  
  while( true ) {
    FUN_05e17eb4(param_1,unaff_d8,param_2,unaff_x20,param_4,param_5);
    *(byte *)(unaff_x19 + 0x61) = *(byte *)(unaff_x19 + 0x61) & unaff_w21 & unaff_w25;
    uVar2 = FUN_05fd5b44(&stack0x00000020,*(undefined8 *)(unaff_x23 + 0xf20));
    unaff_x20 = in_stack_00000030;
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(unaff_x19 + 0x50);
      if (lVar3 != 0) {
        fVar4 = (float)(**(code **)(lVar3 + 0x18))
                                 (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        bVar1 = *(byte *)(unaff_x19 + 0x61);
        if (unaff_w22 == bVar1) {
          fVar5 = *(float *)(unaff_x19 + 100);
        }
        else {
          *(float *)(unaff_x19 + 100) = fVar4;
          fVar5 = fVar4;
        }
        if (*(float *)(unaff_x19 + 0x48) <= fVar4 - fVar5) {
          *(byte *)(unaff_x19 + 0x60) = bVar1;
        }
        else {
          bVar1 = *(byte *)(unaff_x19 + 0x60);
        }
        return bVar1 != 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (unaff_w22 == 0) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      fVar5 = *(float *)(in_stack_00000030 + 0x14);
      fVar4 = *(float *)(in_stack_00000030 + 0x18) * unaff_s9;
    }
    else {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      fVar5 = *(float *)(in_stack_00000030 + 0x14);
      fVar4 = *(float *)(in_stack_00000030 + 0x18) * unaff_s10;
    }
    unaff_d8 = (ulong)(uint)(fVar5 + fVar4);
    unaff_w21 = FUN_06af23b8();
    param_2 = *(long *)(unaff_x19 + 0x58);
    unaff_w25 = ABS(in_stack_00000048._4_4_) <= fVar5 + fVar4;
    if (param_2 == 0) break;
    param_5 = *(undefined8 *)(*(long *)(*(long *)(*unaff_x24 + 0x20) + 0xc0) + 0x110);
    param_4 = 1;
    param_1 = in_stack_00000048._4_4_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


