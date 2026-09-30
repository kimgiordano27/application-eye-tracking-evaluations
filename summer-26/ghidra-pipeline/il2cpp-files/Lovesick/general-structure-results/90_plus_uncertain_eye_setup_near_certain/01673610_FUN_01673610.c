/*
FUNCTION_NAME: FUN_01673610
ENTRY_POINT: 01673610
PROGRAM: Lovesick-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_01673610(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar7 = Method_OVREnumerable_Enumerator<Type>_get_Current__;
  if ((DAT_03778406 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033eace0);
    thunk_FUN_00d48444(Method_OVREnumerable_Enumerator<Type>_get_Current__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03778406 = 1;
  }
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01659864(param_1,0);
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    uVar3 = FUN_016ac04c(uVar10,0,0);
    if ((uVar3 & 1) == 0) {
LAB_01673844:
      plVar2 = *(long **)(param_1 + 0x38);
      if (plVar2 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar2 + 0x318))(plVar2,*(undefined8 *)(*plVar2 + 800));
        if ((uVar3 & 1) == 0) {
          return;
        }
        plVar2 = *(long **)(param_1 + 0x38);
        if (plVar2 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar2 + 0x348))(plVar2,*(undefined8 *)(*plVar2 + 0x350));
          if ((uVar3 & 1) == 0) {
            return;
          }
          lVar9 = FUN_016740b0(param_1);
          if (lVar9 == 0) {
            thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                              );
            uVar10 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            uVar11 = thunk_FUN_00d48444(StringLiteral_2816);
            FUN_0164c318(uVar10,uVar11,0);
            uVar11 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_43_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,uVar11);
          }
          plVar2 = *(long **)(param_1 + 0x38);
          uVar10 = FUN_016740b0(param_1);
          if (plVar2 != (long *)0x0) {
            lVar9 = *(long *)PTR_DAT_033eace0;
            if ((*(byte *)(lVar9 + 300) <= *(byte *)(*plVar2 + 300)) &&
               (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar9 + 300) * 8 + -8) ==
                lVar9)) {
              lVar8 = *plVar2;
              if ((*(byte *)(lVar9 + 300) <= *(byte *)(lVar8 + 300)) &&
                 (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar9 + 300) * 8 + -8) ==
                  lVar9)) {
                uVar10 = (**(code **)(lVar8 + 0x418))(plVar2,uVar10,*(undefined8 *)(lVar8 + 0x420));
                *(undefined8 *)(param_1 + 0x38) = uVar10;
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar2);
          }
        }
      }
LAB_01673924:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = FUN_01673e84(param_1);
    uVar6 = thunk_FUN_00d48444(StringLiteral_10766);
    puVar7 = StringLiteral_8029;
LAB_01673b34:
    uVar5 = thunk_FUN_00d48444(puVar7);
  }
  else {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar2 = (long *)FUN_016581d8(lVar9,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar3 = FUN_01789ac0(plVar2,0,0);
    lVar9 = *(long *)(param_1 + 0x18);
    if ((uVar3 & 1) != 0) {
      if (lVar9 == 0) {
        uVar11 = thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
      }
      else {
        uVar10 = thunk_FUN_00d48444(
                                   Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__
                                   );
        uVar11 = thunk_FUN_00d48444(StringLiteral_12935);
        uVar11 = FUN_01600424(uVar10,lVar9,uVar11,0);
      }
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = thunk_FUN_00d48444(DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass4_0_TypeInfo);
      puVar7 = Method_System_Net_Configuration_SettingsSection__ctor__;
      goto LAB_01673b34;
    }
    plVar4 = (long *)FUN_01673f20(uVar3,lVar9,plVar2);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar3 = FUN_01789ac0(plVar4,0,0);
    if ((uVar3 & 1) != 0) {
      uVar10 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
      uVar10 = FUN_00da4fb8(uVar10,5);
      FUN_00ac2be8();
      puVar7 = Method_System_String_Ctor__;
      uVar11 = thunk_FUN_00d48444(Method_System_String_Ctor__);
      FUN_00acb0b4(uVar10,uVar11);
      uVar11 = thunk_FUN_00d48444(puVar7);
      FUN_00acb320(uVar10,0,uVar11);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      FUN_00ac2be8(uVar10);
      FUN_00acb0b4(uVar10,uVar11);
      FUN_00acb320(uVar10,1,uVar11);
      FUN_00ac2be8(uVar10);
      puVar7 = Method_System_Collections_Generic_List<Matrix4x4>_ToArray__;
      uVar11 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Matrix4x4>_ToArray__);
      FUN_00acb0b4(uVar10,uVar11);
      uVar11 = thunk_FUN_00d48444(puVar7);
      FUN_00acb320(uVar10,2,uVar11);
      FUN_00ac2be8(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x308))(plVar2,*(undefined8 *)(*plVar2 + 0x310));
      FUN_00ac2be8(uVar10);
      FUN_00acb0b4(uVar10,uVar11);
      FUN_00acb320(uVar10,3,uVar11);
      FUN_00ac2be8(uVar10);
      puVar7 = Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__;
      uVar11 = thunk_FUN_00d48444(
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                 );
      FUN_00acb0b4(uVar10,uVar11);
      uVar11 = thunk_FUN_00d48444(puVar7);
      FUN_00acb320(uVar10,4,uVar11);
      uVar10 = FUN_01600844(uVar10,0);
      goto LAB_01673b94;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01659b54(plVar4,uVar10,uVar11,0);
    *(undefined8 *)(param_1 + 0x38) = uVar10;
    uVar3 = FUN_016ac04c(uVar10,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar3 = FUN_0178a8c4(plVar4,plVar2,0);
      if ((uVar3 & 1) != 0) {
        if (plVar4 == (long *)0x0) goto LAB_01673924;
        uVar3 = FUN_0178b0b0(plVar4,0);
        if ((uVar3 & 1) != 0) {
          if (plVar2 == (long *)0x0) goto LAB_01673924;
          uVar3 = FUN_0178b0b0(plVar2,0);
          if ((uVar3 & 1) == 0) {
            uVar10 = *(undefined8 *)(param_1 + 0x38);
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = thunk_FUN_00d14dc0(plVar2,uVar10,0);
            *(undefined8 *)(param_1 + 0x38) = uVar10;
            uVar3 = FUN_016ac04c(uVar10,0,0);
            puVar7 = StringLiteral_8029;
            if ((uVar3 & 1) != 0) {
              uVar11 = *(undefined8 *)(param_1 + 0x20);
              thunk_FUN_00d48444(StringLiteral_8029);
              puVar1 = StringLiteral_10766;
              thunk_FUN_00d48444(StringLiteral_10766);
              uVar5 = thunk_FUN_00d48444(puVar7);
              uVar6 = thunk_FUN_00d48444(puVar1);
              uVar10 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
              goto LAB_01673b8c;
            }
          }
        }
      }
      goto LAB_01673844;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = thunk_FUN_00d48444(StringLiteral_8029);
    uVar6 = thunk_FUN_00d48444(StringLiteral_10766);
    if (plVar4 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar5 = thunk_FUN_00d48444(StringLiteral_8029);
      uVar6 = thunk_FUN_00d48444(StringLiteral_10766);
      uVar10 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    }
  }
LAB_01673b8c:
  uVar10 = FUN_0160073c(uVar6,uVar11,uVar5,uVar10,0);
LAB_01673b94:
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__);
  uVar11 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_0164c318(uVar11,uVar10,0);
  uVar10 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_43_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar11,uVar10);
}


