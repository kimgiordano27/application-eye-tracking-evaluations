/*
FUNCTION_NAME: FUN_05ced96c
ENTRY_POINT: 05ced96c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_structure_only;telemetry_or_network_hits_10;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint FUN_05ced96c(long param_1,long param_2,long *param_3,uint param_4)

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
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined8 uVar25;
  uint local_7c;
  undefined8 local_78;
  int local_6c;
  long local_68;
  
  if ((DAT_06a57d9b & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06646730);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<TextShadow>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleRotate>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<BackgroundPosition>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleTextAutoSize>__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol18_WriteCustomTypeArray__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<BackgroundRepeat>__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol18_WriteDictionaryHeader__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeDictionaryElements__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<Vector2>__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeDictionaryHeader__);
    FUN_02d4dc40(PTR_DAT_0664a8b0);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeLengthAsShort__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol18_WriteString__);
    FUN_02d4dc40(Method_System_Security_Claims_ClaimsPrincipal__ctor__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol18_WriteStringArray__);
    FUN_02d4dc40(Method_System_Security_Claims_ClaimsIdentity_AddClaim__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<Vector2Int>__);
    FUN_02d4dc40(Method_PlayFab_Json_PocoJsonSerializerStrategy_DeserializeObject__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<Vector3>__);
    FUN_02d4dc40(Method_PlayFab_PlayFabProgressionInstanceAPI_DeleteLeaderboardDefinition__);
    FUN_02d4dc40(Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                );
    FUN_02d4dc40(Method_System_Configuration_Provider_ProviderBase_Initialize__);
    FUN_02d4dc40(Method_System_Configuration_Provider_ProviderCollection_Add__);
    FUN_02d4dc40(Method_System_Net_ProxyChain_HttpAbort__);
    DAT_06a57d9b = 1;
  }
  puVar4 = Method_System_Net_ProxyChain_HttpAbort__;
  local_68 = 0;
  local_6c = 0;
  local_78 = 0;
  if (((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) || (*(int *)(param_1 + 0x110) == 0)) {
    iVar10 = *(int *)(param_1 + 0x110);
    uVar23 = thunk_FUN_05ee6e70(param_1,0);
    puVar20 = (undefined8 *)Method_System_Configuration_Provider_ProviderCollection_Add__;
    if (iVar10 != 0) {
      puVar20 = (undefined8 *)Method_System_Configuration_Provider_ProviderBase_Initialize__;
    }
    uVar23 = FUN_04e80678(*(undefined8 *)puVar4,uVar23,*puVar20,0);
    if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
    }
    FUN_05ea2efc(uVar23,param_1,0);
    *param_3 = 0;
    param_2 = 0;
LAB_05cedbb8:
    thunk_FUN_02dc1ef0(param_3,param_2);
    return 0;
  }
  iVar10 = FUN_05cead30(param_1);
  if (iVar10 != 0) {
    param_2 = FUN_032046cc(param_2,*(undefined8 *)
                                    Method_ExitGames_Client_Photon_Protocol18_WriteDictionaryHeader__
                          );
    *param_3 = param_2;
    goto LAB_05cedbb8;
  }
  if ((*(long *)(param_1 + 0x138) == 0) || (*(long *)(param_1 + 0x128) == 0)) {
    FUN_05ce7b24(param_1);
  }
  lVar17 = *(long *)(param_1 + 0x200);
  if (lVar17 == 0) goto LAB_05cee568;
  lVar15 = *(long *)(param_1 + 0x208);
  *(undefined4 *)(lVar17 + 0x18) = 0;
  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
  puVar4 = Method_Unity_Properties_PropertyBag_Register<Vector2>__;
  if (lVar15 == 0) goto LAB_05cee568;
  FUN_04cb5980(lVar15,*(undefined8 *)Method_Unity_Properties_PropertyBag_Register<Vector2>__);
  lVar17 = *(long *)(param_1 + 0x210);
  if (lVar17 == 0) goto LAB_05cee568;
  iVar10 = *(int *)(lVar17 + 0x18);
  *(undefined4 *)(lVar17 + 0x18) = 0;
  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
  if (0 < iVar10) {
    FUN_05025690(*(undefined8 *)(lVar17 + 0x10),0,iVar10,0);
  }
  if (*(long *)(param_1 + 0x218) == 0) goto LAB_05cee568;
  FUN_04cb5980(*(long *)(param_1 + 0x218),*(undefined8 *)puVar4);
  lVar17 = *(long *)(param_1 + 0x220);
  if (lVar17 == 0) goto LAB_05cee568;
  iVar10 = *(int *)(param_2 + 0x18);
  local_6c = 0;
  *(undefined4 *)(lVar17 + 0x18) = 0;
  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
  puVar7 = Method_ExitGames_Client_Photon_Protocol16_SerializeDictionaryElements__;
  puVar6 = Method_Unity_Properties_PropertyBag_Register<BackgroundPosition>__;
  puVar5 = Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__;
  puVar4 = Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__;
  if (iVar10 < 1) {
    local_7c = 0;
  }
  else {
    local_7c = 0;
    do {
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      iVar11 = FUN_05cf517c(param_2,&local_6c,0);
      if (*(long *)(param_1 + 0x138) == 0) goto LAB_05cee568;
      uVar16 = FUN_048bddc4(*(long *)(param_1 + 0x138),iVar11,*(undefined8 *)puVar6);
      if ((uVar16 & 1) == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        iVar12 = FUN_05f861ec(iVar11,0);
        if (iVar12 == 0) {
          if ((iVar11 == 0x2011) || (iVar11 == 0xad)) {
            lVar17 = *(long *)puVar5;
            uVar23 = 0x2d;
LAB_05cedd44:
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            iVar12 = FUN_05f861ec(uVar23,0);
            if (iVar12 != 0) goto LAB_05cedd64;
          }
          else if (iVar11 == 0xa0) {
            lVar17 = *(long *)puVar5;
            uVar23 = 0x20;
            goto LAB_05cedd44;
          }
          lVar17 = *(long *)(param_1 + 0x220);
          if (lVar17 == 0) goto LAB_05cee568;
          lVar15 = *(long *)(lVar17 + 0x10);
          lVar18 = *(long *)PTR_DAT_0664a8b0;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_05cee568;
          uVar13 = *(uint *)(lVar17 + 0x18);
          if (uVar13 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar17 + 0x18) = uVar13 + 1;
            *(int *)(lVar15 + (long)(int)uVar13 * 4 + 0x20) = iVar11;
          }
          else {
            FUN_0370970c(lVar17,iVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
          local_7c = 1;
        }
        else {
LAB_05cedd64:
          lVar17 = thunk_FUN_02d8a638(*(undefined8 *)
                                       Method_PlayFab_PlayFabProgressionInstanceAPI_DeleteLeaderboardDefinition__
                                     );
          FUN_05cdfcc4(lVar17,iVar11,iVar12);
          if (*(long *)(param_1 + 0x128) == 0) goto LAB_05cee568;
          uVar16 = FUN_048bddc4(*(long *)(param_1 + 0x128),iVar12,
                                *(undefined8 *)
                                 Method_Unity_Properties_PropertyBag_Register<StyleTextAutoSize>__);
          if ((uVar16 & 1) == 0) {
            if (*(long *)(param_1 + 0x208) == 0) goto LAB_05cee568;
            uVar16 = FUN_04cb651c(*(long *)(param_1 + 0x208),iVar12,*(undefined8 *)puVar7);
            if ((uVar16 & 1) != 0) {
              lVar15 = *(long *)(param_1 + 0x200);
              if (lVar15 == 0) goto LAB_05cee568;
              lVar18 = *(long *)(lVar15 + 0x10);
              lVar21 = *(long *)PTR_DAT_0664a8b0;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_05cee568;
              uVar13 = *(uint *)(lVar15 + 0x18);
              if (uVar13 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                *(int *)(lVar18 + (long)(int)uVar13 * 4 + 0x20) = iVar12;
              }
              else {
                FUN_0370970c(lVar15,iVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
            }
            if (*(long *)(param_1 + 0x218) == 0) goto LAB_05cee568;
            uVar16 = FUN_04cb651c(*(long *)(param_1 + 0x218),iVar11,*(undefined8 *)puVar7);
            if ((uVar16 & 1) != 0) {
              lVar15 = *(long *)(param_1 + 0x210);
              if (lVar15 == 0) goto LAB_05cee568;
              lVar18 = *(long *)(lVar15 + 0x10);
              lVar21 = *(long *)Method_ExitGames_Client_Photon_Protocol16_SerializeLengthAsShort__;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_05cee568;
              uVar13 = *(uint *)(lVar15 + 0x18);
              if (uVar13 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar13 + 1;
                plVar19 = (long *)(lVar18 + (long)(int)uVar13 * 8 + 0x20);
                *plVar19 = lVar17;
                thunk_FUN_02dc1ef0(plVar19,lVar17);
              }
              else {
                FUN_036a5e08(lVar15,lVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            if ((*(long *)(param_1 + 0x128) == 0) ||
               (uVar23 = FUN_048bdb30(*(long *)(param_1 + 0x128),iVar12,
                                      *(undefined8 *)
                                       Method_Unity_Properties_PropertyBag_Register<BackgroundRepeat>__
                                     ), lVar17 == 0)) goto LAB_05cee568;
            *(undefined8 *)(lVar17 + 0x20) = uVar23;
            thunk_FUN_02dc1ef0();
            *(long *)(lVar17 + 0x18) = param_1;
            thunk_FUN_02dc1ef0((long *)(lVar17 + 0x18),param_1);
            lVar15 = *(long *)(param_1 + 0x130);
            if (lVar15 == 0) goto LAB_05cee568;
            lVar18 = *(long *)(lVar15 + 0x10);
            lVar21 = *(long *)Method_ExitGames_Client_Photon_Protocol16_SerializeLengthAsShort__;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_05cee568;
            uVar13 = *(uint *)(lVar15 + 0x18);
            if (uVar13 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar13 + 1;
              plVar19 = (long *)(lVar18 + (long)(int)uVar13 * 8 + 0x20);
              *plVar19 = lVar17;
              thunk_FUN_02dc1ef0(plVar19,lVar17);
            }
            else {
              FUN_036a5e08(lVar15,lVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            if (*(long *)(param_1 + 0x138) == 0) goto LAB_05cee568;
            System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
                      (*(long *)(param_1 + 0x138),iVar11,lVar17,
                       *(undefined8 *)Method_Unity_Properties_PropertyBag_Register<TextShadow>__);
          }
        }
      }
      local_6c = local_6c + 1;
    } while (local_6c < iVar10);
  }
  if (*(long *)(param_1 + 0x200) == 0) goto LAB_05cee568;
  if (*(int *)(*(long *)(param_1 + 0x200) + 0x18) == 0) {
    *param_3 = param_2;
    goto LAB_05cedbb8;
  }
  lVar17 = *(long *)(param_1 + 0x148);
  if (lVar17 == 0) goto LAB_05cee568;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05cee5d0;
  plVar19 = *(long **)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
  if (plVar19 == (long *)0x0) goto LAB_05cee568;
  iVar10 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
  if (iVar10 < 2) {
UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable__MoveMultipleGrabTransformerTo:
    lVar17 = *(long *)(param_1 + 0x148);
    if (lVar17 == 0) goto LAB_05cee568;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05cee5d0;
    lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (lVar17 == 0) goto LAB_05cee568;
    FUN_05ec0fe4(lVar17,*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c),0);
    lVar17 = *(long *)(param_1 + 0x148);
    if (lVar17 == 0) goto LAB_05cee568;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05cee5d0;
    uVar23 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (*(int *)(*(long *)Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__ +
                0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05f890e0(uVar23,0);
  }
  else {
    lVar17 = *(long *)(param_1 + 0x148);
    if (lVar17 == 0) goto LAB_05cee568;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) goto LAB_05cee5d0;
    plVar19 = *(long **)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (plVar19 == (long *)0x0) goto LAB_05cee568;
    iVar10 = (**(code **)(*plVar19 + 0x1a8))(plVar19,*(undefined8 *)(*plVar19 + 0x1b0));
    if (iVar10 < 2)
    goto 
    UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable__MoveMultipleGrabTransformerTo
    ;
  }
  lVar17 = *(long *)(param_1 + 0x148);
  if (lVar17 != 0) {
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(param_1 + 0x150)) {
LAB_05cee5d0:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    uVar23 = *(undefined8 *)(param_1 + 0x168);
    uVar1 = *(undefined8 *)(param_1 + 0x170);
    uVar22 = *(undefined8 *)(param_1 + 0x200);
    uVar14 = *(undefined4 *)(param_1 + 0x160);
    uVar2 = *(undefined4 *)(param_1 + 0x164);
    uVar25 = *(undefined8 *)(lVar17 + (long)(int)*(uint *)(param_1 + 0x150) * 8 + 0x20);
    if (*(int *)(*(long *)Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__ +
                0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar13 = FUN_05f86d44(uVar22,uVar14,0,uVar1,uVar23,uVar2,uVar25,&local_68,0);
    puVar6 = Method_ExitGames_Client_Photon_Protocol16_SerializeDictionaryHeader__;
    puVar5 = Method_Unity_Properties_PropertyBag_Register<StyleRotate>__;
    puVar4 = PTR_DAT_0664a8b0;
    if (local_68 != 0) {
      uVar24 = 0;
      do {
        if ((int)*(uint *)(local_68 + 0x18) <= (int)uVar24) {
LAB_05cee300:
          lVar17 = *(long *)(param_1 + 0x200);
          if (lVar17 != 0) {
            lVar15 = *(long *)(param_1 + 0x210);
            *(undefined4 *)(lVar17 + 0x18) = 0;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            puVar9 = Method_ExitGames_Client_Photon_Protocol18_WriteStringArray__;
            puVar8 = Method_ExitGames_Client_Photon_Protocol18_WriteCustomTypeArray__;
            puVar7 = Method_ExitGames_Client_Photon_Protocol16_SerializeLengthAsShort__;
            puVar6 = Method_Unity_Properties_PropertyBag_Register<Vector3>__;
            puVar5 = Method_Unity_Properties_PropertyBag_Register<TextShadow>__;
            if (lVar15 != 0) {
              iVar10 = 0;
              goto LAB_05cee348;
            }
          }
          break;
        }
        if (*(uint *)(local_68 + 0x18) <= uVar24) goto LAB_05cee5d0;
        lVar17 = *(long *)(local_68 + (long)(int)uVar24 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_05cee300;
        uVar14 = FUN_05f84fd8(lVar17,0);
        FUN_05f8503c(lVar17,*(undefined4 *)(param_1 + 0x150),0);
        lVar15 = *(long *)(param_1 + 0x120);
        if (lVar15 == 0) break;
        lVar18 = *(long *)(lVar15 + 0x10);
        lVar21 = *(long *)puVar6;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar18 == 0) break;
        uVar3 = *(uint *)(lVar15 + 0x18);
        if (uVar3 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar3 + 1;
          plVar19 = (long *)(lVar18 + (long)(int)uVar3 * 8 + 0x20);
          *plVar19 = lVar17;
          thunk_FUN_02dc1ef0(plVar19,lVar17);
        }
        else {
          FUN_036a5e08(lVar15,lVar17,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(param_1 + 0x128) == 0) break;
        System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
                  (*(long *)(param_1 + 0x128),uVar14,lVar17,*(undefined8 *)puVar5);
        lVar17 = *(long *)(param_1 + 0x1f8);
        if (lVar17 == 0) break;
        lVar15 = *(long *)(lVar17 + 0x10);
        lVar18 = *(long *)puVar4;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar15 == 0) break;
        uVar3 = *(uint *)(lVar17 + 0x18);
        if (uVar3 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar17 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar15 + (long)(int)uVar3 * 4 + 0x20) = uVar14;
        }
        else {
          FUN_0370970c(lVar17,uVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        lVar17 = *(long *)(param_1 + 0x1f0);
        if (lVar17 == 0) break;
        lVar15 = *(long *)(lVar17 + 0x10);
        lVar18 = *(long *)puVar4;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (lVar15 == 0) break;
        uVar3 = *(uint *)(lVar17 + 0x18);
        if (uVar3 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar17 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar15 + (long)(int)uVar3 * 4 + 0x20) = uVar14;
        }
        else {
          FUN_0370970c(lVar17,uVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        uVar24 = uVar24 + 1;
      } while (local_68 != 0);
    }
  }
LAB_05cee568:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
LAB_05cee348:
  if (iVar10 < *(int *)(lVar15 + 0x18)) {
    lVar17 = FUN_036a5b38(lVar15,iVar10,*(undefined8 *)puVar6);
    if ((lVar17 == 0) || (*(long *)(param_1 + 0x128) == 0)) goto LAB_05cee568;
    uVar16 = FUN_048bf6ac(*(long *)(param_1 + 0x128),*(undefined4 *)(lVar17 + 0x28),&local_78,
                          *(undefined8 *)puVar8);
    if ((uVar16 & 1) == 0) {
      lVar15 = *(long *)(param_1 + 0x200);
      if (lVar15 == 0) goto LAB_05cee568;
      lVar18 = *(long *)(lVar15 + 0x10);
      uVar14 = *(undefined4 *)(lVar17 + 0x28);
      lVar17 = *(long *)puVar4;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_05cee568;
      uVar24 = *(uint *)(lVar15 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar24 + 1;
        *(undefined4 *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) = uVar14;
      }
      else {
        FUN_0370970c(lVar15,uVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      *(undefined8 *)(lVar17 + 0x20) = local_78;
      thunk_FUN_02dc1ef0();
      *(long *)(lVar17 + 0x18) = param_1;
      thunk_FUN_02dc1ef0((long *)(lVar17 + 0x18),param_1);
      lVar15 = *(long *)(param_1 + 0x130);
      if (lVar15 == 0) goto LAB_05cee568;
      lVar18 = *(long *)(lVar15 + 0x10);
      lVar21 = *(long *)puVar7;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_05cee568;
      uVar24 = *(uint *)(lVar15 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar24 + 1;
        plVar19 = (long *)(lVar18 + (long)(int)uVar24 * 8 + 0x20);
        *plVar19 = lVar17;
        thunk_FUN_02dc1ef0(plVar19,lVar17);
      }
      else {
        FUN_036a5e08(lVar15,lVar17,
                     *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(param_1 + 0x138) == 0) goto LAB_05cee568;
      System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
                (*(long *)(param_1 + 0x138),*(undefined4 *)(lVar17 + 0x14),lVar17,
                 *(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x210) == 0) goto LAB_05cee568;
      FUN_036a7498(*(long *)(param_1 + 0x210),iVar10,*(undefined8 *)puVar9);
      iVar10 = iVar10 + -1;
    }
    lVar15 = *(long *)(param_1 + 0x210);
    iVar10 = iVar10 + 1;
    if (lVar15 == 0) goto LAB_05cee568;
    goto LAB_05cee348;
  }
  if (*(char *)(param_1 + 0x154) != '\0' && (uVar13 & 1) == 0) {
    do {
      uVar16 = FUN_05cee5d4(param_1);
    } while ((uVar16 & 1) == 0);
    uVar13 = 1;
  }
  if ((param_4 & 1) != 0) {
    FUN_05ceea78(param_1);
  }
  lVar17 = *(long *)(param_1 + 0x210);
  if (lVar17 != 0) {
    iVar10 = 0;
    while (iVar10 < *(int *)(lVar17 + 0x18)) {
      lVar17 = FUN_036a5b38(lVar17,iVar10,*(undefined8 *)puVar6);
      if ((lVar17 == 0) || (lVar15 = *(long *)(param_1 + 0x220), lVar15 == 0)) goto LAB_05cee568;
      lVar18 = *(long *)(lVar15 + 0x10);
      uVar14 = *(undefined4 *)(lVar17 + 0x14);
      lVar17 = *(long *)puVar4;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) goto LAB_05cee568;
      uVar24 = *(uint *)(lVar15 + 0x18);
      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar24 + 1;
        *(undefined4 *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) = uVar14;
      }
      else {
        FUN_0370970c(lVar15,uVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      lVar17 = *(long *)(param_1 + 0x210);
      iVar10 = iVar10 + 1;
      if (lVar17 == 0) goto LAB_05cee568;
    }
    *param_3 = 0;
    thunk_FUN_02dc1ef0(param_3,0);
    lVar17 = *(long *)(param_1 + 0x220);
    if (lVar17 != 0) {
      if (0 < *(int *)(lVar17 + 0x18)) {
        lVar17 = FUN_0370b084(lVar17,*(undefined8 *)
                                      Method_System_Security_Claims_ClaimsIdentity_AddClaim__);
        *param_3 = lVar17;
        thunk_FUN_02dc1ef0(param_3,lVar17);
      }
      return uVar13 & (local_7c ^ 1);
    }
  }
  goto LAB_05cee568;
}


