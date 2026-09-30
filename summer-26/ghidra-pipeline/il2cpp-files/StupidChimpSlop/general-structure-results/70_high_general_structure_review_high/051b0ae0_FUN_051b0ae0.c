/*
FUNCTION_NAME: FUN_051b0ae0
ENTRY_POINT: 051b0ae0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_051b0ae0(long *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined8 local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68 [2];
  long *local_58;
  long local_50;
  undefined2 local_44 [2];
  
                    /* try { // try from 051b0ae4 to 052b0af3 has its CatchHandler @ 051b0d4c */
                    /* try { // try from 051b0af8 to 052b0b03 has its CatchHandler @ 051b0d18 */
  if ((DAT_06a51e18 & 1) == 0) {
                    /* try { // try from 051b0b08 to 052b0b13 has its CatchHandler @ 051b0d14 */
    FUN_02d4dc40(PlayFab_EconomyModels_SetItemModerationStateRequest_var);
    FUN_02d4dc40(UnityEngine_Rendering_ShadingRateFragmentSize_var);
                    /* try { // try from 051b0b28 to 052b0b33 has its CatchHandler @ 051b0ce0 */
    FUN_02d4dc40(PlayFab_ProfilesModels_SetGlobalPolicyResponse_var);
    FUN_02d4dc40(PlayFab_ClientModels_SetFriendTagsRequest_var);
                    /* try { // try from 051b0b40 to 052b0b5f has its CatchHandler @ 051b0ce8 */
    FUN_02d4dc40(System_Resources_SatelliteContractVersionAttribute_var);
    FUN_02d4dc40(PlayFab_EconomyModels_SearchItemsRequest_var);
    FUN_02d4dc40(System_Xml_Linq_SaveOptions_var);
    FUN_02d4dc40(System_Runtime_Serialization_SerializationEventHandler_var);
                    /* try { // try from 051b0b68 to 052b0b7f has its CatchHandler @ 051b0d48 */
    FUN_02d4dc40(PTR_DAT_06646310);
    FUN_02d4dc40(UnityEngine_Rendering_Universal_ShadowData_var);
    FUN_02d4dc40(System_Collections_Generic_ShortEnumEqualityComparer<T>_var);
                    /* try { // try from 051b0b8c to 052b0b9b has its CatchHandler @ 051b0d3c */
    FUN_02d4dc40(PlayFab_MultiplayerModels_ShutdownMultiplayerServerRequest_var);
                    /* try { // try from 051b0ba0 to 052b0bab has its CatchHandler @ 051b0d0c */
    FUN_02d4dc40(System_Data_SimpleType_var);
    FUN_02d4dc40(PTR_DAT_0664c1b0);
                    /* try { // try from 051b0bb0 to 052b0bbb has its CatchHandler @ 051b0d08 */
    FUN_02d4dc40(System_ComponentModel_SingleConverter_var);
    FUN_02d4dc40(System_Drawing_Size_var);
                    /* try { // try from 051b0bd0 to 052b0bdb has its CatchHandler @ 051b0cdc */
    FUN_02d4dc40(System_Drawing_SizeF_var);
    FUN_02d4dc40(UnityEngine_Rendering_LookDev_Sky_var);
                    /* try { // try from 051b0be8 to 052b0c07 has its CatchHandler @ 051b0ce4 */
    FUN_02d4dc40(UnityEngine_Skybox_var);
    DAT_06a51e18 = 1;
  }
  local_44[0] = 0;
  local_58 = (long *)0x0;
  local_50 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  if (param_2 == (long *)0x0) goto LAB_051b1700;
  bVar1 = *(byte *)((long)param_2 + 0x11);
  uVar12 = (uint)bVar1;
  if (bVar1 < 4) {
    if (uVar12 == 1) {
LAB_051b0e14:
      if (param_1[2] == 0) goto LAB_051b1700;
      uVar6 = FUN_051bf608(param_1[2],0);
      if ((uVar6 & 1) != 0) {
        if ((param_1[2] == 0) || (param_1[0x18] == 0)) goto LAB_051b1700;
        lVar13 = *(long *)(param_1[2] + 0xa0);
        uVar4 = FUN_057a5a2c(param_1[0x18],0);
        if (lVar13 == 0) goto LAB_051b1700;
        *(undefined4 *)(lVar13 + 0x3c) = uVar4;
        if ((param_1[2] == 0) || (lVar13 = *(long *)(param_1[2] + 0xa0), lVar13 == 0))
        goto LAB_051b1700;
        FUN_051dee9c(lVar13,*(undefined4 *)((long)param_2 + 0x54),0);
      }
      if (param_1[0x18] != 0) {
        uVar4 = FUN_057a5a2c(param_1[0x18],0);
        *(undefined4 *)((long)param_1 + 0xcc) = uVar4;
        if (param_1[0x18] != 0) {
          iVar15 = FUN_057a5a2c(param_1[0x18],0);
          uVar12 = iVar15 - (int)param_2[10];
          puVar18 = (uint *)((long)param_1 + 0x7c);
          *puVar18 = uVar12;
          if (10000 < uVar12) {
            if (param_1[2] == 0) goto LAB_051b1700;
            if (2 < *(byte *)(param_1[2] + 0x40)) {
              uVar7 = FUN_05000654(puVar18,0);
              uVar17 = *(undefined8 *)UnityEngine_Skybox_var;
              uVar19 = *(undefined8 *)System_Drawing_Size_var;
              uVar16 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
              uVar7 = FUN_04e80bdc(uVar19,uVar7,uVar17,uVar16,0);
              FUN_051afd44(param_1,3,uVar7);
            }
            *(int *)((long)param_1 + 0x7c) = *(int *)((long)param_1 + 0x74) << 2;
          }
          plVar8 = (long *)FUN_051b5da4(param_1,*(undefined4 *)((long)param_2 + 0x4c),
                                        *(undefined1 *)((long)param_2 + 0x12),
                                        *(char *)((long)param_2 + 0x11) == '\x10');
          FUN_051b18a0(param_2);
          if (plVar8 == (long *)0x0) {
            return;
          }
          FUN_051b1834(plVar8);
          lVar13 = FUN_051aec64(param_1,*(undefined1 *)((long)plVar8 + 0x12));
          local_50 = lVar13;
          thunk_FUN_02d5b8bc(lVar13,0);
          plStack_78 = &local_50;
          local_80 = 0;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          if (*(int *)(lVar13 + 0x68) < *(int *)((long)plVar8 + 0x14)) {
            *(int *)(lVar13 + 0x68) = *(int *)((long)plVar8 + 0x14);
          }
          *(int *)(lVar13 + 0x6c) = *(int *)(lVar13 + 0x6c) + -1;
          RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(lVar13,0);
          uVar12 = *puVar18;
          param_2 = plVar8;
          if (*(char *)((long)plVar8 + 0x11) == '\f') {
            if (*(int *)((long)param_1 + 0x74) < (int)uVar12) {
              (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
            }
            else {
              lVar13 = param_1[0x30];
              iVar15 = FUN_051b2544(param_1);
              *(undefined1 *)(param_1 + 0xe) = 1;
              *(int *)((long)param_1 + 0x6c) = ((int)lVar13 + ((int)uVar12 >> 1)) - iVar15;
            }
          }
          else {
            FUN_051b60cc(param_1,uVar12);
            if (*(char *)((long)plVar8 + 0x11) == '\x02') {
              uVar12 = *puVar18;
              if (-1 < (int)uVar12) {
                if (uVar12 < 0x10) {
                  *(undefined8 *)((long)param_1 + 0x74) = DAT_01274620;
                }
                else {
                  *(uint *)((long)param_1 + 0x74) = uVar12;
                }
              }
            }
            else if ((*(char *)((long)plVar8 + 0x11) == '\x04') && ((char)param_1[8] == '\x04')) {
              if (param_1[2] == 0) goto LAB_051b1700;
              if (2 < *(byte *)(param_1[2] + 0x40)) {
                FUN_051afd44(param_1,3,
                             *(undefined8 *)
                              System_Collections_Generic_ShortEnumEqualityComparer<T>_var);
              }
              uVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_ClientModels_SetFriendTagsRequest_var);
              FUN_051be010(uVar7,param_1,
                           *(undefined8 *)UnityEngine_Rendering_ShadingRateFragmentSize_var,0);
              FUN_051b6134(param_1,uVar7);
            }
          }
LAB_051b14a8:
          FUN_051b18a0(param_2);
          return;
        }
      }
      goto LAB_051b1700;
    }
    if (uVar12 != 2) {
      if (bVar1 != 3) {
        return;
      }
      if (param_1[2] != 0) {
        uVar6 = FUN_051bf608(param_1[2],0);
        if ((uVar6 & 1) != 0) {
          if ((param_1[2] == 0) || (lVar13 = *(long *)(param_1[2] + 0xa0), lVar13 == 0))
          goto LAB_051b1700;
          FUN_051dee9c(lVar13,*(undefined4 *)((long)param_2 + 0x54),0);
        }
        if ((char)param_1[8] == '\x01') {
          uVar7 = FUN_051b6888(param_1);
          uVar16 = thunk_FUN_02d8a638(*(undefined8 *)
                                       System_Runtime_Serialization_SerializationEventHandler_var);
          FUN_051dae98(uVar16,uVar7,0);
          FUN_051afecc(param_1,6,uVar16,0);
          if (param_1[2] == 0) goto LAB_051b1700;
          if (*(char *)(param_1[2] + 0x8d) != '\0') {
            FUN_051aeac8(param_1);
          }
          *(undefined1 *)(param_1 + 8) = 3;
        }
        goto LAB_051b10b0;
      }
      goto LAB_051b1700;
    }
  }
  else {
    if (bVar1 < 0x11) {
                    /* try { // try from 051b0c1c to 052b0c27 has its CatchHandler @ 051b0cec */
      uVar12 = 1 << (ulong)(uVar12 & 0x1f);
      if ((uVar12 & 0x48c0) != 0) {
        if (param_1[2] == 0) goto LAB_051b1700;
                    /* try { // try from 051b0c34 to 052b0c53 has its CatchHandler @ 051b0cf0 */
        uVar6 = FUN_051bf608(param_1[2],0);
        if ((uVar6 & 1) != 0) {
          lVar13 = param_1[2];
          if ((*(byte *)(param_2 + 2) & 1) == 0) {
            if ((lVar13 == 0) || (*(long *)(lVar13 + 0xa0) == 0)) goto LAB_051b1700;
                    /* try { // try from 051b0c58 to 052b0c5b has its CatchHandler @ 051b0db4 */
                    /* try { // try from 051b0c5c to 052b0c87 has its CatchHandler @ 051b0dac */
            FUN_051d453c(*(long *)(lVar13 + 0xa0),*(undefined4 *)((long)param_2 + 0x54),0);
          }
          else {
            if ((lVar13 == 0) || (*(long *)(lVar13 + 0xa0) == 0)) goto LAB_051b1700;
            FUN_051d4520(*(long *)(lVar13 + 0xa0),*(undefined4 *)((long)param_2 + 0x54),0);
          }
        }
        if (((char)param_1[8] == '\x03') &&
           (uVar6 = FUN_051b6210(param_1,param_2), (uVar6 & 1) != 0)) {
          return;
        }
        goto LAB_051b10b0;
      }
      if ((uVar12 & 0x8100) != 0) {
        if ((char)param_1[8] != '\x03') goto LAB_051b10b0;
        if (param_1[2] == 0) goto LAB_051b1700;
        uVar6 = FUN_051bf608(param_1[2],0);
        if ((uVar6 & 1) != 0) {
          if ((param_1[2] == 0) || (lVar13 = *(long *)(param_1[2] + 0xa0), lVar13 == 0))
          goto LAB_051b1700;
          FUN_051e0938(lVar13,*(undefined4 *)((long)param_2 + 0x54),0);
        }
        if ((*(int *)((long)param_2 + 0x2c) <= (int)param_2[5]) &&
           (iVar15 = *(int *)((long)param_2 + 0x34), iVar15 < (int)param_2[6])) {
          if (param_2[0xb] == 0) goto LAB_051b1700;
          iVar3 = FUN_051d4668(param_2[0xb],0);
          if (iVar3 + iVar15 <= (int)param_2[6]) {
            cVar2 = *(char *)((long)param_2 + 0x11);
            lVar13 = FUN_051aec64(param_1,*(undefined1 *)((long)param_2 + 0x12));
            local_58 = (long *)0x0;
            if (lVar13 == 0) goto LAB_051b1700;
            uVar6 = FUN_051ad6a8(lVar13,*(undefined4 *)((long)param_2 + 0x24),cVar2 == '\b',
                                 &local_58);
            if ((uVar6 & 1) != 0) {
              if (local_58 == (long *)0x0) goto LAB_051b1700;
              if ((int)local_58[7] < 1) goto LAB_051b14a8;
            }
            uVar10 = FUN_051b6210(param_1,param_2);
            if ((uVar10 & 1) != 0) {
              iVar15 = *(int *)((long)param_2 + 0x14);
              if (iVar15 == *(int *)((long)param_2 + 0x24)) {
                local_68[1] = 0;
                *(int *)(param_2 + 7) = (int)param_2[7] + -1;
                local_58 = param_2;
                do {
                  iVar15 = iVar15 + 1;
                  if (((int)local_58[7] < 1) ||
                     ((int)local_58[5] + *(int *)((long)local_58 + 0x24) <= iVar15))
                  goto LAB_051b15c4;
                  uVar6 = FUN_051ad6a8(lVar13,iVar15,cVar2 == '\b',local_68 + 1);
                  if ((uVar6 & 1) != 0) {
                    if (local_58 == (long *)0x0) break;
                    *(int *)(local_58 + 7) = (int)local_58[7] + -1;
                  }
                } while (local_58 != (long *)0x0);
              }
              else {
                if ((uVar6 & 1) == 0) {
                  if (local_58 == (long *)0x0) {
                    return;
                  }
                }
                else {
                  if (local_58 == (long *)0x0) goto LAB_051b1700;
                  *(int *)(local_58 + 7) = (int)local_58[7] + -1;
                }
LAB_051b15c4:
                if (0 < (int)local_58[7]) {
                  return;
                }
                if (*(int *)(*(long *)PlayFab_EconomyModels_SearchItemsRequest_var + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                lVar11 = FUN_051b4148();
                if ((lVar11 != 0) && (FUN_051d45d8(lVar11,0,0), local_58 != (long *)0x0)) {
                  thunk_FUN_051db040(lVar11,(int)local_58[6],0);
                  uVar7 = FUN_051d45c8(lVar11,0);
                  if (local_58 != (long *)0x0) {
                    iVar15 = *(int *)((long)local_58 + 0x24);
                    while (iVar15 < (int)local_58[5] + *(int *)((long)local_58 + 0x24)) {
                      uVar6 = FUN_051ad6a8(lVar13,iVar15,cVar2 == '\b',local_68);
                      if ((uVar6 & 1) == 0) {
                        thunk_FUN_02db45e8(PTR_DAT_06647b18);
                        uVar7 = thunk_FUN_02d8a638();
                        uVar16 = thunk_FUN_02db45e8(UnityEngine_UI_Slider_var);
                        FUN_0503a078(uVar7,uVar16,0);
                        uVar16 = thunk_FUN_02db45e8(UnityEngine_SliderHandler_var);
                    /* WARNING: Subroutine does not return */
                        FUN_02d4ddac(uVar7,uVar16);
                      }
                      if ((((local_68[0] == 0) || (*(long *)(local_68[0] + 0x58) == 0)) ||
                          (uVar16 = FUN_051d45c8(*(long *)(local_68[0] + 0x58),0), local_68[0] == 0)
                          ) || (*(long *)(local_68[0] + 0x58) == 0)) goto LAB_051b1700;
                      uVar4 = *(undefined4 *)(local_68[0] + 0x34);
                      uVar5 = FUN_051d4668(*(long *)(local_68[0] + 0x58),0);
                      FUN_0502fc24(uVar16,0,uVar7,uVar4,uVar5,0);
                      if (((local_68[0] == 0) || (FUN_051b1834(), local_68[0] == 0)) ||
                         (FUN_051ad720(lVar13,*(undefined4 *)(local_68[0] + 0x14),cVar2 == '\b'),
                         local_68[0] == 0)) goto LAB_051b1700;
                      if (0 < *(int *)(local_68[0] + 0x2c)) {
                        FUN_051b18a0();
                      }
                      iVar15 = iVar15 + 1;
                      if (local_58 == (long *)0x0) goto LAB_051b1700;
                    }
                    FUN_051d44f8(lVar11,(long)(int)local_58[6],0);
                    if (local_58 != (long *)0x0) {
                      local_58[0xb] = lVar11;
                      thunk_FUN_02dc1ef0(local_58 + 0xb,lVar11);
                      if (local_58 != (long *)0x0) {
                        *(int *)((long)local_58 + 0x54) = (int)local_58[6] + (int)local_58[5] * 0xc;
                        if (cVar2 == '\b') {
                          if (*(long *)(lVar13 + 0x18) != 0) {
                            FUN_03936fd4(*(long *)(lVar13 + 0x18),
                                         *(undefined4 *)((long)local_58 + 0x24),local_58,
                                         *(undefined8 *)
                                          System_Resources_SatelliteContractVersionAttribute_var);
                            return;
                          }
                        }
                        else if (*(long *)(lVar13 + 0x28) != 0) {
                          FUN_03a8badc(*(long *)(lVar13 + 0x28),local_58,
                                       *(undefined8 *)System_Xml_Linq_SaveOptions_var);
                          return;
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_051b1700;
            }
            goto LAB_051b14a8;
          }
        }
        lVar13 = param_1[2];
        if (lVar13 != 0) {
          if (*(char *)(lVar13 + 0x40) != '\0') {
            lVar13 = *(long *)(lVar13 + 0x48);
            uVar16 = *(undefined8 *)PlayFab_MultiplayerModels_ShutdownMultiplayerServerRequest_var;
            uVar7 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
            uVar7 = FUN_04e723e0(uVar16,uVar7,0);
            if (lVar13 == 0) goto LAB_051b1700;
            FUN_02cb93f8(0,*(undefined8 *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var,lVar13,
                         1,uVar7);
          }
          goto LAB_051b10b0;
        }
        goto LAB_051b1700;
      }
      if (bVar1 == 0x10) goto LAB_051b0e14;
    }
    if (bVar1 == 4) {
      if (param_1[2] != 0) {
        uVar6 = FUN_051bf608(param_1[2],0);
        if ((uVar6 & 1) != 0) {
          if ((param_1[2] == 0) || (lVar13 = *(long *)(param_1[2] + 0xa0), lVar13 == 0))
          goto LAB_051b1700;
          FUN_051dee9c(lVar13,*(undefined4 *)((long)param_2 + 0x54),0);
        }
        cVar2 = (char)param_2[4];
        if (cVar2 == '\x01') {
          uVar4 = 0x413;
        }
        else if (cVar2 == '\x02') {
          uVar4 = 0x411;
        }
        else {
          uVar4 = 0x412;
          if (cVar2 != '\x03') {
            uVar4 = 0x414;
          }
        }
        lVar13 = param_1[2];
        if (lVar13 != 0) {
          if (2 < *(byte *)(lVar13 + 0x40)) {
            plVar8 = *(long **)(lVar13 + 0x48);
            lVar13 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,0xc);
            if (lVar13 == 0) goto LAB_051b1700;
            if (*(int *)(lVar13 + 0x18) == 0) {
LAB_051b1790:
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            *(undefined8 *)(lVar13 + 0x20) =
                 *(undefined8 *)System_ComponentModel_SingleConverter_var;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar13 + 0x20));
            if ((*(uint *)(lVar13 + 0x18) & 0xfffffffe) == 0) goto LAB_051b1790;
            *(long *)(lVar13 + 0x28) = param_1[6];
            thunk_FUN_02dc1ef0((long *)(lVar13 + 0x28));
            if (*(uint *)(lVar13 + 0x18) < 3) goto LAB_051b1790;
            *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)UnityEngine_Rendering_LookDev_Sky_var;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar13 + 0x30));
            local_44[0] = (undefined2)param_1[0xd];
            uVar7 = FUN_0501e8a4(local_44,0);
            if ((*(uint *)(lVar13 + 0x18) & 0xfffffffc) == 0) goto LAB_051b1790;
            *(undefined8 *)(lVar13 + 0x38) = uVar7;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar13 + 0x38),uVar7);
            if (*(uint *)(lVar13 + 0x18) < 5) goto LAB_051b1790;
            *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)System_Drawing_SizeF_var;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar13 + 0x40));
            uVar7 = FUN_05000654((long)param_1 + 0x74,0);
            if (*(uint *)(lVar13 + 0x18) < 6) goto LAB_051b1790;
            *(undefined8 *)(lVar13 + 0x48) = uVar7;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar13 + 0x48),uVar7);
            if (*(uint *)(lVar13 + 0x18) < 7) goto LAB_051b1790;
            *(undefined8 *)(lVar13 + 0x50) = *(undefined8 *)PTR_DAT_0664c1b0;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar13 + 0x50));
            uVar7 = FUN_05000654(param_1 + 0xf,0);
            if ((*(uint *)(lVar13 + 0x18) & 0xfffffff8) == 0) goto LAB_051b1790;
            *(undefined8 *)(lVar13 + 0x58) = uVar7;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar13 + 0x58),uVar7);
            if (*(uint *)(lVar13 + 0x18) < 9) goto LAB_051b1790;
            *(undefined8 *)(lVar13 + 0x60) =
                 *(undefined8 *)UnityEngine_Rendering_Universal_ShadowData_var;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar13 + 0x60));
            uVar7 = FUN_04f73bf4(param_2 + 4,0);
            if (*(uint *)(lVar13 + 0x18) < 10) goto LAB_051b1790;
            *(undefined8 *)(lVar13 + 0x68) = uVar7;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar13 + 0x68),uVar7);
            if (*(uint *)(lVar13 + 0x18) < 0xb) goto LAB_051b1790;
            *(undefined8 *)(lVar13 + 0x70) = *(undefined8 *)System_Data_SimpleType_var;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar13 + 0x70));
            local_70 = (undefined1)param_1[8];
            local_80 = *(undefined8 *)PlayFab_EconomyModels_SetItemModerationStateRequest_var;
            plStack_78 = (long *)0xffffffffffffffff;
            uVar7 = FUN_05038b8c(&local_80,0);
            if (*(uint *)(lVar13 + 0x18) < 0xc) goto LAB_051b1790;
            *(undefined8 *)(lVar13 + 0x78) = uVar7;
            thunk_FUN_02dc1ef0();
            uVar7 = FUN_04e80ce4(lVar13,0);
            if (plVar8 == (long *)0x0) goto LAB_051b1700;
            lVar13 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar6 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) ==
                    *(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_051b1464;
                }
                uVar6 = uVar6 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)
                     FUN_02d87540(plVar8,*(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var
                                  ,0);
LAB_051b1464:
            (*(code *)*puVar9)(plVar8,3,uVar7,puVar9[1]);
          }
          if ((*(byte *)(param_1 + 8) | 4) != 4) {
            FUN_051af9e0(param_1,uVar4);
            (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
          }
          goto LAB_051b14a8;
        }
      }
      goto LAB_051b1700;
    }
    if (bVar1 != 5) {
      return;
    }
  }
  if (param_1[2] != 0) {
    uVar6 = FUN_051bf608(param_1[2],0);
    if ((uVar6 & 1) != 0) {
      if ((param_1[2] == 0) || (lVar13 = *(long *)(param_1[2] + 0xa0), lVar13 == 0))
      goto LAB_051b1700;
      FUN_051dee9c(lVar13,*(undefined4 *)((long)param_2 + 0x54),0);
    }
LAB_051b10b0:
    FUN_051b18a0(param_2);
    return;
  }
LAB_051b1700:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


