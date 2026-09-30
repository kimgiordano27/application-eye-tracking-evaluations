/*
FUNCTION_NAME: FUN_00e8816c
ENTRY_POINT: 00e8816c
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


void FUN_00e8816c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = StringLiteral_8933;
  if ((DAT_03774fb5 & 1) == 0) {
    thunk_FUN_00d48444(Sirenix_Utilities_UnityExtensions_TypeInfo);
    thunk_FUN_00d48444(Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_1_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_12505);
    thunk_FUN_00d48444(UnityEngine_StaticBatchingUtility_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_InternalCodePageDataItem___TypeInfo);
    thunk_FUN_00d48444(UnityEngine_CapsuleCollider2D_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f2478);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_47_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8933);
    DAT_03774fb5 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar5 != 0) {
    FUN_017b46ec(lVar5,0);
    *(long *)(lVar5 + 0x10) = param_2;
    puVar1 = UnityEngine_CapsuleCollider2D_TypeInfo;
    if ((char)param_1[0xc] == '\0') {
      if (param_2 == 0) goto LAB_00e88398;
      if (*(char *)(param_2 + 0x28) == '\0') {
        uVar7 = FUN_00e885d8(param_1);
        FUN_0268ee74(param_1,uVar7,0);
      }
      else {
        if (*(char *)((long)param_1 + 0x9c) == '\0') {
          *(undefined1 *)((long)param_1 + 0x9c) = 1;
          FUN_00fdf628(param_1[0x14],0);
        }
        lVar9 = param_1[0x11];
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
          (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
        }
        else {
          if (param_1[0x11] == 0) goto LAB_00e88398;
          FUN_01323390(param_1[0x11],&local_58,*(undefined8 *)PTR_DAT_033f2478);
          while (uVar8 = FUN_012b894c(&local_58,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
            lVar5 = FUN_00ac6490(&local_58,*(undefined8 *)puVar1);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00e88434(*(float *)(lVar5 + 0x6c) + *(float *)(param_1 + 0x13),0x3f000000);
          }
          FUN_012b8948(&local_58,*(undefined8 *)puVar3);
        }
      }
    }
    return;
  }
LAB_00e88398:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


