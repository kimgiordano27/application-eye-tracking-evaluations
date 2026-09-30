/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Meta.MetaOpenXRSessionSubsystem.NativeApi$$TryRequestSceneCapture
ENTRY_POINT: 05ea401c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_6
*/


void UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_NativeApi__TryRequestSceneCapture
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long in_x9;
  int *in_x10;
  long *unaff_x20;
  int iVar9;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_05ea4048;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar5 = (undefined8 *)(param_1 + (long)(*piVar2 + 2) * 0x10 + 0x138);
LAB_05ea4048:
  (*(code *)*puVar5)();
  if (unaff_x22 != 0) {
    FUN_03aac6a0();
    if ((unaff_x20[0x1a] != 0) &&
       (FUN_03749108(unaff_x20[0x1a],
                     *(undefined8 *)
                      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<AllocatorManager_TryFunction>__
                    ), unaff_x21 != 0)) {
      if (0 < *(int *)(unaff_x21 + 0x18)) {
        FUN_03aaceb0(&stack0x00000008);
        puVar4 = Method_System_IO_BufferedStream_set_Position__;
        puVar3 = Method_System_Data_Common_BooleanStorage_Aggregate__;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while (uVar6 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
          if (unaff_x20[0x1a] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_03749c40(unaff_x20[0x1a],in_stack_00000030,*(undefined8 *)puVar4);
        }
        FUN_04a7a49c(&stack0x00000020,
                     *(undefined8 *)Method_System_ComponentModel_BooleanConverter_ConvertFrom__);
      }
      puVar4 = 
      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstMathUtility_FastSafeDivide_0000035B_PostfixBurstDelegate>__
      ;
      puVar3 = 
      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<AutoFreeAllocator_Try_000000E3_PostfixBurstDelegate>__
      ;
      lVar7 = unaff_x20[0x16];
      if (lVar7 != 0) {
        iVar9 = *(int *)(lVar7 + 0x18) + -1;
        if (iVar9 < 0) {
          return;
        }
        do {
          uVar8 = FUN_03aac1c4(lVar7,iVar9,*(undefined8 *)puVar4);
          uVar6 = (**(code **)(*unaff_x20 + 0x228))();
          if ((uVar6 & 1) == 0) {
LAB_05ea4178:
            (**(code **)(*unaff_x20 + 0x408))();
          }
          else {
            if (unaff_x20[0x1a] == 0) break;
            uVar6 = FUN_03749168(unaff_x20[0x1a],uVar8,*(undefined8 *)puVar3);
            if ((uVar6 & 1) == 0) goto LAB_05ea4178;
          }
          iVar9 = iVar9 + -1;
          if (iVar9 < 0) {
            return;
          }
          lVar7 = unaff_x20[0x16];
        } while (lVar7 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


