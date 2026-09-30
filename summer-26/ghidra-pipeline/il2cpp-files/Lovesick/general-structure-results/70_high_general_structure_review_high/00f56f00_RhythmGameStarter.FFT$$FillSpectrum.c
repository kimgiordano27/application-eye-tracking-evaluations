/*
FUNCTION_NAME: RhythmGameStarter.FFT$$FillSpectrum
ENTRY_POINT: 00f56f00
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


undefined8 RhythmGameStarter_FFT__FillSpectrum(long param_1)

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
  long unaff_x19;
  undefined8 *unaff_x20;
  int iVar10;
  long unaff_x21;
  undefined8 uVar11;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xc58));
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
  *(undefined1 *)(unaff_x21 + 0x738) = 1;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  lVar8 = thunk_FUN_00d62348(*unaff_x20);
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (lVar8 != 0) {
    FUN_01320e50(lVar8,*(undefined8 *)StringLiteral_11285);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar2 = UnityEngine_XR_Interaction_Toolkit_FocusExitEvent_TypeInfo;
    uVar9 = FUN_02681b9c(uVar11,0,0);
    if ((uVar9 & 1) != 0) {
      FUN_00acdfa0(lVar8,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)puVar2);
    }
    puVar6 = StringLiteral_5729;
    puVar5 = 
    Method_SandsThroughTheHourglass_<InnerSandShrink>d__42_System_Collections_IEnumerator_Reset__;
    puVar4 = Method_System_Collections_Generic_List<VisualElement>_get_Capacity__;
    puVar1 = PTR_DAT_033eda38;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_01323390(*(long *)(unaff_x19 + 0x20),&stack0x00000008,
                   *(undefined8 *)System_Func<Vector3,_Vector3,_Touch,_EventBase>_TypeInfo);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar9 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar1), (uVar9 & 1) != 0) {
        uVar11 = FUN_00ace190(&stack0x00000020,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_02681b9c(uVar11,0,0);
        if (((uVar9 & 1) != 0) &&
           (uVar9 = FUN_01322618(lVar8,uVar11,*(undefined8 *)puVar5), (uVar9 & 1) == 0)) {
          FUN_00acdfa0(lVar8,uVar11,*(undefined8 *)puVar2);
        }
      }
      FUN_012b8948(&stack0x00000020,*(undefined8 *)puVar6);
    }
    puVar1 = StringLiteral_12816;
    puVar2 = PTR_DAT_033f3d78;
    if (*(long *)(unaff_x19 + 0x118) != 0) {
      if (*(int *)(lVar8 + 0x18) == *(int *)(*(long *)(unaff_x19 + 0x118) + 0x18)) {
        if (0 < *(int *)(lVar8 + 0x18)) {
          iVar10 = 0;
          do {
            FUN_0132138c(lVar8,iVar10,&stack0x00000008,*(undefined8 *)puVar2);
            lVar7 = in_stack_00000008;
            if (*(long *)(unaff_x19 + 0x118) == 0) goto LAB_00f57188;
            FUN_0132138c(*(long *)(unaff_x19 + 0x118),iVar10,&stack0x00000008,*(undefined8 *)puVar1)
            ;
            if (in_stack_00000008 == 0) goto LAB_00f57188;
            uVar11 = *(undefined8 *)(in_stack_00000008 + 0x10);
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


