/*
FUNCTION_NAME: FUN_010d35d4
ENTRY_POINT: 010d35d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_010d35d4(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined *puVar6;
  
  plVar9 = *(long **)(param_2 + 0x38);
  if (plVar9 == (long *)0x0) {
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    plVar9 = *(long **)(param_2 + 0x38);
    if (plVar9 == (long *)0x0) {
      FUN_00d59478(param_2);
      plVar9 = *(long **)(param_2 + 0x38);
    }
  }
  if ((*(byte *)(*plVar9 + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lVar1 = thunk_FUN_00d62348();
  if (lVar1 == 0) {
LAB_010d3880:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 8);
  (*(code *)puVar8[2])(*puVar8,puVar8,lVar1,0,0);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  uVar2 = FUN_0169f70c(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar10 = thunk_FUN_00d48444(Meta_WitAi_Requests_VRequest_<>c__DisplayClass116_0_TypeInfo);
    FUN_016ec5b8(uVar3,uVar10,0);
    uVar10 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_MoveNext__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,uVar10);
  }
  if (*(long *)(lVar1 + 0x10) == 0) goto LAB_010d3880;
  uVar2 = FUN_016ac334(*(long *)(lVar1 + 0x10),0);
  if ((uVar2 & 1) == 0) {
    plVar9 = *(long **)(lVar1 + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_010d3880;
    uVar3 = (**(code **)(*plVar9 + 0x3f8))(plVar9,*(undefined8 *)(*plVar9 + 0x400));
    puVar6 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar10 = FUN_01780344(uVar10,0);
    uVar2 = FUN_0178a8c4(uVar3,uVar10,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
      plVar9 = (long *)FUN_00da4fb8(uVar3,5);
      if (plVar9 == (long *)0x0) goto LAB_010d3880;
      lVar4 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                );
      if ((lVar4 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0))
      goto LAB_010d3980;
      lVar4 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                );
      if ((int)plVar9[3] == 0) goto LAB_010d39a0;
      plVar9[4] = lVar4;
      plVar7 = *(long **)(lVar1 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_010d3880;
      lVar1 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if ((lVar1 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0)) {
LAB_010d3980:
        uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar3,0);
      }
      if (*(uint *)(plVar9 + 3) < 2) {
LAB_010d39a0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar9[5] = lVar1;
      lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_119__);
      if ((lVar1 != 0) &&
         (lVar1 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*plVar9 + 0x40)), lVar1 == 0))
      goto LAB_010d3980;
      lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_119__);
      if (*(uint *)(plVar9 + 3) < 3) goto LAB_010d39a0;
      plVar9[6] = lVar1;
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
      lVar1 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar7 = (long *)FUN_01780344(uVar3,0);
      uVar3 = 0;
      if (plVar7 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      }
      FUN_00ac2be8(plVar9);
      FUN_00acb0b4(plVar9,uVar3);
      FUN_00acb320(plVar9,3,uVar3);
      FUN_00ac2be8(plVar9);
      puVar6 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
      uVar3 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                );
      FUN_00acb0b4(plVar9,uVar3);
      uVar3 = thunk_FUN_00d48444(puVar6);
      FUN_00acb320(plVar9,4,uVar3);
      uVar3 = FUN_01600844(plVar9,0);
      goto LAB_010d3918;
    }
    plVar9 = *(long **)(lVar1 + 0x10);
    if (plVar9 == (long *)0x0) goto LAB_010d3880;
    lVar4 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
    if (lVar4 == 0) goto LAB_010d3880;
    if (*(int *)(lVar4 + 0x18) == 1) {
      plVar9 = *(long **)(lVar4 + 0x20);
      if (plVar9 == (long *)0x0) goto LAB_010d3880;
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
      uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar6);
      }
      uVar3 = FUN_01780344(uVar3,0);
      if (plVar9 == (long *)0x0) goto LAB_010d3880;
      uVar2 = (**(code **)(*plVar9 + 0x2c8))(plVar9,uVar3,*(undefined8 *)(*plVar9 + 0x2d0));
      if ((uVar2 & 1) != 0) {
        uVar3 = FUN_01c6001c(*(undefined8 *)(lVar1 + 0x10),0,0);
        *(undefined8 *)(lVar1 + 0x10) = uVar3;
        if ((*(byte *)(*(long *)(*(long *)(param_2 + 0x38) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        lVar4 = thunk_FUN_00d62348();
        if (lVar4 != 0) {
          local_40 = &local_38;
          puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x38) + 0x30);
          local_38 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x20);
          local_48 = lVar1;
          (*(code *)puVar8[2])(*puVar8,puVar8,lVar4,&local_48,&local_38);
          return lVar4;
        }
        goto LAB_010d3880;
      }
      plVar9 = *(long **)(lVar1 + 0x10);
      FUN_00ac2be8(plVar9);
      uVar3 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      uVar10 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                 );
      puVar6 = Method_Sirenix_Serialization_SerializationUtility_SerializeValue<object>__;
    }
    else {
      FUN_00ac2be8(lVar1);
      plVar9 = *(long **)(lVar1 + 0x10);
      FUN_00ac2be8(plVar9);
      uVar3 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      uVar10 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                 );
      puVar6 = StringLiteral_391;
    }
  }
  else {
    plVar9 = *(long **)(lVar1 + 0x10);
    FUN_00ac2be8(plVar9);
    uVar3 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    uVar10 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                               );
    puVar6 = Method_Newtonsoft_Json_JsonTextReader_ParseComment__;
  }
  uVar5 = thunk_FUN_00d48444(puVar6);
  uVar3 = FUN_01600424(uVar10,uVar3,uVar5,0);
LAB_010d3918:
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar10 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016f2f28(uVar10,uVar3,0);
  uVar3 = thunk_FUN_00d48444(
                            Method_System_Collections_Generic_List_Enumerator<RenderGraphPass>_MoveNext__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar3);
}


