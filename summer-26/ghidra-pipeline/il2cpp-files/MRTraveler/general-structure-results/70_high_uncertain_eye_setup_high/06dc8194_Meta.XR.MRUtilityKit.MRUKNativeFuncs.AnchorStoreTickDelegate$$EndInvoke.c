/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreTickDelegate$$EndInvoke
ENTRY_POINT: 06dc8194
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


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreTickDelegate__EndInvoke(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int in_w8;
  long lVar6;
  undefined4 *unaff_x19;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(unaff_x19 + 10) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar1 = *(long *)(lVar6 + 0x10);
    uVar5 = *(undefined8 *)(lVar6 + 0x18);
    lVar7 = *(long *)PTR_DAT_08e90a70;
    lVar6 = *(long *)(lVar7 + 0x38);
    if (lVar6 == 0) {
      FUN_03cf12a0(lVar7);
      lVar6 = *(long *)(lVar7 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244();
    }
    uVar8 = **(undefined8 **)(lVar6 + 0xb8);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90a88);
    FUN_06e40ce0(uVar3,uVar8,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = FUN_06dc64c8(lVar1,uVar5,uVar3);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar6,*(undefined8 *)PTR_DAT_08e90db0);
    uVar4 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08e90da8);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0418735c(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar5 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08e90da0);
  *unaff_x19 = 0xfffffffe;
  puVar2 = PTR_DAT_08e90d98;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c7630(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
  return;
}


