/*
FUNCTION_NAME: FUN_025cc4c0
ENTRY_POINT: 025cc4c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_025cc4c0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_28;
  
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03783160 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StyleValue>_get_Count__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CommonTouch>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<int>__ctor__);
    thunk_FUN_00d48444(StringLiteral_11347);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_Clear__
                      );
    thunk_FUN_00d48444(StringLiteral_2181);
    thunk_FUN_00d48444(StringLiteral_5775);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<BlastableModel>_MoveNext__)
    ;
    thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<IInteractorView>_TypeInfo);
    DAT_03783160 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b4e0(uVar7,0,0);
  if ((uVar5 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    FUN_010c2c5c(param_1,&local_28,
                 *(undefined8 *)Method_System_Collections_Generic_List<CommonTouch>_get_Count__);
    *(undefined8 *)(param_1 + 0x38) = local_28;
    uVar7 = local_28;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b4e0(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_0268fd4c(param_1,0);
    if (lVar6 == 0) goto LAB_025cc8a0;
    uVar7 = FUN_010e5800(lVar6,*(undefined8 *)UnityEngine_Pose___TypeInfo);
    *(undefined8 *)(param_1 + 0x38) = uVar7;
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<int>__ctor__
                              );
    if (lVar6 == 0) goto LAB_025cc8a0;
    FUN_0267ba9c(lVar6,0);
    *(long *)(param_1 + 0x50) = lVar6;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b4e0(uVar7,0,0);
  if ((uVar5 & 1) == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x40);
  }
  else {
    FUN_010c2c5c(param_1,&local_28,
                 *(undefined8 *)Method_System_Collections_Generic_List<StyleValue>_get_Count__);
    *(undefined8 *)(param_1 + 0x40) = local_28;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b4e0(local_28,0,0);
  if ((uVar5 & 1) == 0) {
    lVar6 = *(long *)(param_1 + 0x40);
  }
  else {
    lVar6 = FUN_0268fd4c(param_1,0);
    if (lVar6 == 0) goto LAB_025cc8a0;
    lVar6 = FUN_010e5800(lVar6,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
    *(long *)(param_1 + 0x40) = lVar6;
  }
  if (lVar6 == 0) goto LAB_025cc8a0;
  uVar7 = FUN_02665318(lVar6,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  puVar4 = StringLiteral_302;
  uVar5 = FUN_0268b4e0(uVar7,0,0);
  puVar2 = System_Collections_Generic_IEnumerable<IInteractorView>_TypeInfo;
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_025cc8a0;
    uVar7 = FUN_026663fc(*(long *)(param_1 + 0x38),0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar5 = FUN_0268b4e0(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_025cc8a0;
      uVar7 = FUN_026663fc(*(long *)(param_1 + 0x38),0);
      *(undefined8 *)(param_1 + 0x48) = uVar7;
    }
    else {
      uVar7 = FUN_0267c994(*(undefined8 *)StringLiteral_2181,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar5 = FUN_0268b4e0(uVar7,0,0);
      lVar6 = *(long *)puVar4;
      puVar1 = (undefined8 *)StringLiteral_11347;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar6);
        puVar1 = (undefined8 *)StringLiteral_11347;
      }
      StringLiteral_11347 = (undefined *)puVar1;
      if ((uVar5 & 1) != 0) {
        uVar7 = *(undefined8 *)StringLiteral_5775;
        goto LAB_025cc74c;
      }
      FUN_0266185c(*(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_Clear__
                   ,param_1,0);
      lVar6 = thunk_FUN_00d62348(*puVar1);
      puVar3 = Method_System_Collections_Generic_List_Enumerator<BlastableModel>_MoveNext__;
      if (lVar6 == 0) {
LAB_025cc8a0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0267d648(lVar6,uVar7,0);
      FUN_0268b75c(lVar6,*(undefined8 *)puVar3,0);
      *(long *)(param_1 + 0x48) = lVar6;
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_025cc8a0;
      FUN_026689d4(*(long *)(param_1 + 0x38),lVar6,0);
    }
    uVar7 = 1;
  }
  else {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = *(undefined8 *)puVar2;
LAB_025cc74c:
    FUN_0266185c(uVar7,param_1,0);
    uVar7 = 0;
  }
  return uVar7;
}


