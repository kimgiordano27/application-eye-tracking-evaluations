/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$SetMaterialProperties
ENTRY_POINT: 0149865c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_possible_biometrics_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_SceneDebugger__SetMaterialProperties
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *plVar7;
  long *unaff_x28;
  uint unaff_w29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_0149869c;
      }
      in_x9 = in_x9 - 1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_00d59724();
LAB_0149869c:
      uVar3 = (*(code *)*puVar2)();
      uVar4 = (**(code **)(*unaff_x25 + 0x1e8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1f0));
      if ((uVar3 & 1) != 0) {
        uVar4 = FUN_015f6780(*(undefined8 *)
                              System_Collections_Generic_Stack<BindingRestrictions>_TypeInfo,uVar4,0
                            );
LAB_014988d4:
        if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)StringLiteral_720);
        }
        FUN_014ded68(uVar4,0);
        return 0;
      }
      lVar5 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_System_Collections_Generic_List<Vector4>_get_Item__) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0149871c;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_00d59724();
LAB_0149871c:
      (*(code *)*puVar2)();
      plVar7 = *(long **)(unaff_x23 + 0x18);
      uVar4 = (**(code **)(*unaff_x25 + 0x1e8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1f0));
      if (plVar7 == (long *)0x0) {
LAB_01498924:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar5 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 8) * 0x10 + 0x138);
            goto LAB_014987a0;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_00d59724(plVar7,*(long *)
                                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo
                            ,8);
LAB_014987a0:
      uVar4 = (*(code *)*puVar2)(plVar7,uVar4,puVar2[1]);
      lVar5 = *(long *)(unaff_x24 + 0x18);
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_Events_UnityAction<string>_TypeInfo);
        if (lVar5 == 0) goto LAB_01498924;
        FUN_012d239c();
        *(long *)(unaff_x24 + 0x18) = lVar5;
      }
      uVar4 = System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                        (uVar4,lVar5,*(undefined8 *)Method_OVRVirtualKeyboard_OnEnter__);
      lVar5 = FUN_010dfe04(uVar4,*(undefined8 *)StringLiteral_5712);
      if (lVar5 == 0) goto LAB_01498924;
      iVar1 = *(int *)(lVar5 + 0x18);
      uVar4 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
      if (iVar1 != 1) {
        uVar4 = FUN_015f5b28(*(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                             ,uVar4,0);
        goto LAB_014988d4;
      }
      FUN_0132138c(lVar5,0,&stack0x00000008,
                   *(undefined8 *)Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo);
      if (unaff_x19 == 0) goto LAB_01498924;
      FUN_01299e64();
      do {
        unaff_w29 = unaff_w29 + 1;
        if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w29) {
          if (in_stack_00000000 != 0) {
            *(long *)(in_stack_00000000 + 0x30) = unaff_x19;
            return 1;
          }
          goto LAB_01498924;
        }
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_w29) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        unaff_x25 = *(long **)(unaff_x22 + (long)(int)unaff_w29 * 8 + 0x20);
        if (unaff_x25 == (long *)0x0) goto LAB_01498924;
        plVar7 = *(long **)(unaff_x24 + 0x10);
        uVar4 = (**(code **)(*unaff_x25 + 0x1d8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1e0));
        if (plVar7 == (long *)0x0) goto LAB_01498924;
        lVar5 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x28) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
              goto LAB_01498620;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_00d59724(plVar7,*unaff_x28,4);
LAB_01498620:
        uVar3 = (*(code *)*puVar2)(plVar7,uVar4,puVar2[1]);
      } while ((uVar3 & 1) != 0);
      (**(code **)(*unaff_x25 + 0x1e8))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x1f0));
      if (unaff_x21 == (long *)0x0) goto LAB_01498924;
      param_1 = *unaff_x21;
      param_3 = *unaff_x20;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    } while (in_x9 == 0);
  } while( true );
}


