/*
FUNCTION_NAME: OVRPlugin.OVRP_1_70_0$$ovrp_SetLogCallback2
ENTRY_POINT: 069765c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_70_0__ovrp_SetLogCallback2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x25;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
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
    fVar6 = (float)FUN_07d2fdc0(param_1,param_2);
    in_stack_000000a8 = in_stack_00000078;
    in_stack_000000a0 = in_stack_00000070;
    in_stack_000000b0 = in_stack_00000080;
    uStack00000000000000c4 = uStack0000000000000094;
                    /* try { // try from 069765d4 to 06a7667f has its CatchHandler @ 06975c1c */
    uStack00000000000000b8 = uStack0000000000000088;
    uStack00000000000000bc = uStack000000000000008c;
    uStack00000000000000c0 = uStack0000000000000090;
    do {
      do {
        lVar3 = *(long *)(unaff_x20 + 0x70);
        unaff_w21 = unaff_w21 + 1;
        if (lVar3 == 0) {
LAB_06976640:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(int *)(lVar3 + 0x18) <= unaff_w21) {
          if (fVar6 != 3.4028235e+38) {
            in_stack_00000008[1] = in_stack_000000a8;
            *in_stack_00000008 = in_stack_000000a0;
            in_stack_00000008[3] = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
            in_stack_00000008[2] = in_stack_000000b0;
            *(undefined8 *)((long)in_stack_00000008 + 0x24) = uStack00000000000000c4;
            *(ulong *)((long)in_stack_00000008 + 0x1c) =
                 CONCAT44(uStack00000000000000c0,uStack00000000000000bc);
          }
          return fVar6 != 3.4028235e+38;
        }
        FUN_04e28000(&stack0x00000100,lVar3,unaff_w21,*unaff_x19);
        uStack0000000000000094 = *(undefined8 *)(unaff_x25 + 0x24);
        uVar9 = *(undefined8 *)(unaff_x25 + 0x1c);
        in_stack_00000078 = in_stack_00000108;
        in_stack_00000070 = in_stack_00000100;
        uStack0000000000000088 = (undefined4)in_stack_00000118;
        in_stack_00000080 = in_stack_00000110;
        uStack000000000000008c = (undefined4)uVar9;
        uStack0000000000000090 = (undefined4)((ulong)uVar9 >> 0x20);
        if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_06976640;
        lVar3 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
        uVar7 = in_stack_00000110;
        uVar1 = FUN_07d2fce4(&stack0x00000070,0);
        fVar8 = (float)uVar9;
        fVar5 = (float)uVar7;
        if (lVar3 == 0) goto LAB_06976640;
        uVar2 = FUN_049d96b4(lVar3,uVar1,*unaff_x23);
      } while ((uVar2 & 1) != 0);
      fVar4 = (float)FUN_07d2fd90(&stack0x00000070,0);
      if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_06976640;
      fVar8 = fVar8 - in_stack_00000068;
      fVar5 = (float)FUN_07cadd74(fVar4 - fStack0000000000000060,fVar5 - fStack0000000000000064,
                                  *(long *)(unaff_x20 + 0x58),0);
    } while ((((fVar5 < unaff_s9) || (unaff_s12 < fVar5)) || (unaff_s11 < fVar8)) ||
            ((fVar8 < unaff_s10 || (fVar5 = (float)FUN_07d2fdc0(&stack0x00000070,0), fVar6 <= fVar5)
             )));
    param_1 = &stack0x00000070;
    param_2 = 0;
  } while( true );
}


