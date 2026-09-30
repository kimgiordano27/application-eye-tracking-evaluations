/*
FUNCTION_NAME: FUN_05c2c314
ENTRY_POINT: 05c2c314
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_05c2c314(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  int local_64;
  
  if ((DAT_06dc279c & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Character>_GetEnumerator__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Character>_Remove__);
    FUN_02d965b8(PTR_DAT_069fe788);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Remove__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Character>_TryAdd__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Character>_TryGetValue__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Character>_get_Item__);
    FUN_02d965b8(OVRPlugin_OVRP_1_121_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0dbb0);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__);
    FUN_02d965b8(PTR_DAT_069ff7d8);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Glyph>__ctor__);
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Glyph>_Add__);
    FUN_02d965b8(PTR_DAT_06a132d8);
    FUN_02d965b8(PTR_DAT_06a1a630);
    FUN_02d965b8(PTR_DAT_06a1a6b8);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Glyph>_Clear__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Glyph>_ContainsKey__);
    FUN_02d965b8(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Glyph>_TryAdd__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_PlayerDataObject>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Glyph>_TryGetValue__);
    FUN_02d965b8(PTR_DAT_069fc220);
    FUN_02d965b8(PTR_DAT_06a12a30);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<uint,_Glyph>_get_Item__);
    FUN_02d965b8(Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_119_0_TypeInfo);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>__ctor__
                );
    FUN_02d965b8(
                UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                );
    DAT_06dc279c = 1;
  }
  puVar1 = PTR_DAT_069fe788;
  local_64 = 0;
  local_80._8_8_ = 0;
  lVar17 = *(long *)(param_1 + 8);
  local_90._8_8_ = 0;
  local_80._0_8_ = 0;
  local_90._0_8_ = 0;
  local_98 = 0;
  if (*param_1 == 0) {
    local_80 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_05c2ca9c:
    FUN_05410190(local_80,0);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar10 = FUN_05c2c134(lVar17,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc));
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_90 = FUN_048146f8(lVar10,0,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<uint,_Glyph>__ctor__
                           );
    uVar11 = FUN_04b88740(local_90,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<uint,_Character>_get_Item__
                         );
    if ((uVar11 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_90;
      LeanTween__value(param_1 + 0x14,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_03536bf0(param_1 + 2,local_90,param_1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<uint,_Character>_GetEnumerator__);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      plVar18 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff7d8);
      FUN_05377f4c(plVar18,0);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_053798ac(plVar18,*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<uint,_Glyph>_TryAdd__,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(long *)(lVar17 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = *(long *)(*(long *)(lVar17 + 0x10) + 0x40);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar12 = FUN_05c0b888(lVar10,0);
      FUN_053798ac(plVar18,uVar12,0);
      FUN_0537a744(plVar18,0x3a,0);
      if (*(long *)(lVar17 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = *(long *)(*(long *)(lVar17 + 0x10) + 0x40);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar5 = FUN_05c0c118(lVar10,0);
      FUN_0537a7ec(plVar18,uVar5,0);
      FUN_053798ac(plVar18,*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<uint,_Glyph>_Add__,0);
      puVar3 = OVRPlugin_OVRP_1_121_0_TypeInfo;
      if (*(long *)(lVar17 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar17 + 0x10) + 0xc0);
      lVar10 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar10 = *(long *)puVar3;
      }
      uVar11 = FUN_05507938(uVar12,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),0);
      if ((uVar11 & 1) == 0) {
        FUN_053798ac(plVar18,*(undefined8 *)PTR_DAT_06a1a630,0);
      }
      else {
        FUN_053798ac(plVar18,*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<uint,_Glyph>_TryGetValue__
                     ,0);
      }
      FUN_053798ac(plVar18,*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>__ctor__
                   ,0);
      if (*(long *)(lVar17 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = *(long *)(*(long *)(lVar17 + 0x10) + 0x40);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar12 = FUN_05c0b228(lVar10,0);
      FUN_053798ac(plVar18,uVar12,0);
      plVar6 = (long *)(lVar17 + 0x40);
      lVar10 = *plVar6;
      *plVar6 = 0;
      LeanTween__value(plVar6,0);
      plVar6 = *(long **)(lVar17 + 0x10);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = FUN_05ccbaa0(lVar7,*(undefined8 *)
                                  Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo
                           ,0);
      *(bool *)(param_1 + 0xe) = lVar7 != 0;
      if (lVar7 == 0) {
        if ((lVar10 != 0) && (*(int *)(lVar17 + 0x30) == 0x197)) {
          plVar6 = *(long **)(lVar17 + 0x10);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar6 = (long *)(**(code **)(*plVar6 + 0x268))(plVar6,*(undefined8 *)(*plVar6 + 0x270));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar7 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar11 != 0) {
            piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__) {
                puVar8 = (undefined8 *)(lVar7 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_05c2c7e8;
              }
              uVar11 = uVar11 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_02dd004c(plVar6,*(long *)
                                        Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__
                                ,2);
LAB_05c2c7e8:
          lVar7 = (*(code *)*puVar8)(plVar6,puVar8[1]);
          plVar6 = (long *)(lVar17 + 0x20);
          lVar14 = *plVar6;
          *(undefined1 *)(param_1 + 0xe) = 1;
          if (lVar14 == 0) {
            lVar14 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,6);
            if (*(long *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar12 = FUN_05c0c424(*(long *)(lVar17 + 0x18),0);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_02978e90(lVar14,0,uVar12);
            FUN_02978e90(lVar14,1,*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_PlayerDataObject>__ctor__
                        );
            if (*(long *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar12 = FUN_05c0b888(*(long *)(lVar17 + 0x18),0);
            FUN_02978e90(lVar14,2,uVar12);
            FUN_02978e90(lVar14,3,*(undefined8 *)PTR_DAT_06a12a30);
            if (*(long *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            local_64 = FUN_05c0c118(*(long *)(lVar17 + 0x18),0);
            uVar12 = FUN_054e5768(&local_64,0);
            FUN_02978e90(lVar14,4,uVar12);
            FUN_02978e90(lVar14,5,*(undefined8 *)PTR_DAT_069fc220);
            uVar12 = FUN_0536dde4(lVar14,0);
            if (*(int *)(*(long *)OVRPlugin_OVRP_1_102_0_TypeInfo + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar12 = FUN_05cf040c(uVar12,0);
            puVar3 = PTR_DAT_06a0dbb0;
            lVar14 = FUN_02979eb8(uVar12,*(undefined8 *)PTR_DAT_06a0dbb0);
            uVar13 = *(undefined8 *)puVar3;
            *plVar6 = lVar14;
            uVar12 = FUN_02979eb8(uVar12,uVar13);
            LeanTween__value(plVar6,uVar12);
            plVar9 = (long *)*plVar6;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            (**(code **)(*plVar9 + 0x1d8))
                      (plVar9,*(undefined8 *)OVRPlugin_OVRP_1_37_0_TypeInfo,
                       *(undefined8 *)(*plVar9 + 0x1e0));
            plVar9 = (long *)*plVar6;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            (**(code **)(*plVar9 + 0x248))(plVar9,lVar7,*(undefined8 *)(*plVar9 + 0x250));
          }
          puVar3 = 
          Method_System_Collections_Generic_Dictionary<string,_InputControlLayout_ControlItem>_Remove__
          ;
          if ((lVar7 != 0) && (0 < (int)*(ulong *)(lVar10 + 0x18))) {
            uVar11 = 0;
            uVar15 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
            do {
              if (uVar15 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              uVar12 = *(undefined8 *)(lVar10 + 0x20 + uVar11 * 8);
              lVar14 = *plVar6;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              lVar14 = FUN_05d065d0(uVar12,lVar14,lVar7,0);
              if (lVar14 != 0) {
                uVar11 = thunk_FUN_0536b75c(*(undefined8 *)(lVar14 + 0x20),
                                            *(undefined8 *)PTR_DAT_06a1a6b8,0);
                FUN_053798ac(plVar18,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<uint,_Glyph>_get_Item__
                             ,0);
                FUN_053798ac(plVar18,*(undefined8 *)(lVar14 + 0x10),0);
                goto LAB_05c2c730;
              }
              uVar15 = (ulong)*(uint *)(lVar10 + 0x18);
              uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
          }
        }
      }
      else {
        FUN_053798ac(plVar18,*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<uint,_Glyph>_get_Item__,0
                    );
        FUN_053798ac(plVar18,lVar7,0);
        lVar10 = FUN_05371de0(lVar7,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar11 = FUN_05372308(lVar10,*(undefined8 *)PTR_DAT_06a1a6b8,0);
LAB_05c2c730:
        if ((uVar11 & 1) != 0) {
          FUN_053798ac(plVar18,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<uint,_Glyph>_Clear__,0)
          ;
          *(int *)(lVar17 + 0x28) = *(int *)(lVar17 + 0x28) + 1;
        }
      }
      FUN_053798ac(plVar18,*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<uint,_Glyph>_ContainsKey__,
                   0);
      *(undefined4 *)(lVar17 + 0x30) = 0;
      plVar6 = (long *)FUN_05389424(0);
      uVar12 = (**(code **)(*plVar18 + 0x168))(plVar18,*(undefined8 *)(*plVar18 + 0x170));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar12,uVar12);
      }
      lVar10 = (**(code **)(*plVar6 + 600))(plVar6,uVar12,*(undefined8 *)(*plVar6 + 0x260));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar18 = *(long **)(param_1 + 10);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = (**(code **)(*plVar18 + 0x318))
                         (plVar18,lVar10,0,*(undefined4 *)(lVar10 + 0x18),
                          *(undefined8 *)(param_1 + 0xc),*(undefined8 *)(*plVar18 + 800));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_80 = FUN_0555c350(lVar10,0,0);
      uVar11 = FUN_05410178(local_80,0);
      if ((uVar11 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_80;
        LeanTween__value(param_1 + 0x10,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0353b230(param_1 + 2,local_80,param_1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<uint,_Character>_Remove__);
        return;
      }
      goto LAB_05c2ca9c;
    }
    local_90 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
    local_80 = ZEXT816(0);
  }
  FUN_04b88788(&local_b8,local_90,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<uint,_Character>_TryGetValue__);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar18 = (long *)(lVar17 + 0x48);
  *plVar18 = local_b8;
  LeanTween__value(plVar18);
  *(undefined8 *)(lVar17 + 0x58) = uStack_b0;
  LeanTween__value((undefined8 *)(lVar17 + 0x58),uStack_b0);
  iVar2 = param_1[0xe];
  local_64 = local_a8;
  *(int *)(lVar17 + 0x30) = local_a8;
  if (((((char)iVar2 == '\0') || (*(int *)(lVar17 + 0x28) == 1)) && (*plVar18 != 0)) &&
     (local_a8 == 0x197)) {
    lVar10 = FUN_05ccbaa0(*plVar18,*(undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo,0);
    uVar11 = FUN_0536c9cc(lVar10,0);
    if ((uVar11 & 1) == 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar12 = FUN_05371c64(lVar10,0);
      uVar11 = thunk_FUN_0536b75c(uVar12,*(undefined8 *)PTR_DAT_06a132d8,0);
      if ((uVar11 & 1) != 0) {
        *(undefined1 *)(lVar17 + 0x2d) = 1;
      }
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar12 = (**(code **)(*plVar18 + 0x248))
                       (plVar18,*(undefined8 *)
                                 UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_TypeInfo
                        ,*(undefined8 *)(*plVar18 + 0x250));
    *(undefined8 *)(lVar17 + 0x40) = uVar12;
    LeanTween__value();
  }
  else if (local_a8 == 200) {
    bVar4 = *plVar18 != 0;
    goto LAB_05c2cc08;
  }
  bVar4 = false;
LAB_05c2cc08:
  *(bool *)(lVar17 + 0x2c) = bVar4;
  if ((*(long *)(lVar17 + 0x40) == 0) &&
     ((iVar2 = *(int *)(lVar17 + 0x30), iVar2 == 0x197 || (iVar2 == 0x191)))) {
    uVar20 = *(undefined8 *)(lVar17 + 0x18);
    uVar19 = *(undefined8 *)(lVar17 + 0x48);
    thunk_FUN_02dfd288(OVRPlugin_OVRP_1_58_0_TypeInfo);
    uVar12 = thunk_FUN_02dd3144();
    uVar13 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_05c1d84c(uVar12,uVar20,uVar13,iVar2,uVar19,0);
    puVar1 = Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_Clear__;
    if (*(int *)(lVar17 + 0x30) != 0x197) {
      puVar1 = Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_Add__;
    }
    uVar13 = thunk_FUN_02dfd288(puVar1);
    thunk_FUN_02dfd288(PTR_DAT_06a10338);
    uVar19 = thunk_FUN_02dd3144();
    FUN_05ce6238(uVar19,uVar13,0,7,uVar12,0);
    uVar12 = thunk_FUN_02dfd288(
                               Method_System_Collections_Generic_Dictionary<uint,_GlyphPairAdjustmentRecord>_ContainsKey__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar19,uVar12);
  }
  lVar17 = *(long *)puVar1;
  *param_1 = -2;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05410914(param_1 + 2,0);
  return;
}


