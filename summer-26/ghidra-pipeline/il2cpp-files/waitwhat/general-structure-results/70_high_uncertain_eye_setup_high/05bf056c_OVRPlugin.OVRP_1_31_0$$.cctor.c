/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$.cctor
ENTRY_POINT: 05bf056c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_31_0___cctor(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  long *plVar5;
  long *unaff_x24;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  long in_stack_00000028;
  
  do {
    FUN_06a64884(param_1,param_2);
    FUN_069d7048(unaff_x22,0,0);
LAB_05bf0580:
    do {
      do {
        unaff_w20 = unaff_w20 + 1;
        if (unaff_w20 == 0x13) {
          return;
        }
        uVar1 = FUN_05befca0();
      } while ((uVar1 & 1) == 0);
      if (in_stack_00000028 == 0) goto LAB_05bf05a4;
      unaff_x22 = FUN_069d3b50(in_stack_00000028,0);
      if (*(char *)(unaff_x19 + 0x80) != '\0') {
        plVar5 = *(long **)(unaff_x19 + 0x38);
        if (plVar5 == (long *)0x0) goto LAB_05bf05a4;
        lVar3 = *plVar5;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
              goto LAB_05bf04dc;
            }
            uVar1 = uVar1 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar1 != 0);
        }
        puVar2 = (undefined8 *)FUN_031c0d08(plVar5,*unaff_x24,9);
LAB_05bf04dc:
        uVar1 = (*(code *)*puVar2)(plVar5,unaff_w20);
        if ((uVar1 & 1) != 0) {
          FUN_06a646dc(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                       in_stack_00000028,0);
          FUN_06a647b0(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                       in_stack_00000018,in_stack_00000028,0);
          if (unaff_x22 == 0) goto LAB_05bf05a4;
          uVar1 = FUN_069d710c(unaff_x22,0);
          if ((uVar1 & 1) == 0) {
            FUN_069d7048(unaff_x22,1,0);
            FUN_06a64938(in_stack_00000028,0);
          }
          goto LAB_05bf0580;
        }
      }
      if (unaff_x22 == 0) {
LAB_05bf05a4:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar1 = FUN_069d710c(unaff_x22,0);
    } while ((uVar1 & 1) == 0);
    param_2 = 0;
    param_1 = in_stack_00000028;
  } while( true );
}


