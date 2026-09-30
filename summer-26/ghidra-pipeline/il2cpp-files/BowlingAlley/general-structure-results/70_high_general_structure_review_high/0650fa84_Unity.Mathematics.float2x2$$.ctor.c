/*
FUNCTION_NAME: Unity.Mathematics.float2x2$$.ctor
ENTRY_POINT: 0650fa84
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


void Unity_Mathematics_float2x2___ctor(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long unaff_x21;
  float fVar5;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined6 in_stack_00000020;
  undefined2 uStack0000000000000026;
  undefined4 in_stack_00000028;
  undefined2 uStack000000000000002c;
  long lStack0000000000000038;
  
  uStack0000000000000008 = param_3;
  lStack0000000000000038 = param_1;
  if ((*(byte *)(unaff_x20 + 0x931) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280858);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ITextureDownload>_Start<CustomHeaderDownloadProvider_<RequestTexture>d__3>__
                      );
    *(undefined1 *)(unaff_x20 + 0x931) = 1;
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000020 = 0;
  uStack0000000000000026 = 0;
  iVar1 = FUN_0657855c(&stack0x00000008,0);
  if (iVar1 == 0x53544154) {
    lVar3 = FUN_06583234(uStack0000000000000008,0);
    if (lVar3 == 0) {
LAB_0650fc0c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar1 = *(int *)(lVar3 + 0x14);
    iVar2 = FUN_0658032c(0);
    if (iVar1 == iVar2) {
      puVar4 = (undefined8 *)FUN_06587c98(lVar3,0);
      in_stack_00000018 = puVar4[1];
      in_stack_00000010 = *puVar4;
      uStack000000000000002c = *(undefined2 *)((long)puVar4 + 0x1c);
      in_stack_00000028 = *(undefined4 *)(puVar4 + 3);
      in_stack_00000020 = (undefined6)puVar4[2];
      uStack0000000000000026 = (undefined2)((ulong)puVar4[2] >> 0x30);
      lVar3 = FUN_064ebec0(param_2,0);
      if (*(int *)(*(long *)PTR_DAT_07280858 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_07280858);
      }
      lVar3 = (ulong)*(uint *)(param_2 + 0x14) + lVar3;
      if (lVar3 == 0) goto LAB_0650fc0c;
      in_stack_00000018 =
           CONCAT44((float)((ulong)in_stack_00000018 >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar3 + 8) >> 0x20),
                    (float)in_stack_00000018 + (float)*(undefined8 *)(lVar3 + 8));
      fVar5 = (float)(CONCAT26(uStack0000000000000026,in_stack_00000020) >> 0x20) +
              (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
      in_stack_00000020 =
           (undefined6)
           CONCAT44(fVar5,(float)in_stack_00000020 + (float)*(undefined8 *)(lVar3 + 0x10));
      uStack0000000000000026 = (undefined2)((uint)fVar5 >> 0x10);
      if (DAT_076df6c8 == '\0') {
        thunk_FUN_032e1da0(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_076df6c8 = '\x01';
      }
      FUN_03a29ad0(param_2,&stack0x00000010,
                   *(undefined4 *)
                    (*(long *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xb8) + 4),
                   uStack0000000000000008,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ITextureDownload>_Start<CustomHeaderDownloadProvider_<RequestTexture>d__3>__
                  );
      goto LAB_0650fbe8;
    }
  }
  FUN_064f93cc(param_2,uStack0000000000000008,0);
LAB_0650fbe8:
  if (*(long *)(unaff_x21 + 0x28) != lStack0000000000000038) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


