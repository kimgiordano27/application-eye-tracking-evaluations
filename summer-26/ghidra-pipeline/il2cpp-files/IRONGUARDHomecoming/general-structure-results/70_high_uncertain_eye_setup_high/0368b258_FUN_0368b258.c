/*
FUNCTION_NAME: FUN_0368b258
ENTRY_POINT: 0368b258
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_14
*/


undefined4 FUN_0368b258(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_b0 [12];
  float local_a4;
  float fStack_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  
  fVar9 = param_2;
  fVar10 = param_3;
  if ((DAT_04833ea4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_14__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_15__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_16__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_17__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_18__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_19__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_2__);
    DAT_04833ea4 = 1;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  lVar5 = FUN_04070398(param_4,0);
  if (lVar5 != 0) {
    fVar8 = (float)FUN_0407d3c8(lVar5,0);
    FUN_0368ae98(auStack_b0,param_4);
    puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_16__;
    if (*(long *)(param_4 + 0x30) != 0) {
      FUN_02b38dec(local_a4 - (fVar8 - param_1),*(long *)(param_4 + 0x30),0,
                   *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_16__);
      if (*(long *)(param_4 + 0x30) != 0) {
        FUN_02b38dec(fStack_a0 - (fVar9 - param_2),*(long *)(param_4 + 0x30),1,*(undefined8 *)puVar1
                    );
        if (*(long *)(param_4 + 0x30) != 0) {
          FUN_02b38dec(local_9c - (fVar10 - param_3),*(long *)(param_4 + 0x30),2,
                       *(undefined8 *)puVar1);
          if (*(long *)(param_4 + 0x30) != 0) {
            FUN_02b38dec((fVar8 - param_1) + local_a4,*(long *)(param_4 + 0x30),3,
                         *(undefined8 *)puVar1);
            if (*(long *)(param_4 + 0x30) != 0) {
              FUN_02b38dec((fVar9 - param_2) + fStack_a0,*(long *)(param_4 + 0x30),4,
                           *(undefined8 *)puVar1);
              if (*(long *)(param_4 + 0x30) != 0) {
                FUN_02b38dec((fVar10 - param_3) + local_9c,*(long *)(param_4 + 0x30),5,
                             *(undefined8 *)puVar1);
                if ((*(long *)(param_4 + 0x30) != 0) &&
                   (lVar5 = FUN_02b38c14(*(long *)(param_4 + 0x30),
                                         *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_15__),
                   puVar3 = Method_OVRPlugin_<>c_<_cctor>b__653_18__,
                   puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_17__,
                   puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_14__, lVar5 != 0)) {
                  FUN_02ffaa64(&local_98,lVar5,
                               *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_2__);
                  uVar7 = 0;
                  while( true ) {
                    uVar6 = FUN_02ce09dc(&local_98,*(undefined8 *)puVar3);
                    if ((uVar6 & 1) == 0) {
                      FUN_02ce09d8(&local_98,*(undefined8 *)puVar2);
                      return uVar7;
                    }
                    if (*(long *)(param_4 + 0x30) == 0) break;
                    uVar4 = (undefined4)local_88;
                    fVar9 = (float)FUN_02b38d64(*(long *)(param_4 + 0x30),local_88 & 0xffffffff,
                                                *(undefined8 *)puVar1);
                    if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    fVar10 = (float)FUN_02b38d64(*(long *)(param_4 + 0x30),uVar7,
                                                 *(undefined8 *)puVar1);
                    if (fVar9 < fVar10) {
                      uVar7 = uVar4;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


