/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$GetRoomIndex
ENTRY_POINT: 05aebc0c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUK__GetRoomIndex(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar3 + 0x2c)) {
      FUN_05e229e0(0);
      lVar3 = *param_1;
      if (lVar3 == 0) goto LAB_05aebcbc;
    }
    uVar1 = *(uint *)(lVar3 + 0x20);
    uVar2 = *(uint *)(param_1 + 1);
    do {
      uVar4 = uVar2;
      if (uVar1 <= uVar4) {
        *(uint *)(param_1 + 1) = uVar1 + 1;
        param_1[2] = 0;
        param_1[3] = 0;
        goto LAB_05aebca8;
      }
      lVar5 = *(long *)(lVar3 + 0x18);
      *(uint *)(param_1 + 1) = uVar4 + 1;
      if (lVar5 == 0) goto LAB_05aebcbc;
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar5 = lVar5 + (long)(int)uVar4 * 0x20;
      uVar2 = uVar4 + 1;
    } while (*(int *)(lVar5 + 0x20) < 0);
    lVar3 = *(long *)(lVar5 + 0x28);
    param_1[3] = *(long *)(lVar5 + 0x30);
    param_1[2] = lVar3;
    thunk_FUN_0329bf60(param_1 + 2,0);
LAB_05aebca8:
    return uVar4 < uVar1;
  }
LAB_05aebcbc:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


