/*
FUNCTION_NAME: FUN_014ea2d8
ENTRY_POINT: 014ea2d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_014ea2d8(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_34 [4];
  
  if ((DAT_03776fdf & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_MedleyBartending_<Level1Loop>d__34_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Meta_Voice_Logging_RingDictionaryBuffer<string,_CorrelationID>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_XmlConvert_ToDateTime__);
    thunk_FUN_00d48444(System_Type_TypeInfo);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_get_Task__);
    thunk_FUN_00d48444(PTR_DAT_033f4b10);
    thunk_FUN_00d48444(
                      Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Add__
                      );
    thunk_FUN_00d48444(Method_System_IO_BinaryReader_ReadString__);
    thunk_FUN_00d48444(StringLiteral_9547);
    thunk_FUN_00d48444(System_Predicate<STMSoundClipData_AutoClip>_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_Stream_BeginWriteInternal__);
    thunk_FUN_00d48444(System_Xml_XmlTextWriter_State___TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<InputManager_AvailableDevice>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_ObjectModel_ReadOnlyCollection<float>_get_Item__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<OVRPassthroughLayer>__ctor__);
    thunk_FUN_00d48444(StringLiteral_4844);
    DAT_03776fdf = 1;
  }
  puVar1 = System_Type_TypeInfo;
  local_60 = 0;
  local_58 = 0;
  plVar8 = *(long **)(param_1 + 8);
  if (*param_1 == 0) {
    local_58 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_60 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_014ea5cc;
    }
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)System_Predicate<STMSoundClipData_AutoClip>_TypeInfo);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar6 = FUN_017b46ec(lVar7,0);
    *(long *)(param_1 + 0xe) = lVar7;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_1 + 8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar8[3] = *(long *)(param_1 + 10);
    if ((int)plVar8[6] == 0) {
      *(undefined4 *)(plVar8 + 6) = 1;
    }
    uVar6 = FUN_014e6ffc(uVar6,*(undefined8 *)(param_1 + 0xc));
    *(undefined8 *)(lVar7 + 0x18) = uVar6;
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = FUN_016d3dec(*(undefined8 *)(*(long *)(param_1 + 0xe) + 0x18),0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_016d3b94(*(undefined8 *)(*(long *)(param_1 + 0xe) + 0x18),0);
    }
    lVar9 = plVar8[2];
    uVar6 = *(undefined8 *)(param_1 + 0xe);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_016f27fc(lVar7,uVar6,*(undefined8 *)StringLiteral_9547,0);
    if (*(int *)(*(long *)Method_System_IO_BinaryReader_ReadString__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar7 = FUN_014e0660(lVar9,lVar7);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    local_58 = FUN_017e7d88(lVar7,0);
    uVar5 = FUN_016a1310(&local_58,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_58;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(param_1 + 2,&local_58,param_1,
                   *(undefined8 *)
                    Meta_Voice_Logging_RingDictionaryBuffer<string,_CorrelationID>_TypeInfo);
      return;
    }
  }
  FUN_016a13e0(&local_58,0);
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)Method_System_IO_Stream_BeginWriteInternal__);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_011d9460(lVar7,plVar8,
               *(undefined8 *)
                Method_System_Collections_ObjectModel_ReadOnlyCollection<float>_get_Item__,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  thunk_FUN_00d34640(*(undefined8 *)
                      (*plVar8 + (ulong)*(ushort *)
                                         (*(long *)
                                           Method_UnityEngine_Events_UnityEvent<OVRPassthroughLayer>__ctor__
                                         + 0x50) * 0x10 + 0x140),
                     *(long *)Method_UnityEngine_Events_UnityEvent<OVRPassthroughLayer>__ctor__,
                     &local_50);
  lVar7 = (*local_50)(plVar8,lVar7,local_48);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_60 = FUN_013bdbc4(lVar7,*(undefined8 *)
                                 Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Add__
                         );
  uVar5 = FUN_013ba28c(&local_60,*(undefined8 *)PTR_DAT_033f4b10);
  if ((uVar5 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x12) = local_60;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01098fc0(param_1 + 2,&local_60,param_1,
                 *(undefined8 *)
                  Method_MedleyBartending_<Level1Loop>d__34_System_Collections_IEnumerator_Reset__);
    return;
  }
LAB_014ea5cc:
  FUN_013ba2d0(&local_60,&local_50,
               *(undefined8 *)Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_get_Task__
              );
  uVar6 = local_48;
  uVar3 = local_50._4_4_;
  uVar5 = FUN_015ff8a0(local_48,0);
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<InputManager_AvailableDevice>__
  ;
  if ((uVar5 & 1) == 0) {
    local_50 = (code *)0x0;
    local_48 = 0;
    FUN_011d9780(&local_50,uVar3,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAtWithCapacity<InputManager_AvailableDevice>__
                );
  }
  else {
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = FUN_016d3dec(*(undefined8 *)(*(long *)(param_1 + 0xe) + 0x18),0);
    lVar7 = *(long *)(param_1 + 0xe);
    if ((uVar5 & 1) == 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = FUN_015f5b28(*(undefined8 *)StringLiteral_4844,*(undefined8 *)(lVar7 + 0x18),0);
      local_50 = (code *)0x0;
      local_48 = 0;
      FUN_011d9780(&local_50,0xffffffff,uVar6,*(undefined8 *)puVar2);
    }
    else {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_016d3524(*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(param_1 + 0xc),1,0);
      local_50 = (code *)0x0;
      local_48 = 0;
      local_34[0] = 1;
      FUN_011d95a0(&local_50,local_34,*(undefined8 *)System_Xml_XmlTextWriter_State___TypeInfo);
    }
  }
  uVar4 = local_48;
  uVar6 = local_50;
  *param_1 = -2;
  param_1[0xe] = 0;
  puVar2 = Method_System_Xml_XmlConvert_ToDateTime__;
  param_1[0xf] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  local_50 = (code *)uVar6;
  local_48 = uVar4;
  FUN_011ccb9c(param_1 + 2,&local_50,*(undefined8 *)puVar2);
  return;
}


