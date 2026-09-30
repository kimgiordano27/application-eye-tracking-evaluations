/*
FUNCTION_NAME: FUN_05dd49a8
ENTRY_POINT: 05dd49a8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_17;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05dd49a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 local_300 [2];
  undefined4 local_2f0;
  undefined8 local_2e0 [4];
  undefined8 local_2c0 [4];
  undefined8 local_2a0 [2];
  undefined4 local_290;
  undefined8 local_280 [2];
  undefined4 local_270;
  undefined8 local_260 [4];
  undefined8 local_240 [2];
  undefined4 local_230;
  undefined8 local_220 [4];
  undefined8 local_200;
  undefined8 *puStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 *puStack_1b8;
  undefined4 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 *puStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 *puStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  if ((DAT_066dbe0e & 1) == 0) {
    FUN_02b3c81c(Method_System_Xml_Schema_XmlNumeric2Converter_ToString__);
    FUN_02b3c81c(Method_System_Runtime_Serialization_XmlObjectSerializer_CheckNull__);
    FUN_02b3c81c(Method_System_Runtime_Serialization_XmlObjectSerializer_InternalIsStartObject__);
    FUN_02b3c81c(Method_System_Runtime_Serialization_XmlObjectSerializer_InternalWriteEndObject__);
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializer_InternalWriteObjectContent__
                );
    FUN_02b3c81c(Method_System_Runtime_Serialization_XmlObjectSerializer_InternalWriteStartObject__)
    ;
    FUN_02b3c81c(PTR_DAT_0631fa60);
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                );
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializer_WriteEndObjectHandleExceptions__
                );
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializer_WriteObjectContentHandleExceptions__
                );
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializer_WriteObjectHandleExceptions__
                );
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066dbe0e = 1;
  }
  puVar1 = PTR_DAT_06312520;
  local_d8 = 0;
  local_70 = 0;
  local_160 = 0;
  puStack_158 = (undefined8 *)0x0;
  local_150 = 0;
  puStack_138 = (undefined8 *)0x0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  puStack_118 = (undefined8 *)0x0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puStack_f8 = (undefined8 *)0x0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_180 = 0;
  puStack_178 = (undefined8 *)0x0;
  local_170 = 0;
  local_1a0 = 0;
  uStack_198._0_4_ = 0;
  uStack_198._4_4_ = 0;
  local_188 = 0;
  local_190 = 0;
  uStack_18c = 0;
  local_1c0 = 0;
  puStack_1b8 = (undefined8 *)0x0;
  local_1b0 = 0;
  local_1e0 = 0;
  uStack_1d8._0_4_ = 0;
  uStack_1d8._4_4_ = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  uStack_1cc = 0;
  local_200 = 0;
  puStack_1f8 = (undefined8 *)0x0;
  local_1f0 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_05dd54cc:
    lVar12 = *(long *)(lVar12 + 0x28);
  }
  else {
    local_d8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x268);
    lVar7 = FUN_05dfc1b4(&local_d8,0);
    if (lVar7 == 0) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_05e8a3c4(0);
    }
    else {
      FUN_05de6364(lVar7,0);
      uVar8 = FUN_05de6364(lVar7,0);
    }
    uVar14 = *(undefined8 *)(param_1 + 0x120);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar9 = FUN_05c8c45c(uVar14,0,0);
    puVar1 = 
    Method_System_Runtime_Serialization_XmlObjectSerializer_WriteEndObjectHandleExceptions__;
    if ((uVar9 & 1) != 0) {
      lVar7 = *(long *)
               Method_System_Runtime_Serialization_XmlObjectSerializer_WriteEndObjectHandleExceptions__
      ;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar7 = *(long *)puVar1;
      }
      if (*(long *)(param_1 + 0x128) != 0) {
        uVar15 = *(undefined8 *)(param_1 + 0x120);
        lVar7 = **(long **)(lVar7 + 0xb8);
        uVar14 = FUN_05e15c90(*(long *)(param_1 + 0x128),0);
        if (lVar7 != 0) {
          FUN_05e9749c(0x3f800000,lVar7,uVar15,uVar14,*(undefined8 *)(param_1 + 0x130),0);
          FUN_05f570c0(param_2,**(undefined8 **)(*(long *)puVar1 + 0xb8),uVar8,0);
          goto LAB_05dd4bd8;
        }
      }
      goto LAB_05dd54cc;
    }
LAB_05dd4bd8:
    puVar5 = 
    Method_System_Runtime_Serialization_XmlObjectSerializer_WriteObjectContentHandleExceptions__;
    puVar4 = Method_System_Runtime_Serialization_XmlObjectSerializer_InternalWriteEndObject__;
    puVar3 = Method_System_Runtime_Serialization_XmlObjectSerializer_InternalIsStartObject__;
    puVar2 = Method_System_Xml_Schema_XmlNumeric2Converter_ToString__;
    puVar1 = PTR_DAT_0631fa60;
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_05dd54d4:
      lVar12 = *(long *)(lVar12 + 0x28);
    }
    else {
      FUN_0383a2fc(&local_b8,*(long *)(param_1 + 0x10),
                   *(undefined8 *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_WriteObjectHandleExceptions__
                  );
      local_90 = local_b8;
      uStack_88 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
      uStack_78 = CONCAT44(uStack_9c,uStack_a0);
      local_80 = CONCAT44(uStack_a4,local_a8);
      uStack_b0 = &local_90;
      local_b8 = 0;
      local_70 = local_98;
      while (uVar9 = FUN_04745cd4(&local_90,*(undefined8 *)puVar3), (uVar9 & 1) != 0) {
        uStack_c8 = uStack_78;
        local_d0 = local_80;
        local_c0 = local_70;
        FUN_05f58738(param_2,&local_d0,uVar8,0);
      }
      FUN_04745cd0(&local_90,*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_0383d0e8(&local_b8,*(long *)(param_1 + 0x18),*(undefined8 *)puVar5);
        local_100 = local_b8;
        puStack_f8 = uStack_b0;
        local_e8 = CONCAT44(uStack_9c,uStack_a0);
        local_f0 = CONCAT44(uStack_a4,local_a8);
        uStack_b0 = &local_100;
        local_b8 = 0;
        while (uVar9 = System_Collections_Generic_EqualityComparer<TreeViewItemData<object>>___ctor
                                 (&local_100,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          FUN_05f596b4(param_2,local_f0,local_e8,uVar8,0);
        }
        FUN_04745f1c(&local_100,
                     *(undefined8 *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_CheckNull__);
      }
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_05dd54d4;
      plVar10 = (long *)FUN_05dedea8(*(long *)(param_1 + 0x20),0);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x2e) * 0x10 + 0x138);
              goto LAB_05dd4d5c;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,0x2e);
LAB_05dd4d5c:
        (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
        puStack_118 = uStack_b0;
        uStack_108 = CONCAT44(uStack_9c,uStack_a0);
        uStack_110 = CONCAT44(uStack_a4,local_a8);
        local_120 = local_b8;
        iVar6 = FUN_05e0c6c0(&local_120,0);
        if (iVar6 != 1) {
          if ((*(long *)(param_1 + 0x20) == 0) ||
             (plVar10 = (long *)FUN_05dedea8(*(long *)(param_1 + 0x20),0), plVar10 == (long *)0x0))
          goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
          lVar7 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x2e) * 0x10 + 0x138);
                goto LAB_05dd4df0;
              }
              uVar9 = uVar9 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,0x2e);
LAB_05dd4df0:
          (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
          puStack_118 = uStack_b0;
          uStack_108 = CONCAT44(uStack_9c,uStack_a0);
          uStack_110 = CONCAT44(uStack_a4,local_a8);
          local_120 = local_b8;
          FUN_05e0c650(local_240,&local_120,0);
          local_220[0] = local_240[0];
          FUN_05f59b08(param_2,local_220,0);
        }
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (plVar10 = (long *)FUN_05dedea8(*(long *)(param_1 + 0x20),0), plVar10 != (long *)0x0)) {
          lVar7 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x6c) * 0x10 + 0x138);
                goto LAB_05dd4ea0;
              }
              uVar9 = uVar9 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar9 != 0);
          }
          puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,0x6c);
LAB_05dd4ea0:
          (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
          puStack_138 = uStack_b0;
          uStack_128 = CONCAT44(uStack_9c,uStack_a0);
          uStack_130 = CONCAT44(uStack_a4,local_a8);
          local_140 = local_b8;
          iVar6 = FUN_05e0dc38(&local_140,0);
          if (iVar6 != 1) {
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (plVar10 = (long *)FUN_05dedea8(*(long *)(param_1 + 0x20),0), plVar10 == (long *)0x0)
               ) goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
            lVar7 = *plVar10;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x6c) * 0x10 + 0x138);
                  goto LAB_05dd4f34;
                }
                uVar9 = uVar9 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,0x6c);
LAB_05dd4f34:
            (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
            puStack_138 = uStack_b0;
            uStack_128 = CONCAT44(uStack_9c,uStack_a0);
            uStack_130 = CONCAT44(uStack_a4,local_a8);
            local_140 = local_b8;
            FUN_05e0dbcc(local_240,&local_140,0);
            local_260[0] = local_240[0];
            FUN_05f59b74(param_2,local_260,0);
          }
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (plVar10 = (long *)FUN_05dedea8(*(long *)(param_1 + 0x20),0), plVar10 != (long *)0x0))
          {
            lVar7 = *plVar10;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x98) * 0x10 + 0x138);
                  goto LAB_05dd4fe4;
                }
                uVar9 = uVar9 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar9 != 0);
            }
            puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,0x98);
LAB_05dd4fe4:
            (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
            puStack_158 = uStack_b0;
            local_150 = CONCAT44(uStack_a4,local_a8);
            local_160 = local_b8;
            iVar6 = FUN_05e1b494(&local_160,0);
            if (iVar6 != 1) {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_05dedea8(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0))
              goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x98) * 0x10 + 0x138);
                    goto LAB_05dd5080;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,0x98);
LAB_05dd5080:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              local_150 = CONCAT44(uStack_a4,local_a8);
              puStack_158 = uStack_b0;
              local_160 = local_b8;
              FUN_05e1b438(local_240,&local_160,0);
              local_280[0] = local_240[0];
              local_270 = local_230;
              FUN_05f59be4(param_2,local_280,0);
            }
            if (*(char *)(param_1 + 0x90) != '\0') {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_05dedea8(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0))
              goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x70) * 0x10 + 0x138);
                    goto LAB_05dd5140;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,0x70);
LAB_05dd5140:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              local_170 = CONCAT44(uStack_a4,local_a8);
              puStack_178 = uStack_b0;
              local_180 = local_b8;
              FUN_05e0de8c(local_240,&local_180,0);
              local_2a0[0] = local_240[0];
              local_290 = local_230;
              FUN_05f68be4(param_2,local_2a0,0);
            }
            if (*(char *)(param_1 + 0xac) != '\0') {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_05dedea8(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0))
              goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x7a) * 0x10 + 0x138);
                    goto LAB_05dd5200;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,0x7a);
LAB_05dd5200:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              local_1a0 = local_b8;
              uStack_18c = uStack_a4;
              local_188 = uStack_a0;
              local_190 = local_a8;
              uStack_198 = uStack_b0;
              FUN_05e0e22c(local_240,&local_1a0,0);
              local_2c0[0] = local_240[0];
              FUN_05f68c4c(param_2,local_2c0,0);
            }
            if (*(char *)(param_1 + 0xec) != '\0') {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_05dedea8(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0))
              goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x68) * 0x10 + 0x138);
                    goto LAB_05dd52c0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,0x68);
LAB_05dd52c0:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              puStack_1b8 = uStack_b0;
              local_1c0 = local_b8;
              local_1b0 = local_a8;
              auVar16 = FUN_05e0d8b0(&local_1c0,0);
              FUN_05f68d1c(param_2,auVar16._0_8_,auVar16._8_8_,0);
            }
            if (*(char *)(param_1 + 0xcc) != '\0') {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_05dedea8(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0))
              goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x66) * 0x10 + 0x138);
                    goto LAB_05dd5378;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,0x66);
LAB_05dd5378:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              local_1e0 = local_b8;
              uStack_1cc = uStack_a4;
              local_1c8 = uStack_a0;
              local_1d0 = local_a8;
              uStack_1d8 = uStack_b0;
              FUN_05e0d4e4(local_240,&local_1e0,0);
              local_2e0[0] = local_240[0];
              FUN_05f68cb4(param_2,local_2e0,0);
            }
            if (*(char *)(param_1 + 0x104) != '\0') {
              if ((*(long *)(param_1 + 0x20) == 0) ||
                 (plVar10 = (long *)FUN_05dedea8(*(long *)(param_1 + 0x20),0),
                 plVar10 == (long *)0x0))
              goto UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition;
              lVar7 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 0x10) * 0x10 + 0x138);
                    goto FUN_05dd5438;
                  }
                  uVar9 = uVar9 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar9 != 0);
              }
              puVar11 = (undefined8 *)FUN_02b7654c(plVar10,*(long *)puVar1,0x10);
FUN_05dd5438:
              (*(code *)*puVar11)(&local_b8,plVar10,puVar11[1]);
              local_1f0 = CONCAT44(uStack_a4,local_a8);
              puStack_1f8 = uStack_b0;
              local_200 = local_b8;
              FUN_05e0c0bc(local_240,&local_200,0);
              local_300[0] = local_240[0];
              local_2f0 = local_230;
              FUN_05f68d7c(param_2,local_300,0);
            }
            if (*(long *)(lVar12 + 0x28) == local_68) {
              return;
            }
            goto LAB_05dd55b0;
          }
        }
      }
UnityEngine_UIElements_MinMaxSlider__UpdateDragElementPosition:
      lVar12 = *(long *)(lVar12 + 0x28);
    }
  }
  if (lVar12 == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05dd55b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


