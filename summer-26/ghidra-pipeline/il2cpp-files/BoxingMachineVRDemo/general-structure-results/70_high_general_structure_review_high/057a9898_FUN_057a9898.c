/*
FUNCTION_NAME: FUN_057a9898
ENTRY_POINT: 057a9898
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x057a9f0c) */
/* WARNING: Removing unreachable block (ram,0x057aa1f0) */
/* WARNING: Removing unreachable block (ram,0x057aa40c) */

void FUN_057a9898(int *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  int local_94;
  undefined1 local_90 [16];
  char local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
                    /* try { // try from 057a98b8 to 058a98df has its CatchHandler @ 057a9a88 */
  if ((DAT_06b8014f & 1) == 0) {
    FUN_02d6084c(Newtonsoft_Json_Schema_JsonSchemaModel_TypeInfo);
    FUN_02d6084c(PTR_DAT_067609b8);
    FUN_02d6084c(PTR_DAT_0677cc48);
    FUN_02d6084c(PTR_DAT_0677cc50);
    FUN_02d6084c(PTR_DAT_0677cc58);
    FUN_02d6084c(PTR_DAT_067616f8);
                    /* try { // try from 057a9914 to 058a993f has its CatchHandler @ 057a9a84 */
    FUN_02d6084c(Newtonsoft_Json_Schema_JsonSchemaModelBuilder_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Schema_JsonSchemaNodeCollection_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Schema_JsonSchemaResolver_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Schema_JsonSchemaType_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Schema_JsonSchemaWriter_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Linq_JsonSelectSettings_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_JsonSerializationException_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_JsonSerializer_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo);
    FUN_02d6084c(PTR_DAT_0677cc68);
    FUN_02d6084c(PTR_DAT_0677e028);
    FUN_02d6084c(PTR_DAT_06764930);
    FUN_02d6084c(PTR_DAT_06762980);
    FUN_02d6084c(Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_UIR_JobMerger_TypeInfo);
    FUN_02d6084c(Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo);
    DAT_06b8014f = 1;
  }
  local_7c[0] = '\0';
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_94 = *param_1;
  lVar16 = *(long *)(param_1 + 8);
  if (local_94 == 0) {
    local_90 = *(undefined1 (*) [16])(param_1 + 0x14);
    local_94 = -1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
    goto LAB_057a9f70;
  }
  if (*(int *)(*(long *)PTR_DAT_067616f8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar6 = FUN_04fe8e4c(0);
  if (*(int *)(*(long *)PTR_DAT_06762980 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar7 = FUN_0501db80(DAT_01207348,0);
  uVar6 = FUN_04fea3ec(uVar6,uVar7,0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined8 *)(lVar16 + 0x50) = uVar6;
  do {
    lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo);
    FUN_03aabc60(lVar8,*(undefined8 *)Newtonsoft_Json_JsonSerializationException_TypeInfo);
    plVar17 = (long *)(param_1 + 0xe);
    *plVar17 = lVar8;
    thunk_FUN_02dd37b4(plVar17,lVar8);
    *(undefined1 *)(param_1 + 0x12) = 0;
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar6 = *(undefined8 *)(lVar16 + 0x10);
    local_7c[0] = '\0';
    FUN_0506ac34(uVar6,local_7c,0);
    FUN_057a7a48(lVar16);
    if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar8 = FUN_02d60934(*(undefined8 *)
                          Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo,
                         *(undefined4 *)(*(long *)(lVar16 + 0x38) + 0x18));
    plVar20 = (long *)(param_1 + 10);
    *plVar20 = lVar8;
    thunk_FUN_02dd37b4(plVar20);
    if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0394cc2c(*(long *)(lVar16 + 0x38),*plVar20,0,
                 *(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaNode_TypeInfo);
    if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar8 = FUN_02d60934(*(undefined8 *)
                          Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo,
                         *(undefined4 *)(*(long *)(lVar16 + 0x40) + 0x18));
    plVar19 = (long *)(param_1 + 0xc);
    *plVar19 = lVar8;
    thunk_FUN_02dd37b4(plVar19);
    if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_0394df78(*(long *)(lVar16 + 0x40),*plVar19,0,
                 *(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaModelBuilder_TypeInfo);
    if (*(long *)(lVar16 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar7 = FUN_057a9738(*(long *)(lVar16 + 0x20),*(undefined4 *)(lVar16 + 0x1c));
    piVar21 = param_1 + 0x10;
    *(undefined8 *)piVar21 = uVar7;
    thunk_FUN_02dd37b4(piVar21);
    puVar3 = Newtonsoft_Json_Linq_JsonSelectSettings_TypeInfo;
    lVar8 = *plVar17;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar7 = *(undefined8 *)piVar21;
    lVar10 = *(long *)(lVar8 + 0x10);
    lVar14 = *(long *)Newtonsoft_Json_Linq_JsonSelectSettings_TypeInfo;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar23 = *(uint *)(lVar8 + 0x18);
    if (uVar23 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar23 + 1;
      puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar23 * 8 + 0x20);
      *puVar11 = uVar7;
      thunk_FUN_02dd37b4(puVar11);
    }
    else {
      FUN_03aac494(lVar8,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    if (*(long *)(lVar16 + 0x30) == 0) {
      if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar9 = FUN_057a7c28();
      if ((uVar9 & 1) == 0) goto LAB_057a9c6c;
      if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(int *)(*(long *)(lVar16 + 0x38) + 0x18) != 0) goto LAB_057a9c6c;
      if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(int *)(*(long *)(lVar16 + 0x40) + 0x18) != 0) goto LAB_057a9c6c;
      if (*(int *)(*(long *)PTR_DAT_067616f8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_04fe8e4c(0);
      *(undefined8 *)(lVar16 + 0x50) = uVar7;
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
    else {
LAB_057a9c6c:
      puVar2 = Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo;
      lVar8 = *plVar20;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar23 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar23) {
        uVar22 = 0;
        do {
          if (uVar23 <= uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          lVar10 = *(long *)(lVar8 + (long)(int)uVar22 * 0x10 + 0x28);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar10 = *(long *)(lVar10 + 0x58);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar14 = *plVar17;
          uVar7 = FUN_045bb9e0(lVar10,*(undefined8 *)puVar2);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar10 = *(long *)(lVar14 + 0x10);
          lVar15 = *(long *)puVar3;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar23 = *(uint *)(lVar14 + 0x18);
          if (uVar23 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar23 + 1;
            *(undefined8 *)(lVar10 + (long)(int)uVar23 * 8 + 0x20) = uVar7;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494(lVar14,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          uVar23 = *(uint *)(lVar8 + 0x18);
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 < (int)uVar23);
      }
      lVar8 = *plVar19;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar9 = 0;
        uVar12 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        puVar11 = (undefined8 *)(lVar8 + 0x30);
        do {
          if (uVar12 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          lVar10 = *plVar17;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar7 = *puVar11;
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar15 = *(long *)puVar3;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar23 = *(uint *)(lVar10 + 0x18);
          if (uVar23 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar23 + 1;
            puVar13 = (undefined8 *)(lVar14 + (long)(int)uVar23 * 8 + 0x20);
            *puVar13 = uVar7;
            thunk_FUN_02dd37b4(puVar13);
          }
          else {
            FUN_03aac494(lVar10,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar9 = uVar9 + 1;
          puVar11 = puVar11 + 3;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
    }
    if ((local_94 < 0) && (local_7c[0] != '\0')) {
      thunk_FUN_02d6ec70(uVar6,0);
    }
    lVar8 = *plVar17;
    if (*(int *)(*(long *)PTR_DAT_06764930 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar8 = FUN_05083878(lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar24 = FUN_042a90e8(lVar8,0,*(undefined8 *)PTR_DAT_0677cc68);
    local_90 = auVar24;
    uVar9 = FUN_0467d5c0(local_90,*(undefined8 *)PTR_DAT_0677cc58);
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
      thunk_FUN_02dd37b4(param_1 + 0x14,0);
      if (*(int *)(*(long *)PTR_DAT_067609b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e695c(param_1 + 2,local_90,param_1,
                   *(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaModel_TypeInfo);
      return;
    }
LAB_057a9f70:
    lVar8 = FUN_0467d60c(local_90,*(undefined8 *)PTR_DAT_0677cc50);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar6 = *(undefined8 *)(lVar16 + 0x10);
    local_7c[0] = '\0';
    FUN_0506ac34(uVar6,local_7c,0);
    puVar3 = Newtonsoft_Json_JsonSerializer_TypeInfo;
    if ((char)param_1[0x12] == '\0') {
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar10 = FUN_03aac1c4(*(long *)(param_1 + 0xe),0,
                            *(undefined8 *)Newtonsoft_Json_JsonSerializer_TypeInfo);
      bVar4 = lVar8 == lVar10;
LAB_057a9ff4:
      puVar2 = Newtonsoft_Json_Schema_JsonSchemaNodeCollection_TypeInfo;
      lVar10 = *(long *)(param_1 + 10);
      if (lVar10 == 0) {
LAB_057aa07c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar14 = 0;
      uVar23 = 0;
      while ((int)uVar23 < (int)*(uint *)(lVar10 + 0x18)) {
        if (*(uint *)(lVar10 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        lVar15 = *(long *)(lVar10 + lVar14 + 0x28);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(lVar15 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(*(long *)(lVar15 + 0x58) + 0x18) != 0) {
          if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar7 = *(undefined8 *)(lVar10 + lVar14 + 0x20);
          FUN_0394cf14(*(long *)(lVar16 + 0x38),uVar7,lVar15,*(undefined8 *)puVar2);
          bVar5 = FUN_057a7fc8(lVar16,uVar7,lVar15);
          lVar10 = *(long *)(param_1 + 10);
          bVar4 = bVar4 | bVar5;
        }
        uVar23 = uVar23 + 1;
        lVar14 = lVar14 + 0x10;
        if (lVar10 == 0) goto LAB_057aa07c;
      }
      if ((bVar4 & 1) != 0) {
        FUN_057a7c9c(lVar16);
      }
      lVar10 = 0;
      uVar23 = 0xffffffff;
      do {
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(int *)(*(long *)(param_1 + 0xc) + 0x18) <= (int)(uVar23 + 1)) goto LAB_057aa148;
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar14 = FUN_03aac1c4(*(long *)(param_1 + 0xe),
                              uVar23 + *(int *)(*(long *)(param_1 + 10) + 0x18) + 2,
                              *(undefined8 *)puVar3);
        lVar10 = lVar10 + 0x18;
        uVar23 = uVar23 + 1;
      } while (lVar8 != lVar14);
      lVar8 = *(long *)(param_1 + 0xc);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar8 = lVar8 + lVar10;
      uVar7 = *(undefined8 *)(lVar8 + 8);
      uVar1 = *(undefined8 *)(lVar8 + 0x10);
      local_68 = *(undefined8 *)(lVar8 + 0x18);
      local_78 = uVar7;
      uStack_70 = uVar1;
      FUN_0394e2e4(*(long *)(lVar16 + 0x40),&local_78,
                   *(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaResolver_TypeInfo);
      FUN_057a8744(lVar16,uVar7,uVar1);
LAB_057aa148:
      iVar18 = 0x1a;
    }
    else {
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar9 = FUN_042a1418(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_0677e028);
      if ((uVar9 & 1) != 0) {
        bVar4 = true;
        goto LAB_057a9ff4;
      }
      FUN_057a8934(lVar16);
      iVar18 = 0x10;
    }
    if ((local_94 < 0) && (local_7c[0] != '\0')) {
      thunk_FUN_02d6ec70(uVar6,0);
    }
    if ((iVar18 != 0) && (iVar18 != 0x1a)) {
      if (iVar18 == 0x10) {
        *param_1 = -2;
        if (*(int *)(*(long *)PTR_DAT_067609b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_04f2db0c(param_1 + 2,0);
      }
      return;
    }
    piVar21 = param_1 + 10;
    piVar21[0] = 0;
    piVar21[1] = 0;
    thunk_FUN_02dd37b4(piVar21,0);
    piVar21 = param_1 + 0xc;
    piVar21[0] = 0;
    piVar21[1] = 0;
    thunk_FUN_02dd37b4(piVar21,0);
    piVar21 = param_1 + 0xe;
    piVar21[0] = 0;
    piVar21[1] = 0;
    thunk_FUN_02dd37b4(piVar21,0);
    piVar21 = param_1 + 0x10;
    piVar21[0] = 0;
    piVar21[1] = 0;
    thunk_FUN_02dd37b4(piVar21,0);
  } while( true );
}


