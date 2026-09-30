/*
FUNCTION_NAME: FUN_05e04cd8
ENTRY_POINT: 05e04cd8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05e054c4) */
/* WARNING: Removing unreachable block (ram,0x05e05490) */

undefined8 FUN_05e04cd8(long param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_130;
  long **pplStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  undefined1 local_60 [16];
  long *local_48;
  
  if ((DAT_06bc3df6 & 1) == 0) {
    FUN_02f08768(Method_System_Reflection_SignatureType_GetTypeCodeImpl__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    FUN_02f08768(Method_Unity_IO_LowLevel_Unsafe_ReadHandle_Dispose__);
    FUN_02f08768(
                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_System_Reflection_SignatureType_InvokeMember__);
    FUN_02f08768(Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__);
    FUN_02f08768(Method_System_Reflection_SignatureType_GetPropertyImpl__);
    FUN_02f08768(Method_System_Reflection_SignatureType_IsAssignableFrom__);
    FUN_02f08768(Method_Mono_Security_Cryptography_PKCS1_Encode_v15__);
    FUN_02f08768(Method_System_Globalization_DateTimeFormatInfo_GetMonthName__);
    FUN_02f08768(Method_System_Reflection_SignatureType_IsCOMObjectImpl__);
    FUN_02f08768(Method_System_Reflection_SignatureType_IsContextfulImpl__);
    FUN_02f08768(Method_System_Data_NewDiffgramGen_GenerateColumn__);
    FUN_02f08768(Method_System_Reflection_SignatureType_IsDefined__);
    FUN_02f08768(Method_System_Reflection_SignatureType_GetNestedType__);
    DAT_06bc3df6 = 1;
  }
  puVar6 = Method_Unity_IO_LowLevel_Unsafe_ReadHandle_Dispose__;
  puVar4 = Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__;
  puVar5 = Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_48 = (long *)0x0;
  local_68 = 0;
  local_70 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  if (param_3 != 0) {
    uVar8 = FUN_05d4c208(param_3,*(undefined8 *)
                                  Method_UnityEngine_NoAllocHelpers_SafeLength<Vector3>__);
    uVar9 = FUN_05d4c208(param_3,*(undefined8 *)puVar5);
    uVar10 = FUN_05d4c208(param_3,*(undefined8 *)puVar4);
    uVar11 = FUN_05d4c208(param_3,*(undefined8 *)puVar6);
    uVar20 = *(undefined8 *)(param_1 + 0x40);
    uVar12 = FUN_05d4d060(param_1,0);
    if (param_2 != 0) {
      local_48 = (long *)FUN_03523990(param_2,uVar20,&local_68,uVar12,
                                      *(undefined8 *)
                                       Method_System_Reflection_SignatureType_IsDefined__,0x1d4,
                                      *(undefined8 *)
                                       Method_System_Reflection_SignatureType_IsAssignableFrom__);
      pplStack_128 = &local_48;
      local_130 = 0;
      FUN_05e03efc(param_1,&local_68,uVar8,uVar9,uVar10,uVar11);
      FUN_05e03f50(param_1,&local_68,0,param_2,1);
      puVar5 = 
      Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__;
      if (*(char *)(param_1 + 0xcc) == '\0') {
        if (0 < *(int *)(param_1 + 200)) {
          uVar18 = 0;
          do {
            plVar7 = local_48;
            if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar14 = *(long *)(local_68 + 0x58);
            if ((lVar14 == 0) || (local_48 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if (*(uint *)(lVar14 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            lVar16 = *local_48;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                  puVar13 = (undefined8 *)(lVar16 + (long)(*piVar15 + 9) * 0x10 + 0x138);
                  goto LAB_05e04fb0;
                }
                uVar17 = uVar17 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar17 != 0);
            }
            puVar13 = (undefined8 *)FUN_02f421d0(local_48,*(long *)puVar5,9);
LAB_05e04fb0:
            (*(code *)*puVar13)(plVar7,lVar14 + uVar18 * 0xc + 0x20,puVar13[1]);
            uVar18 = uVar18 + 1;
          } while ((long)uVar18 < (long)*(int *)(param_1 + 200));
        }
        puVar4 = Method_Mono_Security_Cryptography_PKCS1_Encode_v15__;
        uStack_168 = *(undefined8 *)(param_1 + 0xf0);
        local_170 = *(undefined8 *)(param_1 + 0xe8);
        uStack_158 = *(undefined8 *)(param_1 + 0x100);
        uStack_160 = *(undefined8 *)(param_1 + 0xf8);
        local_140 = *(undefined4 *)(param_1 + 0x118);
        lVar14 = *(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__;
        uStack_148 = *(undefined8 *)(param_1 + 0x110);
        local_150 = *(undefined8 *)(param_1 + 0x108);
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar14 = *(long *)puVar4;
        }
        bVar1 = **(char **)(lVar14 + 0xb8) == '\0';
        if (bVar1) {
          puVar13 = &local_e0;
          uStack_d8 = uStack_168;
          local_e0 = local_170;
          uStack_c8 = uStack_158;
          local_d0 = uStack_160;
          uStack_b8 = uStack_148;
          local_c0 = local_150;
          local_b0 = local_140;
        }
        else {
          puVar13 = &local_a0;
          uStack_98 = uStack_168;
          local_a0 = local_170;
          uStack_88 = uStack_158;
          local_90 = uStack_160;
          uStack_78 = uStack_148;
          local_80 = local_150;
          local_70 = local_140;
        }
        uStack_118 = puVar13[1];
        local_120 = *puVar13;
        uStack_108 = puVar13[3];
        local_110 = puVar13[2];
        uStack_f8 = puVar13[5];
        local_100 = puVar13[4];
        local_f0 = *(undefined4 *)(puVar13 + 6);
        uVar8 = *(undefined8 *)Method_System_Reflection_SignatureType_GetNestedType__;
        if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack_188 = uStack_f8;
        local_190 = local_100;
        uStack_1a8 = uStack_118;
        local_1b0 = local_120;
        uStack_198 = uStack_108;
        uStack_1a0 = local_110;
        local_180 = local_f0;
        local_60 = FUN_05dcb930(param_2,&local_1b0,uVar8,1,bVar1,1,0);
        plVar7 = local_48;
        uVar9 = local_60._8_8_;
        uVar8 = local_60._0_8_;
        if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar14 = *local_48;
        uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar18 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__) {
              puVar13 = (undefined8 *)(lVar14 + (long)(*piVar15 + 4) * 0x10 + 0x138);
              goto LAB_05e05144;
            }
            uVar18 = uVar18 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar18 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_02f421d0(local_48,*(long *)
                                         Method_UnityEngine_GraphicsBuffer_LockBufferForWrite<byte>__
                               ,4);
LAB_05e05144:
        (*(code *)*puVar13)(plVar7,uVar8,uVar9,2,puVar13[1]);
      }
      else {
        if (*(long *)(param_2 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        local_60 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x58) + 0xb8);
      }
      plVar7 = local_48;
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar14 = *local_48;
      uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar18 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0xc) * 0x10 + 0x138);
            goto LAB_05e051b4;
          }
          uVar18 = uVar18 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar18 != 0);
      }
      puVar13 = (undefined8 *)FUN_02f421d0(local_48,*(long *)puVar5,0xc);
