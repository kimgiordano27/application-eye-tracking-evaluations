/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$Initialize
ENTRY_POINT: 0430d134
PROGRAM: m3ar-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking__Initialize(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  if ((param_1 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f73460);
    FUN_0403162c(PTR_DAT_08f688f0);
    FUN_0403162c(PTR_DAT_08f659c0);
    FUN_0403162c(PTR_DAT_08f659c8);
    FUN_0403162c(PTR_DAT_08f659d0);
    FUN_0403162c(PTR_DAT_08f659e8);
    FUN_0403162c(PTR_DAT_08f67918);
    FUN_0403162c(PTR_DAT_08f69718);
    FUN_0403162c(PTR_DAT_08f69770);
    FUN_0403162c(PTR_DAT_08f68a98);
    *(undefined1 *)(unaff_x21 + 0xda7) = 1;
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_0450ea40();
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar9 = FUN_044fe6f8();
  FUN_04500ffc(0x3e800000,uVar9,0);
  puVar8 = PTR_DAT_08f69770;
  puVar7 = PTR_DAT_08f69718;
  puVar6 = PTR_DAT_08f68a98;
  puVar5 = PTR_DAT_08f67918;
  puVar4 = PTR_DAT_08f659c8;
  puVar3 = PTR_DAT_08f659c0;
  if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
     (lVar10 = *(long *)(*(long *)(unaff_x19 + 0xb8) + 0x28), lVar10 != 0)) {
    FUN_057d5e44(&stack0x00000018,lVar10,*(undefined8 *)PTR_DAT_08f659e8);
    uVar2 = DAT_01a2eeb4;
    uVar1 = DAT_01a2ead8;
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000040 = in_stack_00000028;
    in_stack_00000018 = 0;
    in_stack_00000020 = &stack0x00000030;
    while( true ) {
      uVar11 = FUN_072066f4(&stack0x00000030,*(undefined8 *)puVar4);
      lVar10 = in_stack_00000040;
      if ((uVar11 & 1) == 0) {
        FUN_072066f0(&stack0x00000030,*(undefined8 *)puVar3);
        uVar12 = thunk_FUN_0406deb8(*(undefined8 *)puVar5);
        FUN_044fb3a8();
        FUN_045116e0(uVar9,uVar12,0);
        return;
      }
      uVar12 = FUN_0430d430();
      uVar12 = FUN_0450ce98(uVar2,lVar10,uVar12,1,1,10);
      uVar12 = FUN_04d5988c(uVar1,uVar12,*(undefined8 *)puVar8);
      FUN_0450c758(uVar9,uVar12,0);
      uVar12 = FUN_0450a3f0(0,0x3f000000,lVar10,0);
      uVar12 = FUN_04d591c8(uVar12,*(undefined8 *)puVar7);
      uVar12 = FUN_04d59a90(uVar12,0x1b,*(undefined8 *)puVar6);
      FUN_0450c758(uVar9,uVar12,0);
      if (*(long *)(unaff_x19 + 0x40) == 0) break;
      FUN_08598884(*(long *)(unaff_x19 + 0x40),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_0859895c(lVar10,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


