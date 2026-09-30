/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 07ca1e44
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplCreateMarkerHandle(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *plVar5;
  long *unaff_x23;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  long in_stack_00000028;
  
  while( true ) {
    FUN_0952a454(unaff_x21,1,0);
    if (in_stack_00000028 == 0) break;
    FUN_095bcd48(in_stack_00000028,0);
    do {
      while( true ) {
        do {
          unaff_w20 = unaff_w20 + 1;
          if (unaff_w20 == 0x1a) {
            return;
          }
          uVar1 = FUN_07ca16c0();
        } while ((uVar1 & 1) == 0);
        if (in_stack_00000028 == 0) goto LAB_07ca1ebc;
        unaff_x21 = FUN_095259a0(in_stack_00000028,0);
        if (*(char *)(unaff_x19 + 0x80) != '\0') break;
LAB_07ca1e68:
        if (unaff_x21 == 0) goto LAB_07ca1ebc;
        uVar1 = FUN_0952a518(unaff_x21,0);
        if ((uVar1 & 1) != 0) {
          if (in_stack_00000028 == 0) goto LAB_07ca1ebc;
          FUN_095bcc94(in_stack_00000028,0);
          FUN_0952a454(unaff_x21,0,0);
        }
      }
      plVar5 = *(long **)(unaff_x19 + 0x38);
      if (plVar5 == (long *)0x0) goto LAB_07ca1ebc;
      lVar3 = *plVar5;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
            goto LAB_07ca1de8;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_044822ac(plVar5,*unaff_x23,9);
LAB_07ca1de8:
      uVar1 = (*(code *)*puVar2)(plVar5,unaff_w20,&stack0x00000008,puVar2[1]);
      if ((uVar1 & 1) == 0) goto LAB_07ca1e68;
      if (in_stack_00000028 == 0) goto LAB_07ca1ebc;
      FUN_095bcaec(uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                   in_stack_00000028,0);
      if ((in_stack_00000028 == 0) ||
         (FUN_095bcbc0(uStack0000000000000014,uStack0000000000000018,uStack000000000000001c,
                       in_stack_00000020,in_stack_00000028,0), unaff_x21 == 0)) goto LAB_07ca1ebc;
      uVar1 = FUN_0952a518(unaff_x21,0);
    } while ((uVar1 & 1) != 0);
  }
LAB_07ca1ebc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


