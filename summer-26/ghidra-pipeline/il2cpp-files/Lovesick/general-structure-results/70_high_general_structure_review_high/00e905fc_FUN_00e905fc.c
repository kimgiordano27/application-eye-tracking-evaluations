/*
FUNCTION_NAME: FUN_00e905fc
ENTRY_POINT: 00e905fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_00e905fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_03774ff9 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_8185);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTween_ApplyTo<Quaternion,_Vector3,_QuaternionOptions>__)
    ;
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60>_SliceWithStride<Vector3>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ec3e0);
    thunk_FUN_00d48444(PTR_DAT_033f1698);
    DAT_03774ff9 = 1;
  }
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (lVar2 = FUN_00ee688c(*(long *)(param_1 + 0x90),0),
     puVar1 = 
     Field_<PrivateImplementationDetails>_CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016
     , lVar2 != 0)) {
    uVar5 = *(undefined8 *)(lVar2 + 400);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Field_<PrivateImplementationDetails>_CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016
                              );
    if (lVar3 != 0) {
      FUN_00f8f8b0(lVar3,param_1,
                   *(undefined8 *)
                    Method_DG_Tweening_DOTween_ApplyTo<Quaternion,_Vector3,_QuaternionOptions>__,0);
      plVar4 = (long *)FUN_017b76bc(uVar5,lVar3,0);
      if (plVar4 == (long *)0x0) {
        *(undefined8 *)(lVar2 + 400) = 0;
      }
      else {
        lVar3 = *(long *)puVar1;
        if (*plVar4 != lVar3) {
LAB_00e90700:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c();
        }
        *(long **)(lVar2 + 400) = plVar4;
        if (*plVar4 != lVar3) goto LAB_00e90700;
      }
      if (*(long *)(param_1 + 0xa0) != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0xa0) + 0x28);
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ec3e0);
        if ((lVar2 != 0) &&
           (FUN_013df2bc(lVar2,param_1,*(undefined8 *)StringLiteral_8185,0),
           puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__, lVar3 != 0)) {
          FUN_013df780(lVar3,lVar2,*(undefined8 *)PTR_DAT_033f1698);
          uVar5 = *(undefined8 *)(param_1 + 0x80);
          lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            FUN_016f27fc(lVar2,param_1,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60>_SliceWithStride<Vector3>__
                         ,0);
            FUN_00fe0700(uVar5,lVar2,0);
            uVar5 = *(undefined8 *)(param_1 + 0x88);
            lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar2 != 0) {
              FUN_016f27fc(lVar2,param_1,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>__ctor__
                           ,0);
              FUN_00fe0700(uVar5,lVar2,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


