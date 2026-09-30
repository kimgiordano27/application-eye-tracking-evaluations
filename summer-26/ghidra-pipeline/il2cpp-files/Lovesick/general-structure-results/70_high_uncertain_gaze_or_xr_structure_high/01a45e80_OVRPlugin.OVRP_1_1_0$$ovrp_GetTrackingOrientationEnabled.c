/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingOrientationEnabled
ENTRY_POINT: 01a45e80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_1
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingOrientationEnabled(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x22;
  long *unaff_x24;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  uStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = StringLiteral_6668;
  pvVar8 = (void *)FUN_01a44d20();
  if (unaff_x22 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                      ();
  }
  lVar9 = FUN_00da4fb8(*(undefined8 *)puVar2,iVar7 << 1);
  puVar6 = StringLiteral_7580;
  puVar5 = StringLiteral_6807;
  puVar4 = Method_Obi_ObiPathDataChannelIdentity<float>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<GenericDropdownMenu_MenuItem>_Add__;
  puVar2 = System_Predicate<Volume>_TypeInfo;
  if (0 < iVar7) {
    if (unaff_x22 == 0) goto LAB_01a460dc;
    FUN_0129b5d0();
    uVar13 = 1;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000058 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000060 = in_stack_00000028;
    while (uVar10 = FUN_012bf140(&stack0x00000040,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
      auVar14 = FUN_00bc1db0(&stack0x00000040,*(undefined8 *)puVar4);
      _uStack0000000000000030 = auVar14;
      uVar11 = FUN_00ad598c(&stack0x00000030,*(undefined8 *)puVar3);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_01a44d20(uVar11);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar13 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(undefined8 *)(lVar9 + (long)(int)(uVar13 - 1) * 8 + 0x20) = uVar11;
      FUN_00ad5c80(&stack0x00000030,*(undefined8 *)puVar6);
      uVar11 = FUN_01a44d20();
      if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar1 = (long)(int)uVar13;
      uVar13 = uVar13 + 2;
      *(undefined8 *)(lVar9 + lVar1 * 8 + 0x20) = uVar11;
    }
    FUN_012bf83c(&stack0x00000040,*(undefined8 *)puVar2);
  }
  if (*(int *)(*(long *)PTR_DAT_033f1148 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = StringLiteral_5238;
  uVar11 = FUN_017cc47c((long)iVar7,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x24);
  }
  FUN_01a46164(pvVar8,lVar9,uVar11);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  free(pvVar8);
  if (lVar9 != 0) {
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar10 = 0;
      uVar12 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        pvVar8 = *(void **)(lVar9 + 0x20 + uVar10 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        free(pvVar8);
        uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    return;
  }
LAB_01a460dc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


