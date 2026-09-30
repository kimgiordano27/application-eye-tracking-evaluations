/*
FUNCTION_NAME: FUN_05ceeafc
ENTRY_POINT: 05ceeafc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_structure_only;telemetry_or_network_hits_9;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong FUN_05ceeafc(long param_1,long param_2,long *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  int iVar23;
  uint uVar24;
  undefined8 uVar25;
  uint local_74;
  undefined8 local_70;
  long lStack_68;
  
  if ((DAT_06a57d9c & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06646730);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<TextShadow>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleRotate>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<BackgroundPosition>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleTextAutoSize>__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol18_WriteCustomTypeArray__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<BackgroundRepeat>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeDictionaryElements__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<Vector2>__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeDictionaryHeader__);
    FUN_02d4dc40(PTR_DAT_0664a8b0);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeLengthAsShort__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol18_WriteString__);
    FUN_02d4dc40(Method_System_Security_Claims_ClaimsPrincipal__ctor__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol18_WriteStringArray__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<Vector2Int>__);
    FUN_02d4dc40(Method_PlayFab_Json_PocoJsonSerializerStrategy_DeserializeObject__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<Vector3>__);
    FUN_02d4dc40(Method_PlayFab_PlayFabProgressionInstanceAPI_DeleteLeaderboardDefinition__);
    FUN_02d4dc40(Method_System_Configuration_Provider_ProviderCollection_Add__);
    FUN_02d4dc40(Method_System_Net_Configuration_ProxyElement__ctor__);
    FUN_02d4dc40(Method_System_Net_ProxyChain_HttpAbort__);
    DAT_06a57d9c = 1;
  }
  local_70 = 0;
  lStack_68 = 0;
  uVar14 = FUN_04e7faf0(param_2,0);
  if ((uVar14 & 1) == 0) {
    if (*(int *)(param_1 + 0x110) != 0) {
      iVar10 = FUN_05cead30(param_1);
      if (iVar10 != 0) goto LAB_05cef0f4;
      if ((*(long *)(param_1 + 0x138) == 0) || (*(long *)(param_1 + 0x128) == 0)) {
        FUN_05ce7b24(param_1);
      }
      lVar17 = *(long *)(param_1 + 0x200);
      if (lVar17 == 0) goto LAB_05cef6c0;
      lVar16 = *(long *)(param_1 + 0x208);
      *(undefined4 *)(lVar17 + 0x18) = 0;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      puVar4 = Method_Unity_Properties_PropertyBag_Register<Vector2>__;
      if (lVar16 == 0) goto LAB_05cef6c0;
      FUN_04cb5980(lVar16,*(undefined8 *)Method_Unity_Properties_PropertyBag_Register<Vector2>__);
      lVar17 = *(long *)(param_1 + 0x210);
      if (lVar17 == 0) goto LAB_05cef6c0;
      iVar10 = *(int *)(lVar17 + 0x18);
      *(undefined4 *)(lVar17 + 0x18) = 0;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      if (0 < iVar10) {
        FUN_05025690(*(undefined8 *)(lVar17 + 0x10),0,iVar10,0);
      }
      if (*(long *)(param_1 + 0x218) == 0) goto LAB_05cef6c0;
      FUN_04cb5980(*(long *)(param_1 + 0x218),*(undefined8 *)puVar4);
      lVar17 = *(long *)(param_1 + 0x220);
      if (lVar17 == 0) goto LAB_05cef6c0;
      *(undefined4 *)(lVar17 + 0x18) = 0;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      puVar6 = Method_ExitGames_Client_Photon_Protocol16_SerializeDictionaryElements__;
      puVar5 = Method_Unity_Properties_PropertyBag_Register<BackgroundPosition>__;
      puVar4 = Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__;
      if (param_2 == 0) goto LAB_05cef6c0;
      iVar10 = *(int *)(param_2 + 0x10);
      if (iVar10 < 1) {
        local_74 = 0;
      }
      else {
        local_74 = 0;
        iVar23 = 0;
        do {
          uVar11 = FUN_04e7a3d8(param_2,iVar23,0);
          if (*(long *)(param_1 + 0x138) == 0) goto LAB_05cef6c0;
          uVar11 = uVar11 & 0xffff;
          uVar14 = FUN_048bddc4(*(long *)(param_1 + 0x138),uVar11,*(undefined8 *)puVar5);
          if ((uVar14 & 1) == 0) {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            iVar12 = FUN_05f861ec(uVar11,0);
            if (iVar12 == 0) {
              if ((uVar11 == 0x2011) || (uVar11 == 0xad)) {
                lVar17 = *(long *)puVar4;
                uVar15 = 0x2d;
LAB_05ceede8:
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                iVar12 = FUN_05f861ec(uVar15,0);
                if (iVar12 != 0) goto LAB_05ceee08;
              }
              else if (uVar11 == 0xa0) {
                lVar17 = *(long *)puVar4;
                uVar15 = 0x20;
                goto LAB_05ceede8;
              }
              lVar17 = *(long *)(param_1 + 0x220);
              if (lVar17 == 0) goto LAB_05cef6c0;
              lVar16 = *(long *)(lVar17 + 0x10);
              lVar18 = *(long *)PTR_DAT_0664a8b0;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_05cef6c0;
              uVar24 = *(uint *)(lVar17 + 0x18);
              if (uVar24 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar24 + 1;
                *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) = uVar11;
              }
              else {
                FUN_0370970c(lVar17,uVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              local_74 = 1;
            }
            else {
LAB_05ceee08:
              lVar17 = thunk_FUN_02d8a638(*(undefined8 *)
                                           Method_PlayFab_PlayFabProgressionInstanceAPI_DeleteLeaderboardDefinition__
                                         );
              FUN_05cdfcc4(lVar17,uVar11,iVar12);
              if (*(long *)(param_1 + 0x128) == 0) goto LAB_05cef6c0;
              uVar14 = FUN_048bddc4(*(long *)(param_1 + 0x128),iVar12,
                                    *(undefined8 *)
                                     Method_Unity_Properties_PropertyBag_Register<StyleTextAutoSize>__
                                   );
              if ((uVar14 & 1) == 0) {
                if (*(long *)(param_1 + 0x208) == 0) goto LAB_05cef6c0;
                uVar14 = FUN_04cb651c(*(long *)(param_1 + 0x208),iVar12,*(undefined8 *)puVar6);
                if ((uVar14 & 1) != 0) {
                  lVar17 = *(long *)(param_1 + 0x200);
                  if (lVar17 == 0) goto LAB_05cef6c0;
                  lVar16 = *(long *)(lVar17 + 0x10);
                  lVar18 = *(long *)PTR_DAT_0664a8b0;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar16 == 0) goto LAB_05cef6c0;
                  uVar24 = *(uint *)(lVar17 + 0x18);
                  if (uVar24 < *(uint *)(lVar16 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar24 + 1;
                    *(int *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) = iVar12;
                  }
                  else {
                    FUN_0370970c(lVar17,iVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                if (*(long *)(param_1 + 0x218) == 0) goto LAB_05cef6c0;
                uVar14 = FUN_04cb651c(*(long *)(param_1 + 0x218),uVar11,*(undefined8 *)puVar6);
                if ((uVar14 & 1) != 0) {
                  if (*(long *)(param_1 + 0x210) != 0) {
                    uVar14 = FUN_061fdd80(*(undefined8 *)(*(long *)(param_1 + 0x210) + 0x10));
                    return uVar14;
                  }
                  goto LAB_05cef6c0;
                }
              }
              else {
                if ((*(long *)(param_1 + 0x128) == 0) ||
                   (uVar15 = FUN_048bdb30(*(long *)(param_1 + 0x128),iVar12,
                                          *(undefined8 *)
                                           Method_Unity_Properties_PropertyBag_Register<BackgroundRepeat>__
                                         ), lVar17 == 0)) goto LAB_05cef6c0;
                *(undefined8 *)(lVar17 + 0x20) = uVar15;
                thunk_FUN_02dc1ef0();
                *(long *)(lVar17 + 0x18) = param_1;
                thunk_FUN_02dc1ef0((long *)(lVar17 + 0x18),param_1);
                lVar16 = *(long *)(param_1 + 0x130);
                if (lVar16 == 0) goto LAB_05cef6c0;
                lVar18 = *(long *)(lVar16 + 0x10);
                lVar20 = *(long *)Method_ExitGames_Client_Photon_Protocol16_SerializeLengthAsShort__
                ;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar18 == 0) goto LAB_05cef6c0;
                uVar24 = *(uint *)(lVar16 + 0x18);
                if (uVar24 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar24 + 1;
                  plVar19 = (long *)(lVar18 + (long)(int)uVar24 * 8 + 0x20);
                  *plVar19 = lVar17;
                  thunk_FUN_02dc1ef0(plVar19,lVar17);
                }
                else {
                  FUN_036a5e08(lVar16,lVar17,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                if (*(long *)(param_1 + 0x138) == 0) goto LAB_05cef6c0;
                System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
                          (*(long *)(param_1 + 0x138),uVar11,lVar17,
                           *(undefined8 *)Method_Unity_Properties_PropertyBag_Register<TextShadow>__
                          );
              }
            }
          }
          iVar23 = iVar23 + 1;
        } while (iVar10 != iVar23);
      }
      if (*(long *)(param_1 + 0x200) == 0) goto LAB_05cef6c0;
      if (*(int *)(*(long *)(param_1 + 0x200) + 0x18) == 0) goto LAB_05cef0f4;
      lVar17 = *(long *)(param_1 + 0x148);
      if (lVar17 == 0) goto LAB_05cef6c0;
      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05cef6fc;
      plVar19 = *(long **)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
      if (plVar19 == (long *)0x0) goto LAB_05cef6c0;
      iVar10 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
      if (iVar10 < 2) {
LAB_05cef1b0:
        lVar17 = *(long *)(param_1 + 0x148);
        if (lVar17 == 0) goto LAB_05cef6c0;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05cef6fc;
        lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
        if (lVar17 == 0) goto LAB_05cef6c0;
        FUN_05ec0fe4(lVar17,*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c),0);
        lVar17 = *(long *)(param_1 + 0x148);
        if (lVar17 == 0) goto LAB_05cef6c0;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05cef6fc;
        uVar15 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
        if (*(int *)(*(long *)Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__ +
                    0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_05f890e0(uVar15,0);
      }
      else {
        lVar17 = *(long *)(param_1 + 0x148);
        if (lVar17 == 0) goto LAB_05cef6c0;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05cef6fc;
        plVar19 = *(long **)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
        if (plVar19 == (long *)0x0) goto LAB_05cef6c0;
        iVar10 = (**(code **)(*plVar19 + 0x1a8))(plVar19,*(undefined8 *)(*plVar19 + 0x1b0));
        if (iVar10 < 2) goto LAB_05cef1b0;
      }
      lVar17 = *(long *)(param_1 + 0x148);
      if (lVar17 != 0) {
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) {
LAB_05cef6fc:
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
        uVar15 = *(undefined8 *)(param_1 + 0x168);
        uVar1 = *(undefined8 *)(param_1 + 0x170);
        uVar22 = *(undefined8 *)(param_1 + 0x200);
        uVar13 = *(undefined4 *)(param_1 + 0x160);
        uVar2 = *(undefined4 *)(param_1 + 0x164);
        uVar25 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
        if (*(int *)(*(long *)Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__ +
                    0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar11 = FUN_05f86d44(uVar22,uVar13,0,uVar1,uVar15,uVar2,uVar25,&lStack_68,0);
        puVar6 = Method_ExitGames_Client_Photon_Protocol16_SerializeDictionaryHeader__;
        puVar5 = Method_Unity_Properties_PropertyBag_Register<StyleRotate>__;
        puVar4 = PTR_DAT_0664a8b0;
        if (lStack_68 != 0) {
          uVar24 = 0;
          do {
            if ((int)*(uint *)(lStack_68 + 0x18) <= (int)uVar24) {
LAB_05cef438:
              lVar17 = *(long *)(param_1 + 0x200);
              if (lVar17 != 0) {
                lVar16 = *(long *)(param_1 + 0x210);
                *(undefined4 *)(lVar17 + 0x18) = 0;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                puVar9 = Method_ExitGames_Client_Photon_Protocol18_WriteStringArray__;
                puVar8 = Method_ExitGames_Client_Photon_Protocol18_WriteCustomTypeArray__;
                puVar7 = Method_ExitGames_Client_Photon_Protocol16_SerializeLengthAsShort__;
                puVar6 = Method_Unity_Properties_PropertyBag_Register<Vector3>__;
                puVar5 = Method_Unity_Properties_PropertyBag_Register<TextShadow>__;
                if (lVar16 != 0) {
                  iVar10 = 0;
                  goto LAB_05cef480;
                }
              }
              break;
            }
            if (*(uint *)(lStack_68 + 0x18) <= uVar24) goto LAB_05cef6fc;
            lVar17 = *(long *)(lStack_68 + (long)(int)uVar24 * 8 + 0x20);
            if (lVar17 == 0) goto LAB_05cef438;
            uVar13 = FUN_05f84fd8(lVar17,0);
            FUN_05f8503c(lVar17,*(undefined4 *)(param_1 + 0x150),0);
            lVar16 = *(long *)(param_1 + 0x120);
            if (lVar16 == 0) break;
            lVar18 = *(long *)(lVar16 + 0x10);
            lVar20 = *(long *)puVar6;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar18 == 0) break;
            uVar3 = *(uint *)(lVar16 + 0x18);
            if (uVar3 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar3 + 1;
              plVar19 = (long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
              *plVar19 = lVar17;
              thunk_FUN_02dc1ef0(plVar19,lVar17);
            }
            else {
              FUN_036a5e08(lVar16,lVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0x128) == 0) break;
            System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
                      (*(long *)(param_1 + 0x128),uVar13,lVar17,*(undefined8 *)puVar5);
            lVar17 = *(long *)(param_1 + 0x1f8);
            if (lVar17 == 0) break;
            lVar16 = *(long *)(lVar17 + 0x10);
            lVar18 = *(long *)puVar4;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar16 == 0) break;
            uVar3 = *(uint *)(lVar17 + 0x18);
            if (uVar3 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar16 + (long)(int)uVar3 * 4 + 0x20) = uVar13;
            }
            else {
              FUN_0370970c(lVar17,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            lVar17 = *(long *)(param_1 + 0x1f0);
            if (lVar17 == 0) break;
            lVar16 = *(long *)(lVar17 + 0x10);
            lVar18 = *(long *)puVar4;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar16 == 0) break;
            uVar3 = *(uint *)(lVar17 + 0x18);
            if (uVar3 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar3 + 1;
              *(undefined4 *)(lVar16 + (long)(int)uVar3 * 4 + 0x20) = uVar13;
            }
            else {
              FUN_0370970c(lVar17,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            uVar24 = uVar24 + 1;
          } while (lStack_68 != 0);
        }
      }
LAB_05cef6c0:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
LAB_05cef090:
    uVar15 = thunk_FUN_05ee6e70(param_1,0);
    puVar21 = (undefined8 *)Method_System_Configuration_Provider_ProviderCollection_Add__;
  }
  else {
    if (*(int *)(param_1 + 0x110) == 0) goto LAB_05cef090;
    uVar15 = thunk_FUN_05ee6e70(param_1,0);
    puVar21 = (undefined8 *)Method_System_Net_Configuration_ProxyElement__ctor__;
  }
  uVar15 = FUN_04e80678(*(undefined8 *)Method_System_Net_ProxyChain_HttpAbort__,uVar15,*puVar21,0);
  if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
  }
  FUN_05ea2efc(uVar15,param_1,0);
LAB_05cef0f4:
  *param_3 = param_2;
  thunk_FUN_02dc1ef0(param_3,param_2);
  uVar11 = 0;
LAB_05cef108:
  return (ulong)uVar11;
LAB_05cef480:
  if (iVar10 < *(int *)(lVar16 + 0x18)) {
    lVar17 = FUN_036a5b38(lVar16,iVar10,*(undefined8 *)puVar6);
    if ((lVar17 == 0) || (*(long *)(param_1 + 0x128) == 0)) goto LAB_05cef6c0;
    uVar14 = FUN_048bf6ac(*(long *)(param_1 + 0x128),*(undefined4 *)(lVar17 + 0x28),&local_70,
                          *(undefined8 *)puVar8);
    if ((uVar14 & 1) == 0) {
      lVar16 = *(long *)(param_1 + 0x200);
      if (lVar16 == 0) goto LAB_05cef6c0;
      lVar18 = *(long *)(lVar16 + 0x10);
      uVar13 = *(undefined4 *)(lVar17 + 0x28);
      lVar17 = *(long *)puVar4;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_05cef6c0;
      uVar24 = *(uint *)(lVar16 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar24 + 1;
        *(undefined4 *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) = uVar13;
      }
      else {
        FUN_0370970c(lVar16,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      *(undefined8 *)(lVar17 + 0x20) = local_70;
      thunk_FUN_02dc1ef0();
      *(long *)(lVar17 + 0x18) = param_1;
      thunk_FUN_02dc1ef0((long *)(lVar17 + 0x18),param_1);
      lVar16 = *(long *)(param_1 + 0x130);
      if (lVar16 == 0) goto LAB_05cef6c0;
      lVar18 = *(long *)(lVar16 + 0x10);
      lVar20 = *(long *)puVar7;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_05cef6c0;
      uVar24 = *(uint *)(lVar16 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar24 + 1;
        plVar19 = (long *)(lVar18 + (long)(int)uVar24 * 8 + 0x20);
        *plVar19 = lVar17;
        thunk_FUN_02dc1ef0(plVar19,lVar17);
      }
      else {
        FUN_036a5e08(lVar16,lVar17,
                     *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(param_1 + 0x138) == 0) goto LAB_05cef6c0;
      System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
                (*(long *)(param_1 + 0x138),*(undefined4 *)(lVar17 + 0x14),lVar17,
                 *(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x210) == 0) goto LAB_05cef6c0;
      FUN_036a7498(*(long *)(param_1 + 0x210),iVar10,*(undefined8 *)puVar9);
      iVar10 = iVar10 + -1;
    }
    lVar16 = *(long *)(param_1 + 0x210);
    iVar10 = iVar10 + 1;
    if (lVar16 == 0) goto LAB_05cef6c0;
    goto LAB_05cef480;
  }
  if (*(char *)(param_1 + 0x154) != '\0' && (uVar11 & 1) == 0) {
    do {
      uVar14 = FUN_05cee5d4(param_1);
    } while ((uVar14 & 1) == 0);
    uVar11 = 1;
  }
  if ((param_4 & 1) != 0) {
    FUN_05ceea78(param_1);
  }
  *param_3 = **(long **)(*(long *)(PTR_DAT_066462a0 + 0x90) + 0xb8);
  thunk_FUN_02dc1ef0(param_3);
  lVar17 = *(long *)(param_1 + 0x210);
  if (lVar17 == 0) goto LAB_05cef6c0;
  iVar10 = 0;
  while( true ) {
    if (*(int *)(lVar17 + 0x18) <= iVar10) {
      if (*(long *)(param_1 + 0x220) == 0) break;
      if (0 < *(int *)(*(long *)(param_1 + 0x220) + 0x18)) {
        lVar17 = FUN_05cde9c8();
        *param_3 = lVar17;
        thunk_FUN_02dc1ef0(param_3,lVar17);
      }
      uVar11 = uVar11 & (local_74 ^ 1);
      goto LAB_05cef108;
    }
    lVar17 = FUN_036a5b38(lVar17,iVar10,*(undefined8 *)puVar6);
    if ((lVar17 == 0) || (lVar16 = *(long *)(param_1 + 0x220), lVar16 == 0)) break;
    lVar18 = *(long *)(lVar16 + 0x10);
    uVar13 = *(undefined4 *)(lVar17 + 0x14);
    lVar17 = *(long *)puVar4;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar18 == 0) break;
    uVar24 = *(uint *)(lVar16 + 0x18);
    if (uVar24 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar24 + 1;
      *(undefined4 *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) = uVar13;
    }
    else {
      FUN_0370970c(lVar16,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar17 = *(long *)(param_1 + 0x210);
    iVar10 = iVar10 + 1;
    if (lVar17 == 0) break;
  }
  goto LAB_05cef6c0;
}


