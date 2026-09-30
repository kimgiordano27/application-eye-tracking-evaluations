/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 019c6374
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar6;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
                    /* try { // try from 019c6378 to 01ac638f has its CatchHandler @ 019c67a4 */
  thunk_FUN_00d48444(StringLiteral_13923);
  thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetupSettings>b__8_0__);
                    /* try { // try from 019c6390 to 01ac6397 has its CatchHandler @ 019c65a8 */
  thunk_FUN_00d48444(StringLiteral_8804);
                    /* try { // try from 019c639c to 01ac639f has its CatchHandler @ 019c6590 */
  thunk_FUN_00d48444(StringLiteral_2478);
  thunk_FUN_00d48444(
                    UnityEngine_UIElements_UxmlEnumAttributeDescription<ScrollView_NestedInteractionKind>_TypeInfo
                    );
  thunk_FUN_00d48444(StringLiteral_10969);
  *(undefined1 *)(unaff_x22 + 0x6b6) = 1;
  puVar3 = Method_System_Collections_Generic_Dictionary_Enumerator<InternedString,_Type>_Dispose__;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    if (*(int *)(*(long *)(unaff_x20 + 0x28) + 0x20) < 2) {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      uVar1 = *(undefined4 *)
               (*(undefined8 **)
                 (*(long *)
                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                 0xb8) + 1);
      *unaff_x21 = **(undefined8 **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
      *(undefined4 *)(unaff_x21 + 1) = uVar1;
      in_stack_00000000 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
      in_stack_00000008 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar3 + 0xb8) + 1);
LAB_019c6554:
      *unaff_x19 = in_stack_00000000;
      *(undefined4 *)(unaff_x19 + 1) = in_stack_00000008;
      return;
    }
    lVar6 = *(long *)(unaff_x20 + 0x20);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<InternedString,_Type>_Dispose__
                              );
    puVar2 = Sirenix_Serialization_IExternalStringReferenceResolver_TypeInfo;
    if (lVar4 != 0) {
      FUN_012d3188();
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar5 != 0) {
        FUN_012c4d18();
        if ((*(long *)(unaff_x20 + 0x28) != 0) && (lVar6 != 0)) {
          FUN_013804d8(lVar6,lVar4,lVar5,*(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x20));
          *unaff_x21 = in_stack_00000000;
          *(undefined4 *)(unaff_x21 + 1) = in_stack_00000008;
          lVar6 = *(long *)(unaff_x20 + 0x20);
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar4 != 0) {
            FUN_012d3188();
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar5 != 0) {
              FUN_012c4d18();
              if ((*(long *)(unaff_x20 + 0x28) != 0) && (lVar6 != 0)) {
                FUN_013804d8(lVar6,lVar4,lVar5,*(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x20));
                goto LAB_019c6554;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


