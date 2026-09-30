/*
FUNCTION_NAME: FUN_0238a1b0
ENTRY_POINT: 0238a1b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0238a1b0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_44;
  
  if ((DAT_03781e19 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_high_u16__);
    thunk_FUN_00d48444(System_Collections_Generic_List<OVRSceneAnchor>_TypeInfo);
    thunk_FUN_00d48444(Method_System_MonoCustomAttrs_GetCustomAttributes__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnInputModeChanged__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0170);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RaycastResult>_Add__);
    thunk_FUN_00d48444(Sirenix_Serialization_AllowDeserializeInvalidDataAttribute_var);
    thunk_FUN_00d48444(PTR_DAT_033ec1b8);
    DAT_03781e19 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (lVar10 = *(long *)(param_1 + 0x20), lVar10 != 0)) {
    lVar9 = *(long *)PTR_DAT_033ec1b8;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    uVar8 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
    if ((uVar8 & 1) == 0) {
      *(undefined4 *)(lVar10 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
      }
    }
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar10 = FUN_012998a8(*(long *)(param_1 + 0x18),
                              *(undefined8 *)
                               System_Collections_Generic_List<OVRSceneAnchor>_TypeInfo),
       puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_high_u16__,
       puVar5 = Method_System_MonoCustomAttrs_GetCustomAttributes__,
       puVar4 = Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnInputModeChanged__,
       puVar3 = Sirenix_Serialization_AllowDeserializeInvalidDataAttribute_var,
       puVar2 = PTR_DAT_033f0170, lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01311764(lVar10,&local_68,
                 *(undefined8 *)Method_System_Collections_Generic_List<RaycastResult>_Add__);
    while (uVar8 = FUN_012c2b80(&local_68,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      uVar7 = FUN_00ca7c7c(&local_68,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_44 = uVar7;
      FUN_01299bc0(*(long *)(param_1 + 0x18),&local_44,&local_50,*(undefined8 *)puVar6);
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_00ca7d84(*(long *)(param_1 + 0x20),uVar7,local_50,*(undefined8 *)puVar3);
    }
    FUN_012c2b7c(&local_68,*(undefined8 *)puVar5);
  }
  return;
}


