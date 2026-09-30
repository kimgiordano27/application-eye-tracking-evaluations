/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_GetInsightPassthroughInitializationState
ENTRY_POINT: 07a6bcec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_66_0__ovrp_GetInsightPassthroughInitializationState(void)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  uint uVar9;
  long unaff_x20;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092f0f78);
  FUN_04077588(PTR_DAT_092f0f80);
  FUN_04077588(PTR_DAT_092f0f88);
  *(undefined1 *)(unaff_x19 + 0x613) = 1;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  if ((unaff_x20 != 0) &&
     (iVar3 = System_Array_EmptyInternalEnumerator<XmlSqlBinaryReader_ElemInfo>___ctor(), iVar3 != 0
     )) {
    uVar4 = System_Array_EmptyInternalEnumerator<XmlSqlBinaryReader_ElemInfo>___ctor();
    lVar5 = FUN_04077674(*(undefined8 *)PTR_DAT_092f0f88,uVar4);
    FUN_06fdcca0(&stack0x00000040);
    puVar1 = PTR_DAT_092f0f60;
    in_stack_00000030 = 0;
    uVar9 = 0;
    in_stack_00000038 = &stack0x00000040;
    while( true ) {
      uVar6 = FUN_053a9524(&stack0x00000040,*(undefined8 *)puVar1);
      uVar2 = in_stack_00000050;
      if ((uVar6 & 1) == 0) {
        FUN_053a9634(&stack0x00000040,*(undefined8 *)PTR_DAT_092f0f58);
        return lVar5;
      }
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)in_stack_00000050);
      uVar7 = FUN_076b01b4();
      in_stack_00000020 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      thunk_FUN_040ec700();
      in_stack_00000010 = 0;
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,(uint)((uVar2 & 0xff00000000) != 0));
      thunk_FUN_040ec700(&stack0x00000010,0);
      in_stack_00000020 = 0;
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar8 = lVar5 + (long)(int)uVar9 * 0x28;
      *(undefined8 *)(lVar8 + 0x40) = 0;
      *(undefined8 *)(lVar8 + 0x28) = 1;
      *(undefined8 *)(lVar8 + 0x20) = uVar7;
      *(undefined8 *)(lVar8 + 0x38) = in_stack_00000018;
      *(undefined8 *)(lVar8 + 0x30) = in_stack_00000010;
      thunk_FUN_040ec700(lVar5 + 0x20 + (long)(int)uVar9 * 0x28,0);
      uVar9 = uVar9 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  return 0;
}


