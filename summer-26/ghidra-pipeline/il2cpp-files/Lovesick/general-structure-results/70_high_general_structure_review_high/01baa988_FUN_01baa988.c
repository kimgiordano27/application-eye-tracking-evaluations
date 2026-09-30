/*
FUNCTION_NAME: FUN_01baa988
ENTRY_POINT: 01baa988
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


void FUN_01baa988(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long local_68;
  
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377e6d6 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<QueryResult>_get_count__);
    thunk_FUN_00d48444(Method_System_Net_WebRequest_EndGetRequestStream__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<GrabLock>__);
    thunk_FUN_00d48444(StringLiteral_11285);
    thunk_FUN_00d48444(Method_System_Diagnostics_Process_StartWithShellExecuteEx__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParseValueAsync>d__8>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3d78);
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARFoundation_ARSession_<Install>d__37_MoveNext__);
    thunk_FUN_00d48444(Method_System_ValueTuple<object,_ValueTuple<Type,_int>>__ctor__);
    thunk_FUN_00d48444(Meta_Voice_UnityOpus_Decoder_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqaddq_s32__);
    thunk_FUN_00d48444(StringLiteral_5611);
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARSubsystems_XRCpuImage_Api_GetAsyncRequestStatus__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRGroupMember>_GetEnumerator__);
    DAT_0377e6d6 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = PTR_DAT_033f3868;
  uVar7 = FUN_0268b5e4(uVar11,0);
  if ((uVar7 & 1) == 0) {
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar8 == 0) goto LAB_01bab0d4;
    FUN_0268afbc(lVar8,*(undefined8 *)
                        Method_System_Collections_Generic_List<IXRGroupMember>_GetEnumerator__,0);
    *(long *)(param_1 + 0x38) = lVar8;
    lVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (lVar8,0);
    uVar11 = FUN_0268fd10(param_1,0);
    if (lVar8 == 0) goto LAB_01bab0d4;
    FUN_026a0040(lVar8,uVar11,0,0);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_01bab0d4;
    lVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(param_1 + 0x38),0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    if (lVar8 == 0) goto LAB_01bab0d4;
    puVar9 = *(undefined4 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8);
    FUN_0269f750(*puVar9,puVar9[1],puVar9[2],lVar8,0);
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_01bab0d4;
    lVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(param_1 + 0x38),0);
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__);
      DAT_03774f00 = '\x01';
    }
    if (lVar8 == 0) goto LAB_01bab0d4;
    puVar9 = *(undefined4 **)
              (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__ +
              0xb8);
    FUN_0269f994(*puVar9,puVar9[1],puVar9[2],puVar9[3],lVar8,0);
  }
  puVar5 = Method_UnityEngine_XR_ARFoundation_ARSession_<Install>d__37_MoveNext__;
  puVar2 = Method_System_Net_WebRequest_EndGetRequestStream__;
  lVar8 = *(long *)(param_1 + 0x50);
  if (lVar8 != 0) {
    iVar12 = 0;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar12) {
        lVar10 = *(long *)puVar2;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
        if ((uVar7 & 1) == 0) {
          *(undefined4 *)(lVar8 + 0x18) = 0;
        }
        else {
          iVar12 = *(int *)(lVar8 + 0x18);
          *(undefined4 *)(lVar8 + 0x18) = 0;
          if (0 < iVar12) {
            FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar12,0);
          }
        }
        goto LAB_01baac74;
      }
      FUN_0132138c(lVar8,iVar12,&local_68,*(undefined8 *)puVar5);
      if (local_68 == 0) break;
      FUN_01ba9e18();
      lVar8 = *(long *)(param_1 + 0x50);
      iVar12 = iVar12 + 1;
    } while (lVar8 != 0);
    goto LAB_01bab0d4;
  }
LAB_01baac74:
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_02681b9c(uVar11,0,0);
  if ((uVar7 & 1) != 0) {
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqaddq_s32__);
    if (lVar8 != 0) {
      FUN_01320e50(lVar8,*(undefined8 *)StringLiteral_11285);
      puVar3 = UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo;
      puVar2 = PTR_DAT_033f3d78;
      lVar10 = *(long *)(param_1 + 0x38);
      if (lVar10 != 0) {
        iVar12 = 0;
        while (lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                  (lVar10,0), lVar10 != 0) {
          iVar6 = FUN_026a103c(lVar10,0);
          if (iVar6 <= iVar12) {
            if (*(int *)(lVar8 + 0x18) < 1) goto LAB_01baada4;
            iVar12 = 0;
            goto LAB_01baad4c;
          }
          if ((*(long *)(param_1 + 0x38) == 0) ||
             (lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                 (*(long *)(param_1 + 0x38),0), lVar10 == 0)) break;
          uVar11 = FUN_026a145c(lVar10,iVar12,0);
          FUN_00acdfa0(lVar8,uVar11,*(undefined8 *)puVar3);
          lVar10 = *(long *)(param_1 + 0x38);
          iVar12 = iVar12 + 1;
          if (lVar10 == 0) break;
        }
      }
    }
    goto LAB_01bab0d4;
  }
  goto LAB_01baada4;
LAB_01baafa4:
  FUN_0132138c(lVar10,iVar12,&local_68,*(undefined8 *)puVar5);
  if (local_68 == 0) goto LAB_01bab0d4;
  uVar7 = FUN_01ba8818(param_1,(long)*(short *)(local_68 + 0x14));
  if (((uVar7 & 1) == 0) || ((*(uint *)(param_1 + 0x18) | 1) == 3)) {
    if ((*(long *)(param_1 + 0x50) == 0) ||
       ((FUN_0132138c(*(long *)(param_1 + 0x50),iVar12,&local_68,*(undefined8 *)puVar5),
        local_68 == 0 || (*(long *)(param_1 + 0x38) == 0)))) goto LAB_01bab0d4;
    lVar8 = *(long *)(local_68 + 0x18);
    uVar11 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                       (*(long *)(param_1 + 0x38),0);
    if (lVar8 == 0) goto LAB_01bab0d4;
  }
  else {
    if (((*(long *)(param_1 + 0x50) == 0) ||
        (FUN_0132138c(*(long *)(param_1 + 0x50),iVar12,&local_68,*(undefined8 *)puVar5),
        local_68 == 0)) || (lVar10 = *(long *)(param_1 + 0x50), lVar10 == 0)) goto LAB_01bab0d4;
    lVar8 = *(long *)(local_68 + 0x18);
    FUN_0132138c(lVar10,iVar12,&local_68,*(undefined8 *)puVar5);
    if (((local_68 == 0) ||
        (FUN_0132138c(lVar10,(long)*(short *)(local_68 + 0x14),&local_68,*(undefined8 *)puVar5),
        local_68 == 0)) || (lVar8 == 0)) goto LAB_01bab0d4;
    uVar11 = *(undefined8 *)(local_68 + 0x18);
  }
  FUN_026a0040(lVar8,uVar11,0,0);
  lVar10 = *(long *)(param_1 + 0x50);
  if (lVar10 == 0) goto LAB_01bab0d4;
  iVar12 = iVar12 + 1;
  if (*(int *)(lVar10 + 0x18) <= iVar12) {
    return;
  }
  goto LAB_01baafa4;
  while( true ) {
    uVar11 = FUN_0268fd4c(local_68,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar4);
    }
    FUN_0268c114(uVar11,0);
    iVar12 = iVar12 + 1;
    if (*(int *)(lVar8 + 0x18) <= iVar12) break;
LAB_01baad4c:
    FUN_0132138c(lVar8,iVar12,&local_68,*(undefined8 *)puVar2);
    if (local_68 == 0) goto LAB_01bab0d4;
  }
LAB_01baada4:
  puVar2 = Meta_Voice_UnityOpus_Decoder_TypeInfo;
  lVar8 = *(long *)(param_1 + 0x48);
  lVar10 = *(long *)(param_1 + 0x50);
  if (lVar10 == 0) {
    if (lVar8 == 0) goto LAB_01bab0d4;
LAB_01baadc8:
    uVar11 = FUN_00da4fb8(*(undefined8 *)StringLiteral_5611,*(undefined4 *)(lVar8 + 0x18));
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = Method_Obi_ObiNativeList<QueryResult>_get_count__;
    if (lVar8 == 0) goto LAB_01bab0d4;
    FUN_01320f6c(lVar8,uVar11,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<GrabLock>__)
    ;
    *(long *)(param_1 + 0x50) = lVar8;
    uVar11 = FUN_0132209c(lVar8,*(undefined8 *)puVar2);
    lVar10 = *(long *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0xa0) = uVar11;
    if (lVar10 == 0) goto LAB_01bab0d4;
  }
  else {
    if (lVar8 == 0) goto LAB_01bab0d4;
    if (*(int *)(lVar10 + 0x18) != *(int *)(lVar8 + 0x18)) goto LAB_01baadc8;
  }
  puVar3 = Method_UnityEngine_XR_ARSubsystems_XRCpuImage_Api_GetAsyncRequestStatus__;
  puVar2 = Method_System_ValueTuple<object,_ValueTuple<Type,_int>>__ctor__;
  iVar12 = 0;
  while( true ) {
    if (*(int *)(lVar10 + 0x18) <= iVar12) {
      if (*(int *)(lVar10 + 0x18) < 1) {
        return;
      }
      iVar12 = 0;
      goto LAB_01baafa4;
    }
    if (*(long *)(param_1 + 0x48) == 0) break;
    FUN_0132138c(*(long *)(param_1 + 0x48),iVar12,&local_68,*(undefined8 *)puVar5);
    lVar8 = local_68;
    if (*(long *)(param_1 + 0x50) == 0) break;
    FUN_0132138c(*(long *)(param_1 + 0x50),iVar12,&local_68,*(undefined8 *)puVar5);
    lVar10 = local_68;
    if (local_68 == 0) {
      lVar13 = *(long *)(param_1 + 0x50);
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if ((lVar10 == 0) || (FUN_017b46ec(lVar10,0), lVar13 == 0)) break;
      FUN_0132149c(lVar13,iVar12,lVar10,*(undefined8 *)puVar2);
    }
    if ((lVar8 == 0) || (lVar10 == 0)) break;
    uVar11 = *(undefined8 *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(lVar8 + 0x10);
    *(undefined2 *)(lVar10 + 0x14) = *(undefined2 *)(lVar8 + 0x14);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_0268b5e4(uVar11,0);
    if ((uVar7 & 1) == 0) {
      uVar11 = FUN_01ba9ec4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(lVar10 + 0x10));
      lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar13 == 0) break;
      FUN_0268afbc(lVar13,uVar11,0);
      lVar13 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (lVar13,0);
      *(long *)(lVar10 + 0x18) = lVar13;
    }
    else {
      lVar13 = *(long *)(lVar10 + 0x18);
    }
    if ((*(long *)(lVar8 + 0x18) == 0) || (FUN_0269f6b0(*(long *)(lVar8 + 0x18),0), lVar13 == 0))
    break;
    FUN_0269f750(lVar13,0);
    if (*(long *)(lVar8 + 0x18) == 0) break;
    FUN_0269f910(*(long *)(lVar8 + 0x18),0);
    FUN_0269f994(lVar13,0);
    lVar10 = *(long *)(param_1 + 0x50);
    iVar12 = iVar12 + 1;
    if (lVar10 == 0) break;
  }
LAB_01bab0d4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


