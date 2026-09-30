/*
FUNCTION_NAME: FUN_0199c3cc
ENTRY_POINT: 0199c3cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_0199c3cc(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = Method_System_DateTime_System_IConvertible_ToInt32__;
  if ((DAT_0377a4c1 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                      );
    thunk_FUN_00d48444(StringLiteral_8264);
    thunk_FUN_00d48444(System_Collections_Generic_BitHelper_TypeInfo);
                    /* try { // try from 0199c420 to 01a9c447 has its CatchHandler @ 0199c64c */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSceneAnchor>_Dispose__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f2250);
    thunk_FUN_00d48444(Method_System_DateTime_System_IConvertible_ToInt32__);
    DAT_0377a4c1 = 1;
  }
  *(undefined8 *)(param_1 + 0x150) = DAT_02945350;
  *(undefined8 *)(param_1 + 0x158) = 0xa3d4ccccd;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
                    /* try { // try from 0199c47c to 01a9c4a7 has its CatchHandler @ 0199c648 */
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar2;
    }
                    /* try { // try from 0199c4a8 to 01a9c4af has its CatchHandler @ 0199c644 */
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    /* try { // try from 0199c4b0 to 01a9c633 has its CatchHandler @ 0199c244 */
    if (lVar6 == 0) goto LAB_0199c628;
    FUN_016f27fc(lVar6,uVar7,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Guid,_OVRSceneAnchor>_Dispose__
                 ,0);
    lVar4 = *(long *)puVar2;
    *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar6;
  }
  *(long *)(param_1 + 0x168) = lVar6;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
  ;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar2;
    }
    uVar7 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar6 == 0) goto LAB_0199c628;
    FUN_012d1810(lVar6,uVar7,*(undefined8 *)PTR_DAT_033f2250,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar6;
  }
  *(long *)(param_1 + 0x170) = lVar6;
  puVar2 = System_Collections_Generic_BitHelper_TypeInfo;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  lVar4 = *(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  uVar1 = *(undefined4 *)(puVar5 + 1);
  *(undefined8 *)(param_1 + 0x178) = *puVar5;
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  uVar1 = *(undefined4 *)(puVar5 + 1);
  *(undefined8 *)(param_1 + 0x184) = *puVar5;
  *(undefined4 *)(param_1 + 0x18c) = uVar1;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    FUN_01a3b000(lVar4,0);
    *(long *)(param_1 + 0x1a8) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      FUN_01a3b000(lVar4,0);
      *(long *)(param_1 + 0x1b0) = lVar4;
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = StringLiteral_8264;
      if (lVar4 != 0) {
        FUN_01a3b000(lVar4,0);
        *(long *)(param_1 + 0x1b8) = lVar4;
        FUN_0136a4fc(param_1,*(undefined8 *)puVar2);
        return;
      }
    }
  }
LAB_0199c628:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


