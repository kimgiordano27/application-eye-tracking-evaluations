/*
FUNCTION_NAME: FUN_050adaf8
ENTRY_POINT: 050adaf8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x050ae564) */
/* WARNING: Removing unreachable block (ram,0x050ae3a4) */
/* WARNING: Removing unreachable block (ram,0x050ae850) */
/* WARNING: Removing unreachable block (ram,0x050ae968) */
/* WARNING: Removing unreachable block (ram,0x050ae944) */
/* WARNING: Removing unreachable block (ram,0x050ae97c) */

void FUN_050adaf8(uint *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined8 *local_260;
  uint *puStack_258;
  uint **local_250;
  undefined8 local_240;
  uint *puStack_238;
  undefined8 *local_230;
  uint *puStack_228;
  uint **local_220;
  long local_218;
  uint *local_210;
  uint **local_208;
  undefined8 *local_200;
  uint *puStack_1f8;
  uint **local_1f0;
  long local_1e0;
  uint *local_1d8;
  uint **local_1d0;
  long local_1c8;
  uint *local_1c0;
  uint **local_1b8;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  long local_190;
  undefined1 local_188 [4];
  char local_184 [4];
  char local_180 [4];
  char local_17c [4];
  undefined8 local_178;
  undefined8 *local_170;
  uint *puStack_168;
  uint **local_160;
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined8 local_128;
  undefined8 *local_120;
  uint *puStack_118;
  uint **local_110;
  undefined8 local_100;
  uint *puStack_f8;
  undefined8 *local_f0;
  uint *puStack_e8;
  uint **local_e0;
  long local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  long local_78;
  uint local_6c;
  uint *local_68;
  
  local_68 = param_1;
  if ((DAT_066cd6d2 & 1) == 0) {
    FUN_02b3c81c(System_Xml_Schema_TypedObject___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06320700);
    FUN_02b3c81c(PTR_DAT_06320708);
    FUN_02b3c81c(UnityEngine_UIElements_UIDocument___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06323748);
    FUN_02b3c81c(PTR_DAT_063236f0);
    FUN_02b3c81c(PTR_DAT_063236f8);
    FUN_02b3c81c(System_Data_SqlTypes_SqlInt32___TypeInfo);
    FUN_02b3c81c(System_Data_SqlTypes_SqlInt64___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06320b40);
    FUN_02b3c81c(System_Threading_WaitHandle___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06323750);
    FUN_02b3c81c(OVRPlugin_Quatf___TypeInfo);
    FUN_02b3c81c(UnityEngine_TextCore_Text_WordInfo___TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo);
    FUN_02b3c81c(OVRPlugin_SpaceComponentType___TypeInfo);
    FUN_02b3c81c(System_Xml_WriteState___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06323700);
    FUN_02b3c81c(PTR_DAT_06326f08);
    FUN_02b3c81c(OVRPlugin_SpaceQueryResult___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06323708);
    FUN_02b3c81c(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631fae0);
    FUN_02b3c81c(System_Data_SqlTypes_SqlGuid___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06323718);
    FUN_02b3c81c(PTR_DAT_0631ec48);
    FUN_02b3c81c(PTR_DAT_0631ec50);
    FUN_02b3c81c(PTR_DAT_0631fad8);
    FUN_02b3c81c(TMPro_TMP_SubMeshUI___TypeInfo);
    FUN_02b3c81c(OVRPlugin_Vector2f___TypeInfo);
    FUN_02b3c81c(OVRPlugin_Vector3f___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06320738);
    FUN_02b3c81c(UnityEngine_XR_Hands_XRHandJointID___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06320710);
    FUN_02b3c81c(PTR_DAT_0631ebb8);
    FUN_02b3c81c(System_Xml_Schema_XmlAtomicValue___TypeInfo);
    FUN_02b3c81c(System_Xml_XmlAttribute___TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066cd6d2 = 1;
  }
  local_6c = *param_1;
  lVar18 = *(long *)(param_1 + 0x14);
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = (uint **)0x0;
  puStack_f8 = (uint *)0x0;
  local_100 = 0;
  puStack_e8 = (uint *)0x0;
  local_f0 = (undefined8 *)0x0;
  local_120 = (undefined8 *)0x0;
  puStack_118 = (uint *)0x0;
  local_110 = (uint **)0x0;
  local_128 = 0;
  local_140._0_8_ = 0;
  local_140._8_8_ = 0;
  local_150._0_8_ = 0;
  local_150._8_8_ = 0;
  local_170 = (undefined8 *)0x0;
  puStack_168 = (uint *)0x0;
  local_160 = (uint **)0x0;
  local_178 = 0;
  local_17c[0] = '\0';
  local_180[0] = '\0';
  local_184[0] = '\0';
  local_188[0] = 0;
  local_198 = 0;
  local_190 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  if (local_6c < 2) {
    local_1c0 = &local_6c;
    local_1b8 = &local_68;
    local_1c8 = 0;
  }
  else {
    local_240 = 0;
    FUN_04a1e2c8(&local_240,&local_78,*(undefined8 *)System_Data_SqlTypes_SqlInt64___TypeInfo);
    *(undefined8 *)(local_68 + 0x16) = local_240;
    thunk_FUN_02bb0e9c(local_68 + 0x16,0);
    local_1c0 = &local_6c;
    local_1c8 = 0;
    local_1b8 = &local_68;
    if (1 < local_6c) {
      local_240 = 0;
      FUN_036346e4(&local_240,local_68 + 0x18,*(undefined8 *)PTR_DAT_06323700);
      *(undefined8 *)(local_68 + 0x1a) = local_240;
      thunk_FUN_02bb0e9c(local_68 + 0x1a,0);
    }
  }
  puVar3 = PTR_DAT_06320b40;
  local_1d8 = &local_6c;
  local_1d0 = &local_68;
  local_1e0 = 0;
  if (local_6c == 0) {
    local_6c = 0xffffffff;
    local_b0 = *(undefined1 (*) [16])(local_68 + 0x1c);
    local_68[0x1c] = 0;
    local_68[0x1d] = 0;
    local_68[0x1e] = 0;
    local_68[0x1f] = 0;
    *local_68 = 0xffffffff;
LAB_050ae00c:
    uVar10 = FUN_03a3d444(local_b0,*(undefined8 *)PTR_DAT_06320700);
    if ((uVar10 & 1) == 0) {
      iVar19 = 0xe;
      goto LAB_050ae5a8;
    }
    local_240 = 0;
    FUN_036343d8(&local_240,&uStack_c8,*(undefined8 *)System_Xml_WriteState___TypeInfo);
    *(undefined8 *)(local_68 + 0x20) = local_240;
    thunk_FUN_02bb0e9c(local_68 + 0x20,0);
    puStack_1f8 = &local_6c;
    local_200 = (undefined8 *)0x0;
    local_1f0 = &local_68;
    if (local_6c == 1) goto LAB_050ae070;
    local_240 = 0;
    FUN_03633dc0(&local_240,&local_d0,
                 *(undefined8 *)
                  System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo);
    *(undefined8 *)(local_68 + 0x22) = local_240;
    thunk_FUN_02bb0e9c(local_68 + 0x22,0);
    local_210 = &local_6c;
    local_218 = 0;
    local_208 = &local_68;
    if (local_6c == 1) goto LAB_050ae07c;
    if (*(long *)(local_68 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_0379f4e0(&local_240,*(long *)(local_68 + 0x18),*(undefined8 *)PTR_DAT_06323708);
    puVar7 = PTR_DAT_06326f08;
    puVar6 = PTR_DAT_06323718;
    puVar5 = PTR_DAT_063236f0;
    puVar4 = PTR_DAT_0631ec50;
    puVar3 = PTR_DAT_0631ec48;
    puStack_f8 = puStack_238;
    local_100 = local_240;
    puStack_e8 = puStack_228;
    local_f0 = local_230;
    local_e0 = local_220;
    puStack_238 = &local_6c;
    local_240 = 0;
    local_230 = &local_100;
LAB_050ae74c:
    uVar10 = FUN_0472a524(&local_100,*(undefined8 *)puVar5);
    if ((uVar10 & 1) != 0) {
      puStack_118 = puStack_e8;
      local_120 = local_f0;
      local_110 = local_e0;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_03231bd4(&local_120,&local_128,*(undefined8 *)puVar6);
      lVar9 = local_d0;
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        auVar20 = FUN_04ff278c(0,&local_128,1,0);
        if (lVar9 != 0) {
          lVar11 = *(long *)(lVar9 + 0x10);
          lVar17 = *(long *)puVar7;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar2 + 1;
              *(undefined1 (*) [16])(lVar11 + (long)(int)uVar2 * 0x10 + 0x20) = auVar20;
            }
            else {
              FUN_0367a1cc(lVar9,auVar20._0_8_,auVar20._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_050ae74c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_050ae74c;
    }
    if ((int)local_6c < 0) {
      FUN_0472a520(local_230,*(undefined8 *)PTR_DAT_06323748);
    }
    local_150 = FUN_0323f320(local_d0,uStack_c8,*(undefined8 *)System_Xml_XmlAttribute___TypeInfo);
    if (*(int *)(*(long *)System_Xml_Schema_XmlAtomicValue___TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)System_Xml_Schema_XmlAtomicValue___TypeInfo);
    }
    local_140 = FUN_03b27af8(local_150,*(undefined8 *)UnityEngine_XR_Hands_XRHandJointID___TypeInfo)
    ;
    uVar10 = FUN_03a3d7ec(local_140,*(undefined8 *)UnityEngine_UIElements_UIDocument___TypeInfo);
    if ((uVar10 & 1) != 0) goto LAB_050ae098;
    local_6c = 1;
    *local_68 = 1;
    uVar13 = *(undefined8 *)OVRPlugin_Vector2f___TypeInfo;
    *(undefined1 (*) [16])(local_68 + 0x24) = local_140;
    FUN_02e6c4b8(local_68 + 2,local_140,local_68,uVar13);
    iVar19 = 0xc;
  }
  else {
    if (local_6c != 1) {
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04a50848(local_78,*(undefined8 *)(local_68 + 10),*(undefined8 *)(local_68 + 0xc),
                   *(undefined8 *)PTR_DAT_06320b40);
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04a50848(local_78,*(undefined8 *)(local_68 + 0xe),*(undefined8 *)(local_68 + 0x10),
                   *(undefined8 *)puVar3);
      lVar9 = *(long *)(local_68 + 0x12);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar10 = 0;
        uVar15 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        puVar14 = (undefined8 *)(lVar9 + 0x28);
        do {
          if (uVar15 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_04a50848(local_78,puVar14[-1],*puVar14,*(undefined8 *)puVar3);
          uVar15 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar10 = uVar10 + 1;
          puVar14 = puVar14 + 2;
        } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *(long *)(lVar18 + 0x38);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uStack_98 = *(undefined8 *)(lVar9 + 0x40);
      local_a0 = *(undefined8 *)(lVar9 + 0x38);
      local_90 = *(undefined8 *)(lVar9 + 0x48);
      if (*(int *)(*(long *)PTR_DAT_0631ec48 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_03231674(&local_a0,&local_80,
                            *(undefined8 *)System_Data_SqlTypes_SqlGuid___TypeInfo);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0631fae0 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar9 = FUN_04ffa5dc(&local_80,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          uVar10 = 0;
          uVar15 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          puVar14 = (undefined8 *)(lVar9 + 0x28);
          do {
            if (uVar15 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            FUN_04a50848(local_78,puVar14[-1],*puVar14,*(undefined8 *)puVar3);
            uVar15 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar10 = uVar10 + 1;
            puVar14 = puVar14 + 2;
          } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
      }
      local_c0 = FUN_050a1ad4(local_78,*(undefined8 *)(local_68 + 0x18));
      if (*(int *)(*(long *)PTR_DAT_0631ebb8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631ebb8);
      }
      local_b0 = FUN_03b1c020(local_c0,*(undefined8 *)PTR_DAT_06320710);
      uVar10 = FUN_03a3d344(local_b0,*(undefined8 *)PTR_DAT_06320708);
      if ((uVar10 & 1) == 0) {
        local_6c = 0;
        *local_68 = 0;
        uVar13 = *(undefined8 *)OVRPlugin_Vector3f___TypeInfo;
        *(undefined1 (*) [16])(local_68 + 0x1c) = local_b0;
        FUN_02e6bed0(local_68 + 2,local_b0,local_68,uVar13);
        iVar19 = 0xc;
        goto LAB_050ae5a8;
      }
      goto LAB_050ae00c;
    }
LAB_050ae070:
    local_200 = (undefined8 *)0x0;
    local_1f0 = &local_68;
    puStack_1f8 = &local_6c;
LAB_050ae07c:
    local_208 = &local_68;
    local_210 = &local_6c;
    local_218 = 0;
    local_6c = 0xffffffff;
    local_140 = *(undefined1 (*) [16])(local_68 + 0x24);
    local_68[0x24] = 0;
    local_68[0x25] = 0;
    local_68[0x26] = 0;
    local_68[0x27] = 0;
    *local_68 = 0xffffffff;
LAB_050ae098:
    FUN_03a3d8ec(local_140,*(undefined8 *)System_Xml_Schema_TypedObject___TypeInfo);
    iVar19 = 0x15;
  }
  if ((int)*local_210 < 0) {
    FUN_03633e90(*local_208 + 0x22,*(undefined8 *)UnityEngine_TextCore_Text_WordInfo___TypeInfo);
  }
  if (local_218 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  if ((iVar19 == 0x15) || (iVar19 == 0)) {
    iVar19 = 0x16;
    local_68[0x22] = 0;
    local_68[0x23] = 0;
  }
  if ((int)*puStack_1f8 < 0) {
    FUN_036344a8(*local_1f0 + 0x20,*(undefined8 *)System_Threading_WaitHandle___TypeInfo);
  }
  if (local_200 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
  if ((iVar19 == 0x16) || (iVar19 == 0)) {
    lVar9 = *(long *)(local_68 + 0x18);
    local_68[0x20] = 0;
    local_68[0x21] = 0;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_0379f4e0(&local_240,lVar9,*(undefined8 *)PTR_DAT_06323708);
    puVar8 = PTR_DAT_06323718;
    puVar7 = PTR_DAT_063236f0;
    puVar6 = PTR_DAT_0631fad8;
    puVar5 = PTR_DAT_0631ec50;
    puVar4 = PTR_DAT_0631ec48;
    puVar3 = PTR_DAT_06312520;
    puStack_f8 = puStack_238;
    local_100 = local_240;
    puStack_e8 = puStack_228;
    local_f0 = local_230;
    local_230 = &local_100;
    local_e0 = local_220;
    puStack_238 = &local_6c;
    local_240 = 0;
    while( true ) {
      uVar10 = FUN_0472a524(&local_100,*(undefined8 *)puVar7);
      if ((uVar10 & 1) == 0) break;
      puStack_168 = puStack_e8;
      local_170 = local_f0;
      local_160 = local_e0;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_03231bd4(&local_170,&local_178,*(undefined8 *)puVar8);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_04ff26ac(&local_178,0);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          puVar14 = local_170;
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_0506e634(puVar14,3,local_17c,local_188,0);
          FUN_0506e634(local_170,4,local_180,local_188,0);
          FUN_0506e634(local_170,0x3b9ee4c8,local_184,local_188,0);
          if ((local_17c[0] == '\0') || (local_184[0] != '\0' || local_180[0] != '\0')) {
            if (local_180[0] != '\0') {
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar9 = *(long *)(lVar18 + 0x40);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              puVar14 = (undefined8 *)(lVar9 + 0x28);
              goto LAB_050ae2e4;
            }
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar9 = *(long *)(lVar18 + 0x40);
            puStack_1f8 = puStack_168;
            local_200 = local_170;
            local_1f0 = local_160;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar13 = 0;
          }
          else {
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar9 = *(long *)(lVar18 + 0x40);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            puVar14 = (undefined8 *)(lVar9 + 0x20);
LAB_050ae2e4:
            uVar13 = *puVar14;
          }
          local_1f0 = local_160;
          puStack_1f8 = puStack_168;
          local_200 = local_170;
          puStack_258 = puStack_168;
          local_260 = local_170;
          local_250 = local_160;
          lVar9 = FUN_050a4a08(lVar9,&local_260,uVar13);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar10 = FUN_05c921ac(lVar9,0);
          if ((uVar10 & 1) != 0) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar11 = FUN_05c89340(lVar9,0);
            uVar13 = FUN_05c89340(lVar18,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4(uVar13,uVar13);
            }
            FUN_05c9c918(lVar11,uVar13,0);
            *(undefined1 *)(lVar9 + 0x50) = 1;
          }
        }
      }
    }
    if ((int)local_6c < 0) {
      FUN_0472a520(local_230,*(undefined8 *)PTR_DAT_06323748);
    }
    puVar3 = TMPro_TMP_SubMeshUI___TypeInfo;
    uVar13 = *(undefined8 *)(local_68 + 10);
    uVar1 = *(undefined8 *)(local_68 + 0xc);
    if (*(int *)(*(long *)TMPro_TMP_SubMeshUI___TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar13 = FUN_050ada7c(uVar13,uVar1);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    *(undefined8 *)(lVar18 + 0x20) = uVar13;
    thunk_FUN_02bb0e9c();
    uVar13 = FUN_050ada7c(*(undefined8 *)(local_68 + 0xe),*(undefined8 *)(local_68 + 0x10));
    *(undefined8 *)(lVar18 + 0x28) = uVar13;
    thunk_FUN_02bb0e9c();
    local_240 = 0;
    FUN_036347e8(&local_240,&local_190,*(undefined8 *)OVRPlugin_SpaceComponentType___TypeInfo);
    puVar4 = OVRPlugin_SpaceQueryResult___TypeInfo;
    local_198 = local_240;
    puStack_238 = &local_6c;
    lVar9 = *(long *)(local_68 + 0x12);
    local_240 = 0;
    local_230 = &local_198;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
      uVar10 = 0;
      uVar15 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
      puVar14 = (undefined8 *)(lVar9 + 0x28);
      do {
        if (uVar15 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar13 = puVar14[-1];
        uVar1 = *puVar14;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar15 = FUN_050ad98c(uVar13,uVar1,&local_1a0);
        if ((uVar15 & 1) != 0) {
          if (local_190 == 0) {
LAB_050ae8fc:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar11 = *(long *)(local_190 + 0x10);
          lVar17 = *(long *)puVar4;
          *(int *)(local_190 + 0x1c) = *(int *)(local_190 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_050ae8fc;
          uVar2 = *(uint *)(local_190 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(local_190 + 0x18) = uVar2 + 1;
            puVar16 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
            *puVar16 = local_1a0;
            thunk_FUN_02bb0e9c(puVar16);
          }
          else {
            FUN_037a6538(local_190,local_1a0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
        puVar14 = puVar14 + 2;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
    }
    if (local_190 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar13 = FUN_037a8024(local_190,*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo);
    *(undefined8 *)(lVar18 + 0x30) = uVar13;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar18 + 0x30));
    if ((int)local_6c < 0) {
      FUN_036348b8(local_230,*(undefined8 *)OVRPlugin_Quatf___TypeInfo);
    }
    iVar19 = 0x23;
  }
LAB_050ae5a8:
  if ((int)*local_1d8 < 0) {
    FUN_036347b4(*local_1d0 + 0x1a,*(undefined8 *)PTR_DAT_06323750);
  }
  if (local_1e0 == 0) {
    if ((iVar19 == 0x23) || (iVar19 == 0)) {
      puVar12 = local_68 + 0x18;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02bb0e9c(puVar12,0);
      iVar19 = 0x24;
      local_68[0x1a] = 0;
      local_68[0x1b] = 0;
    }
    if ((int)*local_1c0 < 0) {
      FUN_04a1e32c(*local_1b8 + 0x16,*(undefined8 *)System_Data_SqlTypes_SqlInt32___TypeInfo);
    }
    if (local_1c8 == 0) {
      if ((iVar19 == 0) || (iVar19 == 0x24)) {
        uVar13 = 1;
        local_68[0x16] = 0;
        local_68[0x17] = 0;
      }
      else {
        if (iVar19 != 0xe) {
          return;
        }
        uVar13 = 0;
      }
      puVar3 = PTR_DAT_06320738;
      *local_68 = 0xfffffffe;
      FUN_03b02f80(local_68 + 2,uVar13,*(undefined8 *)puVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


