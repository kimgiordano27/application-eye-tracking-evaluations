/*
FUNCTION_NAME: FUN_0281efb0
ENTRY_POINT: 0281efb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_0281efb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  int local_220;
  undefined8 local_210;
  int iStack_208;
  int iStack_204;
  int iStack_200;
  undefined8 uStack_1fc;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  int local_180;
  undefined8 local_170;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined1 local_100 [32];
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_03788bd0 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule_PerformRaycast__);
    thunk_FUN_00d48444(StringLiteral_3198);
    thunk_FUN_00d48444(UnityEngine_UI_Image_var);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11761);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_MulInstruction_MulInt16_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2743);
    thunk_FUN_00d48444(UnityEngineInternal_Input_NativeInputUpdateType_TypeInfo);
    thunk_FUN_00d48444(MB2_TextureBakeResults_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ArraySegment<byte>>__ctor__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03788bd0 = 1;
  }
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  local_108 = 0;
  local_70 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_150 = 0;
  iStack_168 = 0;
  iStack_164 = 0;
  iStack_160 = 0;
  iStack_15c = 0;
  local_170 = 0;
  local_158 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  local_1b0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  local_1d0 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    local_108 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x360);
    lVar11 = FUN_02748b48(&local_108,0);
    if (lVar11 == 0) {
      if (*(int *)(*(long *)StringLiteral_2743 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_0279b224(0);
    }
    else {
      FUN_02749858(lVar11,0);
      uVar12 = FUN_02749858(lVar11,0);
    }
    uVar17 = *(undefined8 *)(param_1 + 0xe8);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_02681b9c(uVar17,0,0);
    puVar2 = UnityEngineInternal_Input_NativeInputUpdateType_TypeInfo;
    if ((uVar13 & 1) != 0) {
      lVar11 = *(long *)UnityEngineInternal_Input_NativeInputUpdateType_TypeInfo;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar11 = *(long *)puVar2;
      }
      if ((*(long *)(param_1 + 0xf0) == 0) || (**(long **)(lVar11 + 0xb8) == 0)) goto LAB_0281f938;
      FUN_0278f530(0x3f800000,**(long **)(lVar11 + 0xb8),*(undefined8 *)(param_1 + 0xe8),
                   *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x10),*(undefined8 *)(param_1 + 0xf8)
                   ,0);
      FUN_02806028(param_2,**(undefined8 **)(*(long *)puVar2 + 0xb8),uVar12,0);
    }
    puVar8 = StringLiteral_11761;
    puVar7 = Method_UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule_PerformRaycast__;
    puVar6 = System_Linq_Expressions_Interpreter_MulInstruction_MulInt16_TypeInfo;
    puVar5 = MB2_TextureBakeResults_TypeInfo;
    puVar4 = UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo;
    puVar3 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_TypeInfo;
    puVar2 = UnityEngine_UI_Image_var;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_01323390(*(long *)(param_1 + 0x10),&local_e0,
                   *(undefined8 *)Method_System_Collections_Generic_List<ArraySegment<byte>>__ctor__
                  );
      uStack_88 = CONCAT44(iStack_d4,iStack_d8);
      local_90 = CONCAT44(iStack_dc,local_e0);
      uStack_78 = CONCAT44(iStack_c4,iStack_c8);
      uStack_80 = CONCAT44(iStack_cc,local_d0);
      local_70 = local_c0;
      while (uVar13 = FUN_012b894c(&local_90,*(undefined8 *)puVar2), (uVar13 & 1) != 0) {
        FUN_00ce1668(&local_e0,&local_90,*(undefined8 *)puVar8);
        uStack_a8 = CONCAT44(iStack_d4,iStack_d8);
        local_b0 = CONCAT44(iStack_dc,local_e0);
        local_a0 = CONCAT44(iStack_cc,local_d0);
        FUN_028071f8(param_2,local_100,uVar12,0);
      }
      FUN_012b8948(&local_90,*(undefined8 *)puVar7);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_01323390(*(long *)(param_1 + 0x18),&local_e0,*(undefined8 *)puVar5);
        uStack_128 = CONCAT44(iStack_d4,iStack_d8);
        local_130 = CONCAT44(iStack_dc,local_e0);
        uStack_118 = CONCAT44(iStack_c4,iStack_c8);
        uStack_120 = CONCAT44(iStack_cc,local_d0);
        while (uVar13 = FUN_012b894c(&local_130,*(undefined8 *)puVar3), (uVar13 & 1) != 0) {
          auVar18 = FUN_00ceee58(&local_130,*(undefined8 *)puVar6);
          FUN_02807d64(param_2,auVar18._0_8_,auVar18._8_8_,uVar12,0);
        }
        FUN_012b8948(&local_130,*(undefined8 *)StringLiteral_3198);
      }
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (plVar14 = (long *)FUN_0274adf4(*(long *)(param_1 + 0x20),0), plVar14 != (long *)0x0)) {
        lVar11 = *plVar14;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar13 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar15 = (undefined8 *)(lVar11 + (long)(*piVar16 + 0xf) * 0x10 + 0x138);
              goto LAB_0281f360;
            }
            uVar13 = uVar13 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar13 != 0);
        }
        puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar4,0xf);
LAB_0281f360:
        (*(code *)*puVar15)(&local_e0,plVar14,puVar15[1]);
        uStack_148 = CONCAT44(iStack_d4,iStack_d8);
        local_150 = CONCAT44(iStack_dc,local_e0);
        local_140 = CONCAT44(iStack_cc,local_d0);
        if (iStack_c8 != 1) {
          if ((*(long *)(param_1 + 0x20) == 0) ||
             (plVar14 = (long *)FUN_0274adf4(*(long *)(param_1 + 0x20),0), plVar14 == (long *)0x0))
          goto LAB_0281f938;
          lVar11 = *plVar14;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar15 = (undefined8 *)(lVar11 + (long)(*piVar16 + 0xf) * 0x10 + 0x138);
                goto LAB_0281f3f4;
              }
              uVar13 = uVar13 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar13 != 0);
          }
          puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar4,0xf);
LAB_0281f3f4:
          (*(code *)*puVar15)(&local_e0,plVar14,puVar15[1]);
          uStack_148 = CONCAT44(iStack_d4,iStack_d8);
          local_150 = CONCAT44(iStack_dc,local_e0);
          local_140 = CONCAT44(iStack_cc,local_d0);
          if (iStack_c8 != 0) {
            iStack_d8 = 0;
            iStack_d4 = 0;
            local_d0 = 0;
            iStack_cc = 0;
            local_e0 = 0;
            iStack_dc = 0;
          }
          uStack_1e8 = CONCAT44(iStack_d4,iStack_d8);
          local_1f0 = CONCAT44(iStack_dc,local_e0);
          local_1e0 = CONCAT44(iStack_cc,local_d0);
          FUN_028080f0(param_2,&local_1f0,0);
        }
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (plVar14 = (long *)FUN_0274adf4(*(long *)(param_1 + 0x20),0), plVar14 != (long *)0x0)) {
          lVar11 = *plVar14;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar13 != 0) {
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar15 = (undefined8 *)(lVar11 + (long)(*piVar16 + 0x29) * 0x10 + 0x138);
                goto LAB_0281f4c8;
              }
              uVar13 = uVar13 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar13 != 0);
          }
          puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar4,0x29);
LAB_0281f4c8:
          (*(code *)*puVar15)(&local_e0,plVar14,puVar15[1]);
          local_170 = CONCAT44(iStack_d8,iStack_dc);
          iStack_168 = iStack_d4;
          iStack_15c = iStack_c8;
          local_158 = iStack_c4;
          iStack_164 = local_d0;
          iStack_160 = iStack_cc;
          if (local_e0 != 1) {
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (plVar14 = (long *)FUN_0274adf4(*(long *)(param_1 + 0x20),0), plVar14 == (long *)0x0)
               ) goto LAB_0281f938;
            lVar11 = *plVar14;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                  puVar15 = (undefined8 *)(lVar11 + (long)(*piVar16 + 0x29) * 0x10 + 0x138);
                  goto LAB_0281f55c;
                }
                uVar13 = uVar13 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar4,0x29);
LAB_0281f55c:
            (*(code *)*puVar15)(&local_e0,plVar14,puVar15[1]);
            iVar10 = iStack_cc;
            iVar9 = iStack_d8;
            local_170 = CONCAT44(iStack_d8,iStack_dc);
            iStack_168 = iStack_d4;
            iStack_15c = iStack_c8;
            local_158 = iStack_c4;
            iStack_164 = local_d0;
            iStack_160 = iStack_cc;
            if (local_e0 == 0) {
              iStack_d8 = iStack_d4;
              local_e0 = iStack_dc;
              iStack_dc = iVar9;
              iStack_cc = iStack_c8;
              iStack_c8 = iStack_c4;
              iStack_d4 = local_d0;
              local_d0 = iVar10;
            }
            else {
              iStack_d8 = 0;
              iStack_d4 = 0;
              local_d0 = 0;
              iStack_cc = 0;
              local_e0 = 0;
              iStack_dc = 0;
              iStack_c8 = 0;
            }
            local_210 = CONCAT44(iStack_dc,local_e0);
            uStack_1fc = CONCAT44(iStack_c8,iStack_cc);
            iStack_208 = iStack_d8;
            iStack_204 = iStack_d4;
            iStack_200 = local_d0;
            FUN_02808158(param_2,&local_210,0);
          }
          if (*(char *)(param_1 + 0x74) != '\0') {
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (plVar14 = (long *)FUN_0274adf4(*(long *)(param_1 + 0x20),0), plVar14 == (long *)0x0)
               ) goto LAB_0281f938;
            lVar11 = *plVar14;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                  puVar15 = (undefined8 *)(lVar11 + (long)(*piVar16 + 0x2b) * 0x10 + 0x138);
                  goto LAB_0281f640;
                }
                uVar13 = uVar13 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar4,0x2b);
LAB_0281f640:
            (*(code *)*puVar15)(&local_e0,plVar14,puVar15[1]);
            uStack_188 = CONCAT44(iStack_d4,iStack_d8);
            local_190 = CONCAT44(iStack_dc,local_e0);
            local_180 = local_d0;
            if (iStack_cc != 0) {
              local_e0 = 0;
              iStack_dc = 0;
              iStack_d8 = 0;
              iStack_d4 = 0;
              local_d0 = 0;
            }
            uStack_228 = CONCAT44(iStack_d4,iStack_d8);
            local_230 = CONCAT44(iStack_dc,local_e0);
            local_220 = local_d0;
            FUN_028161b0(param_2,&local_230,0);
          }
          if (*(char *)(param_1 + 0x90) != '\0') {
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (plVar14 = (long *)FUN_0274adf4(*(long *)(param_1 + 0x20),0), plVar14 == (long *)0x0)
               ) goto LAB_0281f938;
            lVar11 = *plVar14;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                  puVar15 = (undefined8 *)(lVar11 + (long)(*piVar16 + 0x2c) * 0x10 + 0x138);
                  goto LAB_0281f71c;
                }
                uVar13 = uVar13 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar4,0x2c);
LAB_0281f71c:
            (*(code *)*puVar15)(&local_e0,plVar14,puVar15[1]);
            uStack_1a8 = CONCAT44(iStack_d4,iStack_d8);
            local_1b0 = CONCAT44(iStack_dc,local_e0);
            local_1a0 = CONCAT44(iStack_cc,local_d0);
            if (iStack_c8 != 0) {
              iStack_d8 = 0;
              iStack_d4 = 0;
              local_d0 = 0;
              iStack_cc = 0;
              local_e0 = 0;
              iStack_dc = 0;
            }
            uStack_248 = CONCAT44(iStack_d4,iStack_d8);
            local_250 = CONCAT44(iStack_dc,local_e0);
            local_240 = CONCAT44(iStack_cc,local_d0);
            FUN_02816218(param_2,&local_250,0);
          }
          if (*(char *)(param_1 + 0xd0) != '\0') {
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (plVar14 = (long *)FUN_0274adf4(*(long *)(param_1 + 0x20),0), plVar14 == (long *)0x0)
               ) goto LAB_0281f938;
            lVar11 = *plVar14;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                  puVar15 = (undefined8 *)(lVar11 + (long)(*piVar16 + 0x28) * 0x10 + 0x138);
                  goto LAB_0281f7f8;
                }
                uVar13 = uVar13 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar4,0x28);
LAB_0281f7f8:
            (*(code *)*puVar15)(&local_e0,plVar14,puVar15[1]);
            uVar12 = CONCAT44(iStack_dc,local_e0);
            uVar17 = CONCAT44(iStack_d4,iStack_d8);
            if (local_d0 != 0) {
              uVar12 = 0;
              uVar17 = 0;
            }
            FUN_028162e8(param_2,uVar12,uVar17,0);
          }
          if (*(char *)(param_1 + 0xb0) != '\0') {
            if ((*(long *)(param_1 + 0x20) == 0) ||
               (plVar14 = (long *)FUN_0274adf4(*(long *)(param_1 + 0x20),0), plVar14 == (long *)0x0)
               ) goto LAB_0281f938;
            lVar11 = *plVar14;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar13 != 0) {
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                  puVar15 = (undefined8 *)(lVar11 + (long)(*piVar16 + 0x27) * 0x10 + 0x138);
                  goto LAB_0281f898;
                }
                uVar13 = uVar13 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar4,0x27);
LAB_0281f898:
            (*(code *)*puVar15)(&local_e0,plVar14,puVar15[1]);
            uStack_1c8 = CONCAT44(iStack_d4,iStack_d8);
            local_1d0 = CONCAT44(iStack_dc,local_e0);
            local_1c0 = CONCAT44(iStack_cc,local_d0);
            if (iStack_c8 != 0) {
              iStack_d8 = 0;
              iStack_d4 = 0;
              local_d0 = 0;
              iStack_cc = 0;
              local_e0 = 0;
              iStack_dc = 0;
            }
            uStack_268 = CONCAT44(iStack_d4,iStack_d8);
            local_270 = CONCAT44(iStack_dc,local_e0);
            local_260 = CONCAT44(iStack_cc,local_d0);
            FUN_02816280(param_2,&local_270,0);
          }
          if (*(long *)(lVar1 + 0x28) == local_68) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
  }
LAB_0281f938:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


