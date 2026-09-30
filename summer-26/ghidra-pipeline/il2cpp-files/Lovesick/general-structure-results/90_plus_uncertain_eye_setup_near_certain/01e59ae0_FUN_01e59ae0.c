/*
FUNCTION_NAME: FUN_01e59ae0
ENTRY_POINT: 01e59ae0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 157
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01e59ae0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar7 = Method_System_Collections_Generic_Dictionary<OVRAnchor,_Transform>_set_Item__;
  if ((DAT_0377fd5b & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<OVRAnchor,_Transform>_set_Item__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3eb0);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_PrimitiveParameterExpression<object[]>__ctor__
                      );
    thunk_FUN_00d48444(OVRBounded3D_var);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_TryCreateTwoFingerGestureOnTouchBegan__
                      );
    thunk_FUN_00d48444(StringLiteral_4655);
    thunk_FUN_00d48444(StringLiteral_7552);
    DAT_0377fd5b = 1;
  }
  puVar2 = StringLiteral_4655;
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_TryCreateTwoFingerGestureOnTouchBegan__
  ;
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01e5b414(param_1,param_2,0x20,*(undefined8 *)puVar1);
  FUN_01e5b4a8(param_1,param_2,0x20,*(undefined8 *)puVar2);
  if (param_2 == 0) goto LAB_01e59d80;
  uVar4 = thunk_FUN_015fe514(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)StringLiteral_7552,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = thunk_FUN_015fe514(*(undefined8 *)(param_2 + 0x50),
                               *(undefined8 *)
                                Method_System_Linq_Expressions_PrimitiveParameterExpression<object[]>__ctor__
                               ,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = thunk_FUN_015fe514(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)OVRBounded3D_var,0);
      if ((uVar4 & 1) == 0) {
        FUN_00ac2be8(param_2);
        uVar10 = *(undefined8 *)(param_2 + 0x50);
        thunk_FUN_00d48444(PTR_DAT_033ec070);
        uVar5 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar6 = thunk_FUN_00d48444(
                                  FullSerializer_Internal_fsPortableReflection_AttributeQueryComparator_TypeInfo
                                  );
        FUN_01ebeb58(uVar5,uVar6,uVar10,param_2,0);
        uVar6 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,uVar6);
      }
      lVar8 = param_1[1];
      if (lVar8 == 0) goto LAB_01e59d80;
      uVar9 = 2;
    }
    else {
      lVar8 = param_1[1];
      if (lVar8 == 0) goto LAB_01e59d80;
      uVar9 = 1;
    }
  }
  else {
    lVar8 = param_1[1];
    if (lVar8 == 0) goto LAB_01e59d80;
    uVar9 = 0;
  }
  *(undefined4 *)(lVar8 + 0x30) = uVar9;
  if ((*(byte *)((long)param_1 + 0x14) >> 5 & 1) != 0) {
    plVar11 = (long *)*param_1;
    if (plVar11 == (long *)0x0) goto LAB_01e59d80;
    lVar8 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
    puVar1 = PTR_DAT_033f3eb0;
    if (lVar8 == 0) goto LAB_01e59d80;
    local_34 = *(undefined4 *)(lVar8 + 0x30);
    uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f3eb0,&local_34);
    if (param_1[1] == 0) goto LAB_01e59d80;
    local_38 = *(undefined4 *)(param_1[1] + 0x30);
    uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_38);
    uVar4 = (**(code **)(*plVar11 + 0x2a8))(plVar11,uVar5,uVar6,*(undefined8 *)(*plVar11 + 0x2b0));
    if ((uVar4 & 1) == 0) {
      thunk_FUN_00d48444(PTR_DAT_033ec070);
      uVar5 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar7 = StringLiteral_6133;
      goto LAB_01e59dc8;
    }
  }
  plVar11 = (long *)*param_1;
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    if ((*(byte *)(param_1 + 2) >> 5 & 1) == 0) {
      iVar3 = (**(code **)(lVar8 + 0x268))(plVar11,*(undefined8 *)(lVar8 + 0x270));
    }
    else {
      lVar8 = (**(code **)(lVar8 + 0x208))(plVar11,*(undefined8 *)(lVar8 + 0x210));
      if (lVar8 == 0) goto LAB_01e59d80;
      iVar3 = *(int *)(lVar8 + 0x30);
    }
    if (iVar3 == 1) {
      if (param_1[1] == 0) goto LAB_01e59d80;
      if (*(int *)(param_1[1] + 0x30) == 0) {
        thunk_FUN_00d48444(PTR_DAT_033ec070);
        uVar5 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar7 = OVRPlugin_OVRP_1_118_0_TypeInfo;
LAB_01e59dc8:
        uVar6 = thunk_FUN_00d48444(puVar7);
        FUN_01ebead4(uVar5,uVar6,param_2,0);
        uVar6 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,uVar6);
      }
    }
    else if (iVar3 == 2) {
      if (param_1[1] == 0) goto LAB_01e59d80;
      if (*(uint *)(param_1[1] + 0x30) < 2) {
        thunk_FUN_00d48444(PTR_DAT_033ec070);
        uVar5 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar7 = Meta_Voice_Audio_IAudioClipProvider_TypeInfo;
        goto LAB_01e59dc8;
      }
    }
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01e5b674(param_1,param_2,0x20);
    return;
  }
LAB_01e59d80:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


