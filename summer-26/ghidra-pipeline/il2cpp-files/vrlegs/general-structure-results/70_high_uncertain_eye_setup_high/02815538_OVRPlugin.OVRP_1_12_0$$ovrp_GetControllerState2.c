/*
FUNCTION_NAME: OVRPlugin.OVRP_1_12_0$$ovrp_GetControllerState2
ENTRY_POINT: 02815538
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_12_0__ovrp_GetControllerState2(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  uint uVar6;
  long lVar7;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
    param_1 = *unaff_x21;
  }
  lVar7 = **(long **)(param_1 + 0xb8);
  if (lVar7 != 0) {
    if (unaff_w20 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = *(long *)(lVar7 + (long)(int)unaff_w20 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_02815634;
      uVar6 = *(uint *)(unaff_x19 + 6);
      if (uVar6 < *(uint *)(lVar7 + 0x18)) {
        iVar1 = *(int *)(lVar7 + (long)(int)uVar6 * 4 + 0x20);
        if (iVar1 != 9) {
          if (((uVar6 < 8) && ((1 << (ulong)(uVar6 & 0x1f) & 0xa8U) != 0)) && (unaff_w20 != 5)) {
            (**(code **)(*unaff_x19 + 0x268))();
          }
          if (*(int *)((long)unaff_x19 + 0x34) == 1) {
            uVar6 = *(uint *)(unaff_x19 + 6);
            if (uVar6 == 1) {
              (**(code **)(*unaff_x19 + 0x278))();
              uVar6 = *(uint *)(unaff_x19 + 6);
            }
            if (((uVar6 & 0xfffffffc) == 4) || ((unaff_w20 == 4 && (uVar6 != 0)))) {
              (**(code **)(*unaff_x19 + 600))();
            }
          }
          *(int *)(unaff_x19 + 6) = iVar1;
          return;
        }
        thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
        FUN_01876390();
        uVar2 = FUN_0271c480(0);
        in_stack_00000018 = thunk_FUN_01a6ca08(PTR_DAT_03cfdce8);
        in_stack_00000020 = 0xffffffffffffffff;
        uVar3 = FUN_027a62b8(&stack0x00000018,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cfe3d8);
        uVar4 = FUN_027a62b8();
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfe4a0);
        FUN_0282f9d0(uVar5,uVar2,uVar3,uVar4,0);
        uVar2 = FUN_02813870();
        uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03cfe4a8);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar2,uVar3);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_02815634:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


