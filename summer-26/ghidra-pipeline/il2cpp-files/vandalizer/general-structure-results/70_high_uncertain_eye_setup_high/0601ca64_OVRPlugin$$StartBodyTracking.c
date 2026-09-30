/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking
ENTRY_POINT: 0601ca64
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__StartBodyTracking
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if (param_5 != 0) {
    uVar4 = (ulong)*(uint *)(param_5 + 0x18);
    if ((long)((uVar4 << 0x20) + -0x100000000) < 1) {
      fVar8 = INFINITY;
    }
    else {
      uVar5 = 0;
      fVar8 = INFINITY;
      lVar6 = 0x100000000;
      do {
        if (uVar4 <= uVar5) {
LAB_0601cb8c:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        if (*(long *)(param_4 + 0x40) == 0) goto LAB_0601cb90;
        FUN_06034378(&stack0x00000010,*(long *)(param_4 + 0x40),
                     *(undefined4 *)(param_5 + 0x20 + uVar5 * 4),0);
        uVar3 = in_stack_00000018;
        uVar2 = uStack0000000000000014;
        uVar1 = uStack0000000000000010;
        uVar5 = uVar5 + 1;
        if (*(uint *)(param_5 + 0x18) <= uVar5) goto LAB_0601cb8c;
        if (*(long *)(param_4 + 0x40) == 0) goto LAB_0601cb90;
        FUN_06034378(&stack0x00000010,*(long *)(param_4 + 0x40),
                     *(undefined4 *)(param_5 + (lVar6 >> 0x1e) + 0x20),0);
        fVar7 = (float)FUN_0601d5ac(param_1,param_2,param_3,uVar1,uVar2,uVar3);
        if (fVar7 <= fVar8) {
          fVar8 = fVar7;
        }
        lVar6 = lVar6 + 0x100000000;
        uVar4 = *(ulong *)(param_5 + 0x18) & 0xffffffff;
      } while ((long)uVar5 < (long)((int)*(ulong *)(param_5 + 0x18) + -1));
    }
    return fVar8;
  }
LAB_0601cb90:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


