/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$CreateObstacles
ENTRY_POINT: 0149e02c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_MRUtilityKit_SceneNavigation__CreateObstacles(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  lVar2 = thunk_FUN_00d62348(**(undefined8 **)(param_1 + 0x488));
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_017b46ec(lVar2,0);
  puVar1 = PTR_DAT_033ebcc8;
  *(long *)(unaff_x19 + 0xc) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  uVar7 = *(undefined8 *)(unaff_x19 + 10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar2 = FUN_010ff2f8(uVar7,0,0,*(undefined8 *)StringLiteral_4128);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000008 = FUN_013bdbc4(lVar2,*(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo);
  uVar3 = FUN_013ba28c(&stack0x00000008,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<BezierControlPoint>_get_Current__
                      );
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000008;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01098fc0(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    FUN_013ba2d0(&stack0x00000008,&stack0x00000018,
                 *(undefined8 *)
                  Method_Sirenix_Serialization_Utilities_TypeExtensions_<GetAllMembers>d__51<object>_System_Collections_IEnumerator_Reset__
                );
    lVar2 = *(long *)(unaff_x19 + 0xc);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(long *)(lVar2 + 0x10) = in_stack_00000018;
    if (in_stack_00000018 == 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar5 = (long *)thunk_FUN_00d93c64();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      uVar6 = FUN_015f5b28(*(undefined8 *)StringLiteral_11606,*(undefined8 *)(unaff_x19 + 10),0);
      if (*(int *)(*(long *)StringLiteral_720 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_014def10(uVar7,uVar6,0,0);
      uVar7 = 0;
    }
    else {
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_016f27fc(lVar4,lVar2,
                   *(undefined8 *)Method_System_Collections_Generic_List<IXmlNode>_get_Item__,0);
      if (*(int *)(*(long *)
                    Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__ +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar2 = FUN_017efd20(lVar4,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = FUN_017e7d88(lVar2,0);
      uVar3 = FUN_016a1310();
      if ((uVar3 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x10) = uVar7;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01098fc0(unaff_x19 + 2);
        return;
      }
      FUN_016a13e0();
      if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0xc) + 0x10);
    }
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    puVar1 = Method_System_Collections_Specialized_ReadOnlyList_set_Item__;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011ccb9c(unaff_x19 + 2,uVar7,*(undefined8 *)puVar1);
  }
  return;
}


