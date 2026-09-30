/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger.<>c$$<GetClosestSeatPoseDebugger>b__82_1
ENTRY_POINT: 08a44ee0
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<>c__<GetClosestSeatPoseDebugger>b__82_1(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *unaff_x19;
  undefined8 *puVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  long *plVar8;
  int in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  iVar3 = in_stack_00000048;
  uVar7 = *unaff_x20;
  *(undefined8 *)(&stack0x00000038 + (long)in_stack_00000048 * 8) = uVar7;
  in_stack_00000048 = in_stack_00000048 + 1;
  __cxa_end_catch();
  *(undefined8 *)(unaff_x19 + 0x12) = uVar7;
  thunk_FUN_049ee3d8(unaff_x19 + 0x12,uVar7);
  in_stack_00000048 = iVar3;
  _in_stack_00000050 = FUN_08de2954(unaff_x19 + 0xc,0);
  if (*(int *)(*(long *)PTR_DAT_0ac42dc8 + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)PTR_DAT_0ac42dc8);
  }
  _in_stack_00000060 = FUN_08df3b4c(&stack0x00000050,0);
  if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)PTR_DAT_0ac3f8b8);
  }
  uVar4 = FUN_086abadc(&stack0x00000060,0);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 2;
    *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000060;
    thunk_FUN_049ee3d8(unaff_x19 + 0x1a,0);
    if (*(int *)(*(long *)PTR_DAT_0ac111a0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_05a30d6c(unaff_x19 + 2,&stack0x00000060);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_086abc1c(&stack0x00000060,0);
    puVar6 = (undefined8 *)(unaff_x19 + 0x12);
    plVar8 = (long *)*puVar6;
    if (plVar8 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0ac098c8 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0ac098c8))
      {
        uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac53430);
                    /* WARNING: Subroutine does not return */
        FUN_04948050(plVar8,uVar7);
      }
      lVar5 = FUN_08c7ed5c(plVar8,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_08c7ee1c(lVar5,0);
    }
    if (unaff_x19[0x14] != 1) {
      *puVar6 = 0;
      thunk_FUN_049ee3d8(puVar6,0);
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
    }
    puVar2 = PTR_DAT_0ac111a0;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    lVar5 = *(long *)puVar2;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08c7f478(unaff_x19 + 2,0);
  }
  return;
}


