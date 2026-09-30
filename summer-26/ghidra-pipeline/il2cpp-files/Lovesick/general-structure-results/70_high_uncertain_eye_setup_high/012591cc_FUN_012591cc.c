/*
FUNCTION_NAME: FUN_012591cc
ENTRY_POINT: 012591cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_012591cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  
  puVar3 = StringLiteral_6252;
  if ((DAT_037764c6 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f2be0);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>__
                      );
    thunk_FUN_00d48444(StringLiteral_2472);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_13063);
    thunk_FUN_00d48444(StringLiteral_5525);
    thunk_FUN_00d48444(StringLiteral_6252);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Face>_GetEnumerator__);
    DAT_037764c6 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01d04444(param_2,0);
  lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar7);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (lVar7 == 0) {
    lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar1 = StringLiteral_2472;
    lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    uVar9 = **(undefined8 **)(lVar7 + 0xb8);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 == 0) goto LAB_01259510;
    FUN_01280cac(lVar7,uVar9,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 200),0);
    lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar8 + 0x80);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
      lVar8 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 0x18) = lVar7;
    if ((*(byte *)(*(long *)(lVar8 + 0x80) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
  }
  puVar2 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>__
  ;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  lVar7 = FUN_010ac8c0(uVar4,lVar7,*(undefined8 *)PTR_DAT_033f2be0);
  uVar4 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  lVar5 = FUN_01780344(uVar4,0);
  if ((lVar5 != 0) &&
     (uVar4 = FUN_0178c390(lVar5,*(undefined8 *)
                                  Method_System_Collections_Generic_List<Face>_GetEnumerator__,0),
     lVar7 != 0)) {
    if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar9 = *(undefined8 *)(lVar7 + 0x20);
    if (*(int *)(*(long *)
                  System_Collections_Generic_Dictionary<StylePropertyId,_StylePropertyAnimationSystem_Values>_TypeInfo
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar1 = StringLiteral_5525;
    uVar4 = FUN_01c938d0(uVar4,uVar9,0);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
    }
    uVar9 = FUN_01d04ef4(param_2,0);
    uVar9 = FUN_01c9ef68(uVar9,0);
    uVar4 = FUN_01c9d054(uVar4,uVar9,0);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 != 0) {
      FUN_013d1804(lVar5,lVar7,*(undefined8 *)StringLiteral_13063);
      puVar6 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0);
      local_58 = uVar4;
      lStack_50 = lVar5;
      (*(code *)puVar6[2])(*puVar6,puVar6,0,&local_58,&local_48);
      if (local_48 != 0) {
        puVar6 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xc0);
        (*(code *)puVar6[2])(*puVar6,puVar6,local_48,0,&local_58);
        return local_58;
      }
    }
  }
LAB_01259510:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


