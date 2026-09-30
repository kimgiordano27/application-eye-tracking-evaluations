/*
FUNCTION_NAME: OVRPlugin.OVRP_1_46_0$$.cctor
ENTRY_POINT: 090d033c
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_46_0___cctor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
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
  
code_r0x090d033c:
  FUN_0a1f9eb4(uStack0000000000000014,uStack0000000000000018,param_3,param_4,param_5,0);
  if (unaff_x21 == 0) {
LAB_090d03d4:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar2 = FUN_0a17bad0(unaff_x21,0);
  if ((uVar2 & 1) == 0) {
    FUN_0a17ba14(unaff_x21,1,0);
    if (in_stack_00000028 == 0) goto LAB_090d03d4;
    FUN_0a1fa0f0(in_stack_00000028,0);
  }
LAB_090d03b4:
  do {
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w20 == 0x1a) {
      return;
    }
    uVar2 = FUN_090cfbe4();
  } while ((uVar2 & 1) == 0);
  if (in_stack_00000028 == 0) goto LAB_090d03d4;
  unaff_x21 = FUN_0a178414(in_stack_00000028,0);
  if (*(char *)(unaff_x19 + 0x80) != '\0') {
    plVar5 = *(long **)(unaff_x19 + 0x38);
    if (plVar5 == (long *)0x0) goto LAB_090d03d4;
    lVar3 = *plVar5;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_090d0300;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar5,*unaff_x23,9);
LAB_090d0300:
    uVar2 = (*(code *)*puVar1)(plVar5,unaff_w20,&stack0x00000008,puVar1[1]);
    if ((uVar2 & 1) != 0) goto code_r0x090d0318;
  }
  if (unaff_x21 == 0) goto LAB_090d03d4;
  uVar2 = FUN_0a17bad0(unaff_x21,0);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 090d0398 to 091d0643 has its CatchHandler @ 090d0398
                       catch() { ... } // from try @ 090d0398 with catch @ 090d0398
                       catch() { ... } // from try @ 090d08e0 with catch @ 090d0398
                       catch() { ... } // from try @ 090d0924 with catch @ 090d0398
                       catch() { ... } // from try @ 090d0978 with catch @ 090d0398
                       catch() { ... } // from try @ 090d0990 with catch @ 090d0398
                       catch() { ... } // from try @ 090d09e4 with catch @ 090d0398 */
    if (in_stack_00000028 == 0) goto LAB_090d03d4;
    FUN_0a1f9f88(in_stack_00000028,0);
    FUN_0a17ba14(unaff_x21,0,0);
  }
  goto LAB_090d03b4;
code_r0x090d0318:
  if ((in_stack_00000028 == 0) ||
     (FUN_0a1f9de0(uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                   in_stack_00000028,0), param_5 = in_stack_00000028,
     param_3 = uStack000000000000001c, param_4 = in_stack_00000020, in_stack_00000028 == 0))
  goto LAB_090d03d4;
  goto code_r0x090d033c;
}


