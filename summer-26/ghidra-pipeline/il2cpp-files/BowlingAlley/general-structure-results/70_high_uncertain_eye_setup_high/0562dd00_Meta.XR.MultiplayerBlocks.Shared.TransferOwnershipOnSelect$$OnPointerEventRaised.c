/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$OnPointerEventRaised
ENTRY_POINT: 0562dd00
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__OnPointerEventRaised
              (long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  long unaff_x19;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  if (in_w8 < 1) {
    iVar4 = 0;
  }
  else {
    lVar6 = 0;
    uVar7 = 0;
    iVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      if (-1 < *(int *)(lVar3 + lVar6 + 0x20)) {
        uVar5 = *(undefined8 *)(lVar3 + lVar6 + 0x28);
        uVar2 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),uVar5,*(undefined8 *)(param_2 + 0x28));
        if ((uVar2 & 1) != 0) {
          uVar1 = FUN_0562bb70(param_1,uVar5,
                               *(undefined8 *)
                                (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x148));
          iVar4 = iVar4 + (uVar1 & 1);
        }
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((long)uVar7 < (long)*(int *)(param_1 + 0x24));
  }
  return iVar4;
}


