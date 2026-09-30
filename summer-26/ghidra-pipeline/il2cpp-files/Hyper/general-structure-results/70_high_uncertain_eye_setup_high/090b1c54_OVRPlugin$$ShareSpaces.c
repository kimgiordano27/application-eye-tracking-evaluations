/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 090b1c54
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShareSpaces(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined8 uStack000000000000001c;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    lVar3 = *(long *)(param_1 + 0x48);
    uVar1 = FUN_0a14f134(*(long *)(param_2 + 0x20),0);
    if (lVar3 != 0) {
      FUN_0a14f204(lVar3,uVar1,0);
      if (*(long *)(param_1 + 0x48) != 0) {
        lVar3 = FUN_0a17834c(*(long *)(param_1 + 0x48),0);
        if (((*(long *)(param_2 + 0x20) != 0) &&
            (lVar2 = FUN_0a17834c(*(long *)(param_2 + 0x20),0), lVar2 != 0)) &&
           (FUN_0a18c388(lVar2,0), lVar3 != 0)) {
          FUN_0a18aa1c(lVar3,0);
          if (*(long *)(param_1 + 0x50) != 0) {
            FUN_0a148064(*(long *)(param_1 + 0x50),1,0);
            FUN_0909d394((undefined1 *)((long)&stack0x00000018 + 0xc),
                         *(undefined8 *)(param_1 + 0x40));
            FUN_090b1d7c(&stack0x00000060,param_1,param_2,
                         (undefined1 *)((long)&stack0x00000018 + 0xc));
            if (*(long *)(param_2 + 0x20) != 0) {
              uVar1 = FUN_0a17834c(*(long *)(param_2 + 0x20),0);
              FUN_09038efc(&stack0x00000008,uVar1,0,0);
              uStack0000000000000048 = in_stack_00000010;
              uStack0000000000000040 = in_stack_00000008;
              uStack0000000000000054 = (undefined4)uStack000000000000001c;
              uStack0000000000000058 = SUB84(uStack000000000000001c,4);
              uStack0000000000000050 = uStack0000000000000018;
              uVar1 = FUN_090346a8(param_1 + 0x58,&stack0x00000040,&stack0x00000060,0);
              *(undefined8 *)(param_1 + 0x70) = uVar1;
              thunk_FUN_049ee3d8((undefined8 *)(param_1 + 0x70),uVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


