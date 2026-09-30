/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$RegisterTypesFromInspectedData
ENTRY_POINT: 06371fa0
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager__RegisterTypesFromInspectedData(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x23;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ebd90,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0x981) = 1;
  if ((int)unaff_w20 < 0) {
    return;
  }
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    puVar4 = (uint *)(*(long *)(*(long *)(unaff_x21 + 0x18) + 0x10) + (ulong)unaff_w20 * 0x50);
    uVar1 = *puVar4;
    uVar5 = *(undefined8 *)(puVar4 + 1);
    uVar7 = *(undefined8 *)(puVar4 + 0xe);
    uVar6 = *(undefined8 *)(puVar4 + 0xc);
    uVar9 = *(undefined8 *)(puVar4 + 0x12);
    uVar8 = *(undefined8 *)(puVar4 + 0x10);
    uVar11 = *(undefined8 *)(puVar4 + 6);
    uVar10 = *(undefined8 *)(puVar4 + 4);
    uVar13 = *(undefined8 *)(puVar4 + 10);
    uVar12 = *(undefined8 *)(puVar4 + 8);
    uVar2 = puVar4[3];
    if ((unaff_w19 & 1) == 0) {
      if (-1 < (int)uVar2) {
        if ((*(long *)(unaff_x21 + 0x10) == 0) ||
           (lVar3 = FUN_063178b4(*(long *)(unaff_x21 + 0x10),0), lVar3 == 0)) goto LAB_063720c0;
        FUN_0635a090(lVar3,uVar2,0xffffffff,0);
        uVar2 = 0xffffffff;
      }
    }
    else if (uVar2 == 0xffffffff) {
      if ((*(long *)(unaff_x21 + 0x10) == 0) ||
         (lVar3 = FUN_063178b4(*(long *)(unaff_x21 + 0x10),0), lVar3 == 0)) goto LAB_063720c0;
      uVar2 = FUN_06359b00();
    }
    if (*(long *)(unaff_x21 + 0x18) != 0) {
      puVar4 = (uint *)(*(long *)(*(long *)(unaff_x21 + 0x18) + 0x10) + (ulong)unaff_w20 * 0x50);
      *puVar4 = uVar1 & 0xfffffffe | unaff_w19 & 1;
      *(undefined8 *)(puVar4 + 1) = uVar5;
      puVar4[3] = uVar2;
      *(undefined8 *)(puVar4 + 0xe) = uVar7;
      *(undefined8 *)(puVar4 + 0xc) = uVar6;
      *(undefined8 *)(puVar4 + 0x12) = uVar9;
      *(undefined8 *)(puVar4 + 0x10) = uVar8;
      *(undefined8 *)(puVar4 + 6) = uVar11;
      *(undefined8 *)(puVar4 + 4) = uVar10;
      *(undefined8 *)(puVar4 + 10) = uVar13;
      *(undefined8 *)(puVar4 + 8) = uVar12;
      return;
    }
  }
LAB_063720c0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


