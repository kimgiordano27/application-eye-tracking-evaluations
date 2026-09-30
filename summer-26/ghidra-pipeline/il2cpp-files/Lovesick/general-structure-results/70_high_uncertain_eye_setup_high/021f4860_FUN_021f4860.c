/*
FUNCTION_NAME: FUN_021f4860
ENTRY_POINT: 021f4860
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_021f4860(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_0378181b & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<IXmlNode>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_PrimitiveValue_From<__Il2CppFullySharedGenericStructType>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eafc8);
    thunk_FUN_00d48444(StringLiteral_8445);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_4853);
    thunk_FUN_00d48444(Method_UnityEngine_Mesh_SetArrayForChannel<Color32>__);
    DAT_0378181b = 1;
  }
  puVar2 = Method_UnityEngine_Mesh_SetArrayForChannel<Color32>__;
  local_60 = 0;
  local_58 = 0;
  plVar5 = param_4;
  if ((((param_5 & 1) != 0) && (param_4 != (long *)0x0)) &&
     (*param_4 ==
      *(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)) {
    lVar3 = *(long *)Method_UnityEngine_Mesh_SetArrayForChannel<Color32>__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    puVar1 = PTR_DAT_033eafc8;
    lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar6 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_021f4a6c;
      FUN_012d239c(lVar6,uVar7,*(undefined8 *)StringLiteral_4853,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar6;
    }
    uVar4 = FUN_010d75bc(param_4,lVar6,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_PrimitiveValue_From<__Il2CppFullySharedGenericStructType>__
                        );
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_017568a8(param_4,&local_60,0), (uVar4 & 1) == 0)) {
      plVar5 = (long *)thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_105__);
      if (plVar5 == (long *)0x0) {
LAB_021f4a6c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_02021868(plVar5,param_4,1,0);
    }
  }
  puVar2 = System_Collections_Generic_List<IXmlNode>_TypeInfo;
  local_58 = *param_1;
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 0;
  uStack_50 = param_2;
  local_48 = param_3;
  FUN_0131423c(&local_78,&uStack_50,plVar5,*(undefined8 *)StringLiteral_8445);
  uStack_88 = uStack_70;
  local_90 = local_78;
  local_80 = local_68;
  FUN_010b13f4(&local_58,&local_90,*(undefined8 *)puVar2);
  return local_58;
}


