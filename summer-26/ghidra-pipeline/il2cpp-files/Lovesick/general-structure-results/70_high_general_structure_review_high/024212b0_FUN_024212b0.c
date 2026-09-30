/*
FUNCTION_NAME: FUN_024212b0
ENTRY_POINT: 024212b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_024212b0(long param_1,undefined8 param_2,long *param_3,void *param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  byte bVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_380 [120];
  undefined1 auStack_308 [360];
  undefined1 local_1a0 [8];
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long local_180;
  long local_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long local_150;
  undefined1 local_140 [8];
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  
  puVar8 = System_Collections_Generic_List<GlyphRect>_TypeInfo;
  local_68 = param_2;
  if ((DAT_0378234e & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<SerializeField>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033eccd0);
    thunk_FUN_00d48444(StringLiteral_12109);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4340);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<InventoryObject>__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<MainStagePortrait>__);
    thunk_FUN_00d48444(PTR_DAT_033ed4b8);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<GlyphRect>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ed8c0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__);
    thunk_FUN_00d48444(StringLiteral_5516);
    thunk_FUN_00d48444(StringLiteral_865);
    DAT_0378234e = 1;
  }
  lVar16 = *(long *)puVar8;
  local_70[0] = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar16 = *(long *)puVar8;
  }
  FUN_023ae3ac(local_70,0,*(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x18),0);
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar16 = *(long *)(param_1 + 0x28);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar4 = *(uint *)((long)param_3 + 0x54);
  if (*(uint *)(lVar16 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar16 = lVar16 + (long)(int)uVar4 * 0x10;
  lVar24 = *(long *)(lVar16 + 0x20);
  lVar16 = *(long *)(lVar16 + 0x28);
  local_c0 = lVar24;
  lStack_b8 = lVar16;
  FUN_01299bc0(*(long *)(param_1 + 0x18),&local_c0,&local_e8,*(undefined8 *)PTR_DAT_033eccd0);
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar17 = CONCAT44(uStack_e4,local_e8);
  local_c0 = lVar24;
  lStack_b8 = lVar16;
  FUN_01299bc0(*(long *)(param_1 + 0x30),&local_c0,&local_e8,
               *(undefined8 *)
                Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<SerializeField>__
              );
  uVar6 = local_e8;
  cVar5 = *(char *)((long)param_3 + 0x51);
  uVar20 = (ulong)local_e8;
  if (cVar5 == '\0') {
    bVar23 = 0;
    bVar11 = 0;
  }
  else {
    lVar16 = *(long *)(param_1 + 0x38);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    FUN_026b212c(&local_e8,lVar16 + 0x20,0);
    local_c0 = CONCAT44(uStack_e4,local_e8);
    lStack_b8 = lStack_e0;
    lStack_a8 = lStack_d0;
    lStack_b0 = lStack_d8;
    local_a0 = local_c8;
    FUN_026af12c(&local_e8,2,0);
    lStack_138 = lStack_e0;
    lStack_128 = lStack_d0;
    lStack_130 = lStack_d8;
    local_120 = local_c8;
    lStack_108 = lStack_b8;
    local_110 = local_c0;
    lStack_f8 = lStack_a8;
    lStack_100 = lStack_b0;
    local_f0 = local_a0;
    bVar11 = FUN_026af680(&local_110,local_140,0);
    bVar23 = bVar11 & 1;
    bVar11 = bVar11 & 1;
  }
  puVar8 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((char)param_3[10] == '\0') {
    uVar21 = *(undefined8 *)((long)param_4 + 0x90);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_02681b9c(uVar21,0,0);
    if (((uVar22 & 1) != 0) &&
       (uVar22 = FUN_0242031c(uVar22,*(undefined8 *)((long)param_4 + 0x90)), (uVar22 & 1) != 0))
    goto LAB_02421508;
    if ((char)param_3[8] == '\0') {
      bVar12 = bVar11 ^ 1;
      if ((cVar5 != '\0') && (bVar11 == 0)) goto LAB_024215d4;
    }
    else {
      local_a0 = param_3[0x17];
      lStack_a8 = param_3[0x16];
      lStack_b0 = param_3[0x15];
      lStack_b8 = param_3[0x14];
      local_c0 = param_3[0x13];
      FUN_026af12c(&local_e8,2,0);
      lStack_198 = lStack_e0;
      lStack_188 = lStack_d0;
      lStack_190 = lStack_d8;
      local_180 = local_c8;
      lStack_168 = lStack_b8;
      local_170 = local_c0;
      lStack_158 = lStack_a8;
      lStack_160 = lStack_b0;
      local_150 = local_a0;
      bVar12 = FUN_026af6b0(&local_170,local_1a0,0);
      bVar12 = bVar23 == 0 & bVar12;
      if ((cVar5 != '\0') && (bVar12 != 0)) {
LAB_024215d4:
        if (*(long *)((long)param_4 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar21 = FUN_02684a54(*(long *)((long)param_4 + 0x80),0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        bVar11 = FUN_02681b9c(uVar21,0,0);
        bVar12 = ~bVar11 & 1;
      }
    }
    bVar10 = bVar12 != 0;
    bVar7 = false;
    iVar13 = 1;
    if (bVar10) {
      iVar13 = uVar6 + 1;
    }
  }
  else {
LAB_02421508:
    bVar10 = true;
    bVar7 = true;
    iVar13 = 1;
  }
  FUN_013421d4(&local_80,iVar13,2,1,
               *(undefined8 *)
                Method_UnityEngine_Component_GetComponentsInChildren<MainStagePortrait>__);
  lVar16 = local_80;
  if (0 < (int)uVar6) {
    uVar22 = 0;
    lVar24 = 0x20;
    do {
      lVar18 = *(long *)(param_1 + 0x38);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      memmove((void *)(lVar16 + lVar24 + -0x20),(void *)(lVar18 + lVar24),0x78);
      uVar22 = uVar22 + 1;
      lVar24 = lVar24 + 0x78;
    } while (uVar20 != uVar22);
  }
  if (!bVar7 && bVar10) {
    memmove((void *)(local_80 + (long)(int)uVar6 * 0x78),(void *)(param_1 + 0x40),0x78);
  }
  memcpy(auStack_308,param_4,0x168);
  auVar25 = FUN_0241ef48(param_1,auStack_308,param_3);
  puVar8 = StringLiteral_5516;
  if (*(int *)(*(long *)StringLiteral_5516 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  iVar13 = FUN_0241f0d0(lVar17);
  uVar14 = FUN_02421e00(param_3);
  uVar1 = 0;
  if (!bVar7) {
    uVar1 = uVar14;
  }
  FUN_013421d4(&local_90,uVar1,2,1,*(undefined8 *)PTR_DAT_033ed4b8);
  if ((!bVar7) && (uVar14 != 0)) {
    lVar24 = param_3[0xb];
    lVar16 = 0;
    iVar19 = 1;
    do {
      *(undefined4 *)(local_90 + lVar16 * 4) = *(undefined4 *)(lVar24 + lVar16 * 4);
      lVar16 = (long)iVar19;
      iVar19 = iVar19 + 1;
    } while (lVar16 < (long)(ulong)uVar14);
  }
  puVar9 = StringLiteral_12109;
  if (iVar13 == 1) {
LAB_02421788:
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar20 = FUN_0241ff90(param_3);
    if ((uVar20 & 1) != 0) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)StringLiteral_865,0);
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_017724a8(auVar25._8_8_ & 0xffffffff,1,0);
    uVar21 = local_78;
    lVar16 = local_80;
    uVar1 = 0;
    if (!bVar7) {
      uVar1 = uVar6;
    }
    if (!bVar10) {
      uVar1 = 0xffffffff;
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__ +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026b5f84(&local_68,auVar25._0_8_ & 0xffffffff,auVar25._0_8_ >> 0x20,uVar15,lVar16,uVar21,
                 uVar1,0);
    FUN_01342a94(&local_80,
                 *(undefined8 *)
                  Method_UnityEngine_Component_GetComponentsInChildren<InventoryObject>__);
    FUN_026b6294(&local_68,local_90,local_88,0,0);
LAB_02421880:
    *(uint *)(param_1 + 0x10) = uVar4;
  }
  else {
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    if (*(uint *)(lVar17 + 0x20) == uVar4) goto LAB_02421788;
    if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0132138c(*(long *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x10),&local_c0,
                 *(undefined8 *)StringLiteral_12109);
    lVar16 = local_c0;
    if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0132138c(*(long *)(param_1 + 0xf8),uVar4,&local_c0,*(undefined8 *)puVar9);
    lVar24 = local_c0;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar20 = FUN_02421f4c(lVar16,lVar24);
    if ((uVar20 & 1) == 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026b639c(&local_68,0);
      if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(*(long *)(param_1 + 0xf8),uVar4,&local_c0,*(undefined8 *)puVar9);
      lVar16 = local_c0;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar20 = FUN_0241ff90(lVar16);
      uVar21 = local_88;
      lVar16 = local_90;
      if ((uVar20 & 1) == 0) {
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__ + 0xe0
                    ) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026b6294(&local_68,lVar16,uVar21,0,0);
      }
      else {
        if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(*(long *)(param_1 + 0xf8),uVar4,&local_c0,*(undefined8 *)puVar9);
        if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar2 = *(undefined8 *)(local_c0 + 0x68);
        uVar3 = *(undefined8 *)(local_c0 + 0x70);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__ + 0xe0
                    ) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026b6104(&local_68,lVar16,uVar21,uVar2,uVar3,0,0);
      }
      goto LAB_02421880;
    }
    if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0132138c(*(long *)(param_1 + 0xf8),uVar4,&local_c0,*(undefined8 *)puVar9);
    lVar16 = local_c0;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar20 = FUN_0241ff90(lVar16);
    if ((uVar20 & 1) != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026b639c(&local_68,0);
      uVar21 = local_88;
      lVar16 = local_90;
      if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(*(long *)(param_1 + 0xf8),uVar4,&local_c0,*(undefined8 *)puVar9);
      if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_026b6104(&local_68,lVar16,uVar21,*(undefined8 *)(local_c0 + 0x68),
                   *(undefined8 *)(local_c0 + 0x70),0,0);
      goto LAB_02421880;
    }
  }
  FUN_01342a94(&local_90,*(undefined8 *)StringLiteral_4340);
  (**(code **)(*param_3 + 0x1c8))(param_3,local_68,param_5,*(undefined8 *)(*param_3 + 0x1d0));
  uVar6 = iVar13 - 1;
  if (uVar6 != 0) {
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar17 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    if (*(uint *)(lVar17 + (long)(int)uVar6 * 4 + 0x20) != uVar4) goto LAB_02421910;
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026b639c(&local_68,0);
  FUN_026b6450(&local_68,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
LAB_02421910:
  puVar8 = PTR_DAT_033ed8c0;
  lVar16 = *(long *)(param_1 + 0x38);
  if (lVar16 != 0) {
    uVar20 = 0;
    lVar24 = 0x20;
    do {
      if ((long)*(int *)(lVar16 + 0x18) <= (long)uVar20) {
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_0378238e == '\0') {
          thunk_FUN_00d48444(PTR_DAT_033ed8c0);
          DAT_0378238e = '\x01';
        }
        lVar16 = *(long *)puVar8;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar16 = *(long *)puVar8;
        }
        memmove((void *)(param_1 + 0x40),(void *)(*(long *)(lVar16 + 0xb8) + 8),0x78);
        FUN_023ae3b0(local_70,0);
        return;
      }
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0378238e == '\0') {
        thunk_FUN_00d48444(puVar8);
        DAT_0378238e = '\x01';
      }
      lVar17 = *(long *)puVar8;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar17 = *(long *)puVar8;
      }
      memcpy(auStack_380,(void *)(*(long *)(lVar17 + 0xb8) + 8),0x78);
      if (*(uint *)(lVar16 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      memcpy((void *)(lVar16 + lVar24),auStack_380,0x78);
      lVar16 = *(long *)(param_1 + 0xb8);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(undefined1 *)(lVar16 + uVar20 + 0x20) = 0;
      lVar16 = *(long *)(param_1 + 0x38);
      uVar20 = uVar20 + 1;
      lVar24 = lVar24 + 0x78;
    } while (lVar16 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


