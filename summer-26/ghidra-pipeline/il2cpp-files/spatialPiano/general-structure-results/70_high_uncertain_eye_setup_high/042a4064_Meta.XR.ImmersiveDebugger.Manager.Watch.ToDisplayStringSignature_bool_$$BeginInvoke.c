/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$BeginInvoke
ENTRY_POINT: 042a4064
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__BeginInvoke
               (long *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = (ulong)uVar1;
  if (uVar1 != 0) {
    lVar4 = *param_1;
    uVar6 = 0;
    if ((uVar1 & 0xfffffff8) != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x100);
      do {
        uVar9 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        uVar6 = uVar6 + 8;
        uVar11 = param_2[1];
        uVar10 = *param_2;
        uVar13 = param_2[3];
        uVar12 = param_2[2];
        puVar5[-0x1b] = param_2[5];
        puVar5[-0x1c] = uVar9;
        puVar5[-0x19] = uVar8;
        puVar5[-0x1a] = uVar7;
        puVar5[-0x1f] = uVar11;
        puVar5[-0x20] = uVar10;
        puVar5[-0x1d] = uVar13;
        puVar5[-0x1e] = uVar12;
        uVar9 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        uVar11 = param_2[1];
        uVar10 = *param_2;
        uVar13 = param_2[3];
        uVar12 = param_2[2];
        puVar5[-0x13] = param_2[5];
        puVar5[-0x14] = uVar9;
        puVar5[-0x11] = uVar8;
        puVar5[-0x12] = uVar7;
        puVar5[-0x17] = uVar11;
        puVar5[-0x18] = uVar10;
        puVar5[-0x15] = uVar13;
        puVar5[-0x16] = uVar12;
        uVar9 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        uVar11 = param_2[1];
        uVar10 = *param_2;
        uVar13 = param_2[3];
        uVar12 = param_2[2];
        puVar5[-0xb] = param_2[5];
        puVar5[-0xc] = uVar9;
        puVar5[-9] = uVar8;
        puVar5[-10] = uVar7;
        puVar5[-0xf] = uVar11;
        puVar5[-0x10] = uVar10;
        puVar5[-0xd] = uVar13;
        puVar5[-0xe] = uVar12;
        uVar9 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        uVar11 = param_2[1];
        uVar10 = *param_2;
        uVar13 = param_2[3];
        uVar12 = param_2[2];
        puVar5[-3] = param_2[5];
        puVar5[-4] = uVar9;
        puVar5[-1] = uVar8;
        puVar5[-2] = uVar7;
        puVar5[-7] = uVar11;
        puVar5[-8] = uVar10;
        puVar5[-5] = uVar13;
        puVar5[-6] = uVar12;
        uVar9 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        uVar11 = param_2[1];
        uVar10 = *param_2;
        uVar13 = param_2[3];
        uVar12 = param_2[2];
        puVar5[5] = param_2[5];
        puVar5[4] = uVar9;
        puVar5[7] = uVar8;
        puVar5[6] = uVar7;
        puVar5[1] = uVar11;
        *puVar5 = uVar10;
        puVar5[3] = uVar13;
        puVar5[2] = uVar12;
        uVar9 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        uVar11 = param_2[1];
        uVar10 = *param_2;
        uVar13 = param_2[3];
        uVar12 = param_2[2];
        puVar5[0xd] = param_2[5];
        puVar5[0xc] = uVar9;
        puVar5[0xf] = uVar8;
        puVar5[0xe] = uVar7;
        puVar5[9] = uVar11;
        puVar5[8] = uVar10;
        puVar5[0xb] = uVar13;
        puVar5[10] = uVar12;
        uVar9 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        uVar11 = param_2[1];
        uVar10 = *param_2;
        uVar13 = param_2[3];
        uVar12 = param_2[2];
        puVar5[0x15] = param_2[5];
        puVar5[0x14] = uVar9;
        puVar5[0x17] = uVar8;
        puVar5[0x16] = uVar7;
        puVar5[0x11] = uVar11;
        puVar5[0x10] = uVar10;
        puVar5[0x13] = uVar13;
        puVar5[0x12] = uVar12;
        uVar9 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        uVar11 = param_2[1];
        uVar10 = *param_2;
        uVar13 = param_2[3];
        uVar12 = param_2[2];
        puVar5[0x1d] = param_2[5];
        puVar5[0x1c] = uVar9;
        puVar5[0x1f] = uVar8;
        puVar5[0x1e] = uVar7;
        puVar5[0x19] = uVar11;
        puVar5[0x18] = uVar10;
        puVar5[0x1b] = uVar13;
        puVar5[0x1a] = uVar12;
        puVar5 = puVar5 + 0x40;
      } while (uVar6 < (uVar2 & 0xfffffff8));
    }
    if (uVar6 < (uVar2 & 0xfffffffc)) {
      uVar9 = param_2[4];
      uVar8 = param_2[7];
      uVar7 = param_2[6];
      puVar5 = (undefined8 *)(lVar4 + uVar6 * 0x40);
      uVar11 = param_2[1];
      uVar10 = *param_2;
      uVar13 = param_2[3];
      uVar12 = param_2[2];
      uVar6 = uVar6 | 4;
      puVar5[5] = param_2[5];
      puVar5[4] = uVar9;
      puVar5[7] = uVar8;
      puVar5[6] = uVar7;
      puVar5[1] = uVar11;
      *puVar5 = uVar10;
      puVar5[3] = uVar13;
      puVar5[2] = uVar12;
      uVar9 = param_2[4];
      uVar8 = param_2[7];
      uVar7 = param_2[6];
      uVar11 = param_2[1];
      uVar10 = *param_2;
      uVar13 = param_2[3];
      uVar12 = param_2[2];
      puVar5[0xd] = param_2[5];
      puVar5[0xc] = uVar9;
      puVar5[0xf] = uVar8;
      puVar5[0xe] = uVar7;
      puVar5[9] = uVar11;
      puVar5[8] = uVar10;
      puVar5[0xb] = uVar13;
      puVar5[10] = uVar12;
      uVar9 = param_2[4];
      uVar8 = param_2[7];
      uVar7 = param_2[6];
      uVar11 = param_2[1];
      uVar10 = *param_2;
      uVar13 = param_2[3];
      uVar12 = param_2[2];
      puVar5[0x15] = param_2[5];
      puVar5[0x14] = uVar9;
      puVar5[0x17] = uVar8;
      puVar5[0x16] = uVar7;
      puVar5[0x11] = uVar11;
      puVar5[0x10] = uVar10;
      puVar5[0x13] = uVar13;
      puVar5[0x12] = uVar12;
      uVar9 = param_2[4];
      uVar8 = param_2[7];
      uVar7 = param_2[6];
      uVar11 = param_2[1];
      uVar10 = *param_2;
      uVar13 = param_2[3];
      uVar12 = param_2[2];
      puVar5[0x1d] = param_2[5];
      puVar5[0x1c] = uVar9;
      puVar5[0x1f] = uVar8;
      puVar5[0x1e] = uVar7;
      puVar5[0x19] = uVar11;
      puVar5[0x18] = uVar10;
      puVar5[0x1b] = uVar13;
      puVar5[0x1a] = uVar12;
    }
    lVar3 = uVar2 - uVar6;
    if (uVar6 <= uVar2 && lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar4 + uVar6 * 0x40);
      do {
        uVar9 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        lVar3 = lVar3 + -1;
        uVar11 = param_2[1];
        uVar10 = *param_2;
        uVar13 = param_2[3];
        uVar12 = param_2[2];
        puVar5[5] = param_2[5];
        puVar5[4] = uVar9;
        puVar5[7] = uVar8;
        puVar5[6] = uVar7;
        puVar5[1] = uVar11;
        *puVar5 = uVar10;
        puVar5[3] = uVar13;
        puVar5[2] = uVar12;
        puVar5 = puVar5 + 8;
      } while (lVar3 != 0);
    }
  }
  return;
}


