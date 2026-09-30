/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$CreateGridPattern
ENTRY_POINT: 01498834
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;functionality_possible_biometrics_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_SceneDebugger__CreateGridPattern(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *plVar6;
  long *plVar7;
  long unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  uint unaff_w29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    if (unaff_w27 != 1) {
      uVar1 = FUN_015f5b28(*(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                           ,param_1,0);
LAB_014988d4:
      if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_720);
      }
      FUN_014ded68(uVar1,0);
      return 0;
    }
    FUN_0132138c(unaff_x26,0,&stack0x00000008,
                 *(undefined8 *)Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo);
    if (unaff_x19 == 0) {
LAB_01498924:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
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
      plVar6 = *(long **)(unaff_x22 + (long)(int)unaff_w29 * 8 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_01498924;
      plVar7 = *(long **)(unaff_x24 + 0x10);
      uVar1 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      if (plVar7 == (long *)0x0) goto LAB_01498924;
      lVar3 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_01498620;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_00d59724(plVar7,*unaff_x28,4);
LAB_01498620:
      uVar4 = (*(code *)*puVar2)(plVar7,uVar1,puVar2[1]);
    } while ((uVar4 & 1) != 0);
    (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
    if (unaff_x21 == (long *)0x0) goto LAB_01498924;
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x20) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_0149869c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_0149869c:
    uVar4 = (*(code *)*puVar2)();
    uVar1 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
    if ((uVar4 & 1) != 0) {
      uVar1 = FUN_015f6780(*(undefined8 *)
                            System_Collections_Generic_Stack<BindingRestrictions>_TypeInfo,uVar1,0);
      goto LAB_014988d4;
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_System_Collections_Generic_List<Vector4>_get_Item__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0149871c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_0149871c:
    (*(code *)*puVar2)();
    plVar7 = *(long **)(unaff_x23 + 0x18);
    uVar1 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
    if (plVar7 == (long *)0x0) goto LAB_01498924;
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_014987a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_00d59724(plVar7,*(long *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo
                          ,8);
LAB_014987a0:
    uVar1 = (*(code *)*puVar2)(plVar7,uVar1,puVar2[1]);
    lVar3 = *(long *)(unaff_x24 + 0x18);
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_Events_UnityAction<string>_TypeInfo);
      if (lVar3 == 0) goto LAB_01498924;
      FUN_012d239c();
      *(long *)(unaff_x24 + 0x18) = lVar3;
    }
    uVar1 = System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                      (uVar1,lVar3,*(undefined8 *)Method_OVRVirtualKeyboard_OnEnter__);
    unaff_x26 = FUN_010dfe04(uVar1,*(undefined8 *)StringLiteral_5712);
    if (unaff_x26 == 0) goto LAB_01498924;
    unaff_w27 = *(int *)(unaff_x26 + 0x18);
    param_1 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
  } while( true );
}


