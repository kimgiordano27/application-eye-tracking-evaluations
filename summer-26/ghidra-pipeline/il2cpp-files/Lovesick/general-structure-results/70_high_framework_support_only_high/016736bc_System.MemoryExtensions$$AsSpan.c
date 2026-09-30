/*
FUNCTION_NAME: System.MemoryExtensions$$AsSpan
ENTRY_POINT: 016736bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_MemoryExtensions__AsSpan(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  
  if ((param_1 & 1) == 0) {
    plVar3 = (long *)FUN_01673f20();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x25);
    }
    uVar4 = FUN_01789ac0(plVar3,0,0);
    if ((uVar4 & 1) != 0) {
      uVar9 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
      uVar9 = FUN_00da4fb8(uVar9,5);
      FUN_00ac2be8();
      puVar1 = Method_System_String_Ctor__;
      uVar10 = thunk_FUN_00d48444(Method_System_String_Ctor__);
      FUN_00acb0b4(uVar9,uVar10);
      uVar10 = thunk_FUN_00d48444(puVar1);
      FUN_00acb320(uVar9,0,uVar10);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
      FUN_00ac2be8(uVar9);
      FUN_00acb0b4(uVar9,uVar10);
      FUN_00acb320(uVar9,1,uVar10);
      FUN_00ac2be8(uVar9);
      puVar1 = Method_System_Collections_Generic_List<Matrix4x4>_ToArray__;
      uVar10 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Matrix4x4>_ToArray__);
      FUN_00acb0b4(uVar9,uVar10);
      uVar10 = thunk_FUN_00d48444(puVar1);
      FUN_00acb320(uVar9,2,uVar10);
      FUN_00ac2be8();
      uVar10 = (**(code **)(*unaff_x20 + 0x308))();
      FUN_00ac2be8(uVar9);
      FUN_00acb0b4(uVar9,uVar10);
      FUN_00acb320(uVar9,3,uVar10);
      FUN_00ac2be8(uVar9);
      puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__;
      uVar10 = thunk_FUN_00d48444(
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                 );
      FUN_00acb0b4(uVar9,uVar10);
      uVar10 = thunk_FUN_00d48444(puVar1);
      FUN_00acb320(uVar9,4,uVar10);
      uVar9 = FUN_01600844(uVar9,0);
      goto LAB_01673b94;
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_01659b54(plVar3,uVar9,uVar10,0);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar9;
    uVar4 = FUN_016ac04c(uVar9,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_0178a8c4(plVar3);
      if ((uVar4 & 1) != 0) {
        if (plVar3 == (long *)0x0) goto LAB_01673924;
        uVar4 = FUN_0178b0b0(plVar3,0);
        if ((uVar4 & 1) != 0) {
          if (unaff_x20 == (long *)0x0) goto LAB_01673924;
          uVar4 = FUN_0178b0b0();
          if ((uVar4 & 1) == 0) {
            if (*(int *)(*unaff_x24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar9 = thunk_FUN_00d14dc0();
            *(undefined8 *)(unaff_x19 + 0x38) = uVar9;
            uVar4 = FUN_016ac04c(uVar9,0,0);
            puVar1 = StringLiteral_8029;
            if ((uVar4 & 1) != 0) {
              uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
              thunk_FUN_00d48444(StringLiteral_8029);
              puVar2 = StringLiteral_10766;
              thunk_FUN_00d48444(StringLiteral_10766);
              uVar10 = thunk_FUN_00d48444(puVar1);
              uVar5 = thunk_FUN_00d48444(puVar2);
              uVar6 = (**(code **)(*unaff_x20 + 0x168))();
              goto LAB_01673b8c;
            }
          }
        }
      }
      plVar3 = *(long **)(unaff_x19 + 0x38);
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x318))(plVar3,*(undefined8 *)(*plVar3 + 800));
        if ((uVar4 & 1) == 0) {
          return;
        }
        plVar3 = *(long **)(unaff_x19 + 0x38);
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x348))(plVar3,*(undefined8 *)(*plVar3 + 0x350));
          if ((uVar4 & 1) == 0) {
            return;
          }
          lVar7 = FUN_016740b0();
          if (lVar7 == 0) {
            thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__
                              );
            uVar9 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            uVar10 = thunk_FUN_00d48444(StringLiteral_2816);
            FUN_0164c318(uVar9,uVar10,0);
            uVar10 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_43_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar9,uVar10);
          }
          plVar3 = *(long **)(unaff_x19 + 0x38);
          uVar9 = FUN_016740b0();
          if (plVar3 != (long *)0x0) {
            lVar7 = *(long *)PTR_DAT_033eace0;
            if ((*(byte *)(lVar7 + 300) <= *(byte *)(*plVar3 + 300)) &&
               (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) ==
                lVar7)) {
              lVar8 = *plVar3;
              if ((*(byte *)(lVar7 + 300) <= *(byte *)(lVar8 + 300)) &&
                 (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) ==
                  lVar7)) {
                uVar9 = (**(code **)(lVar8 + 0x418))(plVar3,uVar9,*(undefined8 *)(lVar8 + 0x420));
                *(undefined8 *)(unaff_x19 + 0x38) = uVar9;
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar3);
          }
        }
      }
LAB_01673924:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar10 = thunk_FUN_00d48444(StringLiteral_8029);
    uVar5 = thunk_FUN_00d48444(StringLiteral_10766);
    if (plVar3 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar10 = thunk_FUN_00d48444(StringLiteral_8029);
      uVar5 = thunk_FUN_00d48444(StringLiteral_10766);
      uVar6 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    }
  }
  else {
    if (unaff_x21 == 0) {
      uVar9 = thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    }
    else {
      uVar9 = thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__)
      ;
      thunk_FUN_00d48444(StringLiteral_12935);
      uVar9 = FUN_01600424(uVar9);
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
    uVar5 = thunk_FUN_00d48444(DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass4_0_TypeInfo);
    uVar10 = thunk_FUN_00d48444(Method_System_Net_Configuration_SettingsSection__ctor__);
  }
LAB_01673b8c:
  uVar9 = FUN_0160073c(uVar5,uVar9,uVar10,uVar6,0);
LAB_01673b94:
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary_Enumerator<int,_int>_MoveNext__);
  uVar10 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_0164c318(uVar10,uVar9,0);
  uVar9 = thunk_FUN_00d48444(OVRPlugin_OVRP_1_43_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar9);
}


