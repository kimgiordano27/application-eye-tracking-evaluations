/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerStart
ENTRY_POINT: 01a43c7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerStart(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  iVar8 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                    ();
  puVar7 = StringLiteral_7225;
  puVar6 = Method_Oculus_Interaction_PointableCanvasModule_<Start>b__40_0__;
  puVar5 = Method_System_Collections_Generic_HashSet<string>_get_Count__;
  puVar4 = Method_System_Collections_Generic_HashSet<RTHandle>_CopyTo__;
  puVar3 = Method_System_Collections_Generic_Dictionary<Guid,_XRReferenceImage>_Add__;
  puVar2 = PTR_DAT_033ec520;
  if (iVar8 == 0) {
    lVar11 = 0;
  }
  else {
    uVar9 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                      ();
    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar9);
    FUN_0129b5d0();
    uVar1 = DAT_028ab160;
    in_stack_00000030 = in_stack_00000010;
    uVar15 = 0;
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000038 = in_stack_00000018;
    while (uVar12 = FUN_012bf140(&stack0x00000020,*(undefined8 *)puVar7), (uVar12 & 1) != 0) {
      in_stack_00000048 = FUN_00bff814(&stack0x00000020,*(undefined8 *)puVar6);
      FUN_00bff91c(&stack0x00000048,*(undefined8 *)puVar2);
      uVar13 = FUN_017a7f78();
      uVar10 = FUN_00bffa20(&stack0x00000048,*(undefined8 *)puVar5);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar14 = lVar11 + (long)(int)uVar15 * 0x28;
      uVar15 = uVar15 + 1;
      *(undefined8 *)(lVar14 + 0x20) = uVar13;
      *(undefined8 *)(lVar14 + 0x28) = uVar1;
      *(undefined8 *)(lVar14 + 0x30) = 0;
      *(uint *)(lVar14 + 0x38) = uVar10 & 1;
      *(undefined4 *)(lVar14 + 0x3c) = 0;
      *(undefined8 *)(lVar14 + 0x40) = 0;
    }
    FUN_012bf83c(&stack0x00000020,*(undefined8 *)puVar4);
  }
  return lVar11;
}


