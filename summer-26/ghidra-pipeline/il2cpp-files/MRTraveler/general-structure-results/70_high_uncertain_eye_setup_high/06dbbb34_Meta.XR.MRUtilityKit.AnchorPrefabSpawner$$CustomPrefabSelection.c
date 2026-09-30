/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$CustomPrefabSelection
ENTRY_POINT: 06dbbb34
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__CustomPrefabSelection(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  uVar7 = *(undefined8 *)(unaff_x19 + 8);
  if (*(int *)(*(long *)PTR_DAT_08e69920 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar7 = FUN_0708e304(uVar7,0);
  uVar7 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<DrawBufferRange>
                    (uVar7,*(undefined8 *)PTR_DAT_08e906b0);
  puVar8 = (undefined8 *)(unaff_x19 + 0xc);
  *puVar8 = uVar7;
  thunk_FUN_03d233cc(puVar8);
  lVar3 = FUN_06dfea94(*puVar8,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  in_stack_00000008 = FUN_071787d8(lVar3,0);
  uVar4 = FUN_0701d1d0(&stack0x00000008,0);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000008;
    thunk_FUN_03d233cc(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_041881f0(unaff_x19 + 2,&stack0x00000008);
    return;
  }
  FUN_0701d29c(&stack0x00000008,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar5 = (long *)FUN_085d97b4(*(long *)(unaff_x19 + 0xc),0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e906b8 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08e906b8)) {
      uVar7 = FUN_085e1ac4(plVar5,0);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar7,uVar7);
      }
      lVar3 = FUN_06dbb604();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar7 = FUN_05c0b91c(lVar3,*(undefined8 *)PTR_DAT_08e903c8);
      uVar4 = FUN_05ac7d38();
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x10) = uVar7;
        thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_0417ce90(unaff_x19 + 2);
        return;
      }
      uVar7 = FUN_05ac7d7c();
      goto LAB_06dbbc7c;
    }
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar5 = (long *)thunk_FUN_03d12a58();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  uVar6 = FUN_06f7465c(*(undefined8 *)PTR_DAT_08e90628,*(undefined8 *)(unaff_x19 + 8),
                       *(undefined8 *)PTR_DAT_08e906c0,0);
  if (*(int *)(*(long *)PTR_DAT_08e7e268 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_06dfde6c(uVar7,uVar6,0,0);
  uVar7 = 0;
LAB_06dbbc7c:
  puVar2 = PTR_DAT_08e906a8;
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c7630(unaff_x19 + 2,uVar7,*(undefined8 *)puVar2);
  return;
}


