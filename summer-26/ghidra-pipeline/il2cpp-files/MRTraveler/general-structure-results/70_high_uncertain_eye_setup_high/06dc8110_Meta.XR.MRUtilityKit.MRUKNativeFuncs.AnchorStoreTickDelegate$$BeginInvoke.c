/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreTickDelegate$$BeginInvoke
ENTRY_POINT: 06dc8110
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreTickDelegate__BeginInvoke(int *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  
  if ((*(byte *)(unaff_x20 + 0xc55) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e90a70);
    FUN_03c8f898(PTR_DAT_08e90d90);
    FUN_03c8f898(PTR_DAT_08e90d98);
    FUN_03c8f898(PTR_DAT_08e90d70);
    FUN_03c8f898(PTR_DAT_08e90da0);
    FUN_03c8f898(PTR_DAT_08e90da8);
    FUN_03c8f898(PTR_DAT_08e90db0);
    FUN_03c8f898(PTR_DAT_08e90a88);
    *(undefined1 *)(unaff_x20 + 0xc55) = 1;
  }
  puVar2 = PTR_DAT_08e90d70;
  in_stack_00000008 = 0;
  if (*param_1 == 0) {
    in_stack_00000008 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar1 = *(long *)(lVar7 + 0x10);
    uVar6 = *(undefined8 *)(lVar7 + 0x18);
    lVar8 = *(long *)PTR_DAT_08e90a70;
    lVar7 = *(long *)(lVar8 + 0x38);
    if (lVar7 == 0) {
      FUN_03cf12a0(lVar8);
      lVar7 = *(long *)(lVar8 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03cf1244();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03cf1244();
    }
    uVar9 = **(undefined8 **)(lVar7 + 0xb8);
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90a88);
    FUN_06e40ce0(uVar4,uVar9,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = FUN_06dc64c8(lVar1,uVar6,uVar4);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar7,*(undefined8 *)PTR_DAT_08e90db0);
    uVar5 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08e90da8);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = in_stack_00000008;
      thunk_FUN_03d233cc(param_1 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0418735c(param_1 + 2,&stack0x00000008,param_1,*(undefined8 *)PTR_DAT_08e90d90);
      return;
    }
  }
  uVar6 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08e90da0);
  *param_1 = -2;
  puVar3 = PTR_DAT_08e90d98;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c7630(param_1 + 2,uVar6,*(undefined8 *)puVar3);
  return;
}


