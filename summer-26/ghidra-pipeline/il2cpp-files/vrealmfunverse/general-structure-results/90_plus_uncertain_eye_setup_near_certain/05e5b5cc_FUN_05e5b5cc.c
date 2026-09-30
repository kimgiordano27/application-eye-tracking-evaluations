/*
FUNCTION_NAME: FUN_05e5b5cc
ENTRY_POINT: 05e5b5cc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_15;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_15
*/


void FUN_05e5b5cc(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  ushort uVar11;
  ushort uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined *puVar38;
  undefined *puVar39;
  int iVar40;
  undefined4 uVar44;
  int iVar41;
  undefined4 uVar42;
  uint uVar43;
  long lVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  long *plVar50;
  uint uVar51;
  uint uVar52;
  undefined4 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined1 auVar63 [16];
  uint local_1d0;
  undefined8 local_160;
  undefined8 uStack_158;
  int local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  uint local_10c;
  uint uStack_108;
  uint local_104;
  uint uStack_100;
  undefined4 local_fc;
  uint uStack_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  int local_d4;
  uint local_d0;
  uint local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  undefined4 local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  int local_78;
  undefined4 local_74;
  
  local_9c = param_3;
  if ((DAT_066dc61c & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_144__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_145__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_146__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_147__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_129__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_148__);
    FUN_02b3c81c(PTR_DAT_0631eb50);
    FUN_02b3c81c(PTR_DAT_063201e8);
    DAT_066dc61c = 1;
  }
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  memset(&local_160,0,0xb0);
  puVar39 = Method_OVRPlugin_<>c_<_cctor>b__810_129__;
  puVar38 = PTR_DAT_06312d90;
  if (param_2 == 0) goto LAB_05e5bc80;
  iVar40 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                     (param_2 + 0x18,
                      *(undefined8 *)
                       Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                     );
  iVar41 = FUN_03ac7100(param_2 + 0x28,*(undefined8 *)puVar39);
  if (*(int *)(*(long *)puVar38 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar38);
  }
  FUN_05c45700(iVar40 < 1 != 0 < iVar41,0);
  if ((iVar41 < 1) || (iVar40 < 1)) {
    return;
  }
  if (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0xec) + iVar40) {
    FUN_05e5c058(param_1);
    iVar1 = *(int *)(param_1 + 0xec);
    iVar2 = *(int *)(param_1 + 0xe4);
    if (*(int *)(*(long *)puVar38 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c45700(iVar1 + iVar40 <= iVar2,0);
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    uVar49 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_063201e8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05f51548(uVar49,param_1 + 0x6c,0);
    auVar35._8_8_ = local_88._8_8_;
    auVar35._0_8_ = local_88._0_8_;
    auVar34._8_8_ = local_88._8_8_;
    auVar34._0_8_ = local_88._0_8_;
    auVar33._8_8_ = local_88._8_8_;
    auVar33._0_8_ = local_88._0_8_;
    auVar26._8_8_ = local_98._8_8_;
    auVar26._0_8_ = local_98._0_8_;
    auVar25._8_8_ = local_98._8_8_;
    auVar25._0_8_ = local_98._0_8_;
    auVar24._8_8_ = local_98._8_8_;
    auVar24._0_8_ = local_98._0_8_;
    auVar17._8_8_ = local_b0._8_8_;
    auVar17._0_8_ = local_b0._0_8_;
    auVar16._8_8_ = local_b0._8_8_;
    auVar16._0_8_ = local_b0._0_8_;
    auVar63._8_8_ = local_b0._8_8_;
    auVar63._0_8_ = local_b0._0_8_;
    lVar45 = *(long *)(param_1 + 0x20);
    if (lVar45 == 0) goto LAB_05e5bc80;
    uVar49 = *(undefined8 *)(param_1 + 0x9c);
    uVar46 = *(undefined8 *)(param_1 + 0x94);
    uVar58 = *(undefined8 *)(param_1 + 0x8c);
    uVar54 = *(undefined8 *)(param_1 + 0x74);
    uVar47 = *(undefined8 *)(param_1 + 0x6c);
    uVar56 = *(undefined8 *)(param_1 + 0x84);
    uVar55 = *(undefined8 *)(param_1 + 0x7c);
    *(undefined8 *)(lVar45 + 0xf0) = *(undefined8 *)(param_1 + 0xa4);
    *(undefined8 *)(lVar45 + 0xe8) = uVar49;
    *(undefined8 *)(lVar45 + 0xe0) = uVar46;
    *(undefined8 *)(lVar45 + 0xd8) = uVar58;
    *(undefined8 *)(lVar45 + 0xd0) = uVar56;
    *(undefined8 *)(lVar45 + 200) = uVar55;
    *(undefined8 *)(lVar45 + 0xc0) = uVar54;
    *(undefined8 *)(lVar45 + 0xb8) = uVar47;
    local_b0 = auVar63;
    local_98 = auVar24;
    local_88 = auVar33;
    if (((*(long *)(param_1 + 0x18) == 0) ||
        (local_b0 = auVar16, local_98 = auVar25, local_88 = auVar34, *(long *)(param_1 + 0x20) == 0)
        ) || (lVar45 = *(long *)(*(long *)(param_1 + 0x18) + 0x148), local_b0 = auVar17,
             local_98 = auVar26, local_88 = auVar35, lVar45 == 0)) goto LAB_05e5bc80;
    uVar42 = FUN_05e7d6d4(lVar45,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8),0);
    auVar37._8_8_ = local_88._8_8_;
    auVar37._0_8_ = local_88._0_8_;
    auVar36._8_8_ = local_88._8_8_;
    auVar36._0_8_ = local_88._0_8_;
    auVar28._8_8_ = local_98._8_8_;
    auVar28._0_8_ = local_98._0_8_;
    auVar27._8_8_ = local_98._8_8_;
    auVar27._0_8_ = local_98._0_8_;
    auVar19._8_8_ = local_b0._8_8_;
    auVar19._0_8_ = local_b0._0_8_;
    auVar18._8_8_ = local_b0._8_8_;
    auVar18._0_8_ = local_b0._0_8_;
    *(undefined4 *)(param_1 + 0xac) = uVar42;
    if (((*(long *)(param_1 + 0x18) == 0) ||
        (local_b0 = auVar18, local_98 = auVar27, local_88 = auVar36, *(long *)(param_1 + 0x20) == 0)
        ) || (lVar45 = *(long *)(*(long *)(param_1 + 0x18) + 0x148), local_b0 = auVar19,
             local_98 = auVar28, local_88 = auVar37, lVar45 == 0)) goto LAB_05e5bc80;
    uVar49 = FUN_05e78cb8(lVar45,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x108),0);
    uVar51 = (uint)((ulong)uVar49 >> 8) & 0xffffff;
    uVar52 = (uint)uVar49;
    *(uint *)(param_1 + 0xb0) = uVar52;
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  else {
    uVar52 = (uint)*(byte *)(param_1 + 0xb0);
    uVar51 = (uint)*(byte *)(param_1 + 0xb1);
  }
  auVar29._8_8_ = local_88._8_8_;
  auVar29._0_8_ = local_88._0_8_;
  auVar20._8_8_ = local_98._8_8_;
  auVar20._0_8_ = local_98._0_8_;
  auVar13._8_8_ = local_b0._8_8_;
  auVar13._0_8_ = local_b0._0_8_;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar45 = *(long *)(*(long *)(param_1 + 0x18) + 0x148), local_b0 = auVar13, local_98 = auVar20,
     local_88 = auVar29, lVar45 != 0)) {
    uVar43 = FUN_05e7d7d0(lVar45,*(undefined8 *)(param_1 + 0x40),0);
    auVar32._8_8_ = local_88._8_8_;
    auVar32._0_8_ = local_88._0_8_;
    auVar31._8_8_ = local_88._8_8_;
    auVar31._0_8_ = local_88._0_8_;
    auVar23._8_8_ = local_98._8_8_;
    auVar23._0_8_ = local_98._0_8_;
    auVar22._8_8_ = local_98._8_8_;
    auVar22._0_8_ = local_98._0_8_;
    auVar15._8_8_ = local_b0._8_8_;
    auVar15._0_8_ = local_b0._0_8_;
    auVar14._8_8_ = local_b0._8_8_;
    auVar14._0_8_ = local_b0._0_8_;
    bVar5 = *(byte *)(param_1 + 0xae);
    bVar6 = *(byte *)(param_1 + 0xb2);
    bVar7 = *(byte *)(param_1 + 0xac);
    bVar8 = *(byte *)(param_1 + 0xad);
    bVar9 = *(byte *)(param_1 + 0xf4);
    if ((*(ushort *)(param_2 + 0x12) & 1) == 0) {
      local_1d0 = 0;
    }
    else {
      if (((*(long *)(param_1 + 0x18) == 0) ||
          (local_b0 = auVar14, local_98 = auVar22, local_88 = auVar31,
          *(long *)(param_1 + 0x20) == 0)) ||
         (lVar45 = *(long *)(*(long *)(param_1 + 0x18) + 0x148), local_b0 = auVar15,
         local_98 = auVar23, local_88 = auVar32, lVar45 == 0)) goto LAB_05e5bc80;
      uVar49 = FUN_05e7d9c0(lVar45,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x110),0);
      local_1d0 = (uint)((ulong)uVar49 >> 0x10) & 0xffff;
      *(short *)(param_1 + 0xb4) = (short)uVar49;
    }
    auVar63 = FUN_0322bc30(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                           *(undefined4 *)(param_1 + 0xec),iVar40,
                           *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_145__);
    iVar1 = *(int *)(param_1 + 0xec);
    uVar11 = *(ushort *)(param_1 + 0xe0);
    local_b0 = FUN_0322bb50(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                            *(undefined4 *)(param_1 + 0xf0),iVar41,
                            *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_144__);
    uVar58 = local_b0._8_8_;
    uVar49 = local_b0._0_8_;
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x34);
    if (*(int *)(*(long *)PTR_DAT_063201e8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066dc62e == '\0') {
      FUN_02b3c81c(PTR_DAT_06312d90);
      DAT_066dc62e = '\x01';
    }
    if (*(int *)(*(long *)puVar38 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c45700(iVar2 == iVar3 || iVar3 + 1 == iVar2,0);
    puVar38 = Method_OVRPlugin_<>c_<_cctor>b__810_147__;
    if (*(long *)(param_1 + 0x20) != 0) {
      cVar10 = *(char *)(*(long *)(param_1 + 0x20) + 0x99);
      uVar46 = FUN_0322c2fc(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                            *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_147__);
      uVar46 = FUN_04dc6844(uVar46,0);
      uVar47 = FUN_0322c2fc(auVar63._0_8_,auVar63._8_8_,*(undefined8 *)puVar38);
      uVar47 = FUN_04dc6844(uVar47,0);
      uVar56 = *(undefined8 *)(param_1 + 0x74);
      uVar54 = *(undefined8 *)(param_1 + 0x6c);
      uVar60 = *(undefined8 *)(param_1 + 0x84);
      uVar59 = *(undefined8 *)(param_1 + 0x7c);
      uVar62 = *(undefined8 *)(param_1 + 0x94);
      uVar61 = *(undefined8 *)(param_1 + 0x8c);
      uVar42 = *(undefined4 *)(param_1 + 0xb4);
      uVar12 = *(ushort *)(param_2 + 0x12);
      uVar57 = *(undefined8 *)(param_1 + 0xa4);
      uVar55 = *(undefined8 *)(param_1 + 0x9c);
      if (*(int *)(*(long *)PTR_DAT_0631eb50 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar53 = FUN_05f50580(&local_9c,0);
      puVar38 = Method_OVRPlugin_<>c_<_cctor>b__810_146__;
      uVar4 = *(undefined4 *)(param_1 + 0x10c);
      uVar48 = FUN_0322c2f8(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),
                            *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_146__);
      uVar48 = FUN_04dc6844(uVar48,0);
      uVar49 = FUN_0322c2f8(uVar49,uVar58,*(undefined8 *)puVar38);
      uVar49 = FUN_04dc6844(uVar49,0);
      uVar44 = FUN_03ac7100(local_b0,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_129__);
      auVar30._8_8_ = local_88._8_8_;
      auVar30._0_8_ = local_88._0_8_;
      auVar21._8_8_ = local_98._8_8_;
      auVar21._0_8_ = local_98._0_8_;
      lVar45 = *(long *)(param_1 + 0x18);
      if (lVar45 != 0) {
        uStack_b8 = *(undefined8 *)(param_1 + 0x104);
        local_c0 = *(undefined8 *)(param_1 + 0xfc);
        uStack_108 = (uint)bVar6 << 0x10 | local_1d0 << 0x18 | (uint)bVar5 | uVar43 >> 8 & 0xff00;
        local_10c = uVar43 << 0x10 | (uint)bVar8 << 8 | (uint)bVar7;
        uStack_100 = uVar52 & 0xff | (uVar51 & 0xff) << 8;
        local_ec = 0;
        uStack_f8 = uVar12 & 1;
        local_c8 = 0;
        if (*(char *)(param_1 + 0x58) != '\0') {
          local_c8 = 0x3f800000;
        }
        local_d0 = (uint)((bool)cVar10 == (iVar2 == iVar3));
        iVar1 = iVar1 + (uint)uVar11;
        local_c4 = (uint)*(byte *)(param_1 + 0xf8);
        local_cc = (uint)*(byte *)(lVar45 + 0x152);
        local_160 = uVar46;
        uStack_158 = uVar47;
        local_150 = iVar40;
        local_14c = uVar54;
        uStack_144 = uVar56;
        local_13c = uVar59;
        uStack_134 = uVar60;
        local_12c = uVar61;
        uStack_124 = uVar62;
        local_11c = uVar55;
        uStack_114 = uVar57;
        local_104 = (uint)bVar9;
        local_fc = uVar42;
        local_f4 = uVar53;
        local_f0 = uVar4;
        local_e8 = uVar48;
        uStack_e0 = uVar49;
        local_d8 = uVar44;
        local_d4 = iVar1;
        local_98 = auVar21;
        local_88 = auVar30;
        if (*(long *)(lVar45 + 0x140) != 0) {
          FUN_05e5f168(*(long *)(lVar45 + 0x140),&local_160,0);
          if (*(char *)(param_1 + 0x58) != '\0') {
            if (*(long *)(param_1 + 0x60) == 0) goto LAB_05e5bc80;
            local_74 = 0;
            local_78 = iVar1;
            local_98 = auVar63;
            local_88 = local_b0;
            FUN_03f0d0f0(*(long *)(param_1 + 0x60),local_98,
                         *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_148__);
          }
          lVar45 = FUN_05e5c1b4(param_1,*(undefined8 *)(param_1 + 0xb8),iVar41,
                                *(undefined4 *)(param_1 + 0xf0),*(undefined8 *)(param_2 + 0x50),
                                local_9c);
          if (*(long *)(param_1 + 0x118) == 0) {
            *(long *)(param_1 + 0x118) = lVar45;
            plVar50 = (long *)(param_1 + 0x118);
          }
          else {
            if (lVar45 == 0) goto LAB_05e5bc80;
            *(undefined8 *)(lVar45 + 0x20) = *(undefined8 *)(param_1 + 0x120);
            thunk_FUN_02bb0e9c();
            if (*(long *)(param_1 + 0x120) == 0) goto LAB_05e5bc80;
            plVar50 = (long *)(*(long *)(param_1 + 0x120) + 0x28);
            *plVar50 = lVar45;
          }
          thunk_FUN_02bb0e9c(plVar50,lVar45);
          *(long *)(param_1 + 0x120) = lVar45;
          thunk_FUN_02bb0e9c(param_1 + 0x120,lVar45);
          if (*(short *)(param_2 + 0x10) == 4) {
            if (lVar45 != 0) {
              *(undefined8 *)(lVar45 + 0x48) = *(undefined8 *)(param_2 + 0x40);
LAB_05e5bc40:
              iVar1 = *(int *)(param_1 + 0xec);
              iVar2 = *(int *)(param_1 + 0xf0);
              *(byte *)(lVar45 + 0x50) = *(byte *)(param_2 + 0x12) >> 1 & 1;
              *(int *)(param_1 + 0xec) = iVar1 + iVar40;
              *(int *)(param_1 + 0xf0) = iVar2 + iVar41;
              return;
            }
          }
          else if (lVar45 != 0) goto LAB_05e5bc40;
        }
      }
    }
  }
LAB_05e5bc80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