LAB_05e051b4:
      (*(code *)*puVar13)(plVar7,1,puVar13[1]);
      if (*(int *)(*(long *)Method_System_Globalization_DateTimeFormatInfo_GetMonthName__ + 0xe4) ==
          0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc2ec1 == '\0') {
        FUN_02f08768(PTR_DAT_067ce608);
        DAT_06bc2ec1 = '\x01';
      }
      puVar4 = PTR_DAT_067ce608;
      if (*(int *)(*(long *)PTR_DAT_067ce608 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bc2ec2 == '\0') {
        FUN_02f08768(PTR_DAT_067ce608);
        DAT_06bc2ec2 = '\x01';
      }
      uVar3 = (uint)(ushort)local_60._2_2_;
      if (local_60._2_2_ != 0) {
        lVar14 = *(long *)puVar4;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar14 = *(long *)puVar4;
        }
        piVar15 = *(int **)(lVar14 + 0xb8);
        if (uVar3 << 0x10 != *piVar15) {
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            piVar15 = *(int **)(*(long *)puVar4 + 0xb8);
          }
          if (uVar3 << 0x10 != piVar15[1]) goto LAB_05e05314;
        }
        plVar7 = local_48;
        puVar4 = Method_System_Reflection_SignatureType_GetPropertyImpl__;
        lVar14 = *(long *)Method_System_Reflection_SignatureType_GetPropertyImpl__;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar14 = *(long *)puVar4;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        uVar2 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x28);
        if (uVar18 != 0) {
          piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar13 = (undefined8 *)(lVar16 + (long)(*piVar15 + 3) * 0x10 + 0x138);
              goto LAB_05e05300;
            }
            uVar18 = uVar18 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar18 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar5,3);
LAB_05e05300:
        (*(code *)*puVar13)(plVar7,local_60,uVar2,puVar13[1]);
      }
LAB_05e05314:
      plVar7 = local_48;
      puVar5 = Method_System_Reflection_SignatureType_IsContextfulImpl__;
      lVar14 = *(long *)Method_System_Reflection_SignatureType_IsContextfulImpl__;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar14 = *(long *)puVar5;
      }
      puVar13 = *(undefined8 **)(lVar14 + 0xb8);
      lVar16 = puVar13[1];
      if (lVar16 == 0) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          puVar13 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
        }
        uVar8 = *puVar13;
        lVar16 = thunk_FUN_02f45270(*(undefined8 *)
                                     Method_System_Reflection_SignatureType_GetTypeCodeImpl__);
        FUN_04237db8(lVar16,uVar8,
                     *(undefined8 *)Method_System_Reflection_SignatureType_IsCOMObjectImpl__,0);
        *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8) = lVar16;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar14 = *plVar7;
      lVar19 = *(long *)Method_System_Reflection_SignatureType_InvokeMember__;
      uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar18 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)(lVar19 + 0x20)) {
            lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar19 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_05e053f0;
          }
          uVar18 = uVar18 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar18 != 0);
      }
      lVar14 = FUN_02f421d0(plVar7);
LAB_05e053f0:
      lVar14 = thunk_FUN_02f2742c(*(undefined8 *)(lVar14 + 8),lVar19);
      (**(code **)(lVar14 + 8))(plVar7,lVar16,lVar14);
      plVar7 = local_48;
      if (local_48 != (long *)0x0) {
        lVar14 = *local_48;
        uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar18 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_067c91b0) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05e05478;
            }
            uVar18 = uVar18 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar18 != 0);
        }
        puVar13 = (undefined8 *)FUN_02f421d0(local_48,*(long *)PTR_DAT_067c91b0,0);
LAB_05e05478:
        (*(code *)*puVar13)(plVar7,puVar13[1]);
      }
      return local_60._0_8_;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


