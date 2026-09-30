/*
FUNCTION_NAME: FUN_05c99ff0
ENTRY_POINT: 05c99ff0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_13
*/


void FUN_05c99ff0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  
  if ((DAT_06bc3148 & 1) == 0) {
    FUN_02f08768(Method_System_Data_FunctionNode_Eval__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_SetException__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_SubmitRequest__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_SyncRequestCallback__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_TimerCallback__);
    DAT_06bc3148 = 1;
  }
  puVar4 = Method_System_Data_FunctionNode_Eval__;
  puVar3 = Method_System_Net_FtpWebRequest_SyncRequestCallback__;
  puVar2 = Method_System_Net_FtpWebRequest_SubmitRequest__;
  local_60 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_04855724(&local_a8,*(long *)(param_1 + 0x10),
                 *(undefined8 *)Method_System_Net_FtpWebRequest_SetException__);
    local_60 = local_88;
    puStack_78 = puStack_a0;
    local_80 = local_a8;
    local_68 = lStack_90;
    uStack_70 = local_98;
    local_a8 = 0;
    puStack_a0 = &local_80;
    while (uVar6 = FUN_04b9f1ec(&local_80,*(undefined8 *)puVar3), lVar5 = local_68, (uVar6 & 1) != 0
          ) {
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar6 = *(ulong *)(local_68 + 0x18);
      if (0 < (int)uVar6) {
        uVar7 = 0;
        lVar1 = local_68 + 0x20;
        do {
          if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(long *)(lVar1 + uVar7 * 8) != 0) {
            FUN_05c97ac0();
          }
          uVar7 = uVar7 + 1;
        } while ((uVar6 & 0xffffffff) != uVar7);
      }
    }
    FUN_04b9f304(&local_80,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0485548c(*(long *)(param_1 + 0x10),*(undefined8 *)puVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


