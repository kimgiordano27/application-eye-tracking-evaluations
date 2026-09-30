/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_sdk_config_t_pf_on_assert_get
ENTRY_POINT: 0788975c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07889848) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_on_assert_get
               (long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long extraout_x1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *in_stack_00000018;
  
code_r0x0788975c:
  puVar1 = (undefined8 *)FUN_03ac43c4(param_1,param_2,param_3);
  do {
    (*(code *)*puVar1)(unaff_x20,puVar1[1]);
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
    lVar2 = *in_stack_00000018;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0788970c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*unaff_x22,0);
LAB_0788970c:
    uVar3 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000018;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_078897f0;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto 
      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_on_audio_unit_requesting_final_mix_for_echo_canceller_analysis_set
      ;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar2 = *in_stack_00000018;
    param_2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    unaff_x20 = in_stack_00000018;
    if (uVar3 == 0) break;
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    while (*(long *)(piVar4 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
      if (uVar3 == 0) goto LAB_07889754;
    }
    puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
  } while( true );
LAB_07889754:
  param_3 = 0;
  param_1 = in_stack_00000018;
  goto code_r0x0788975c;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;

    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_sdk_config_t_pf_on_audio_unit_requesting_final_mix_for_echo_canceller_analysis_set
    :
    if (*(long *)(piVar4 + -2) == *unaff_x21) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_0788980c;
    }
  }
LAB_078897f0:
  puVar1 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*unaff_x21,0);
LAB_0788980c:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


