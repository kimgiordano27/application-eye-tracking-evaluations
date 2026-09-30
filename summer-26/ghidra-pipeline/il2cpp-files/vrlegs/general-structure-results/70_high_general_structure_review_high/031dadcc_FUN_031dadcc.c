/*
FUNCTION_NAME: FUN_031dadcc
ENTRY_POINT: 031dadcc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_031dadcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = System_Tuple<bool,_bool,_bool,_bool>_TypeInfo;
  puVar1 = PTR_DAT_03cbe5e8;
  if ((DAT_0412c40b & 1) == 0) {
    FUN_01ab69ac(System_Tuple<bool,_bool,_bool,_bool>_TypeInfo);
    FUN_01ab69ac(System_Tuple<int,_int,_int,_bool>_TypeInfo);
    FUN_01ab69ac(System_Tuple<TextWriter,_char[],_int,_int>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_IEnumerable<MemberSpec>_TypeInfo);
    FUN_01ab69ac(System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(UnityEngine_UI_CoroutineTween_TweenRunner<ColorTween>_TypeInfo);
    FUN_01ab69ac(UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_TypeInfo);
    FUN_01ab69ac(DG_Tweening_Core_TweenerCore<Quaternion,_Vector3,_QuaternionOptions>_TypeInfo);
    FUN_01ab69ac(DG_Tweening_Core_TweenerCore<Vector3,_Vector3[],_Vector3ArrayOptions>_TypeInfo);
    DAT_0412c40b = 1;
  }
  puVar3 = System_Tuple<int,_int,_int,_bool>_TypeInfo;
  uVar6 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_0277b678(uVar6,0);
  lVar7 = *(long *)puVar3;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_01a47054(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar1 = System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  puVar4 = DG_Tweening_Core_TweenerCore<Quaternion,_Vector3,_QuaternionOptions>_TypeInfo;
  puVar3 = UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_TypeInfo;
  puVar2 = System_Tuple<TextWriter,_char[],_int,_int>_TypeInfo;
  uVar8 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar1);
  }
  FUN_031a9590(uVar6,uVar8,0,0,0,0,0,0,*(undefined8 *)puVar4,0,0);
  uVar6 = FUN_0277b678(*(undefined8 *)puVar3,0);
  lVar7 = *(long *)puVar2;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_01a47054(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar3 = DG_Tweening_Core_TweenerCore<Vector3,_Vector3[],_Vector3ArrayOptions>_TypeInfo;
  puVar2 = UnityEngine_UI_CoroutineTween_TweenRunner<ColorTween>_TypeInfo;
  puVar1 = System_Collections_Generic_IEnumerable<MemberSpec>_TypeInfo;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01a46ff8();
  }
  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
  uVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_031aa554(uVar8,0,*(undefined8 *)puVar2,0);
  FUN_031a9590(uVar6,uVar9,0,uVar8,0,0,0,0,*(undefined8 *)puVar3,0,0);
  return;
}


