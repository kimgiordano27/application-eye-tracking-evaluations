/*
FUNCTION_NAME: FUN_0363f574
ENTRY_POINT: 0363f574
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_8
*/


long FUN_0363f574(long *param_1)

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
  long *plVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  float local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 local_74;
  
  if ((DAT_04833b5f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InvokeMember_<>c_<HandleDependencies>b__38_1__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InvokeMember_<>c_<HandleDependencies>b__38_2__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_InvokeMember_<>c_<PostDeserializeRemapParameterNames>b__40_0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_InvokeMember_<>c_<PostDeserializeRemapParameterNames>b__40_1__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_<>c_<Render>b__3_0__
                      );
    thunk_FUN_01efb3a4(
                      Method_OVRSimpleJSON_JSONArray_<get_Children>d__22_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(
                      Method_OVRSimpleJSON_JSONNode_<get_Children>d__40_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_OVRSimpleJSON_JSONNode_<get_DeepChildren>d__42_System_Collections_IEnumerator_Reset__
                      );
    DAT_04833b5f = 1;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_e8 = 0.0;
  local_f0 = 0;
  uStack_ec = 0;
  local_74 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ac) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  puVar1 = Method_OVRSimpleJSON_JSONArray_<get_Children>d__22_System_Collections_IEnumerator_Reset__
  ;
  if (DAT_0482ee12 == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee12 = '\x01';
  }
  puVar2 = 
  Method_UnityEngine_Rendering_Universal_InvokeOnRenderObjectCallbackPass_<>c_<Render>b__3_0__;
  uVar14 = **(undefined8 **)
             (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
  uVar15 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8) + 1)
  ;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar12 = *(long *)puVar2;
  lVar9 = *(long *)(lVar12 + 0x20);
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
  lVar9 = *(long *)(lVar12 + 0x20);
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
  plVar10 = (long *)**(long **)(lVar9 + 0xb8);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar10 + 0x198))(&local_120,plVar10,param_1,*(undefined8 *)(*plVar10 + 0x1a0));
  local_b0 = local_110;
  uStack_b8 = uStack_118;
  local_c0 = local_120;
  FUN_02f4400c(&local_120,&local_c0,*(undefined8 *)puVar5);
  fVar13 = 3.4028235e+38;
  uStack_d8 = uStack_118;
  local_e0 = local_120;
  uStack_c8 = uStack_108;
  uStack_d0 = local_110;
  lVar9 = 0;
LAB_0363f788:
  do {
    do {
      uVar11 = FUN_02cea124(&local_e0,*(undefined8 *)puVar3);
      if ((uVar11 & 1) == 0) {
        FUN_02cea3c0(&local_e0,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_04073094(lVar9,0,0);
        if ((uVar11 & 1) == 0) {
          fVar13 = *(float *)(param_1 + 0x25);
        }
        param_1[0x34] =
             CONCAT44((float)((ulong)param_1[0x2f] >> 0x20) +
                      (float)((ulong)*(undefined8 *)((long)param_1 + 0x194) >> 0x20) * fVar13,
                      (float)param_1[0x2f] + (float)*(undefined8 *)((long)param_1 + 0x194) * fVar13)
        ;
        *(float *)(param_1 + 0x35) =
             *(float *)(param_1 + 0x30) + fVar13 * *(float *)((long)param_1 + 0x19c);
        lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
        FUN_035ac8e8(lVar12,0);
        *(long *)(lVar12 + 0x10) = lVar9;
        thunk_FUN_01f51358((long *)(lVar12 + 0x10),lVar9);
        *(undefined8 *)(lVar12 + 0x18) = uVar14;
        *(undefined4 *)(lVar12 + 0x20) = uVar15;
        param_1[0x26] = lVar12;
        thunk_FUN_01f51358(param_1 + 0x26,lVar12);
        return lVar9;
      }
      lVar12 = FUN_02ce9fe0(&local_e0,*(undefined8 *)puVar4);
      local_110 = *(undefined8 *)((long)param_1 + 0x1dc);
      uStack_118 = *(undefined8 *)((long)param_1 + 0x1d4);
      local_120 = *(undefined8 *)((long)param_1 + 0x1cc);
      local_74 = (undefined4)param_1[0x25];
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      local_140 = local_120;
      uStack_138 = uStack_118;
      local_130 = local_110;
      uVar11 = FUN_0363ebe8(lVar12,&local_140,&local_100,&local_74,0);
    } while ((uVar11 & 1) == 0);
    if (*(float *)((long)param_1 + 300) <= ABS(local_e8 - fVar13)) goto LAB_0363f834;
    iVar8 = (**(code **)(*param_1 + 0x548))(param_1,lVar12,lVar9,*(undefined8 *)(*param_1 + 0x550));
  } while (iVar8 < 1);
  goto LAB_0363f83c;
LAB_0363f834:
  if (local_e8 < fVar13) {
LAB_0363f83c:
    fVar13 = local_e8;
    uStack_8c = CONCAT44(local_e8,uStack_ec);
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_98 = uStack_f8;
    local_a0 = local_100;
    uStack_94 = uStack_f4;
    uStack_90 = local_f0;
    FUN_03333940(&local_120,&local_a0,*(undefined8 *)puVar6);
    *(undefined8 *)((long)param_1 + 0x1b4) = uStack_118;
    *(undefined8 *)((long)param_1 + 0x1ac) = local_120;
    *(undefined8 *)((long)param_1 + 0x1c4) = uStack_108;
    *(undefined8 *)((long)param_1 + 0x1bc) = local_110;
    lVar9 = lVar12;
    uVar14 = local_100;
    uVar15 = uStack_f8;
  }
  goto LAB_0363f788;
}


