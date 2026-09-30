/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$.cctor
ENTRY_POINT: 05d48fc8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  
  piVar7 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_05d49000;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_02feb5b8();
LAB_05d49000:
  iVar3 = (*(code *)*puVar4)();
  puVar2 = PTR_DAT_06fb8e50;
  puVar1 = PTR_DAT_06fb4a48;
  if (iVar3 == 0x1a) {
    iVar3 = 0;
    do {
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05d49078;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02feb5b8();
LAB_05d49078:
      (*(code *)*puVar4)(&stack0x00000060);
      in_stack_00000088 = in_stack_00000068;
      in_stack_00000080 = in_stack_00000060;
      uStack0000000000000094 = uStack0000000000000074;
      uStack0000000000000090 = uStack0000000000000070;
      if ((unaff_x19 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        in_stack_00000028 = in_stack_00000068;
        in_stack_00000020 = in_stack_00000060;
        uStack0000000000000034 = uStack0000000000000074;
        uStack0000000000000030 = uStack0000000000000070;
        FUN_05d450ac(&stack0x00000040,&stack0x00000020,0);
        in_stack_00000088 = in_stack_00000048;
        in_stack_00000080 = in_stack_00000040;
        uStack0000000000000094 = uStack0000000000000054;
        uStack0000000000000090 = uStack0000000000000050;
      }
      in_stack_00000068 = in_stack_00000088;
      in_stack_00000060 = in_stack_00000080;
      uStack0000000000000074 = uStack0000000000000094;
      uStack0000000000000070 = uStack0000000000000090;
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_05d488a0();
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x1a);
  }
  return;
}


