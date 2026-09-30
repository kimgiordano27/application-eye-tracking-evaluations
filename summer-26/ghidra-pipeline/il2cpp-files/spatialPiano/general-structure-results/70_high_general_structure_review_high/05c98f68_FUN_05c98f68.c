/*
FUNCTION_NAME: FUN_05c98f68
ENTRY_POINT: 05c98f68
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_13
*/


void FUN_05c98f68(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 in_x7;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  
  if ((DAT_06bc3142 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(Method_System_Net_FtpWebRequest_SetException__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_SubmitRequest__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_SyncRequestCallback__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
    FUN_02f08768(Method_System_Net_FtpWebRequest_TimerCallback__);
    DAT_06bc3142 = 1;
  }
  puVar4 = Method_System_Net_FtpWebRequest_SyncRequestCallback__;
  puVar3 = Method_System_Net_FtpWebRequest_SubmitRequest__;
  puVar2 = PTR_DAT_067c9e50;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  puVar10 = &local_80;
  FUN_04855724(&local_80,*(long *)(param_1 + 0x10),
               *(undefined8 *)Method_System_Net_FtpWebRequest_SetException__);
  uVar9 = 0;
  while( true ) {
    uVar6 = FUN_04b9f1ec(&local_80,*(undefined8 *)puVar4);
    lVar5 = local_68;
    if ((uVar6 & 1) == 0) {
      FUN_04b9f304(&local_80,*(undefined8 *)puVar3);
      return;
    }
    if (local_68 == 0) break;
    if (0 < (int)*(ulong *)(local_68 + 0x18)) {
      uVar6 = 0;
      uVar7 = *(ulong *)(local_68 + 0x18) & 0xffffffff;
      lVar1 = local_68 + 0x20;
      do {
        if (uVar7 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar8 = *(undefined8 *)(lVar1 + uVar6 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05caf7bc(0,0,0,0x3f800000,param_2,uVar8,1,0,0xffffffff,0xffffffff,0,in_x7,uVar9,puVar10)
        ;
        uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


