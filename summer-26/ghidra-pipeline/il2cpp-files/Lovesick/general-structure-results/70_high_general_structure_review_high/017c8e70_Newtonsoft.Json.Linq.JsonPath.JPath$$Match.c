/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.JPath$$Match
ENTRY_POINT: 017c8e70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_7;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_Linq_JsonPath_JPath__Match(undefined8 param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  long *plVar11;
  undefined *puVar9;
  
  if ((DAT_037790a0 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    DAT_037790a0 = 1;
  }
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  puVar9 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  if (param_2 == (long *)0x0) {
LAB_017c9040:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*param_2 ==
      *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo) {
    iVar4 = FUN_017c93a8(0,**(undefined8 **)
                             (*(long *)
                               Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                             + 0xb8),param_1,param_2);
    bVar2 = true;
    plVar11 = param_2;
  }
  else {
    if (*(long *)(*param_2 + 0x40) !=
        *(long *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                 + 0x40)) goto LAB_017c9044;
    uVar10 = **(undefined8 **)
               (*(long *)
                 Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__ +
               0xb8);
    puVar6 = (undefined4 *)thunk_FUN_00d624a0(param_2);
    iVar4 = FUN_017c9474(0,uVar10,param_1,*puVar6);
    bVar2 = false;
    plVar11 = (long *)0x0;
  }
  if (iVar4 == 0) {
    return **(undefined8 **)(*(long *)puVar9 + 0xb8);
  }
  if (iVar4 < 0) {
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = Method_Meta_Voice_NLayer_Decoder_BitReservoir_GetBits__;
  }
  else {
    lVar7 = FUN_00da4fb8(*(undefined8 *)Method_System_ComponentModel_DateTimeConverter_ConvertFrom__
                         ,iVar4 + 1);
    if (lVar7 == 0) goto LAB_017c9040;
    iVar5 = (int)*(undefined8 *)(lVar7 + 0x18);
    lVar1 = 0;
    if (iVar5 != 0) {
      lVar1 = lVar7 + 0x20;
    }
    if (bVar2) {
      iVar5 = FUN_017c93a8(lVar1,(long)iVar5,param_1,plVar11);
    }
    else {
      if (*(long *)(*param_2 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
LAB_017c9044:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(param_2);
      }
      puVar6 = (undefined4 *)thunk_FUN_00d624a0(param_2);
      iVar5 = FUN_017c9474(lVar1,(long)iVar5,param_1,*puVar6);
    }
    if (iVar5 == iVar4) {
      uVar10 = FUN_017c92b0(lVar7,0,iVar4);
      return uVar10;
    }
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = Method_OVRSpatialAnchor_InvokeMultiAnchorDelegate__;
  }
  uVar8 = thunk_FUN_00d48444(puVar9);
  FUN_017713a8(uVar10,uVar8,0);
  uVar8 = thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputSystem_AddDevice<object>__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar8);
}


