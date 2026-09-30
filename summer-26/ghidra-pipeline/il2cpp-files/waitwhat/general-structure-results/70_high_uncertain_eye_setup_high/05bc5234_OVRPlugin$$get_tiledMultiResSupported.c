/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResSupported
ENTRY_POINT: 05bc5234
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__get_tiledMultiResSupported
               (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,long param_4,
               long param_5)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  
  if ((DAT_0754eae6 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070d3dc8);
    DAT_0754eae6 = 1;
  }
  puVar2 = PTR_DAT_070d3dc8;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uStack000000000000009c = 0;
  if ((param_4 != 0) && (lVar6 = *(long *)(param_4 + 0x138), lVar6 != 0)) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    bVar7 = 0 < (int)uVar1;
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        lVar5 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_05bc53fc;
        uVar3 = FUN_06a589b8(lVar5,0);
        if ((uVar3 & 1) != 0) {
          if ((param_5 == 0) || (lVar4 = FUN_069d3a80(param_5,0), lVar4 == 0)) goto LAB_05bc53fc;
          uVar9 = FUN_069e6fbc(lVar4,0);
          uVar10 = param_2;
          lVar4 = FUN_069d3a80(param_5,0);
          if (lVar4 == 0) goto LAB_05bc53fc;
          FUN_069e5200(lVar4,0);
          lVar4 = FUN_069d3a80(lVar5,0);
          if (lVar4 == 0) goto LAB_05bc53fc;
          in_stack_00000098 = uVar10;
          FUN_069e6fbc(lVar4,0);
          lVar4 = FUN_069d3a80(lVar5,0);
          if (lVar4 == 0) goto LAB_05bc53fc;
          FUN_069e5200(lVar4,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar3 = FUN_06a5f828(uVar9,param_5,lVar5,&stack0x00000040,&stack0x0000009c,0);
          if ((uVar3 & 1) != 0) {
            return bVar7;
          }
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar8 = uVar8 + 1;
        bVar7 = (int)uVar8 < (int)uVar1;
      } while ((int)uVar8 < (int)uVar1);
    }
    return bVar7;
  }
LAB_05bc53fc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


