/*
FUNCTION_NAME: FUN_06a05f14
ENTRY_POINT: 06a05f14
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06a05f14(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  int iVar10;
  float fVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  char in_stack_00000140;
  
  puVar3 = PTR_DAT_072794f0;
  lVar6 = FUN_06a03e9c();
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar3);
  }
  uVar7 = FUN_06be9890(lVar6,0,0);
  puVar4 = PTR_DAT_072a3f60;
  puVar3 = PTR_DAT_07279c50;
  if ((uVar7 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x168) == 0) goto LAB_06a06190;
    iVar2 = *(int *)(*(long *)(unaff_x20 + 0x168) + 0x18);
    if (0 < iVar2) {
      iVar10 = 0;
      do {
        if (*(long *)(unaff_x20 + 0x170) == 0) goto LAB_06a06190;
        uVar5 = FUN_0418d880(*(long *)(unaff_x20 + 0x170),iVar10,*(undefined8 *)puVar3);
        if (*(long *)(unaff_x20 + 0x168) == 0) goto LAB_06a06190;
        uVar8 = FUN_041e29a8(*(long *)(unaff_x20 + 0x168),iVar10,*(undefined8 *)puVar4);
        if (lVar6 == 0) goto LAB_06a06190;
        FUN_06bc3b14(lVar6,uVar5,uVar8,0);
        iVar10 = iVar10 + 1;
      } while (iVar2 != iVar10);
    }
    memcpy(&stack0x00000140,(void *)(unaff_x20 + 0x124),0x44);
    puVar3 = 
    Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__;
    if (in_stack_00000140 != '\0') {
      lVar9 = *(long *)
               Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
      ;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar9 = *(long *)puVar3;
      }
      uVar5 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 4);
      memcpy(&stack0x00000140,(void *)(unaff_x20 + 0x124),0x44);
      FUN_04649644(&stack0x00000080,&stack0x00000140,
                   *(undefined8 *)Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
      in_stack_000000c8 = in_stack_00000088;
      in_stack_000000c0 = in_stack_00000080;
      in_stack_000000d8 = in_stack_00000098;
      in_stack_000000d0 = in_stack_00000090;
      in_stack_000000e8 = in_stack_000000a8;
      in_stack_000000e0 = in_stack_000000a0;
      in_stack_000000f8 = in_stack_000000b8;
      in_stack_000000f0 = in_stack_000000b0;
      if (lVar6 == 0) goto LAB_06a06190;
      in_stack_00000048 = in_stack_00000088;
      in_stack_00000040 = in_stack_00000080;
      in_stack_00000058 = in_stack_00000098;
      in_stack_00000050 = in_stack_00000090;
      in_stack_00000068 = in_stack_000000a8;
      in_stack_00000060 = in_stack_000000a0;
      in_stack_00000078 = in_stack_000000b8;
      in_stack_00000070 = in_stack_000000b0;
      FUN_06bc56f4(lVar6,uVar5,&stack0x00000040,0);
    }
    uVar8 = *(undefined8 *)(unaff_x20 + 400);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x198);
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
                + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06a06208(lVar6,uVar8,uVar1);
  }
  memcpy(&stack0x00000140,(void *)(unaff_x20 + 0xe0),0x44);
  if (in_stack_00000140 == '\0') {
    return;
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  memcpy(&stack0x00000140,(void *)(unaff_x20 + 0xe0),0x44);
  FUN_04649644(&stack0x00000080,&stack0x00000140,
               *(undefined8 *)Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
  in_stack_000000c8 = in_stack_00000088;
  in_stack_000000c0 = in_stack_00000080;
  in_stack_000000d8 = in_stack_00000098;
  in_stack_000000d0 = in_stack_00000090;
  in_stack_000000e8 = in_stack_000000a8;
  in_stack_000000e0 = in_stack_000000a0;
  in_stack_000000f8 = in_stack_000000b8;
  in_stack_000000f0 = in_stack_000000b0;
  if (lVar6 != 0) {
    FUN_06baf92c(lVar6);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_06baf87c(&stack0x00000080,*(long *)(unaff_x19 + 0x20),0);
      in_stack_00000108 = in_stack_00000088;
      in_stack_00000100 = in_stack_00000080;
      in_stack_00000118 = in_stack_00000098;
      in_stack_00000110 = in_stack_00000090;
      in_stack_00000128 = in_stack_000000a8;
      in_stack_00000120 = in_stack_000000a0;
      in_stack_00000138 = in_stack_000000b8;
      in_stack_00000130 = in_stack_000000b0;
      fVar11 = (float)FUN_06bdab18(&stack0x00000100,5,0);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if (lVar6 != 0) {
        fVar11 = atanf(1.0 / fVar11);
        FUN_06baeb08(fVar11 * DAT_013a054c,lVar6,0);
        return;
      }
    }
  }
LAB_06a06190:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


