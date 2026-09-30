/*
FUNCTION_NAME: Shapes.Draw.OnPreRenderTmpDelegate$$BeginInvoke
ENTRY_POINT: 037afe14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Shapes_Draw_OnPreRenderTmpDelegate__BeginInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar11;
  long unaff_x23;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000058;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__);
  thunk_FUN_01efb3a4(StringLiteral_585);
  thunk_FUN_01efb3a4(StringLiteral_586);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  thunk_FUN_01efb3a4(StringLiteral_516);
  thunk_FUN_01efb3a4(StringLiteral_587);
  thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
  thunk_FUN_01efb3a4(StringLiteral_588);
  *(undefined1 *)(unaff_x23 + 0x568) = 1;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__;
  in_stack_00000058 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar11 = *unaff_x19;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_0378fd84(uVar11,&stack0x00000058,0);
  if ((uVar5 & 1) == 0) {
    lVar8 = *(long *)
             Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Add__;
    lVar6 = *(long *)(lVar8 + 0x38);
    if (lVar6 == 0) {
      FUN_01ecafa0(lVar8);
      lVar6 = *(long *)(lVar8 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
  }
  else {
    if (in_stack_00000058 == 0) goto LAB_037b026c;
    lVar6 = FUN_03410dc4(in_stack_00000058,0x2c,0,0);
  }
  puVar3 = StringLiteral_583;
  puVar2 = StringLiteral_581;
  puVar1 = StringLiteral_580;
  if (*(long *)(unaff_x21 + 0x30) == 0) {
LAB_037b026c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < *(int *)(*(long *)(unaff_x21 + 0x30) + 0x18)) {
    if (lVar6 == 0) goto LAB_037b026c;
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar5 = 0;
      uVar9 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar5) goto LAB_037b0268;
        uVar12 = *(undefined8 *)(lVar6 + uVar5 * 8 + 0x20);
        uVar9 = FUN_0340eec4(uVar12,0);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(unaff_x21 + 0x30) == 0) goto LAB_037b026c;
          FUN_030f35d0(&stack0x00000018,*(long *)(unaff_x21 + 0x30),*(undefined8 *)puVar3);
          in_stack_00000038 = in_stack_00000020;
          in_stack_00000030 = in_stack_00000018;
          in_stack_00000040 = in_stack_00000028;
          do {
            uVar9 = FUN_02c7ab6c(&stack0x00000030,*(undefined8 *)puVar2);
            lVar8 = in_stack_00000040;
            if ((uVar9 & 1) == 0) goto LAB_037afffc;
            if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar9 = thunk_FUN_0340e318(*(undefined8 *)(in_stack_00000040 + 0x18),uVar12,0);
          } while ((uVar9 & 1) == 0);
          unaff_x20 = *(undefined8 *)(lVar8 + 0x10);
LAB_037afffc:
          FUN_02c7ab68(&stack0x00000030,*(undefined8 *)puVar1);
        }
        uVar9 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
  }
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (unaff_x20,0,0);
  if ((uVar5 & 1) == 0) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    puVar10 = *(undefined4 **)
               (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    uVar15 = *puVar10;
    uVar14 = puVar10[1];
    uVar13 = puVar10[2];
    if (DAT_0482ee0f == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
      DAT_0482ee0f = '\x01';
    }
    uVar11 = *(undefined8 *)(unaff_x21 + 0x40);
    puVar10 = *(undefined4 **)
               (*(long *)Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ + 0xb8);
    uVar19 = *puVar10;
    uVar18 = puVar10[1];
    uVar17 = puVar10[2];
    uVar16 = puVar10[3];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = FUN_023aab3c(uVar15,uVar14,uVar13,uVar19,uVar18,uVar17,uVar16,unaff_x20,uVar11,
                         *(undefined8 *)StringLiteral_586);
    if ((lVar6 == 0) || (lVar8 = FUN_040703d4(lVar6,0), lVar8 == 0)) goto LAB_037b026c;
    FUN_04073314(lVar8,1,0);
    FUN_037a9468(lVar6);
  }
  else {
    cVar4 = FUN_037abb7c();
    if (cVar4 != '\0') {
      in_stack_00000018 = uVar11;
      uVar11 = thunk_FUN_01f113fc(*(undefined8 *)StringLiteral_585,&stack0x00000018);
      uVar11 = FUN_03406290(*(undefined8 *)StringLiteral_588,uVar11,0);
      if (lVar6 == 0) goto LAB_037b026c;
      uVar12 = *(undefined8 *)StringLiteral_516;
      if (*(long *)(lVar6 + 0x18) == 0) {
        uVar7 = *(undefined8 *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__
        ;
      }
      else {
        if ((int)*(long *)(lVar6 + 0x18) == 0) {
LAB_037b0268:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar7 = FUN_03405678(*(undefined8 *)StringLiteral_587,*(undefined8 *)(lVar6 + 0x20),0);
      }
      uVar11 = FUN_03405678(uVar11,uVar7,0);
      FUN_037ad7dc(uVar11,uVar12,uVar11,0);
    }
    lVar6 = 0;
  }
  return lVar6;
}


