/*
FUNCTION_NAME: UnityEngine.GUIUtility$$GetControlID
ENTRY_POINT: 025cc580
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 UnityEngine_GUIUtility__GetControlID(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  *(undefined1 *)(unaff_x20 + 0x160) = 1;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b4e0(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
  }
  else {
    FUN_010c2c5c();
    *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000008;
    uVar6 = in_stack_00000008;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b4e0(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_0268fd4c();
    if (lVar5 == 0) goto LAB_025cc8a0;
    uVar6 = FUN_010e5800(lVar5,*(undefined8 *)UnityEngine_Pose___TypeInfo);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
  }
  if (*(long *)(unaff_x19 + 0x50) == 0) {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<int>__ctor__
                              );
    if (lVar5 == 0) goto LAB_025cc8a0;
    FUN_0267ba9c(lVar5,0);
    *(long *)(unaff_x19 + 0x50) = lVar5;
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b4e0(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x40);
  }
  else {
    FUN_010c2c5c();
    *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000008;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b4e0(in_stack_00000008,0,0);
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(unaff_x19 + 0x40);
  }
  else {
    lVar5 = FUN_0268fd4c();
    if (lVar5 == 0) goto LAB_025cc8a0;
    lVar5 = FUN_010e5800(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
    *(long *)(unaff_x19 + 0x40) = lVar5;
  }
  if (lVar5 == 0) goto LAB_025cc8a0;
  uVar6 = FUN_02665318(lVar5,0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x21);
  }
  puVar3 = StringLiteral_302;
  uVar4 = FUN_0268b4e0(uVar6,0,0);
  puVar2 = System_Collections_Generic_IEnumerable<IInteractorView>_TypeInfo;
  if ((uVar4 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_025cc8a0;
    uVar6 = FUN_026663fc(*(long *)(unaff_x19 + 0x38),0);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x21);
    }
    uVar4 = FUN_0268b4e0(uVar6,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_025cc8a0;
      uVar6 = FUN_026663fc(*(long *)(unaff_x19 + 0x38),0);
      *(undefined8 *)(unaff_x19 + 0x48) = uVar6;
    }
    else {
      uVar6 = FUN_0267c994(*(undefined8 *)StringLiteral_2181,0);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x21);
      }
      uVar4 = FUN_0268b4e0(uVar6,0,0);
      lVar5 = *(long *)puVar3;
      puVar1 = (undefined8 *)StringLiteral_11347;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        puVar1 = (undefined8 *)StringLiteral_11347;
      }
      StringLiteral_11347 = (undefined *)puVar1;
      if ((uVar4 & 1) != 0) {
        uVar6 = *(undefined8 *)StringLiteral_5775;
        goto LAB_025cc74c;
      }
      FUN_0266185c(*(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<PokeInteractable,_PokeInteractor_SurfaceHitCache_HitInfo>_Clear__
                  );
      lVar5 = thunk_FUN_00d62348(*puVar1);
      puVar2 = Method_System_Collections_Generic_List_Enumerator<BlastableModel>_MoveNext__;
      if (lVar5 == 0) {
LAB_025cc8a0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0267d648(lVar5,uVar6,0);
      FUN_0268b75c(lVar5,*(undefined8 *)puVar2,0);
      *(long *)(unaff_x19 + 0x48) = lVar5;
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_025cc8a0;
      FUN_026689d4(*(long *)(unaff_x19 + 0x38),lVar5,0);
    }
    uVar6 = 1;
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = *(undefined8 *)puVar2;
LAB_025cc74c:
    FUN_0266185c(uVar6);
    uVar6 = 0;
  }
  return uVar6;
}


