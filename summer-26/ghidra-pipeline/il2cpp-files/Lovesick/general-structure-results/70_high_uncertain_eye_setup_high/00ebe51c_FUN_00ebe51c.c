/*
FUNCTION_NAME: FUN_00ebe51c
ENTRY_POINT: 00ebe51c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00ebe51c(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  byte local_4c [4];
  int local_48;
  int local_44;
  
  puVar1 = StringLiteral_10620;
  puVar5 = StringLiteral_302;
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
                    /* try { // try from 00ebe544 to 00fbe57b has its CatchHandler @ 00ebe674 */
  local_44 = param_2;
  if ((DAT_037751ab & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(StringLiteral_302);
                    /* try { // try from 00ebe588 to 00fbe58f has its CatchHandler @ 00ebe668 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(StringLiteral_4897);
    thunk_FUN_00d48444(Method_System_Enum_EnumResult_SetFailure__);
    thunk_FUN_00d48444(Method_System_Xml_XmlDeclaration_set_Standalone__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_92__);
    thunk_FUN_00d48444(PTR_DAT_033ee470);
    thunk_FUN_00d48444(System_Collections_Generic_Stack<WitResponseNode>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10620);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__)
    ;
    thunk_FUN_00d48444(Method_Unity_Collections_NativeSlice<float>_get_Item__);
    DAT_037751ab = 1;
  }
  local_48 = param_2;
  uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_48);
  uVar8 = FUN_01600b5c(*(undefined8 *)puVar1,uVar8,param_3,0);
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar5);
    param_2 = local_44;
  }
  puVar1 = Method_System_Enum_EnumResult_SetFailure__;
  FUN_02660dac(uVar8,0);
  if (-1 < param_2) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar6 = FUN_026be908(0);
    puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_92__;
    puVar3 = Method_System_Xml_XmlDeclaration_set_Standalone__;
    if ((param_2 < iVar6) && (*(char *)(param_1 + 0x38) == '\0')) {
      uVar8 = FUN_0176eb1c(&local_44,0);
      uVar8 = FUN_0160073c(*(undefined8 *)puVar3,uVar8,*(undefined8 *)puVar4,param_3,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      FUN_02660dac(uVar8,0);
      uVar12 = FUN_015ff8a0(param_3,0);
      puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
      if ((uVar12 & 1) != 0) {
LAB_00ebe8f8:
        puVar1 = Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__;
        if (*(int *)(param_1 + 0x1c) != 0) {
          local_48 = *(int *)(param_1 + 0x20);
          *(int *)(param_1 + 0x1c) = local_44;
          puVar3 = Method_Unity_Collections_NativeSlice<float>_get_Item__;
          puVar1 = PTR_DAT_033ee470;
          if (local_48 == 0) {
            local_48 = local_44;
            uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_48);
            uVar8 = FUN_015f6780(*(undefined8 *)puVar3,uVar8,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar5);
            }
            FUN_02660dac(uVar8,0);
            uVar13 = *(undefined4 *)(param_1 + 0x1c);
          }
          else {
            uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_48);
            uVar8 = FUN_015f6780(*(undefined8 *)puVar1,uVar8,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar5);
            }
            FUN_02660dac(uVar8,0);
            uVar13 = 0;
          }
          uVar8 = FUN_00ebea78(param_1,uVar13);
          uVar8 = FUN_0268ee74(param_1,uVar8,0);
          *(undefined8 *)(param_1 + 0x30) = uVar8;
          return;
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026610e4(*(undefined8 *)puVar1,0);
        return;
      }
      *(undefined1 *)(param_1 + 0x39) = 1;
      *(undefined8 *)(param_1 + 0x40) = param_3;
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar10 != 0) {
        FUN_016f27fc(lVar10,param_1,*(undefined8 *)StringLiteral_4897,0);
        FUN_00fe0700(param_3,lVar10,0);
        goto LAB_00ebe8f8;
      }
      goto LAB_00ebea18;
    }
  }
  plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
  local_48 = local_44;
  lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_48);
  if (plVar9 == (long *)0x0) {
LAB_00ebea18:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar10 != 0) &&
     (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
LAB_00ebea0c:
    uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,0);
  }
  if ((int)plVar9[3] != 0) {
    plVar9[4] = lVar10;
    puVar2 = StringLiteral_9958;
    local_4c[0] = (byte)((uint)local_44 >> 0x1f);
    lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,local_4c);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
    goto LAB_00ebea0c;
    iVar6 = local_44;
    if (1 < *(uint *)(plVar9 + 3)) {
      plVar9[5] = lVar10;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      iVar7 = FUN_026be908(0);
      local_50[0] = iVar7 <= iVar6;
      lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,local_50);
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
      goto LAB_00ebea0c;
      if (2 < *(uint *)(plVar9 + 3)) {
        plVar9[6] = lVar10;
        local_54[0] = *(undefined1 *)(param_1 + 0x38);
        lVar10 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,local_54);
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
        goto LAB_00ebea0c;
        puVar2 = System_Collections_Generic_Stack<WitResponseNode>_TypeInfo;
        if (3 < *(uint *)(plVar9 + 3)) {
          plVar9[7] = lVar10;
          uVar8 = FUN_01600be4(*(undefined8 *)puVar2,plVar9,0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar5);
          }
          FUN_02660dac(uVar8,0);
          FUN_02660dac(*(undefined8 *)(param_1 + 0x30),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


