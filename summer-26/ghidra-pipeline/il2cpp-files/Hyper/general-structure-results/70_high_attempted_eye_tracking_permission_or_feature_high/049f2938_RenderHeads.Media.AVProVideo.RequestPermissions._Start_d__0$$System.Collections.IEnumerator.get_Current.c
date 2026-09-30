/*
FUNCTION_NAME: RenderHeads.Media.AVProVideo.RequestPermissions.<Start>d__0$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 049f2938
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable
*/


ulong * RenderHeads_Media_AVProVideo_RequestPermissions_<Start>d__0__System_Collections_IEnumerator_get_Current
                  (long param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long in_x9;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *in_x14;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x26;
  ulong uVar12;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000080;
  
  uVar7 = DAT_0b31ec88;
  uVar12 = *(ulong *)(param_1 + in_x9);
  uStack0000000000000010 = param_2;
  uStack0000000000000020 = param_2;
  uStack0000000000000030 = param_2;
  uStack0000000000000040 = param_2;
  uStack0000000000000050 = param_2;
  uStack0000000000000060 = param_2;
  uStack0000000000000070 = param_2;
  uStack0000000000000080 = param_2;
  puVar5 = param_3;
  if (uVar12 != 0) {
    do {
      if ((((uVar12 & 1) != 0) && (uVar10 = *puVar5, uVar7 <= uVar10)) && (uVar10 <= unaff_x26)) {
        lVar2 = (uVar10 >> 0xc & 7) * 0x10;
        if (*(ulong *)((long)&stack0x00000010 + lVar2) == uVar10 >> 0xc) {
          lVar2 = *(long *)(&stack0x00000018 + lVar2);
        }
        else {
          lVar2 = FUN_049e967c(uVar10);
          if (lVar2 == 0) goto LAB_049f2a48;
        }
        uVar3 = uVar10 >> 4 & 0xff;
        uVar6 = (ulong)*(ushort *)(*(long *)(lVar2 + 0x30) + uVar3 * 2);
        if ((uVar10 & 0xf) != 0 || uVar6 != 0) {
          if ((*(byte *)(lVar2 + 0x19) >> 5 & 1) == 0) {
            uVar8 = uVar10 & 0xf | uVar6 << 4;
            if ((&DAT_0b34b710)[uVar8] == '\0') {
LAB_049f2afc:
              if (DAT_0b31ec18 == 0) {
                FUN_049e8798(uVar10);
              }
              else {
                FUN_049e8844(uVar10);
              }
              in_x14 = &DAT_0b558000;
              goto LAB_049f2a48;
            }
            uVar3 = uVar3 - uVar6;
            uVar10 = uVar10 - uVar8;
          }
          else {
            if ((uVar10 - *(ulong *)(lVar2 + 0x10) == (uVar10 & 0xfff)) &&
               ((&DAT_0b34b710)[uVar10 & 0xfff] == '\0')) goto LAB_049f2afc;
            uVar3 = 0;
            uVar10 = *(ulong *)(lVar2 + 0x10);
          }
        }
        uVar6 = 1L << (uVar3 & 0x3f);
        uVar8 = *(ulong *)(lVar2 + 0x40 + (uVar3 >> 6) * 8);
        if ((uVar6 & uVar8) == 0) {
          lVar9 = *(long *)(lVar2 + 0x38);
          uVar11 = *(ulong *)(lVar2 + 0x28);
          *(ulong *)(lVar2 + 0x40 + (uVar3 >> 6) * 8) = uVar6 | uVar8;
          *(long *)(lVar2 + 0x38) = lVar9 + 1;
          if (uVar11 != 0) {
            puVar4 = param_4 + 2;
            if (param_5 <= puVar4) {
              DAT_0b558d70 = 5;
              DAT_0b558da0 = 1;
              if (DAT_0b346228 != 0) {
                FUN_049e863c("Mark stack overflow; current size = %lu entries\n",DAT_0b558d50);
                in_x14 = &DAT_0b558000;
              }
              puVar4 = param_4 + -0x3fe;
            }
            *puVar4 = uVar10;
            puVar4[1] = uVar11;
            param_4 = puVar4;
          }
        }
      }
LAB_049f2a48:
      bVar1 = 1 < uVar12;
      puVar5 = puVar5 + 1;
      uVar12 = uVar12 >> 1;
    } while (bVar1);
    param_1 = *(long *)(in_x14 + 0xf28);
  }
  puVar5 = param_4;
  if (*(int *)(param_1 + unaff_x20 * 0x10 + 8) != 0) {
    puVar5 = param_4 + 2;
    if (param_5 <= puVar5) {
      DAT_0b558d70 = 5;
      DAT_0b558da0 = 1;
      if (DAT_0b346228 != 0) {
        FUN_049e863c("Mark stack overflow; current size = %lu entries\n",DAT_0b558d50);
      }
      puVar5 = param_4 + -0x3fe;
    }
    uVar7 = (ulong)DAT_0b558f40;
    *puVar5 = (ulong)(param_3 + 0x40);
    puVar5[1] = (unaff_x20 * 0x40 + 0x40U | uVar7) << 2 | 2;
  }
  return puVar5;
}


