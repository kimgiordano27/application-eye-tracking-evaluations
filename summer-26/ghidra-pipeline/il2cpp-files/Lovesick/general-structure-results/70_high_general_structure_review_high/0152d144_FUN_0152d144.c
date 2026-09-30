/*
FUNCTION_NAME: FUN_0152d144
ENTRY_POINT: 0152d144
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_0152d144(uint param_1,ulong param_2,ulong param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  if ((DAT_037779fd & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonTextReader_ProcessValueComma__);
    thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_SerializeMember<Keyframe[]>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_JToken>_get_Current__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VA_Triangle>_get_Count__);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_037779fd = 1;
  }
  lVar5 = *(long *)puVar1;
  if ((param_2 & 1) != 0) {
    lVar5 = FUN_015f5b28(lVar5,*(undefined8 *)
                                Method_System_Collections_Generic_List<VA_Triangle>_get_Count__,0);
  }
  if ((param_3 & 1) != 0) {
    lVar5 = FUN_015f5b28(lVar5,*(undefined8 *)
                                Method_FullSerializer_fsBaseConverter_SerializeMember<Keyframe[]>__,
                         0);
  }
  if ((param_4 & 1) != 0) {
    lVar5 = FUN_015f5b28(lVar5,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_JToken>_get_Current__
                         ,0);
  }
  puVar1 = Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__;
  if ((param_5 & 1) != 0) {
    lVar5 = FUN_015f5b28(lVar5,*(undefined8 *)
                                Method_Newtonsoft_Json_JsonTextReader_ProcessValueComma__,0);
  }
  lVar4 = FUN_00da4fb8(*(undefined8 *)puVar1,param_1);
  if (0 < (int)param_1) {
    if (lVar5 == 0) {
LAB_0152d2ec:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar6 = 0;
    do {
      uVar3 = FUN_02682b20(0,*(undefined4 *)(lVar5 + 0x10),0);
      uVar2 = FUN_015fa29c(lVar5,uVar3,0);
      if (lVar4 == 0) goto LAB_0152d2ec;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(undefined2 *)(lVar4 + 0x20 + uVar6 * 2) = uVar2;
      uVar6 = uVar6 + 1;
    } while (param_1 != uVar6);
  }
  FUN_015fd004(0,lVar4,0);
  return;
}


