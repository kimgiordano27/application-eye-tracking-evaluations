/*
FUNCTION_NAME: OVRPlugin.OVRP_1_46_0$$ovrp_SetTiledMultiResDynamic
ENTRY_POINT: 090d02c0
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_46_0__ovrp_SetTiledMultiResDynamic
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong in_x9;
  int *piVar3;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  long in_stack_00000028;
  
  do {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 9) * 0x10 + 0x138);
        goto LAB_090d0300;
      }
      in_x9 = in_x9 - 1;
      piVar3 = piVar3 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_04980e68(unaff_x22,param_3,9);
LAB_090d0300:
      uVar2 = (*(code *)*puVar1)(unaff_x22,unaff_w20,&stack0x00000008,puVar1[1]);
      if ((uVar2 & 1) == 0) goto LAB_090d0380;
      if (in_stack_00000028 == 0) {
LAB_090d03d4:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_0a1f9de0(uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                   in_stack_00000028,0);
      if ((in_stack_00000028 == 0) ||
         (FUN_0a1f9eb4(uStack0000000000000014,uStack0000000000000018,uStack000000000000001c,
                       in_stack_00000020,in_stack_00000028,0), unaff_x21 == 0)) goto LAB_090d03d4;
      uVar2 = FUN_0a17bad0(unaff_x21,0);
      if ((uVar2 & 1) == 0) {
        FUN_0a17ba14(unaff_x21,1,0);
        if (in_stack_00000028 == 0) goto LAB_090d03d4;
        FUN_0a1fa0f0(in_stack_00000028,0);
      }
      while( true ) {
        do {
          unaff_w20 = unaff_w20 + 1;
          if (unaff_w20 == 0x1a) {
            return;
          }
          uVar2 = FUN_090cfbe4();
        } while ((uVar2 & 1) == 0);
        if (in_stack_00000028 == 0) goto LAB_090d03d4;
        unaff_x21 = FUN_0a178414(in_stack_00000028,0);
        if (*(char *)(unaff_x19 + 0x80) != '\0') break;
LAB_090d0380:
        if (unaff_x21 == 0) goto LAB_090d03d4;
        uVar2 = FUN_0a17bad0(unaff_x21,0);
        if ((uVar2 & 1) != 0) {
          if (in_stack_00000028 == 0) goto LAB_090d03d4;
          FUN_0a1f9f88(in_stack_00000028,0);
          FUN_0a17ba14(unaff_x21,0,0);
        }
      }
      unaff_x22 = *(long **)(unaff_x19 + 0x38);
      if (unaff_x22 == (long *)0x0) goto LAB_090d03d4;
      param_1 = *unaff_x22;
      param_3 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
}


