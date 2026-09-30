/*
FUNCTION_NAME: OVRPlugin$$get_recommendedMSAALevel
ENTRY_POINT: 05d78fb0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_recommendedMSAALevel(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long in_x9;
  int in_w10;
  int in_w11;
  int in_w12;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  
  iVar2 = 0;
  if (in_w10 != 0) {
    iVar2 = (in_w12 - in_w11) / in_w10;
  }
  uVar1 = (in_w12 - in_w11) - iVar2 * in_w10;
  do {
    uVar4 = (uint)in_x9;
    if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar4) {
      return;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar4) {
LAB_05d7912c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar3 = *(long *)(param_1 + in_x9 * 8 + 0x20);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_05d7912c;
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_05d7912c;
    lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
    uVar6 = *(undefined8 *)(lVar3 + 0x20);
    lVar5 = lVar5 + in_x9 * 0x10;
    in_x9 = in_x9 + 1;
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    param_1 = *(long *)(unaff_x20 + 0x88);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


