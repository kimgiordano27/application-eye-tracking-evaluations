/*
FUNCTION_NAME: OVRPlugin.OVRP_1_69_0$$.cctor
ENTRY_POINT: 0697653c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_69_0___cctor
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x25;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined8 *in_stack_00000008;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  do {
                    /* try { // try from 0697653c to 06a76543 has its CatchHandler @ 06976730 */
    fVar5 = (float)param_3;
    fVar4 = (float)param_2;
    uVar1 = FUN_049d96b4(unaff_x22,param_5,param_6);
    if ((uVar1 & 1) == 0) {
      fVar3 = (float)FUN_07d2fd90(&stack0x00000070,0);
      if (*(long *)(unaff_x20 + 0x58) == 0) {
LAB_06976640:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
                    /* try { // try from 0697656c to 06a76577 has its CatchHandler @ 06976724 */
                    /* try { // try from 0697657c to 06a7659b has its CatchHandler @ 06976750 */
      fVar5 = fVar5 - in_stack_00000068;
      fVar4 = (float)FUN_07cadd74(fVar3 - fStack0000000000000060,fVar4 - fStack0000000000000064,
                                  *(long *)(unaff_x20 + 0x58),0);
                    /* try { // try from 069765b0 to 06a765d3 has its CatchHandler @ 06976720 */
      if ((((unaff_s9 <= fVar4) && (fVar4 <= unaff_s12)) && (fVar5 <= unaff_s11)) &&
         ((unaff_s10 <= fVar5 && (fVar4 = (float)FUN_07d2fdc0(&stack0x00000070,0), fVar4 < unaff_s8)
          ))) {
        unaff_s8 = (float)FUN_07d2fdc0(&stack0x00000070,0);
        in_stack_000000a8 = in_stack_00000078;
        in_stack_000000a0 = in_stack_00000070;
        in_stack_000000b0 = in_stack_00000080;
        uStack00000000000000c4 = uStack0000000000000094;
        uStack00000000000000b8 = uStack0000000000000088;
        uStack00000000000000bc = uStack000000000000008c;
        uStack00000000000000c0 = uStack0000000000000090;
      }
    }
    lVar2 = *(long *)(unaff_x20 + 0x70);
    unaff_w21 = unaff_w21 + 1;
    if (lVar2 == 0) goto LAB_06976640;
    if (*(int *)(lVar2 + 0x18) <= unaff_w21) {
      if (unaff_s8 != 3.4028235e+38) {
        in_stack_00000008[1] = in_stack_000000a8;
        *in_stack_00000008 = in_stack_000000a0;
        in_stack_00000008[3] = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
        in_stack_00000008[2] = in_stack_000000b0;
        *(undefined8 *)((long)in_stack_00000008 + 0x24) = uStack00000000000000c4;
        *(ulong *)((long)in_stack_00000008 + 0x1c) =
             CONCAT44(uStack00000000000000c0,uStack00000000000000bc);
      }
      return unaff_s8 != 3.4028235e+38;
    }
    FUN_04e28000(&stack0x00000100,lVar2,unaff_w21,*unaff_x19);
    uStack0000000000000094 = *(undefined8 *)(unaff_x25 + 0x24);
    param_3 = *(undefined8 *)(unaff_x25 + 0x1c);
    in_stack_00000078 = in_stack_00000108;
    in_stack_00000070 = in_stack_00000100;
    uStack0000000000000088 = (undefined4)in_stack_00000118;
    in_stack_00000080 = in_stack_00000110;
    uStack000000000000008c = (undefined4)param_3;
    uStack0000000000000090 = (undefined4)((ulong)param_3 >> 0x20);
    if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_06976640;
    unaff_x22 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
    param_2 = in_stack_00000110;
    param_5 = FUN_07d2fce4(&stack0x00000070,0);
    if (unaff_x22 == 0) goto LAB_06976640;
    param_6 = *unaff_x23;
  } while( true );
}


