/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$LateUpdate
ENTRY_POINT: 0562de84
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__LateUpdate(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x22;
  
  uVar4 = FUN_032934b8(param_1);
  lVar5 = FUN_032d5d3c(uVar4,unaff_w20);
  lVar6 = FUN_032d5d3c(*unaff_x22,unaff_w20);
  iVar10 = *(int *)(unaff_x19 + 0x24);
  if (iVar10 < 1) {
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    lVar9 = 0x20;
    do {
      lVar12 = *(long *)(unaff_x19 + 0x18);
      if (lVar12 == 0) {
LAB_0562dfd8:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0562dfd4;
      if (-1 < *(int *)(lVar12 + lVar9)) {
        if (lVar5 == 0) goto LAB_0562dfd8;
        if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_0562dfd4:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar4 = *(undefined8 *)(lVar12 + lVar9);
        lVar11 = (long)(int)uVar7;
        lVar1 = lVar5 + lVar11 * 0x10;
        *(undefined8 *)(lVar1 + 0x28) = ((undefined8 *)(lVar12 + lVar9))[1];
        *(undefined8 *)(lVar1 + 0x20) = uVar4;
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0562dfd4;
        if (lVar6 == 0) goto LAB_0562dfd8;
        iVar3 = (int)uVar4;
        iVar10 = 0;
        if (unaff_w20 != 0) {
          iVar10 = iVar3 / unaff_w20;
        }
        uVar2 = iVar3 - iVar10 * unaff_w20;
        if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_0562dfd4;
        lVar12 = lVar6 + (long)(int)uVar2 * 4;
        uVar7 = uVar7 + 1;
        *(int *)(lVar5 + lVar11 * 0x10 + 0x24) = *(int *)(lVar12 + 0x20) + -1;
        *(uint *)(lVar12 + 0x20) = uVar7;
        iVar10 = *(int *)(unaff_x19 + 0x24);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((long)uVar8 < (long)iVar10);
  }
  *(uint *)(unaff_x19 + 0x24) = uVar7;
  *(long *)(unaff_x19 + 0x18) = lVar5;
  thunk_FUN_0333a630((long *)(unaff_x19 + 0x18),lVar5);
  *(long *)(unaff_x19 + 0x10) = lVar6;
  thunk_FUN_0333a630((long *)(unaff_x19 + 0x10),lVar6);
  *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
  return;
}


