/*
FUNCTION_NAME: RenderHeads.Media.AVProVideo.RequestPermissions.<Start>d__0$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 049f2900
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable
*/


ulong * RenderHeads_Media_AVProVideo_RequestPermissions_<Start>d__0__System_Collections_IEnumerator_Reset
                  (ulong *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_e0 [16];
  
  uVar2 = DAT_0b558c40;
  uVar8 = DAT_0b31ec88;
  uVar13 = *(ulong *)(DAT_0b558f28 + param_4 * 0x10);
  local_e0[1] = 0;
  local_e0[0] = 0;
  local_e0[3] = 0;
  local_e0[2] = 0;
  local_e0[5] = 0;
  local_e0[4] = 0;
  local_e0[7] = 0;
  local_e0[6] = 0;
  local_e0[9] = 0;
  local_e0[8] = 0;
  local_e0[0xb] = 0;
  local_e0[10] = 0;
  local_e0[0xd] = 0;
  local_e0[0xc] = 0;
  local_e0[0xf] = 0;
  local_e0[0xe] = 0;
  puVar6 = param_1;
  if (uVar13 != 0) {
    do {
      if ((((uVar13 & 1) != 0) && (uVar11 = *puVar6, uVar8 <= uVar11)) && (uVar11 <= uVar2)) {
        uVar3 = uVar11 >> 0xc & 7;
        if (local_e0[uVar3 * 2] == uVar11 >> 0xc) {
          uVar3 = local_e0[uVar3 * 2 + 1];
        }
        else {
          uVar3 = FUN_049e967c(uVar11);
          if (uVar3 == 0) goto LAB_049f2a48;
        }
        uVar4 = uVar11 >> 4 & 0xff;
        uVar7 = (ulong)*(ushort *)(*(long *)(uVar3 + 0x30) + uVar4 * 2);
        if ((uVar11 & 0xf) != 0 || uVar7 != 0) {
          if ((*(byte *)(uVar3 + 0x19) >> 5 & 1) == 0) {
            uVar9 = uVar11 & 0xf | uVar7 << 4;
            if ((&DAT_0b34b710)[uVar9] == '\0') {
LAB_049f2afc:
              if (DAT_0b31ec18 == 0) {
                FUN_049e8798(uVar11);
              }
              else {
                FUN_049e8844(uVar11);
              }
              goto LAB_049f2a48;
            }
            uVar4 = uVar4 - uVar7;
            uVar11 = uVar11 - uVar9;
          }
          else {
            if ((uVar11 - *(ulong *)(uVar3 + 0x10) == (uVar11 & 0xfff)) &&
               ((&DAT_0b34b710)[uVar11 & 0xfff] == '\0')) goto LAB_049f2afc;
            uVar4 = 0;
            uVar11 = *(ulong *)(uVar3 + 0x10);
          }
        }
        uVar7 = 1L << (uVar4 & 0x3f);
        uVar9 = *(ulong *)(uVar3 + 0x40 + (uVar4 >> 6) * 8);
        if ((uVar7 & uVar9) == 0) {
          lVar10 = *(long *)(uVar3 + 0x38);
          uVar12 = *(ulong *)(uVar3 + 0x28);
          *(ulong *)(uVar3 + 0x40 + (uVar4 >> 6) * 8) = uVar7 | uVar9;
          *(long *)(uVar3 + 0x38) = lVar10 + 1;
          if (uVar12 != 0) {
            puVar5 = param_2 + 2;
            if (param_3 <= puVar5) {
              DAT_0b558d70 = 5;
              DAT_0b558da0 = 1;
              if (DAT_0b346228 != 0) {
                FUN_049e863c("Mark stack overflow; current size = %lu entries\n",DAT_0b558d50);
              }
              puVar5 = param_2 + -0x3fe;
            }
            *puVar5 = uVar11;
            puVar5[1] = uVar12;
            param_2 = puVar5;
          }
        }
      }
LAB_049f2a48:
      bVar1 = 1 < uVar13;
      puVar6 = puVar6 + 1;
      uVar13 = uVar13 >> 1;
    } while (bVar1);
  }
  puVar6 = param_2;
  if (*(int *)(DAT_0b558f28 + param_4 * 0x10 + 8) != 0) {
    puVar6 = param_2 + 2;
    if (param_3 <= puVar6) {
      DAT_0b558d70 = 5;
      DAT_0b558da0 = 1;
      if (DAT_0b346228 != 0) {
        FUN_049e863c("Mark stack overflow; current size = %lu entries\n",DAT_0b558d50);
      }
      puVar6 = param_2 + -0x3fe;
    }
    uVar8 = (ulong)DAT_0b558f40;
    *puVar6 = (ulong)(param_1 + 0x40);
    puVar6[1] = (param_4 * 0x40 + 0x40U | uVar8) << 2 | 2;
  }
  return puVar6;
}


