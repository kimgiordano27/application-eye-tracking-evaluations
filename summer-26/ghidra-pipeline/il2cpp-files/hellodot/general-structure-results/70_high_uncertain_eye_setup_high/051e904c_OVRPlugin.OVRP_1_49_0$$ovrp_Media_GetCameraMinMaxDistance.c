/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraMinMaxDistance
ENTRY_POINT: 051e904c
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;weak_vector_component_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraMinMaxDistance(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x19;
  uint uVar11;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066094c0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066094c8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066094d0);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066094d8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066094e0);
  *(undefined1 *)(unaff_x19 + 0x66b) = 1;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if ((unaff_x20 != 0) && (iVar5 = FUN_0470f0f4(), iVar5 != 0)) {
    uVar6 = FUN_0470f0f4();
    lVar7 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_066094e0,uVar6);
    FUN_0470f7d8(&stack0x00000020);
    puVar3 = PTR_DAT_066094c8;
    puVar2 = PTR_DAT_066094b8;
    uVar1 = DAT_0137ede8;
    uVar11 = 0;
    while( true ) {
      uVar8 = FUN_048bdb00(&stack0x00000020,*(undefined8 *)puVar2);
      uVar4 = in_stack_00000030;
      if ((uVar8 & 1) == 0) {
        FUN_048bdc08(&stack0x00000020,*(undefined8 *)PTR_DAT_066094b0);
        return lVar7;
      }
      in_stack_00000008 = *(undefined8 *)puVar3;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000018 = (undefined4)in_stack_00000030;
      uVar9 = FUN_04f67024(&stack0x00000008,0);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      lVar10 = lVar7 + (long)(int)uVar11 * 0x28;
      uVar11 = uVar11 + 1;
      *(undefined8 *)(lVar10 + 0x20) = uVar9;
      *(undefined8 *)(lVar10 + 0x28) = uVar1;
      *(undefined8 *)(lVar10 + 0x30) = 0;
      *(uint *)(lVar10 + 0x38) = (uint)((uVar4 & 0xff00000000) != 0);
      *(undefined4 *)(lVar10 + 0x3c) = 0;
      *(undefined8 *)(lVar10 + 0x40) = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  return 0;
}


