/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$.cctor
ENTRY_POINT: 06975d5c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_63_0___cctor
               (undefined1 param_1 [16],undefined8 param_2,ulong param_3,long param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  do {
    fVar3 = (float)param_2;
    uVar1 = FUN_049d96b4(param_4,param_5,param_6);
    fVar4 = (float)param_3;
    if ((uVar1 & 1) == 0) {
      fVar2 = (float)FUN_07d2fd90();
      if (*(long *)(unaff_x20 + 0x58) == 0) {
LAB_06975e50:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      param_3 = (ulong)(uint)(fVar4 - unaff_s9);
      fVar3 = (float)FUN_07cadd74(fVar2 - unaff_s11,fVar3 - unaff_s10,*(long *)(unaff_x20 + 0x58),0)
      ;
                    /* try { // try from 06975db4 to 06a75ddb has its CatchHandler @ 0697684c */
      if ((((unaff_s14 <= fVar3) && (fVar3 <= unaff_s13)) && ((float)param_3 <= unaff_s8)) &&
         ((unaff_s15 <= (float)param_3 && (fVar3 = (float)FUN_07d2fdc0(), fVar3 < unaff_s12)))) {
        unaff_s12 = (float)FUN_07d2fdc0();
        in_stack_00000038 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000000;
        in_stack_00000040 = in_stack_00000010;
        uStack0000000000000054 = CONCAT44(in_stack_00000028,uStack0000000000000024);
        param_3 = CONCAT44(uStack0000000000000020,uStack000000000000001c);
        uStack0000000000000048 = uStack0000000000000018;
        uStack000000000000004c = uStack000000000000001c;
        uStack0000000000000050 = uStack0000000000000020;
      }
    }
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x25 == unaff_x23) {
      if (unaff_s12 != 3.4028235e+38) {
        unaff_x19[1] = in_stack_00000038;
        *unaff_x19 = in_stack_00000030;
        unaff_x19[3] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        unaff_x19[2] = in_stack_00000040;
        *(undefined8 *)((long)unaff_x19 + 0x24) = uStack0000000000000054;
        *(ulong *)((long)unaff_x19 + 0x1c) = CONCAT44(uStack0000000000000050,uStack000000000000004c)
        ;
      }
      return unaff_s12 != 3.4028235e+38;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    in_stack_00000028 = *(undefined4 *)((long)unaff_x26 + 0x54);
    in_stack_00000008 = *(undefined8 *)((long)unaff_x26 + 0x34);
    in_stack_00000000 = *(undefined8 *)((long)unaff_x26 + 0x2c);
    in_stack_00000010 = *(undefined8 *)((long)unaff_x26 + 0x3c);
    uStack0000000000000020 = (undefined4)*(undefined8 *)((long)unaff_x26 + 0x4c);
    uStack0000000000000024 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x26 + 0x4c) >> 0x20);
    uStack0000000000000018 = (undefined4)*(undefined8 *)((long)unaff_x26 + 0x44);
    uStack000000000000001c = (undefined4)((ulong)*(undefined8 *)((long)unaff_x26 + 0x44) >> 0x20);
    if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_06975e50;
    param_4 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
    param_2 = in_stack_00000010;
    param_5 = FUN_07d2fce4();
    if (param_4 == 0) goto LAB_06975e50;
    param_6 = *unaff_x24;
    unaff_x26 = (undefined8 *)((long)unaff_x26 + 0x2c);
  } while( true );
}


