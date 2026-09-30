/*
FUNCTION_NAME: UnityEngine.Mesh$$SetTriangles
ENTRY_POINT: 068af44c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_5;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_9
*/


void UnityEngine_Mesh__SetTriangles(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int in_w8;
  int iVar6;
  undefined8 *puVar7;
  int in_w9;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 *puStack0000000000000028;
  long lStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long lStack0000000000000050;
  
  lStack0000000000000050 = 0;
  uStack0000000000000020 = 0;
  puStack0000000000000028 = (undefined8 *)0x0;
  lStack0000000000000030 = 0;
  if ((in_w8 != 0 || in_w9 == 0) && (in_w8 != 1)) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x160) == 0) {
LAB_068af680:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_042e54fc(&stack0x00000008,*(long *)(unaff_x19 + 0x160),
               *(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo);
  puVar2 = OVRPlugin_OVRP_1_66_0_TypeInfo;
  puVar1 = PTR_DAT_070c1b68;
  in_stack_00000048 = in_stack_00000010;
  in_stack_00000040 = in_stack_00000008;
  lStack0000000000000050 = in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000040;
LAB_068af4b0:
  do {
    uVar4 = FUN_054518b4(&stack0x00000040,*(undefined8 *)puVar2);
    lVar3 = lStack0000000000000050;
    if ((uVar4 & 1) == 0) {
      FUN_054518b0(&stack0x00000040,*(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo);
      if (*(long *)(unaff_x19 + 0x168) == 0) goto LAB_068af680;
      FUN_042e54fc(&stack0x00000008,*(long *)(unaff_x19 + 0x168),
                   *(undefined8 *)OVRPlugin_OVRP_1_6_0_TypeInfo);
      puVar2 = OVRPlugin_OVRP_1_65_0_TypeInfo;
      puStack0000000000000028 = in_stack_00000010;
      uStack0000000000000020 = in_stack_00000008;
      lStack0000000000000030 = in_stack_00000018;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
      goto LAB_068af5c4;
    }
    if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar6 = *(int *)(lStack0000000000000050 + 0x10);
    if (iVar6 == 2) {
      uVar8 = *(undefined8 *)(lStack0000000000000050 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_069d69b8(uVar8,0,0);
      if ((uVar4 & 1) != 0) break;
      uVar8 = *(undefined8 *)(lVar3 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_069d69b8(uVar8,0,0);
      if ((uVar4 & 1) != 0) break;
      iVar6 = *(int *)(lVar3 + 0x10);
      if (iVar6 == 2) goto LAB_068af4b0;
    }
  } while (iVar6 == 0);
  if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_0698f53c(*(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo);
  puVar5 = &stack0x00000040;
  puVar7 = (undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo;
  goto LAB_068af65c;
  while (iVar6 == 0) {
LAB_068af5c4:
    uVar4 = FUN_054518b4(&stack0x00000020,*(undefined8 *)puVar2);
    lVar3 = lStack0000000000000030;
    if ((uVar4 & 1) == 0) goto LAB_068af650;
    if (lStack0000000000000030 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar6 = *(int *)(lStack0000000000000030 + 0x10);
    if (iVar6 == 2) {
      uVar8 = *(undefined8 *)(lStack0000000000000030 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_069d69b8(uVar8,0,0);
      if ((uVar4 & 1) != 0) break;
      iVar6 = *(int *)(lVar3 + 0x10);
      if (iVar6 == 2) goto LAB_068af5c4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_0698f53c(*(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo);
LAB_068af650:
  puVar5 = &stack0x00000020;
  puVar7 = (undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo;
LAB_068af65c:
  FUN_054518b0(puVar5,*puVar7);
  return;
}


