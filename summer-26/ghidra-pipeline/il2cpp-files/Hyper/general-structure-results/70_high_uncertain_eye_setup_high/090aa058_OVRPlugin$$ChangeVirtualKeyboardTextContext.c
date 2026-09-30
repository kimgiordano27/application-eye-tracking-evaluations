/*
FUNCTION_NAME: OVRPlugin$$ChangeVirtualKeyboardTextContext
ENTRY_POINT: 090aa058
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ChangeVirtualKeyboardTextContext
               (undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined8 *unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  float in_stack_00000018;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  
  uStack00000000000000e8 = 0;
  uStack00000000000000f0 = 0;
  uStack00000000000000f8 = 0;
  fStack0000000000000028 = param_6;
  fStack000000000000002c = param_5;
  uVar1 = FUN_07ad77dc(param_1,param_2 - unaff_s10,param_3 - unaff_s11,param_4 - param_7,
                       param_5 - unaff_s13,param_6 - unaff_s15,param_8,*unaff_x23);
  in_stack_000000d8 = uStack00000000000000f0;
  in_stack_000000d0 = uStack00000000000000e8;
  in_stack_000000e0 = uStack00000000000000f8;
  fVar5 = unaff_s14;
  fVar6 = unaff_s12;
  fStack0000000000000024 = (float)FUN_090a96b4(unaff_s8,uVar1,&stack0x000000d0);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  fStack000000000000000c = fStack0000000000000064 * fStack0000000000000048;
  in_stack_000000c8 = 0;
  fStack000000000000001c = fVar6;
  uVar1 = FUN_07ad77dc(fStack000000000000003c - fStack000000000000000c,
                       fStack0000000000000038 - fStack0000000000000064 * fStack0000000000000044,
                       in_stack_00000030._4_4_ - fStack0000000000000064 * fStack0000000000000040,
                       in_stack_00000018 - in_stack_00000068 * fStack0000000000000048,
                       in_stack_00000010._4_4_ - in_stack_00000068 * fStack0000000000000044,
                       param_3 - in_stack_00000068 * fStack0000000000000040,&stack0x000000b8,
                       *unaff_x23);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar6 = unaff_s14;
  fVar8 = unaff_s12;
  fVar3 = (float)FUN_090a96b4(unaff_s8,uVar1,&stack0x000000a0);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  uVar1 = FUN_07ad77dc(in_stack_00000068 * fStack0000000000000048 + fStack0000000000000054,
                       in_stack_00000068 * fStack0000000000000044 + fStack0000000000000050,
                       in_stack_00000068 * fStack0000000000000040 + fStack000000000000004c,
                       fStack000000000000000c + param_4,
                       fStack0000000000000064 * fStack0000000000000044 + fStack000000000000002c,
                       fStack0000000000000064 * fStack0000000000000040 + fStack0000000000000028,
                       &stack0x00000088,*unaff_x23);
  in_stack_00000078 = in_stack_00000090;
  in_stack_00000070 = in_stack_00000088;
  in_stack_00000080 = in_stack_00000098;
  fVar7 = unaff_s14;
  fVar9 = unaff_s12;
  fVar4 = (float)FUN_090a96b4(unaff_s8,uVar1,&stack0x00000070);
  fVar12 = (fVar9 - unaff_s12) * (fVar9 - unaff_s12) +
           (fVar4 - unaff_s8) * (fVar4 - unaff_s8) + (fVar7 - unaff_s14) * (fVar7 - unaff_s14);
  fVar10 = (fVar8 - unaff_s12) * (fVar8 - unaff_s12) +
           (fVar3 - unaff_s8) * (fVar3 - unaff_s8) + (fVar6 - unaff_s14) * (fVar6 - unaff_s14);
  fVar13 = fVar10;
  if (fVar12 <= fVar10) {
    fVar13 = fVar12;
  }
  fVar11 = (fStack000000000000001c - unaff_s12) * (fStack000000000000001c - unaff_s12) +
           (fStack0000000000000024 - unaff_s8) * (fStack0000000000000024 - unaff_s8) +
           (fVar5 - unaff_s14) * (fVar5 - unaff_s14);
  fVar14 = (fStack0000000000000058 - unaff_s12) * (fStack0000000000000058 - unaff_s12) +
           (fStack0000000000000060 - unaff_s8) * (fStack0000000000000060 - unaff_s8) +
           (fStack000000000000005c - unaff_s14) * (fStack000000000000005c - unaff_s14);
  fVar12 = fVar11;
  if (fVar13 <= fVar11) {
    fVar12 = fVar13;
  }
  fVar13 = fVar14;
  if (fVar12 <= fVar14) {
    fVar13 = fVar12;
  }
  if (fVar14 == fVar13) {
    uVar2 = 0;
    *unaff_x20 = fStack0000000000000060;
    unaff_x20[1] = fStack000000000000005c;
    unaff_x20[2] = fStack0000000000000058;
  }
  else if (fVar11 == fVar13) {
    *unaff_x20 = fStack0000000000000024;
    unaff_x20[1] = fVar5;
    uVar2 = 0x43340000;
    unaff_x20[2] = fStack000000000000001c;
  }
  else if (fVar10 == fVar13) {
    *unaff_x20 = fVar3;
    unaff_x20[1] = fVar6;
    uVar2 = 0x42b40000;
    unaff_x20[2] = fVar8;
  }
  else {
    *unaff_x20 = fVar4;
    unaff_x20[1] = fVar7;
    uVar2 = 0xc2b40000;
    unaff_x20[2] = fVar9;
  }
  *unaff_x19 = uVar2;
  return;
}


