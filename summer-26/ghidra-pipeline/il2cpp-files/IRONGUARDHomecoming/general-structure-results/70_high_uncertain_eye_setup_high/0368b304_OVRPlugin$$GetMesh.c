/*
FUNCTION_NAME: OVRPlugin$$GetMesh
ENTRY_POINT: 0368b304
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_9
*/


undefined4 OVRPlugin__GetMesh(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined4 in_stack_00000028;
  float fStack000000000000007c;
  
  lVar5 = FUN_04070398();
  if (lVar5 != 0) {
    fStack000000000000007c = unaff_s8;
    fVar8 = (float)FUN_0407d3c8(lVar5,0);
    FUN_0368ae98();
    puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_16__;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_02b38dec(in_stack_00000008._4_4_ - (fVar8 - unaff_s10),*(long *)(unaff_x19 + 0x30),0,
                   *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_16__);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_02b38dec(fStack0000000000000010 - (param_2 - unaff_s9),*(long *)(unaff_x19 + 0x30),1,
                     *(undefined8 *)puVar1);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_02b38dec(fStack0000000000000014 - (param_3 - fStack000000000000007c),
                       *(long *)(unaff_x19 + 0x30),2,*(undefined8 *)puVar1);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            FUN_02b38dec((fVar8 - unaff_s10) + in_stack_00000008._4_4_,*(long *)(unaff_x19 + 0x30),3
                         ,*(undefined8 *)puVar1);
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              FUN_02b38dec((param_2 - unaff_s9) + fStack0000000000000010,*(long *)(unaff_x19 + 0x30)
                           ,4,*(undefined8 *)puVar1);
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                FUN_02b38dec((param_3 - fStack000000000000007c) + fStack0000000000000014,
                             *(long *)(unaff_x19 + 0x30),5,*(undefined8 *)puVar1);
                if ((*(long *)(unaff_x19 + 0x30) != 0) &&
                   (lVar5 = FUN_02b38c14(*(long *)(unaff_x19 + 0x30),
                                         *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_15__),
                   puVar3 = Method_OVRPlugin_<>c_<_cctor>b__653_18__,
                   puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_17__,
                   puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_14__, lVar5 != 0)) {
                  FUN_02ffaa64(&stack0x00000018,lVar5,
                               *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_2__);
                  uVar7 = 0;
                  while( true ) {
                    uVar6 = FUN_02ce09dc(&stack0x00000018,*(undefined8 *)puVar3);
                    uVar4 = in_stack_00000028;
                    if ((uVar6 & 1) == 0) {
                      FUN_02ce09d8(&stack0x00000018,*(undefined8 *)puVar2);
                      return uVar7;
                    }
                    if (*(long *)(unaff_x19 + 0x30) == 0) break;
                    fVar8 = (float)FUN_02b38d64(*(long *)(unaff_x19 + 0x30),in_stack_00000028,
                                                *(undefined8 *)puVar1);
                    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    fVar9 = (float)FUN_02b38d64(*(long *)(unaff_x19 + 0x30),uVar7,
                                                *(undefined8 *)puVar1);
                    if (fVar8 < fVar9) {
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


