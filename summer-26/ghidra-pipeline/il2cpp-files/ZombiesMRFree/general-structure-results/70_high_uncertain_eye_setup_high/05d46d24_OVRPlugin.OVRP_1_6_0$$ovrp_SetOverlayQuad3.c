/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetOverlayQuad3
ENTRY_POINT: 05d46d24
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_SetOverlayQuad3(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int in_w9;
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
  
code_r0x05d46d24:
  puVar1 = (undefined8 *)(param_1 + (long)(in_w9 + 9) * 0x10 + 0x138);
  while( true ) {
    uVar2 = (*(code *)*puVar1)(unaff_x22,unaff_w20,&stack0x00000008,puVar1[1]);
    if ((uVar2 & 1) == 0) goto LAB_05d46db0;
    if (in_stack_00000028 == 0) break;
    FUN_06975428(uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                 in_stack_00000028,0);
    if ((in_stack_00000028 == 0) ||
       (FUN_069754c0(uStack0000000000000014,uStack0000000000000018,uStack000000000000001c,
                     in_stack_00000020,in_stack_00000028,0), unaff_x21 == 0)) break;
    uVar2 = FUN_068f8b88(unaff_x21,0);
    if ((uVar2 & 1) == 0) {
      FUN_068f8b44(unaff_x21,1,0);
      if (in_stack_00000028 == 0) break;
      FUN_069755d0(in_stack_00000028,0);
    }
    while( true ) {
      do {
        unaff_w20 = unaff_w20 + 1;
        if (unaff_w20 == 0x1a) {
          return;
        }
        uVar2 = FUN_05d46608();
      } while ((uVar2 & 1) == 0);
      if (in_stack_00000028 == 0) goto LAB_05d46e04;
      unaff_x21 = FUN_068f5db8(in_stack_00000028,0);
      if (*(char *)(unaff_x19 + 0x80) != '\0') break;
LAB_05d46db0:
      if (unaff_x21 == 0) goto LAB_05d46e04;
      uVar2 = FUN_068f8b88(unaff_x21,0);
      if ((uVar2 & 1) != 0) {
        if (in_stack_00000028 == 0) goto LAB_05d46e04;
        FUN_06975558(in_stack_00000028,0);
        FUN_068f8b44(unaff_x21,0,0);
      }
    }
    unaff_x22 = *(long **)(unaff_x19 + 0x38);
    if (unaff_x22 == (long *)0x0) break;
    param_1 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *unaff_x23) {
          in_w9 = *piVar3;
          goto code_r0x05d46d24;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8(unaff_x22,*unaff_x23,9);
  }
LAB_05d46e04:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


