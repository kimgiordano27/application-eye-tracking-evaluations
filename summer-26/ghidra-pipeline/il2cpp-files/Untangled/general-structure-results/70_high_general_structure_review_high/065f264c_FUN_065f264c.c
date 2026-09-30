/*
FUNCTION_NAME: FUN_065f264c
ENTRY_POINT: 065f264c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_065f264c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  bool bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  
  puVar5 = UnityEngine_GradientMode_TypeInfo;
  if ((DAT_071cedc0 & 1) == 0) {
    FUN_02f07e70(UnityEngine_GradientMode_TypeInfo);
    FUN_02f07e70(HurricaneVR_Framework_Core_Player_GrabbableCollisionTracker_TypeInfo);
    FUN_02f07e70(HurricaneVR_Framework_Core_Player_GrabbableStuck_TypeInfo);
    FUN_02f07e70(Untangled_GrabbedState_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d090f0);
    FUN_02f07e70(PTR_DAT_06d099a0);
    FUN_02f07e70(PTR_DAT_06d09110);
    FUN_02f07e70(PTR_DAT_06d09118);
    FUN_02f07e70(PTR_DAT_06d03010);
    FUN_02f07e70(UnityEngine_Gradient_TypeInfo);
    FUN_02f07e70(System_IO_FileAccess_TypeInfo);
    FUN_02f07e70(System_IO_FileLoadException_TypeInfo);
    FUN_02f07e70(System_Net_FileWebRequest_TypeInfo);
    DAT_071cedc0 = 1;
  }
  lVar12 = *(long *)puVar5;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_138 = 0;
  local_140 = 0;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar12 = *(long *)puVar5;
  }
  auVar3._8_8_ = local_e0._8_8_;
  auVar3._0_8_ = local_e0._0_8_;
  lVar12 = **(long **)(lVar12 + 0xb8);
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    local_e0 = auVar3;
    if (*(long *)(param_5 + 0x20) != 0) {
      FUN_065f0734(&local_178);
      puVar10 = UnityEngine_Gradient_TypeInfo;
      puVar9 = Untangled_GrabbedState_TypeInfo;
      puVar8 = HurricaneVR_Framework_Core_Player_GrabbableStuck_TypeInfo;
      puVar7 = HurricaneVR_Framework_Core_Player_GrabbableCollisionTracker_TypeInfo;
      puVar6 = System_IO_FileLoadException_TypeInfo;
      puVar4 = PTR_DAT_06d090f0;
      uStack_a8 = uStack_170;
      local_b0 = local_178;
      uVar21 = local_b0;
      local_b0._0_1_ = (char)local_178;
      local_a0 = local_168;
      bVar1 = (char)local_b0 != '\0';
      local_b0 = uVar21;
      if (bVar1) {
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_065f2b74;
        FUN_065f0734(&local_178);
        uStack_a8 = uStack_170;
        local_b0 = local_178;
        local_a0 = local_168;
        local_e0 = FUN_043145bc(&local_b0,*(undefined8 *)puVar6);
        FUN_042dfb88(&local_178,local_e0,*(undefined8 *)puVar10);
        uStack_c8 = uStack_170;
        local_d0 = local_178;
        local_c0 = local_168;
        while (uVar13 = FUN_04e20d34(&local_d0,*(undefined8 *)puVar8), (uVar13 & 1) != 0) {
          uVar19 = FUN_04e20d8c(&local_d0,*(undefined8 *)puVar9);
          lVar14 = *(long *)puVar5;
          uVar21 = param_2;
          uVar22 = param_3;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar14 = *(long *)puVar5;
          }
          lVar14 = **(long **)(lVar14 + 0xb8);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar16 = *(long *)(lVar14 + 0x10);
          lVar15 = *(long *)puVar4;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar2 = *(uint *)(lVar14 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar14 + 0x18) = uVar2 + 1;
            *(int *)(lVar16 + 0x20) = (int)uVar19;
            *(int *)(lVar16 + 0x24) = (int)param_2;
            *(int *)(lVar16 + 0x28) = (int)param_3;
            param_2 = uVar21;
            param_3 = uVar22;
          }
          else {
            FUN_0407b268(uVar19,lVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_04e20d30(&local_d0,*(undefined8 *)puVar7);
      }
      uVar2 = *(uint *)(lVar12 + 0x18);
      uVar13 = (ulong)uVar2;
      plVar17 = (long *)(param_5 + 0x30);
      if ((*plVar17 == 0) || (*(int *)(*plVar17 + 0x18) < (int)uVar2)) {
        lVar14 = FUN_02f07f14(*(undefined8 *)System_Net_FileWebRequest_TypeInfo,uVar13);
        *plVar17 = lVar14;
        thunk_FUN_02f411dc(plVar17,lVar14);
      }
      if (*(long *)(param_5 + 0x28) != 0) {
        local_e8 = FUN_06727ec0(*(long *)(param_5 + 0x28),0);
        FUN_0672a0ec(&local_178,&local_e8,0);
        uStack_118 = uStack_170;
        local_120 = local_178;
        uStack_108 = uStack_160;
        local_110 = local_168;
        uStack_f8 = uStack_150;
        local_100 = local_158;
        local_f0 = local_148;
        uVar21 = local_168;
        uVar22 = local_158;
        uVar19 = FUN_0672f7a4(&local_120,0);
        if (*(long *)(param_5 + 0x28) != 0) {
          local_e8 = FUN_06727ec0(*(long *)(param_5 + 0x28),0);
          FUN_06728cfc(&local_178,&local_e8,0);
          uStack_138 = uStack_170;
          local_140 = local_178;
          uStack_128 = uStack_160;
          local_130 = local_168;
          uVar20 = FUN_0672f654(&local_140,0);
          puVar5 = PTR_DAT_06d09118;
          if (0 < (int)uVar2) {
            uVar18 = 0;
            lVar14 = 0x20;
            do {
              lVar15 = *plVar17;
              if (lVar15 == 0) goto LAB_065f2b74;
              uVar11 = FUN_03188d88(uVar19,uVar21,uVar22,param_4,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_065f2b78;
              FUN_06727594(lVar15 + lVar14,uVar11,0);
              lVar15 = *plVar17;
              if (lVar15 == 0) goto LAB_065f2b74;
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_065f2b78;
              FUN_06727530(uVar20,lVar15 + lVar14,0);
              lVar15 = *plVar17;
              if (lVar15 == 0) goto LAB_065f2b74;
              FUN_0407af38(lVar12,uVar18 & 0xffffffff,*(undefined8 *)puVar5);
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_065f2b78;
              FUN_06727508(lVar15 + lVar14,0);
              lVar15 = *plVar17;
              if (lVar15 == 0) goto LAB_065f2b74;
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_065f2b78;
              FUN_0672f30c(0x3f800000,lVar15 + lVar14,0);
              uVar18 = uVar18 + 1;
              lVar14 = lVar14 + 0x84;
            } while (uVar13 != uVar18);
          }
          uVar18 = (ulong)*(uint *)(param_5 + 0x38);
          if ((int)uVar2 < (int)*(uint *)(param_5 + 0x38)) {
            lVar12 = (long)(int)uVar2;
            lVar14 = lVar12 * 0x84 + 0x20;
            do {
              lVar15 = *plVar17;
              if (lVar15 == 0) goto LAB_065f2b74;
              if (*(uint *)(lVar15 + 0x18) <= (uint)lVar12) {
LAB_065f2b78:
                    /* WARNING: Subroutine does not return */
                FUN_02f080c8();
              }
              FUN_0672f30c(0xbf800000,lVar15 + lVar14,0);
              uVar18 = (ulong)*(int *)(param_5 + 0x38);
              lVar12 = lVar12 + 1;
              lVar14 = lVar14 + 0x84;
            } while (lVar12 < (long)uVar18);
          }
          lVar12 = *(long *)(param_5 + 0x28);
          uVar21 = *(undefined8 *)(param_5 + 0x30);
          if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar11 = Newtonsoft_Json_Serialization_JsonProperty__get_DeclaringType
                             (uVar13,uVar18 & 0xffffffff,0);
          if (lVar12 != 0) {
            FUN_06727900(lVar12,uVar21,uVar11,0);
            *(uint *)(param_5 + 0x38) = uVar2;
            return;
          }
        }
      }
    }
  }
LAB_065f2b74:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


