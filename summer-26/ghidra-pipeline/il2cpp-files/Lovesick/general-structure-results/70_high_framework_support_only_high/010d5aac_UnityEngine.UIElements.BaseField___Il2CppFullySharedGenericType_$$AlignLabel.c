/*
FUNCTION_NAME: UnityEngine.UIElements.BaseField<__Il2CppFullySharedGenericType>$$AlignLabel
ENTRY_POINT: 010d5aac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


long UnityEngine_UIElements_BaseField<__Il2CppFullySharedGenericType>__AlignLabel(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined *puVar6;
  
  uVar1 = FUN_0169f70c();
  if ((uVar1 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar10 = thunk_FUN_00d48444(Meta_WitAi_Requests_VRequest_<>c__DisplayClass116_0_TypeInfo);
    FUN_016ec5b8(uVar3,uVar10,0);
    uVar10 = thunk_FUN_00d48444(Oculus_Interaction_ProgressCurve___TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,uVar10);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_010d5e60;
  uVar1 = FUN_016ac334(*(long *)(unaff_x20 + 0x10),0);
  if ((uVar1 & 1) == 0) {
    plVar2 = *(long **)(unaff_x20 + 0x10);
    if (plVar2 == (long *)0x0) goto LAB_010d5e60;
    uVar3 = (**(code **)(*plVar2 + 0x3f8))(plVar2,*(undefined8 *)(*plVar2 + 0x400));
    puVar6 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    }
    uVar10 = FUN_01780344(uVar10,0);
    uVar1 = FUN_0178a8c4(uVar3,uVar10,0);
    if ((uVar1 & 1) == 0) {
      plVar2 = *(long **)(unaff_x20 + 0x10);
      if (plVar2 == (long *)0x0) {
LAB_010d5e60:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar4 = (**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
      if (lVar4 == 0) goto LAB_010d5e60;
      if (*(int *)(lVar4 + 0x18) != 1) {
        FUN_00ac2be8();
        plVar2 = *(long **)(unaff_x20 + 0x10);
        FUN_00ac2be8(plVar2);
        uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        uVar10 = thunk_FUN_00d48444(
                                   Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                   );
        puVar6 = PTR_DAT_033ec8c8;
        goto LAB_010d5dec;
      }
      uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar3 = FUN_01780344(uVar3,0);
      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_010d5ea8;
      plVar2 = *(long **)(lVar4 + 0x20);
      if (plVar2 == (long *)0x0) goto LAB_010d5e60;
      uVar10 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List<MedleyBossProjectileSpawnPoint>_IndexOf__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            Method_System_Collections_Generic_List<MedleyBossProjectileSpawnPoint>_IndexOf__
                          );
      }
      uVar1 = FUN_01c758a8(uVar3,uVar10,0);
      if ((uVar1 & 1) != 0) {
        uVar3 = FUN_01c72124(*(undefined8 *)(unaff_x20 + 0x10),0,0);
        *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
        if ((*(byte *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        lVar4 = thunk_FUN_00d62348();
        if (lVar4 != 0) {
          puVar9 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
          in_stack_00000018 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
          (*(code *)puVar9[2])(*puVar9,puVar9,lVar4,&stack0x00000008,&stack0x00000018);
          return lVar4;
        }
        goto LAB_010d5e60;
      }
      uVar3 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
      plVar2 = (long *)FUN_00da4fb8(uVar3,5);
      if (plVar2 == (long *)0x0) goto LAB_010d5e60;
      lVar4 = thunk_FUN_00d48444(
                                Method_Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator_ReceiveAnchorRemoved__
                                );
      if ((lVar4 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_010d5e88;
      lVar4 = thunk_FUN_00d48444(
                                Method_Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator_ReceiveAnchorRemoved__
                                );
      if ((int)plVar2[3] == 0) goto LAB_010d5ea8;
      plVar2[4] = lVar4;
      plVar7 = *(long **)(unaff_x20 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_010d5e60;
      lVar4 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if ((lVar4 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar8 == 0))
      goto LAB_010d5e88;
      if (*(uint *)(plVar2 + 3) < 2) goto LAB_010d5ea8;
      plVar2[5] = lVar4;
      lVar4 = thunk_FUN_00d48444(Newtonsoft_Json_Linq_JTokenReader_TypeInfo);
      if ((lVar4 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_010d5e88;
      lVar4 = thunk_FUN_00d48444(Newtonsoft_Json_Linq_JTokenReader_TypeInfo);
      if (*(uint *)(plVar2 + 3) < 3) goto LAB_010d5ea8;
      plVar2[6] = lVar4;
      uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    }
    else {
      uVar3 = thunk_FUN_00d48444(PTR_DAT_033ea8a0);
      plVar2 = (long *)FUN_00da4fb8(uVar3,5);
      if (plVar2 == (long *)0x0) goto LAB_010d5e60;
      lVar4 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                );
      if ((lVar4 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_010d5e88;
      lVar4 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                                );
      if ((int)plVar2[3] == 0) goto LAB_010d5ea8;
      plVar2[4] = lVar4;
      plVar7 = *(long **)(unaff_x20 + 0x10);
      if (plVar7 == (long *)0x0) goto LAB_010d5e60;
      lVar4 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if ((lVar4 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar8 == 0)) {
LAB_010d5e88:
        uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar3,0);
      }
      if (*(uint *)(plVar2 + 3) < 2) {
LAB_010d5ea8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar2[5] = lVar4;
      lVar4 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_119__);
      if ((lVar4 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_010d5e88;
      lVar4 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_119__);
      if (*(uint *)(plVar2 + 3) < 3) goto LAB_010d5ea8;
      plVar2[6] = lVar4;
      uVar3 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    }
    lVar4 = thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar7 = (long *)FUN_01780344(uVar3,0);
    uVar3 = 0;
    if (plVar7 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    FUN_00ac2be8(plVar2);
    FUN_00acb0b4(plVar2,uVar3);
    FUN_00acb320(plVar2,3,uVar3);
    FUN_00ac2be8(plVar2);
    puVar6 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
    uVar3 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                              );
    FUN_00acb0b4(plVar2,uVar3);
    uVar3 = thunk_FUN_00d48444(puVar6);
    FUN_00acb320(plVar2,4,uVar3);
    uVar3 = FUN_01600844(plVar2,0);
  }
  else {
    plVar2 = *(long **)(unaff_x20 + 0x10);
    FUN_00ac2be8(plVar2);
    uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    uVar10 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_Queue<__Il2CppFullySharedGenericType>_ThrowForEmptyQueue__
                               );
    puVar6 = Method_Newtonsoft_Json_JsonTextReader_ParseComment__;
LAB_010d5dec:
    uVar5 = thunk_FUN_00d48444(puVar6);
    uVar3 = FUN_01600424(uVar10,uVar3,uVar5,0);
  }
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar10 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016f2f28(uVar10,uVar3,0);
  uVar3 = thunk_FUN_00d48444(Oculus_Interaction_ProgressCurve___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar3);
}


