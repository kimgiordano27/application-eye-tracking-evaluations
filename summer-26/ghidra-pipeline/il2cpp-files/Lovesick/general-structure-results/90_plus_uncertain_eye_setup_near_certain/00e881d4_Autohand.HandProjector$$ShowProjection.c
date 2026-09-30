/*
FUNCTION_NAME: Autohand.HandProjector$$ShowProjection
ENTRY_POINT: 00e881d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Autohand_HandProjector__ShowProjection(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x4b8));
  thunk_FUN_00d48444(UnityEngine_CapsuleCollider2D_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033f2478);
  thunk_FUN_00d48444(OVRPlugin_OVRP_1_47_0_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_8933);
  *(undefined1 *)(unaff_x22 + 0xfb5) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  lVar5 = thunk_FUN_00d62348(*unaff_x21);
  if (lVar5 != 0) {
    FUN_017b46ec(lVar5,0);
    *(long *)(lVar5 + 0x10) = unaff_x20;
    puVar1 = UnityEngine_CapsuleCollider2D_TypeInfo;
    if ((char)unaff_x19[0xc] == '\0') {
      if (unaff_x20 == 0) goto LAB_00e88398;
      if (*(char *)(unaff_x20 + 0x28) == '\0') {
        FUN_00e885d8();
        FUN_0268ee74();
      }
      else {
        if (*(char *)((long)unaff_x19 + 0x9c) == '\0') {
          *(undefined1 *)((long)unaff_x19 + 0x9c) = 1;
          FUN_00fdf628(unaff_x19[0x14],0);
        }
        lVar9 = unaff_x19[0x11];
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar2 = Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_1_TypeInfo;
        puVar1 = Sirenix_Utilities_UnityExtensions_TypeInfo;
        if (lVar6 == 0) goto LAB_00e88398;
        FUN_012d239c(lVar6,lVar5,*(undefined8 *)OVRPlugin_OVRP_1_47_0_TypeInfo,0);
        uVar7 = System_Collections_Generic_ValueListBuilder<__Il2CppFullySharedGenericType>__AsSpan
                          (lVar9,lVar6,*(undefined8 *)puVar2);
        iVar4 = FUN_010d8df8(uVar7,*(undefined8 *)puVar1);
        puVar3 = StringLiteral_12505;
        puVar2 = UnityEngine_StaticBatchingUtility_TypeInfo;
        puVar1 = System_Globalization_InternalCodePageDataItem___TypeInfo;
        if (iVar4 == 0) {
          (**(code **)(*unaff_x19 + 0x1e8))();
        }
        else {
          if (unaff_x19[0x11] == 0) goto LAB_00e88398;
          FUN_01323390(unaff_x19[0x11],&stack0x00000008,*(undefined8 *)PTR_DAT_033f2478);
          while (uVar8 = FUN_012b894c(&stack0x00000008,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
            lVar5 = FUN_00ac6490(&stack0x00000008,*(undefined8 *)puVar1);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00e88434(*(float *)(lVar5 + 0x6c) + *(float *)(unaff_x19 + 0x13),0x3f000000);
          }
          FUN_012b8948(&stack0x00000008,*(undefined8 *)puVar3);
        }
      }
    }
    return;
  }
LAB_00e88398:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


