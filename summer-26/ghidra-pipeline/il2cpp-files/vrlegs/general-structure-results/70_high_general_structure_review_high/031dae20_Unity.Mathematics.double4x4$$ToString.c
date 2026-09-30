/*
FUNCTION_NAME: Unity.Mathematics.double4x4$$ToString
ENTRY_POINT: 031dae20
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Mathematics_double4x4__ToString(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x21;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xe90));
  FUN_01ab69ac(System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cbe5e8);
  FUN_01ab69ac(UnityEngine_UI_CoroutineTween_TweenRunner<ColorTween>_TypeInfo);
  FUN_01ab69ac(UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_TypeInfo);
  FUN_01ab69ac(DG_Tweening_Core_TweenerCore<Quaternion,_Vector3,_QuaternionOptions>_TypeInfo);
  FUN_01ab69ac(DG_Tweening_Core_TweenerCore<Vector3,_Vector3[],_Vector3ArrayOptions>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x40b) = 1;
  puVar1 = System_Tuple<int,_int,_int,_bool>_TypeInfo;
  uVar5 = *unaff_x19;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_0277b678(uVar5,0);
  lVar6 = *(long *)puVar1;
  lVar4 = *(long *)(lVar6 + 0x38);
  if (lVar4 == 0) {
    FUN_01a47054(lVar6);
    lVar4 = *(long *)(lVar6 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar1 = System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  puVar3 = UnityEngine_UI_CoroutineTween_TweenRunner<FloatTween>_TypeInfo;
  puVar2 = System_Tuple<TextWriter,_char[],_int,_int>_TypeInfo;
  uVar7 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar1);
  }
  FUN_031a9590(uVar5,uVar7,0,0,0,0,0,0);
  uVar5 = FUN_0277b678(*(undefined8 *)puVar3,0);
  lVar6 = *(long *)puVar2;
  lVar4 = *(long *)(lVar6 + 0x38);
  if (lVar4 == 0) {
    FUN_01a47054(lVar6);
    lVar4 = *(long *)(lVar6 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar2 = UnityEngine_UI_CoroutineTween_TweenRunner<ColorTween>_TypeInfo;
  puVar1 = System_Collections_Generic_IEnumerable<MemberSpec>_TypeInfo;
  lVar4 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01a46ff8();
  }
  uVar8 = **(undefined8 **)(lVar4 + 0xb8);
  uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_031aa554(uVar7,0,*(undefined8 *)puVar2,0);
  FUN_031a9590(uVar5,uVar8,0,uVar7,0,0,0,0);
  return;
}


