/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_pf_on_assert_set
ENTRY_POINT: 078896d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07889848) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_on_assert_set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long extraout_x1;
  long lVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *in_stack_00000018;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_0788970c;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
                    /* try { // try from 078896ec to 079896f7 has its CatchHandler @ 0788a6a0 */
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_03ac43c4(unaff_x20,param_3,0);
LAB_0788970c:
      uVar2 = (*(code *)*puVar1)(unaff_x20,puVar1[1]);
      if ((uVar2 & 1) == 0) {
        if (in_stack_00000018 == (long *)0x0) {
          return;
        }
        lVar3 = *in_stack_00000018;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_078897f0;
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_on_audio_unit_requesting_final_mix_for_echo_canceller_analysis_set
        ;
      }
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar3 = *in_stack_00000018;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_07889770;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*unaff_x23,0);
LAB_07889770:
      (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
      if (extraout_x1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_045b70b8(extraout_x1,*unaff_x24);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_078f6ab0();
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      param_1 = *in_stack_00000018;
      param_3 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      unaff_x20 = in_stack_00000018;
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;

    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_on_audio_unit_requesting_final_mix_for_echo_canceller_analysis_set
    :
    if (*(long *)(piVar4 + -2) == *unaff_x21) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0788980c;
    }
  }
LAB_078897f0:
  puVar1 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*unaff_x21,0);
LAB_0788980c:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


