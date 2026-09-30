/*
FUNCTION_NAME: FUN_05eb02d4
ENTRY_POINT: 05eb02d4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05eb02d4(long param_1,undefined4 *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  long local_1a0;
  long *plStack_198;
  int local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  long local_170;
  long *plStack_168;
  int local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long local_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  ulong local_f8;
  undefined8 local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined1 local_a0 [8];
  long *plStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_06bc4365 & 1) == 0) {
    FUN_02f08768(Method_System_Net_WebRequest_Create__);
    FUN_02f08768(Method_System_Net_WebRequest_Create__);
    FUN_02f08768(Method_System_Net_WebRequest_EndGetResponse__);
    FUN_02f08768(Method_System_Net_WebRequest_GetResponse__);
    FUN_02f08768(Method_System_Net_WebRequest_get_ContentLength__);
    FUN_02f08768(Method_System_Net_WebRequest_get_Credentials__);
    FUN_02f08768(Method_System_Reflection_Emit_TypeBuilder_GetMembers__);
    FUN_02f08768(PTR_DAT_067d2f10);
    FUN_02f08768(Method_System_Net_WebRequest_get_Headers__);
    FUN_02f08768(Method_System_Net_WebRequest_get_Method__);
    FUN_02f08768(Method_System_Net_WebRequest_get_Proxy__);
    FUN_02f08768(Method_System_Net_WebRequest_get_RequestUri__);
    FUN_02f08768(Method_System_Net_WebRequest_get_Timeout__);
    FUN_02f08768(Method_System_Net_WebRequest_get_UseDefaultCredentials__);
    FUN_02f08768(Method_System_Net_WebRequest_set_Credentials__);
    FUN_02f08768(Method_System_Net_WebRequest_set_Method__);
    FUN_02f08768(Method_System_Net_WebRequest_set_Proxy__);
    FUN_02f08768(Method_System_Net_Configuration_WebRequestModuleElementCollection__ctor__);
    FUN_02f08768(Method_System_Net_Configuration_WebRequestModulesSection__ctor__);
    FUN_02f08768(Method_System_Net_Configuration_WebRequestModulesSection_get_Properties__);
    FUN_02f08768(Method_System_Net_WebRequestStream_CheckWriteOverflow__);
    FUN_02f08768(Method_System_Reflection_Emit_TypeBuilder_GetMethodImpl__);
    FUN_02f08768(Method_System_Reflection_Emit_TypeBuilder_GetPropertyImpl__);
    FUN_02f08768(Method_System_Net_WebRequestStream_Close_internal__);
    FUN_02f08768(Method_System_Net_WebRequestStream_TryReadFromBufferedContent__);
    FUN_02f08768(Method_System_Reflection_Emit_TypeBuilder_InvokeMember__);
    FUN_02f08768(Method_System_Net_WebHeaderCollection_CheckBadChars__);
    FUN_02f08768(Method_System_Reflection_Emit_TypeBuilder_IsArrayImpl__);
    FUN_02f08768(Method_System_Net_WebRequestStream_WriteAsync__);
    DAT_06bc4365 = 1;
  }
  puVar4 = Method_System_Reflection_Emit_TypeBuilder_InvokeMember__;
  local_f0 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  local_160 = 0;
  uStack_15c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  plStack_138 = (long *)0x0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  plStack_168 = (long *)0x0;
  local_170 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  plStack_198 = (long *)0x0;
  local_1a0 = 0;
  uStack_188 = 0;
  local_184 = 0;
  local_190 = 0;
  local_18c = 0;
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  lVar13 = *(long *)(param_1 + 0x50);
  if (lVar13 != 0) {
    iVar8 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (0 < iVar8) {
      Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar13 + 0x10),0,iVar8,0);
    }
    puVar5 = Method_System_Net_WebRequestStream_Close_internal__;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar8 = FUN_041746d4(param_3,*(undefined8 *)puVar5);
    if (*(long *)(param_1 + 0x50) != 0) {
      iVar9 = FUN_039e1e28(*(long *)(param_1 + 0x50),
                           *(undefined8 *)Method_System_Net_WebRequest_set_Method__);
      if (iVar9 < iVar8) {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_05eb0a7c;
        FUN_039e1e40(*(long *)(param_1 + 0x50),iVar8,
                     *(undefined8 *)Method_System_Net_WebRequest_set_Proxy__);
      }
      puVar7 = Method_System_Net_WebRequestStream_TryReadFromBufferedContent__;
      puVar6 = Method_System_Net_WebRequest_get_Method__;
      puVar5 = Method_System_Reflection_Emit_TypeBuilder_GetMembers__;
      if (0 < iVar8) {
        iVar9 = 0;
        do {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          plVar10 = (long *)FUN_0417472c(param_3,iVar9,*(undefined8 *)puVar7);
          if (plVar10 == (long *)0x0) goto LAB_05eb0a7c;
          lVar13 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_05eb05d0;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar5,0);
LAB_05eb05d0:
          (*(code *)*puVar11)(local_a0,plVar10,puVar11[1]);
          uStack_128 = CONCAT44(local_84,local_88);
          plStack_138 = plStack_98;
          local_140 = (long)local_a0;
          uStack_130 = local_90;
          local_120 = local_80;
          uVar12 = FUN_05eda5cc(&local_140,0);
          if ((int)uVar12 != 1) {
            FUN_05edae04(uVar12,0);
          }
          lVar13 = *(long *)(param_1 + 0x50);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar12 = FUN_0417472c(param_3,iVar9,*(undefined8 *)puVar7);
          local_a0 = (undefined1  [8])0x0;
          plStack_98 = (long *)0x0;
          FUN_05eaf740(local_a0,uVar12);
          if (lVar13 == 0) goto LAB_05eb0a7c;
          lVar14 = *(long *)(lVar13 + 0x10);
          lVar16 = *(long *)puVar6;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_05eb0a7c;
          uVar3 = *(uint *)(lVar13 + 0x18);
          if (uVar3 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar3 * 0x10;
            *(uint *)(lVar13 + 0x18) = uVar3 + 1;
            *(undefined1 (*) [8])(lVar14 + 0x20) = local_a0;
            *(long **)(lVar14 + 0x28) = plStack_98;
          }
          else {
            FUN_039e22cc(lVar13,local_a0,plStack_98,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar8);
      }
      lVar13 = *(long *)(param_1 + 0x58);
      if (lVar13 != 0) {
        *(undefined4 *)(lVar13 + 0x18) = 0;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        uVar15 = FUN_05ecd8b4(param_2,&local_f0,0);
        if ((uVar15 & 1) != 0) {
          if (*(long *)(param_1 + 0x58) == 0) goto LAB_05eb0a7c;
          iVar8 = FUN_03acf968(*(long *)(param_1 + 0x58),
                               *(undefined8 *)
                                Method_System_Net_WebRequest_get_UseDefaultCredentials__);
          if (iVar8 < (int)local_e8) {
            if (*(long *)(param_1 + 0x58) == 0) goto LAB_05eb0a7c;
            FUN_03acf980(*(long *)(param_1 + 0x58),local_e8 & 0xffffffff,
                         *(undefined8 *)
                          Method_System_Net_Configuration_WebRequestModuleElementCollection__ctor__)
            ;
          }
          FUN_03d394ac(local_a0,&local_f0,
                       *(undefined8 *)Method_System_Net_WebRequestStream_CheckWriteOverflow__);
          puVar5 = Method_System_Net_WebRequest_GetResponse__;
          puVar4 = PTR_DAT_067d2f10;
          plStack_168 = plStack_98;
          plVar10 = plStack_168;
          local_170 = (long)local_a0;
          uStack_158 = local_88;
          uStack_154 = local_84;
          local_160 = (int)local_90;
          uStack_15c = (undefined4)((ulong)local_90 >> 0x20);
          uStack_148 = (undefined4)uStack_78;
          uStack_144 = (undefined4)((ulong)uStack_78 >> 0x20);
          uStack_150 = (undefined4)local_80;
          uStack_14c = (undefined4)((ulong)local_80 >> 0x20);
          plStack_168._0_4_ = (int)plStack_98;
          local_a0 = (undefined1  [8])0x0;
          iVar8 = local_160 + 1;
          lVar13 = *(long *)Method_System_Net_WebRequest_GetResponse__;
          bVar1 = iVar8 < (int)plStack_168;
          plStack_168 = plVar10;
          local_160 = iVar8;
          plStack_98 = &local_170;
          if (bVar1) {
            do {
              lVar14 = local_170;
              local_160 = iVar8;
              if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
                FUN_02f41e9c();
              }
              puVar11 = (undefined8 *)(lVar14 + (long)iVar8 * 0x1c);
              lVar13 = *(long *)(param_1 + 0x58);
              uStack_144 = *(undefined4 *)(puVar11 + 3);
              uVar18 = puVar11[1];
              uVar12 = *puVar11;
              uStack_14c = (undefined4)puVar11[2];
              uStack_148 = (undefined4)((ulong)puVar11[2] >> 0x20);
              uStack_154 = (undefined4)uVar18;
              uStack_150 = (undefined4)((ulong)uVar18 >> 0x20);
              uStack_15c = (undefined4)uVar12;
              uStack_158 = (undefined4)((ulong)uVar12 >> 0x20);
              if (lVar13 == 0) {
LAB_05eb0a80:
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uStack_cc = CONCAT44(uStack_144,uStack_148);
              lVar14 = *(long *)(lVar13 + 0x10);
              lVar16 = *(long *)puVar4;
              uStack_d4 = uStack_150;
              uStack_d0 = uStack_14c;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              local_e0 = uVar12;
              uStack_d8 = uStack_154;
              if (lVar14 == 0) goto LAB_05eb0a80;
              uVar3 = *(uint *)(lVar13 + 0x18);
              if (uVar3 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar3 * 0x1c;
                *(uint *)(lVar13 + 0x18) = uVar3 + 1;
                *(undefined8 *)(lVar14 + 0x28) = uVar18;
                *(undefined8 *)(lVar14 + 0x20) = uVar12;
                *(undefined8 *)(lVar14 + 0x34) = uStack_cc;
                *(ulong *)(lVar14 + 0x2c) = CONCAT44(uStack_14c,uStack_150);
              }
              else {
                uStack_b8 = uStack_154;
                uStack_b4 = uStack_150;
                uStack_b0 = uStack_14c;
                local_c0 = uVar12;
                uStack_ac = uStack_cc;
                FUN_03acfe8c(lVar13,&local_c0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              iVar8 = local_160 + 1;
              lVar13 = *(long *)puVar5;
              bVar1 = iVar8 < (int)plStack_168;
              local_160 = iVar8;
            } while (bVar1);
          }
          uStack_154 = 0;
          uStack_150 = 0;
          uStack_15c = 0;
          uStack_158 = 0;
          uStack_144 = 0;
          uStack_14c = 0;
          uStack_148 = 0;
          FUN_04b04604(&local_170,*(undefined8 *)Method_System_Net_WebRequest_Create__);
        }
        lVar13 = *(long *)(param_1 + 0x60);
        if (lVar13 != 0) {
          *(undefined4 *)(lVar13 + 0x18) = 0;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          uVar15 = FUN_05ecd8d4(param_2,&local_100,0);
          if ((uVar15 & 1) != 0) {
            if (*(long *)(param_1 + 0x60) == 0) goto LAB_05eb0a7c;
            iVar8 = FUN_03b7304c(*(long *)(param_1 + 0x60),
                                 *(undefined8 *)Method_System_Net_WebRequest_set_Credentials__);
            if (iVar8 < (int)local_f8) {
              if (*(long *)(param_1 + 0x60) == 0) goto LAB_05eb0a7c;
              FUN_03b73064(*(long *)(param_1 + 0x60),local_f8 & 0xffffffff,
                           *(undefined8 *)
                            Method_System_Net_Configuration_WebRequestModulesSection__ctor__);
            }
            FUN_03d66bb4(local_a0,&local_100,
                         *(undefined8 *)
                          Method_System_Net_Configuration_WebRequestModulesSection_get_Properties__)
            ;
            puVar5 = Method_System_Net_WebRequest_get_Headers__;
            puVar4 = Method_System_Net_WebRequest_EndGetResponse__;
            plStack_198 = plStack_98;
            plVar10 = plStack_198;
            local_1a0 = (long)local_a0;
            uStack_188 = local_88;
            local_184 = local_84;
            local_190 = (int)local_90;
            local_18c = (undefined4)((ulong)local_90 >> 0x20);
            uStack_180 = (undefined4)local_80;
            uStack_17c = (undefined4)((ulong)local_80 >> 0x20);
            plStack_198._0_4_ = (int)plStack_98;
            local_a0 = (undefined1  [8])0x0;
            iVar8 = local_190 + 1;
            lVar13 = *(long *)Method_System_Net_WebRequest_EndGetResponse__;
            bVar1 = iVar8 < (int)plStack_198;
            plStack_198 = plVar10;
            local_190 = iVar8;
            plStack_98 = &local_1a0;
            plVar10 = &local_1a0;
            if (bVar1) {
              do {
                plStack_98 = plVar10;
                lVar14 = local_1a0;
                local_190 = iVar8;
                if ((*(ushort *)(*(long *)(lVar13 + 0x20) + 0x135) & 1) == 0) {
                  FUN_02f41e9c();
                }
                puVar2 = (undefined4 *)(lVar14 + (long)iVar8 * 0x10);
                lVar13 = *(long *)(param_1 + 0x60);
                local_18c = *puVar2;
                uStack_188 = puVar2[1];
                local_184 = puVar2[2];
                uStack_180 = puVar2[3];
                if (lVar13 == 0) {
LAB_05eb0a84:
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar14 = *(long *)(lVar13 + 0x10);
                lVar16 = *(long *)puVar5;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_05eb0a84;
                uVar3 = *(uint *)(lVar13 + 0x18);
                if (uVar3 < *(uint *)(lVar14 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)uVar3 * 0x10;
                  *(uint *)(lVar13 + 0x18) = uVar3 + 1;
                  *(undefined4 *)(lVar14 + 0x20) = local_18c;
                  *(undefined4 *)(lVar14 + 0x24) = uStack_188;
                  *(undefined4 *)(lVar14 + 0x28) = local_184;
                  *(undefined4 *)(lVar14 + 0x2c) = uStack_180;
                }
                else {
                  FUN_03b73514(lVar13,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                iVar8 = local_190 + 1;
                lVar13 = *(long *)puVar4;
                bVar1 = iVar8 < (int)plStack_198;
                local_190 = iVar8;
                plVar10 = plStack_98;
              } while (bVar1);
            }
            local_184 = 0;
            uStack_180 = 0;
            local_18c = 0;
            uStack_188 = 0;
            FUN_04b4a300(&local_1a0,*(undefined8 *)Method_System_Net_WebRequest_Create__);
          }
          FUN_05ecd874(param_2,&local_108,0);
          FUN_05ecd894(param_2,&local_110,0);
          if (*(long *)(param_1 + 0x20) != 0) {
            _local_a0 = FUN_05ecedd4(*(long *)(param_1 + 0x20),0);
            lVar13 = *(long *)(param_1 + 0x80);
            if (lVar13 == 0) {
              return;
            }
            local_88 = *param_2;
            local_84 = 0;
            uStack_78 = local_110;
            uStack_68 = *(undefined8 *)(param_1 + 0x78);
            local_70 = *(undefined8 *)(param_1 + 0x70);
            local_80 = local_108;
            local_90 = *(undefined8 *)(param_1 + 0x68);
            (**(code **)(lVar13 + 0x18))
                      (*(undefined8 *)(lVar13 + 0x40),local_a0,*(undefined8 *)(lVar13 + 0x28));
            return;
          }
        }
      }
    }
  }
LAB_05eb0a7c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


