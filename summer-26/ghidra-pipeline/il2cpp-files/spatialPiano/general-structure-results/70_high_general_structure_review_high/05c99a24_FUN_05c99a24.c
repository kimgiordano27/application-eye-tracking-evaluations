/*
FUNCTION_NAME: FUN_05c99a24
ENTRY_POINT: 05c99a24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_13
*/


void FUN_05c99a24(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_60;
  
  if ((DAT_06bc3147 & 1) == 0) {
    FUN_02f08768(Method_System_Net_FtpWebRequest_SetException__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_SubmitRequest__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_SyncRequestCallback__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_TimerCallback__);
    DAT_06bc3147 = 1;
  }
  puVar3 = Method_System_Net_FtpWebRequest_SyncRequestCallback__;
  puVar2 = Method_System_Net_FtpWebRequest_SubmitRequest__;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = (long *)0x0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_04855724(&local_a8,*(long *)(param_1 + 0x10),
               *(undefined8 *)Method_System_Net_FtpWebRequest_SetException__);
  local_60 = local_88;
  uStack_78 = puStack_a0;
  local_80 = local_a8;
  local_68 = plStack_90;
  uStack_70 = local_98;
  local_a8 = 0;
  puStack_a0 = &local_80;
  do {
    while( true ) {
      uVar5 = FUN_04b9f1ec(&local_80,*(undefined8 *)puVar3);
      plVar4 = local_68;
      if ((uVar5 & 1) == 0) {
        FUN_04b9f304(&local_80,*(undefined8 *)puVar2);
        return;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar5 = local_68[3];
      iVar8 = (int)uVar5;
      if (1 < iVar8) break;
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_05c992c4(*(long *)(param_1 + 0x18),local_68[4],0);
    }
    lVar11 = local_68[(ulong)(iVar8 - 1) + 4];
    uVar13 = 0;
    do {
      if ((uVar5 & 0xffffffff) <= uVar13) {
LAB_05c99c08:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      lVar12 = plVar4[uVar13 + 4];
      if (lVar12 == 0) {
        uVar10 = uVar5 & 0xffffffff;
      }
      else {
        lVar6 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar4 + 0x40));
        if (lVar6 == 0) {
          uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar7,0);
        }
        uVar5 = (ulong)*(uint *)(plVar4 + 3);
        uVar10 = uVar5;
      }
      iVar9 = (int)uVar5;
      uVar1 = uVar13 + 1;
      if (uVar10 <= uVar1) goto LAB_05c99c08;
      plVar4[uVar13 + 5] = lVar12;
      uVar13 = uVar1;
    } while (iVar8 - 1 != uVar1);
    if (lVar11 != 0) {
      lVar12 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar12 == 0) {
        uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar7,0);
      }
      iVar9 = (int)plVar4[3];
    }
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    plVar4[4] = lVar11;
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05c992c4(*(long *)(param_1 + 0x18),lVar11,0);
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05c992c4(*(long *)(param_1 + 0x18),plVar4[5],1);
  } while( true );
}


