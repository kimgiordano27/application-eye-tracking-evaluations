/*
FUNCTION_NAME: FUN_0650fa68
ENTRY_POINT: 0650fa68
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


void FUN_0650fa68(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined4 uStack_48;
  undefined2 uStack_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_68 = param_2;
  if ((DAT_076df931 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280858);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ITextureDownload>_Start<CustomHeaderDownloadProvider_<RequestTexture>d__3>__
                      );
    DAT_076df931 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  local_4a = 0;
  iVar2 = FUN_0657855c(&local_68,0);
  if (iVar2 == 0x53544154) {
    lVar4 = FUN_06583234(local_68,0);
    if (lVar4 == 0) {
LAB_0650fc0c:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    iVar2 = *(int *)(lVar4 + 0x14);
    iVar3 = FUN_0658032c(0);
    if (iVar2 == iVar3) {
      puVar5 = (undefined8 *)FUN_06587c98(lVar4,0);
      uStack_58 = puVar5[1];
      local_60 = *puVar5;
      uStack_44 = *(undefined2 *)((long)puVar5 + 0x1c);
      uStack_48 = *(undefined4 *)(puVar5 + 3);
      uStack_50 = (undefined6)puVar5[2];
      local_4a = (undefined2)((ulong)puVar5[2] >> 0x30);
      lVar4 = FUN_064ebec0(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_07280858 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_07280858);
      }
      lVar4 = (ulong)*(uint *)(param_1 + 0x14) + lVar4;
      if (lVar4 == 0) goto LAB_0650fc0c;
      uStack_58 = CONCAT44((float)((ulong)uStack_58 >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar4 + 8) >> 0x20),
                           (float)uStack_58 + (float)*(undefined8 *)(lVar4 + 8));
      fVar6 = (float)(CONCAT26(local_4a,uStack_50) >> 0x20) +
              (float)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x20);
      uStack_50 = (undefined6)
                  CONCAT44(fVar6,(float)uStack_50 + (float)*(undefined8 *)(lVar4 + 0x10));
      local_4a = (undefined2)((uint)fVar6 >> 0x10);
      if (DAT_076df6c8 == '\0') {
        thunk_FUN_032e1da0(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_076df6c8 = '\x01';
      }
      FUN_03a29ad0(param_1,&local_60,
                   *(undefined4 *)
                    (*(long *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xb8) + 4),
                   local_68,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ITextureDownload>_Start<CustomHeaderDownloadProvider_<RequestTexture>d__3>__
                  );
      goto LAB_0650fbe8;
    }
  }
  FUN_064f93cc(param_1,local_68,0);
LAB_0650fbe8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


