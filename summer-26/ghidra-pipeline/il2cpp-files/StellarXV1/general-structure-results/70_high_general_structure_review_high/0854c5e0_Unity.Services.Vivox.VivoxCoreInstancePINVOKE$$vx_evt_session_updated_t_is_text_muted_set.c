/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_is_text_muted_set
ENTRY_POINT: 0854c5e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_is_text_muted_set(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000128;
  long in_stack_00000348;
  
  FUN_04077588(PTR_DAT_0932c538);
  FUN_04077588(PTR_DAT_0932e420);
  *(undefined1 *)(unaff_x26 + 0x9e3) = 1;
  puVar2 = PTR_DAT_092ba880;
  memset(&stack0x00000284,0,0xc4);
  iVar1 = *(int *)(*unaff_x25 + 0xe4);
  *(undefined8 *)((long)unaff_x24 + 0x94) = 0;
  *(undefined8 *)((long)unaff_x24 + 0x8c) = 0;
  unaff_x24[7] = 0;
  unaff_x24[6] = 0;
  unaff_x24[9] = 0;
  unaff_x24[8] = 0;
  unaff_x24[0xb] = 0;
  unaff_x24[10] = 0;
  unaff_x24[0xd] = 0;
  unaff_x24[0xc] = 0;
  unaff_x24[0xf] = 0;
  unaff_x24[0xe] = 0;
  unaff_x24[0x11] = 0;
  unaff_x24[0x10] = 0;
  unaff_x24[0x15] = 0;
  unaff_x24[0x14] = 0;
  unaff_x24[0x17] = 0;
  unaff_x24[0x16] = 0;
  if (iVar1 == 0) {
    thunk_FUN_040d65a8();
  }
  puVar3 = PTR_DAT_0932c890;
  FUN_0854c3cc(&stack0x00000284);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar5 = FUN_08a03c40(0);
  uVar6 = *(undefined8 *)puVar3;
  in_stack_00000128 = 0;
  unaff_x24[4] = 0;
  FUN_0601aa2c(&stack0x00000120,uVar5,uVar6);
  if (unaff_x22 != 0) {
    uVar4 = FUN_089787f0();
    UnityEngine_UIElements_InlineStyleAccessPropertyBag_PaddingRightProperty___ctor
              (&stack0x000001a0,unaff_x24[4],in_stack_00000128,uVar4,0xffffffff,0,0);
    FUN_08a01184(&stack0x000001a0,1,0);
    FUN_08a03dd0(&stack0x00000130,0,0);
    unaff_x24[1] = unaff_x24[0x15];
    *unaff_x24 = unaff_x24[0x14];
    unaff_x24[3] = unaff_x24[0x17];
    unaff_x24[2] = unaff_x24[0x16];
    memcpy(&stack0x00000094,&stack0x00000130,0x6c);
    if (*unaff_x21 != 0) {
      if (*(int *)(*(long *)PTR_DAT_0932c538 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      memcpy(&stack0x000001c0,&stack0x00000284,0xc4);
      in_stack_00000078 = unaff_x24[1];
      in_stack_00000070 = *unaff_x24;
      in_stack_00000088 = unaff_x24[3];
      in_stack_00000080 = unaff_x24[2];
      memcpy(&stack0x00000004,&stack0x00000094,0x6c);
      FUN_085597f0();
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000348) {
        return;
      }
      goto LAB_0854c794;
    }
  }
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000348) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
LAB_0854c794:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


