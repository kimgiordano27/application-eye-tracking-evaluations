/*
FUNCTION_NAME: Unity.Mathematics.float2x2$$.ctor
ENTRY_POINT: 0650fa78
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Mathematics_float2x2___ctor(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined6 in_stack_00000020;
  undefined2 uStack0000000000000026;
  undefined4 in_stack_00000028;
  undefined2 uStack000000000000002c;
  long lStack0000000000000038;
  
  lVar1 = tpidr_el0;
  lStack0000000000000038 = *(long *)(lVar1 + 0x28);
  uStack0000000000000008 = param_2;
  if ((DAT_076df931 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280858);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ITextureDownload>_Start<CustomHeaderDownloadProvider_<RequestTexture>d__3>__
                      );
    DAT_076df931 = 1;
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000026 = 0;
  iVar2 = FUN_0657855c(&stack0x00000008,0);
  if (iVar2 == 0x53544154) {
    lVar4 = FUN_06583234(uStack0000000000000008,0);
    if (lVar4 == 0) {
LAB_0650fc0c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar2 = *(int *)(lVar4 + 0x14);
    iVar3 = FUN_0658032c(0);
    if (iVar2 == iVar3) {
      puVar5 = (undefined8 *)FUN_06587c98(lVar4,0);
      in_stack_00000018 = puVar5[1];
      in_stack_00000010 = *puVar5;
      uStack000000000000002c = *(undefined2 *)((long)puVar5 + 0x1c);
      in_stack_00000028 = *(undefined4 *)(puVar5 + 3);
      in_stack_00000020 = (undefined6)puVar5[2];
      uStack0000000000000026 = (undefined2)((ulong)puVar5[2] >> 0x30);
      lVar4 = FUN_064ebec0(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_07280858 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_07280858);
      }
      lVar4 = (ulong)*(uint *)(param_1 + 0x14) + lVar4;
      if (lVar4 == 0) goto LAB_0650fc0c;
      in_stack_00000018 =
           CONCAT44((float)((ulong)in_stack_00000018 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar4 + 8) >> 0x20),
                    (float)in_stack_00000018 + (float)*(undefined8 *)(lVar4 + 8));
      fVar6 = (float)(CONCAT26(uStack0000000000000026,in_stack_00000020) >> 0x20) +
              (float)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x20);
      in_stack_00000020 =
           (undefined6)
           CONCAT44(fVar6,(float)in_stack_00000020 + (float)*(undefined8 *)(lVar4 + 0x10));
      uStack0000000000000026 = (undefined2)((uint)fVar6 >> 0x10);
      if (DAT_076df6c8 == '\0') {
        thunk_FUN_032e1da0(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_076df6c8 = '\x01';
      }
      FUN_03a29ad0(param_1,&stack0x00000010,
                   *(undefined4 *)
                    (*(long *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xb8) + 4),
                   uStack0000000000000008,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ITextureDownload>_Start<CustomHeaderDownloadProvider_<RequestTexture>d__3>__
                  );
      goto LAB_0650fbe8;
    }
  }
  FUN_064f93cc(param_1,uStack0000000000000008,0);
LAB_0650fbe8:
  if (*(long *)(lVar1 + 0x28) != lStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


