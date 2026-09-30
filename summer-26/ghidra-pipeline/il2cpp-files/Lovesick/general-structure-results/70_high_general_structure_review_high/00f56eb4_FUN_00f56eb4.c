/*
FUNCTION_NAME: FUN_00f56eb4
ENTRY_POINT: 00f56eb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_00f56eb4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqaddq_s32__;
  if ((DAT_03775738 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5729);
    thunk_FUN_00d48444(PTR_DAT_033eda38);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VisualElement>_get_Capacity__);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo);
    thunk_FUN_00d48444(
                      Method_SandsThroughTheHourglass_<InnerSandShrink>d__42_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(System_Func<Vector3,_Vector3,_Touch,_EventBase>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11285);
    thunk_FUN_00d48444(Method_System_Nullable<InputBinding>_GetValueOrDefault__);
    thunk_FUN_00d48444(Method_System_Diagnostics_Process_StartWithShellExecuteEx__);
    thunk_FUN_00d48444(StringLiteral_12816);
    thunk_FUN_00d48444(PTR_DAT_033f3d78);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqaddq_s32__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03775738 = 1;
  }
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (lVar8 != 0) {
    FUN_01320e50(lVar8,*(undefined8 *)StringLiteral_11285);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar2 = UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo;
    uVar9 = FUN_02681b9c(uVar11,0,0);
    if ((uVar9 & 1) != 0) {
      FUN_00acdfa0(lVar8,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar2);
    }
    puVar6 = StringLiteral_5729;
    puVar5 = 
    Method_SandsThroughTheHourglass_<InnerSandShrink>d__42_System_Collections_IEnumerator_Reset__;
    puVar4 = Method_System_Collections_Generic_List<VisualElement>_get_Capacity__;
    puVar1 = PTR_DAT_033eda38;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_01323390(*(long *)(param_1 + 0x20),&local_88,
                   *(undefined8 *)System_Func<Vector3,_Vector3,_Touch,_EventBase>_TypeInfo);
      uStack_68 = uStack_80;
      local_70 = local_88;
      local_60 = local_78;
      while (uVar9 = FUN_012b894c(&local_70,*(undefined8 *)puVar1), (uVar9 & 1) != 0) {
        uVar11 = FUN_00ace190(&local_70,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_02681b9c(uVar11,0,0);
        if (((uVar9 & 1) != 0) &&
           (uVar9 = FUN_01322618(lVar8,uVar11,*(undefined8 *)puVar5), (uVar9 & 1) == 0)) {
          FUN_00acdfa0(lVar8,uVar11,*(undefined8 *)puVar2);
        }
      }
      FUN_012b8948(&local_70,*(undefined8 *)puVar6);
    }
    puVar1 = StringLiteral_12816;
    puVar2 = PTR_DAT_033f3d78;
    if (*(long *)(param_1 + 0x118) != 0) {
      if (*(int *)(lVar8 + 0x18) == *(int *)(*(long *)(param_1 + 0x118) + 0x18)) {
        if (0 < *(int *)(lVar8 + 0x18)) {
          iVar10 = 0;
          do {
            FUN_0132138c(lVar8,iVar10,&local_88,*(undefined8 *)puVar2);
            lVar7 = local_88;
            if (*(long *)(param_1 + 0x118) == 0) goto LAB_00f57188;
            FUN_0132138c(*(long *)(param_1 + 0x118),iVar10,&local_88,*(undefined8 *)puVar1);
            if (local_88 == 0) goto LAB_00f57188;
            uVar11 = *(undefined8 *)(local_88 + 0x10);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar9 = FUN_02681b9c(lVar7,uVar11,0);
            if ((uVar9 & 1) != 0) goto LAB_00f57168;
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(lVar8 + 0x18));
        }
        uVar11 = 0;
      }
      else {
LAB_00f57168:
        uVar11 = 1;
      }
      return uVar11;
    }
  }
LAB_00f57188:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


