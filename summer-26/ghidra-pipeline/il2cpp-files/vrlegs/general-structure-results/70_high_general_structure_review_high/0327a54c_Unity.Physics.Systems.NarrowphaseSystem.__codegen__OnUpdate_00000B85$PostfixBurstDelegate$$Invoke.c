/*
FUNCTION_NAME: Unity.Physics.Systems.NarrowphaseSystem.__codegen__OnUpdate_00000B85$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0327a54c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Physics_Systems_NarrowphaseSystem___codegen__OnUpdate_00000B85_PostfixBurstDelegate__Invoke
               (void)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_w8;
  int in_w9;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x22;
  undefined4 in_stack_00000008;
  
  if (in_w9 < in_w8) {
    if (in_w8 == 0x464c5420) {
      uVar3 = FUN_03297d7c(&stack0x00000010,0,0);
      *unaff_x19 = uVar3;
    }
    else {
      if (in_w8 != 0x494e5420) goto LAB_0327a76c;
      uVar3 = FUN_03297bf4(&stack0x00000010,0,0);
      *unaff_x19 = uVar3;
    }
  }
  else if (in_w8 == 0x42495420) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      iVar1 = unaff_x20[3];
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
    }
    else {
      iVar1 = unaff_x20[3];
    }
    if (iVar1 == 1) {
      FUN_032979e4(&stack0x00000010,0,0);
      FUN_03294dac();
    }
    else {
      FUN_03298be8(&stack0x00000010,0,0);
      FUN_03294fc4();
    }
  }
  else {
    if (in_w8 != 0x42595445) {
LAB_0327a76c:
      uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03d13488);
      uVar4 = thunk_FUN_01a89a98(uVar4,&stack0x0000000c);
      thunk_FUN_01a6ca08(PTR_DAT_03cd8408);
      FUN_01876390();
      in_stack_00000008 = *unaff_x20;
      uVar5 = thunk_FUN_01a6ca08(DG_Tweening_Plugins_Core_PathCore_ControlPoint___TypeInfo);
      uVar5 = thunk_FUN_01a89a98(uVar5,&stack0x00000008);
      uVar6 = thunk_FUN_01a6ca08(Gameplay_AudioAndVFX_CharacterEffectInvoker_TypeInfo);
      uVar4 = FUN_025be86c(uVar6,uVar4,uVar5,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
      uVar5 = thunk_FUN_01a89e68();
      FUN_0276e9b0(uVar5,uVar4,0);
      uVar4 = thunk_FUN_01a6ca08(_Common_Gameplay_Support_Scripts_PowerSystem_ChargeStation_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar4);
    }
    uVar2 = FUN_03297b88(&stack0x00000010,0,0);
    *(undefined1 *)unaff_x19 = uVar2;
  }
  return;
}


