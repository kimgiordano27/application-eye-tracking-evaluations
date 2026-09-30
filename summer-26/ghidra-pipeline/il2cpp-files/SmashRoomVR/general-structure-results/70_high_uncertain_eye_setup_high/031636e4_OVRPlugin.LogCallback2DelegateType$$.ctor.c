/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$.ctor
ENTRY_POINT: 031636e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType___ctor(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  
  if ((DAT_03ff2060 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d806c8);
    thunk_FUN_01ad9084(PTR_DAT_03d806d0);
    DAT_03ff2060 = 1;
  }
  puVar1 = PTR_DAT_03d806c8;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  lVar10 = *(long *)(param_1 + 0x40);
  while (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x20) < 1) {
      return;
    }
    FUN_02d8cbb8(&stack0x000000a8,lVar10,*(undefined8 *)puVar1);
    uVar9 = uStack00000000000000c8;
    uVar8 = uStack00000000000000c0;
    uVar7 = uStack00000000000000bc;
    uVar6 = uStack00000000000000b8;
    uVar5 = uStack00000000000000b4;
    uVar4 = uStack00000000000000b0;
    uVar3 = uStack00000000000000ac;
    uVar2 = uStack00000000000000a8;
    FUN_03136ee0(&stack0x000000a8,*(undefined8 *)(param_1 + 0x20),0,0);
    in_stack_00000060 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    in_stack_00000068 = uStack00000000000000b0;
    uStack0000000000000074 = uStack00000000000000bc;
    in_stack_00000078 = uStack00000000000000c0;
    uStack000000000000006c = uStack00000000000000b4;
    in_stack_00000070 = uStack00000000000000b8;
    FUN_031638ac(uVar3,uVar4,uVar5,param_1,uVar9);
    FUN_03163a20(uVar6,uVar7,uVar8,uStack00000000000000c4,param_1,uStack00000000000000cc);
    FUN_03136ee0(&stack0x000000a8,*(undefined8 *)(param_1 + 0x20),0,0);
    in_stack_00000020 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    in_stack_00000028 = uStack00000000000000b0;
    uStack0000000000000034 = uStack00000000000000bc;
    in_stack_00000038 = uStack00000000000000c0;
    uStack000000000000002c = uStack00000000000000b4;
    in_stack_00000030 = uStack00000000000000b8;
    FUN_031375bc(&stack0x000000a8,&stack0x00000060,&stack0x00000020,0);
    uStack0000000000000054 = CONCAT44(uStack00000000000000c0,uStack00000000000000bc);
    in_stack_00000040 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
    uStack0000000000000050 = uStack00000000000000b8;
    in_stack_00000048 = uStack00000000000000b0;
    lVar10 = *(long *)(param_1 + 0x30);
    if (lVar10 == 0) break;
    in_stack_00000088 = uStack00000000000000b0;
    uStack0000000000000090 = uStack00000000000000b8;
    in_stack_00000080 = in_stack_00000040;
    uStack0000000000000094 = uStack0000000000000054;
    uStack00000000000000a8 = uVar2;
    uStack00000000000000ac = uVar3;
    uStack00000000000000b0 = uVar4;
    uStack00000000000000b4 = uVar5;
    uStack00000000000000b8 = uVar6;
    uStack00000000000000bc = uVar7;
    uStack00000000000000c0 = uVar8;
    uStack00000000000000c8 = uVar9;
    (**(code **)(lVar10 + 0x18))
              (*(undefined8 *)(lVar10 + 0x40),&stack0x000000a8,&stack0x00000080,
               *(undefined8 *)(lVar10 + 0x28));
    lVar10 = *(long *)(param_1 + 0x40);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


