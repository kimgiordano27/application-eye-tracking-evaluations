/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetFaceTrackingVisemesSupported
ENTRY_POINT: 05172c24
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_104_0__ovrp_GetFaceTrackingVisemesSupported(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  uint uVar9;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  
  FUN_02d6084c(PTR_DAT_06782a58);
  FUN_02d6084c(PTR_DAT_06782a60);
  FUN_02d6084c(PTR_DAT_06782a68);
  FUN_02d6084c(PTR_DAT_06782a70);
  FUN_02d6084c(PTR_DAT_06782a78);
  FUN_02d6084c(PTR_DAT_06782a80);
  FUN_02d6084c(PTR_DAT_06782a88);
  FUN_02d6084c(PTR_DAT_06782a90);
  FUN_02d6084c(PTR_DAT_06782a98);
  *(undefined1 *)(unaff_x19 + 0xee3) = 1;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  if ((unaff_x20 != 0) && (iVar4 = FUN_04938770(), iVar4 != 0)) {
    uVar5 = FUN_04938770();
    lVar6 = FUN_02d60934(*(undefined8 *)PTR_DAT_06782a98,uVar5);
    FUN_04938eb4(&stack0x00000060);
    puVar2 = PTR_DAT_06782a80;
    puVar1 = PTR_DAT_06782a70;
    uVar9 = 0;
    while( true ) {
      uVar7 = FUN_04b51a98(&stack0x00000060,*(undefined8 *)puVar1);
      uVar3 = in_stack_00000070;
      if ((uVar7 & 1) == 0) {
        System_Collections_Generic_EqualityComparer<XrCompositionLayerCylinderKHR>__get_Default
                  (&stack0x00000060,*(undefined8 *)PTR_DAT_06782a68);
        return lVar6;
      }
      in_stack_00000030 = *(undefined8 *)puVar2;
      in_stack_00000038 = 0xffffffffffffffff;
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,(int)in_stack_00000070);
      in_stack_00000030 = FUN_0503c914(&stack0x00000030,0);
      in_stack_00000038 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000050 = 0;
      thunk_FUN_02dd37b4(&stack0x00000030);
      in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,1);
      in_stack_00000048 = CONCAT44(in_stack_00000048._4_4_,(uint)((uVar3 & 0xff00000000) != 0));
      in_stack_00000040 = 0;
      thunk_FUN_02dd37b4(&stack0x00000040,0);
      in_stack_00000050 = 0;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      lVar8 = lVar6 + (long)(int)uVar9 * 0x28;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(undefined8 *)(lVar8 + 0x28) = in_stack_00000038;
      *(undefined8 *)(lVar8 + 0x20) = in_stack_00000030;
      *(undefined8 *)(lVar8 + 0x38) = in_stack_00000048;
      *(undefined8 *)(lVar8 + 0x30) = in_stack_00000040;
      thunk_FUN_02dd37b4(lVar8 + 0x20,0);
      uVar9 = uVar9 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  return 0;
}


