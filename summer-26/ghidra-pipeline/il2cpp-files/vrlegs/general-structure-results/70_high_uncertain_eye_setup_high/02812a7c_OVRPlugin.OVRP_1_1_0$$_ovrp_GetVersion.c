/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetVersion
ENTRY_POINT: 02812a7c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_1_0___ovrp_GetVersion
              (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 in_stack_00000028;
  
  uStack0000000000000018 = param_3;
  uStack0000000000000020 = param_4;
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbf088);
    FUN_01ab69ac(PTR_DAT_03cfdb18);
    FUN_01ab69ac(PTR_DAT_03cf5f18);
    *(undefined1 *)(unaff_x20 + 0x354) = 1;
  }
  FUN_02811d54();
  puVar3 = PTR_DAT_03cbf088;
  lVar8 = *(long *)(unaff_x19 + 0x90);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(undefined2 *)(lVar8 + 0x20) = *(undefined2 *)(unaff_x19 + 0x80);
      iVar1 = *(int *)(unaff_x19 + 0x3c);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (iVar1 == 0) {
        uVar7 = FUN_0274a490(&stack0x00000018,0);
      }
      else {
        uVar7 = FUN_0274a5b4();
      }
      puVar5 = PTR_DAT_03cfdb18;
      puVar4 = PTR_DAT_03cf5f18;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      in_stack_00000028 = FUN_0274a73c(&stack0x00000018,0);
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_02241190(&stack0x00000008,&stack0x00000028,*(undefined8 *)puVar4);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x3c);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_02821cb8(lVar8,1,uVar7,in_stack_00000008,in_stack_00000010,2,uVar2,0);
      lVar8 = *(long *)(unaff_x19 + 0x90);
      if (lVar8 == 0) goto LAB_02812bbc;
      if (uVar6 < *(uint *)(lVar8 + 0x18)) {
        *(undefined2 *)(lVar8 + (long)(int)uVar6 * 2 + 0x20) = *(undefined2 *)(unaff_x19 + 0x80);
        return uVar6 + 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_02812bbc:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


