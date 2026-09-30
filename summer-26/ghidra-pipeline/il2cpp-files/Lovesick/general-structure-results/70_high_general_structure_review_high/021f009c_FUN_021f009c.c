/*
FUNCTION_NAME: FUN_021f009c
ENTRY_POINT: 021f009c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


long * FUN_021f009c(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                   long param_7)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  undefined2 local_48 [2];
  char local_44 [4];
  
  local_70 = param_5;
  lStack_68 = param_6;
  local_60 = param_3;
  lStack_58 = param_4;
  if ((DAT_037817fb & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_XmlSqlBinaryReader_NamespaceDecl>_set_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_9199);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionSetupExtensions_ChangeBindingWithPath__
                      );
    thunk_FUN_00d48444(System_Security_Cryptography_X509Certificates_X509CertificateImpl_TypeInfo);
    DAT_037817fb = 1;
  }
  local_44[0] = '\0';
  local_48[0] = 0;
  if (param_2 == 0) goto LAB_021f05ac;
  plVar8 = (long *)FUN_0179c590(*(undefined8 *)(param_2 + 0x20),0);
  puVar5 = StringLiteral_9199;
  puVar4 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
  if (plVar8 == (long *)0x0) {
LAB_021f05b0:
    FUN_00ac2be8(param_2);
    plVar8 = *(long **)(param_2 + 0x20);
    FUN_00ac2be8(plVar8);
    uVar12 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    FUN_00ac2be8(param_2);
    local_80 = *(undefined8 *)(param_2 + 0x10);
    uStack_78 = *(undefined8 *)(param_2 + 0x18);
    uVar10 = thunk_FUN_00d48444(PTR_DAT_033ebeb0);
    uVar13 = thunk_FUN_00d61fa0(uVar10,&local_80);
    uVar10 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<DecalEntityChunk>_Add__);
  }
  else {
    bVar1 = *(byte *)(*plVar8 + 300);
    bVar2 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<string,_XmlSqlBinaryReader_NamespaceDecl>_set_Item__
                     + 300);
    if ((bVar1 < bVar2) ||
       (lVar16 = *(long *)(*plVar8 + 200),
       *(long *)(lVar16 + (ulong)bVar2 * 8 + -8) !=
       *(long *)
        Method_System_Collections_Generic_Dictionary<string,_XmlSqlBinaryReader_NamespaceDecl>_set_Item__
       )) goto LAB_021f05b0;
    bVar2 = *(byte *)(*(long *)StringLiteral_9199 + 300);
    if ((bVar1 < bVar2) ||
       (*(long *)(lVar16 + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_9199)) {
      if (param_7 == 0) {
        FUN_00ac2be8(param_2);
        local_80 = *(undefined8 *)(param_2 + 0x10);
        uStack_78 = *(undefined8 *)(param_2 + 0x18);
        uVar10 = thunk_FUN_00d48444(PTR_DAT_033ebeb0);
        uVar10 = thunk_FUN_00d61fa0(uVar10,&local_80);
        uVar12 = thunk_FUN_00d48444(Sirenix_Utilities_WeakValueSetter_TypeInfo);
        uVar10 = FUN_015f6780(uVar12,uVar10,0);
        goto LAB_021f0660;
      }
LAB_021f01a4:
      uVar9 = FUN_021fe5e8(&local_70,0);
      if ((uVar9 & 1) != 0) {
        lStack_68 = *(long *)(param_2 + 0x18);
        local_70 = *(long *)(param_2 + 0x10);
        lVar16 = FUN_021f5150(&local_70,0);
        if (lVar16 == 0) goto LAB_021f05ac;
        iVar6 = FUN_01605160(lVar16,0x3a,0);
        if (iVar6 != -1) {
          lVar16 = FUN_021f5150(&local_70,0);
          if (lVar16 == 0) goto LAB_021f05ac;
          uVar10 = FUN_01603ec8(lVar16,iVar6 + 1,0);
          FUN_021f605c(&local_70,uVar10,0);
        }
      }
      lVar16 = FUN_021f5150(&local_70,0);
      if (lVar16 != 0) {
        iVar6 = FUN_016047a8(lVar16,0x2f,0);
        if (iVar6 != -1) {
          uVar10 = FUN_021f5150(&local_70,0);
          uVar10 = FUN_02148d98(uVar10,0);
          FUN_021f605c(&local_70,uVar10,0);
        }
        uVar9 = FUN_021fe5e8(&local_60,0);
        if ((uVar9 & 1) != 0) {
          lStack_58 = *(long *)(param_2 + 0x30);
          local_60 = *(long *)(param_2 + 0x28);
          uVar9 = FUN_021fe5e8(&local_60,0);
          puVar4 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
          ;
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                        + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (DAT_03781814 == '\0') {
              thunk_FUN_00d48444(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                                );
              DAT_03781814 = '\x01';
            }
            lVar16 = *(long *)puVar4;
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar16 = *(long *)puVar4;
            }
            lStack_58 = (*(long **)(lVar16 + 0xb8))[1];
            local_60 = **(long **)(lVar16 + 0xb8);
          }
        }
        plVar8[5] = lStack_68;
        plVar8[4] = local_70;
        plVar8[8] = *(long *)(param_2 + 0x98);
        lVar16 = *(long *)(param_2 + 0x10);
        plVar8[0xc] = *(long *)(param_2 + 0x18);
        plVar8[0xb] = lVar16;
        plVar8[0x10] = param_7;
        plVar8[0xe] = lStack_58;
        plVar8[0xd] = local_60;
        plVar8[0xf] = *param_1;
        bVar1 = *(byte *)(*(long *)puVar5 + 300);
        if ((bVar1 <= *(byte *)(*plVar8 + 300)) &&
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
          FUN_02144088(plVar8,*(uint *)(param_2 + 0xa8) >> 5 & 1,0);
        }
        local_44[0] = '\0';
        FUN_021f0774(param_1,param_2,local_60,lStack_58,plVar8,local_44);
        FUN_021f0e8c(plVar8);
        if (local_44[0] != '\0') {
          lVar16 = *(long *)(param_2 + 0x90);
          if (lVar16 == 0) goto LAB_021f05ac;
          if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
            uVar9 = 0;
            uVar14 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
            puVar17 = (undefined8 *)(lVar16 + 0x50);
            do {
              if (uVar14 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              uVar14 = FUN_015ff8a0(*puVar17,0);
              if ((uVar14 & 1) == 0) {
                FUN_021f1878(plVar8,puVar17 + -6,param_2);
              }
              uVar14 = (ulong)*(uint *)(lVar16 + 0x18);
              uVar9 = uVar9 + 1;
              puVar17 = puVar17 + 0x1a;
            } while ((long)uVar9 < (long)(int)*(uint *)(lVar16 + 0x18));
          }
        }
        return plVar8;
      }
LAB_021f05ac:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (param_7 == 0) {
      *param_1 = (long)plVar8;
      plVar15 = plVar8;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        plVar15 = (long *)*param_1;
      }
      *(undefined4 *)((long)plVar8 + 0x14) = 0;
      if (plVar15 == (long *)0x0) goto LAB_021f05ac;
      *(undefined4 *)(plVar15 + 3) = 0;
      *(undefined4 *)(plVar15 + 2) = *(undefined4 *)(param_2 + 0x38);
      puVar4 = Method_UnityEngine_InputSystem_InputActionSetupExtensions_ChangeBindingWithPath__;
      lVar16 = *param_1;
      if (lVar16 == 0) goto LAB_021f05ac;
      *(undefined8 *)(lVar16 + 0x140) = 0;
      *(undefined8 *)(lVar16 + 0x138) = 0;
      *(undefined8 *)(lVar16 + 0x150) = 0;
      *(undefined8 *)(lVar16 + 0x148) = 0;
      puVar3 = System_Security_Cryptography_X509Certificates_X509CertificateImpl_TypeInfo;
      local_48[0] = *(undefined2 *)(param_2 + 0x40);
      uVar7 = FUN_00bc4804(local_48,*(undefined8 *)puVar4);
      lVar16 = *(long *)(*(long *)puVar3 + 0x20);
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
        lVar16 = FUN_00d5941c(lVar16);
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
        lVar16 = FUN_00d5941c();
      }
      pcVar11 = (char *)thunk_FUN_00d32ed4(local_48,*(undefined8 *)(lVar16 + 0x80));
      if (*pcVar11 != '\0' && ((uVar7 ^ 0xffffffff) & 1) == 0) {
        lVar16 = *param_1;
        if (lVar16 == 0) goto LAB_021f05ac;
        *(uint *)(lVar16 + 0xdc) = *(uint *)(lVar16 + 0xdc) | 1;
      }
      local_48[0] = FUN_021e7020(param_2);
      lVar16 = *(long *)(*(long *)puVar3 + 0x20);
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
        lVar16 = FUN_00d5941c();
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
        lVar16 = FUN_00d5941c();
      }
      pcVar11 = (char *)thunk_FUN_00d32ed4(local_48,*(undefined8 *)(lVar16 + 0x80));
      if (*pcVar11 != '\0') {
        lVar16 = *param_1;
        if (lVar16 == 0) goto LAB_021f05ac;
        *(uint *)(lVar16 + 0xdc) = *(uint *)(lVar16 + 0xdc) | 0x1000;
        local_48[0] = FUN_021e7020(param_2);
        uVar7 = FUN_00bc4804(local_48,*(undefined8 *)puVar4);
        lVar16 = *(long *)(*(long *)puVar3 + 0x20);
        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
          lVar16 = FUN_00d5941c(lVar16);
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
        if ((*(byte *)(lVar16 + 0x132) & 1) == 0) {
          lVar16 = FUN_00d5941c();
        }
        pcVar11 = (char *)thunk_FUN_00d32ed4(local_48,*(undefined8 *)(lVar16 + 0x80));
        if (*pcVar11 != '\0' && ((uVar7 ^ 0xffffffff) & 1) == 0) {
          lVar16 = *param_1;
          if (lVar16 == 0) goto LAB_021f05ac;
          *(uint *)(lVar16 + 0xdc) = *(uint *)(lVar16 + 0xdc) | 0x800;
        }
      }
      goto LAB_021f01a4;
    }
    FUN_00ac2be8(param_2);
    local_80 = *(undefined8 *)(param_2 + 0x10);
    uStack_78 = *(undefined8 *)(param_2 + 0x18);
    uVar10 = thunk_FUN_00d48444(PTR_DAT_033ebeb0);
    uVar12 = thunk_FUN_00d61fa0(uVar10,&local_80);
    FUN_00ac2be8(param_7);
    uVar13 = FUN_02143dbc(param_7,0);
    uVar10 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_Dispose__
                               );
  }
  uVar10 = FUN_01600b5c(uVar10,uVar12,uVar13,0);
LAB_021f0660:
  thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
  uVar12 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_017713a8(uVar12,uVar10,0);
  uVar10 = thunk_FUN_00d48444(StringLiteral_6837);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar12,uVar10);
}


