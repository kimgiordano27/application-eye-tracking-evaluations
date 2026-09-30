/*
FUNCTION_NAME: OVRRoomLayout$$get_Handle
ENTRY_POINT: 0363f608
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4
*/


long OVRRoomLayout__get_Handle(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x19;
  long unaff_x20;
  long lVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  float in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined4 uStack00000000000000ec;
  
  thunk_FUN_01efb3a4(
                    Method_OVRSimpleJSON_JSONNode_<get_DeepChildren>d__42_System_Collections_IEnumerator_Reset__
                    );
  *(undefined1 *)(unaff_x20 + 0xb5f) = 1;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000078 = 0.0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  uStack00000000000000ec = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  *(undefined8 *)((long)unaff_x19 + 0x1b4) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x1ac) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x1c4) = 0;
  *(undefined8 *)((long)unaff_x19 + 0x1bc) = 0;
  puVar1 = Method_OVRSimpleJSON_JSONArray_<get_Children>d__22_System_Collections_IEnumerator_Reset__
  ;
  if (DAT_0482ee12 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee12 = '\x01';
  }
  puVar2 = 
  Method_UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_<>c_<Render>b__3_0__;
  uVar13 = **(undefined8 **)
             (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
  uVar14 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8) + 1)
  ;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar11 = *(long *)puVar2;
  lVar9 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44();
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar9 = *(long *)(lVar11 + 0x20);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44();
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44();
  }
  puVar7 = 
  Method_OVRSimpleJSON_JSONNode_<get_DeepChildren>d__42_System_Collections_IEnumerator_Reset__;
  puVar6 = Method_OVRSimpleJSON_JSONNode_<get_Children>d__40_System_Collections_IEnumerator_Reset__;
  puVar5 = 
  Method_Unity_VisualScripting_InvokeMember_<>c_<PostDeserializeRemapParameterNames>b__40_1__;
  puVar4 = 
  Method_Unity_VisualScripting_InvokeMember_<>c_<PostDeserializeRemapParameterNames>b__40_0__;
  puVar3 = Method_Unity_VisualScripting_InvokeMember_<>c_<HandleDependencies>b__38_2__;
  puVar2 = Method_Unity_VisualScripting_InvokeMember_<>c_<HandleDependencies>b__38_1__;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((long *)**(long **)(lVar9 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*(long *)**(long **)(lVar9 + 0xb8) + 0x198))(&stack0x00000040);
  in_stack_000000b0 = in_stack_00000050;
  in_stack_000000a8 = in_stack_00000048;
  in_stack_000000a0 = in_stack_00000040;
  FUN_02f4400c(&stack0x00000040,&stack0x000000a0,*(undefined8 *)puVar5);
  fVar12 = 3.4028235e+38;
  in_stack_00000088 = in_stack_00000048;
  in_stack_00000080 = in_stack_00000040;
  in_stack_00000098 = in_stack_00000058;
  in_stack_00000090 = in_stack_00000050;
  lVar9 = 0;
LAB_0363f788:
  do {
    do {
      uVar10 = FUN_02cea124(&stack0x00000080,*(undefined8 *)puVar3);
      if ((uVar10 & 1) == 0) {
        FUN_02cea3c0(&stack0x00000080,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_04073094(lVar9,0,0);
        if ((uVar10 & 1) == 0) {
          fVar12 = *(float *)(unaff_x19 + 0x25);
        }
        unaff_x19[0x34] =
             CONCAT44((float)((ulong)unaff_x19[0x2f] >> 0x20) +
                      (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x194) >> 0x20) * fVar12,
                      (float)unaff_x19[0x2f] +
                      (float)*(undefined8 *)((long)unaff_x19 + 0x194) * fVar12);
        *(float *)(unaff_x19 + 0x35) =
             *(float *)(unaff_x19 + 0x30) + fVar12 * *(float *)((long)unaff_x19 + 0x19c);
        lVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
        FUN_035ac8e8(lVar11,0);
        *(long *)(lVar11 + 0x10) = lVar9;
        thunk_FUN_01f51358((long *)(lVar11 + 0x10),lVar9);
        *(undefined8 *)(lVar11 + 0x18) = uVar13;
        *(undefined4 *)(lVar11 + 0x20) = uVar14;
        unaff_x19[0x26] = lVar11;
        thunk_FUN_01f51358(unaff_x19 + 0x26,lVar11);
        return lVar9;
      }
      lVar11 = FUN_02ce9fe0(&stack0x00000080,*(undefined8 *)puVar4);
      in_stack_00000050 = *(undefined8 *)((long)unaff_x19 + 0x1dc);
      in_stack_00000048 = *(undefined8 *)((long)unaff_x19 + 0x1d4);
      in_stack_00000040 = *(undefined8 *)((long)unaff_x19 + 0x1cc);
      uStack00000000000000ec = (undefined4)unaff_x19[0x25];
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      in_stack_00000020 = in_stack_00000040;
      in_stack_00000028 = in_stack_00000048;
      in_stack_00000030 = in_stack_00000050;
      uVar10 = FUN_0363ebe8(lVar11,&stack0x00000020,&stack0x00000060,&stack0x000000ec,0);
    } while ((uVar10 & 1) == 0);
    if (*(float *)((long)unaff_x19 + 300) <= ABS(in_stack_00000078 - fVar12)) goto LAB_0363f834;
    iVar8 = (**(code **)(*unaff_x19 + 0x548))();
  } while (iVar8 < 1);
  goto LAB_0363f83c;
LAB_0363f834:
  if (in_stack_00000078 < fVar12) {
LAB_0363f83c:
    fVar12 = in_stack_00000078;
    uStack00000000000000d4 = CONCAT44(in_stack_00000078,uStack0000000000000074);
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    uStack00000000000000c8 = in_stack_00000068;
    in_stack_000000c0 = in_stack_00000060;
    uStack00000000000000cc = uStack000000000000006c;
    uStack00000000000000d0 = in_stack_00000070;
    FUN_03333940(&stack0x00000040,&stack0x000000c0,*(undefined8 *)puVar6);
    *(undefined8 *)((long)unaff_x19 + 0x1b4) = in_stack_00000048;
    *(undefined8 *)((long)unaff_x19 + 0x1ac) = in_stack_00000040;
    *(undefined8 *)((long)unaff_x19 + 0x1c4) = in_stack_00000058;
    *(undefined8 *)((long)unaff_x19 + 0x1bc) = in_stack_00000050;
    lVar9 = lVar11;
    uVar13 = in_stack_00000060;
    uVar14 = in_stack_00000068;
  }
  goto LAB_0363f788;
}


