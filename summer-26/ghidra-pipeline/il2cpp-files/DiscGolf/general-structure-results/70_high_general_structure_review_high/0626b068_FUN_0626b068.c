/*
FUNCTION_NAME: FUN_0626b068
ENTRY_POINT: 0626b068
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_0626b068(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  long *plVar19;
  char cVar20;
  int iVar21;
  bool bVar22;
  ulong uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined8 local_108;
  undefined8 *puStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  char local_a4 [4];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  
  puVar7 = PTR_DAT_069fb990;
  if ((DAT_06dc741b & 1) == 0) {
    FUN_02d965b8(Method_System_Threading_LazyInitializer_EnsureInitialized<bool>__);
    FUN_02d965b8(Method_LeaderboardManager_GetFullLeaderboardComplete__);
    FUN_02d965b8(Method_LeaderboardManager_UpdateLeaderboardComplete__);
    FUN_02d965b8(Method_LobbyCreateUI_<Awake>b__22_2__);
    FUN_02d965b8(Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__);
    FUN_02d965b8(Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__);
    FUN_02d965b8(Method_LeanTween_onLevelWasLoaded54__);
    FUN_02d965b8(Method_System_LocalDataStore_GetData__);
    FUN_02d965b8(Method_System_LocalDataStore_PopulateElement__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_PlayerInputManager_JoinPlayerFromUI__);
    FUN_02d965b8(Method_Unity_Networking_Transport_PacketProcessor_RemoveFromPayloadStart<byte>__);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dc741b = 1;
  }
  uVar18 = *(undefined8 *)(param_1 + 0x108);
  local_78 = 0.0;
  local_80 = 0;
  local_88 = 0.0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a4[0] = '\0';
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar13 = FUN_0634eb94(uVar18,0,0);
  if ((uVar13 & 1) == 0) {
LAB_0626b1ac:
    *(undefined4 *)(param_1 + 0x148) = 0;
    uVar13 = FUN_0626ba24(param_1,param_1 + 0x118,(int *)(param_1 + 0x128));
    if (((uVar13 & 1) != 0) && (*(int *)(param_1 + 0x128) != 0)) {
      if (*(char *)(param_1 + 0x1c3) == '\0') {
        bVar11 = 0;
      }
      else {
        plVar19 = *(long **)(param_1 + 0xf8);
        if (plVar19 == (long *)0x0) goto LAB_0626b470;
        lVar14 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar13 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__) {
              puVar15 = (undefined8 *)(lVar14 + (long)(*piVar17 + 4) * 0x10 + 0x138);
              goto LAB_0626b274;
            }
            uVar13 = uVar13 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar13 != 0);
        }
        puVar15 = (undefined8 *)
                  FUN_02dd004c(plVar19,*(long *)
                                        Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__
                               ,4);
LAB_0626b274:
        bVar11 = (*(code *)*puVar15)(plVar19,puVar15[1]);
      }
      if (*(char *)(param_1 + 0x1c0) == '\0') {
        bVar10 = false;
      }
      else {
        if (*(long *)(param_1 + 0x110) == 0) goto LAB_0626b470;
        bVar10 = *(int *)(*(long *)(param_1 + 0x110) + 0x278) == 0;
      }
      FUN_0626bda8(param_1,param_1 + 0x118,*(undefined4 *)(param_1 + 0x128),bVar10,&local_80,
                   &local_90);
      bVar12 = FUN_0626c0b0(param_1,param_1 + 0x118,*(undefined4 *)(param_1 + 0x128),&local_a0,
                            local_a4);
      *(byte *)(param_1 + 0x1a5) = bVar12 & 1;
      puVar9 = Method_System_LocalDataStore_PopulateElement__;
      puVar8 = Method_LobbyCreateUI_<Awake>b__22_2__;
      puVar7 = Method_UnityEngine_Rendering_LightUnitUtils_ConvertIntensityInternal__;
      if ((bVar11 & 1) != 0) {
        plVar19 = *(long **)(param_1 + 0xf8);
        if (plVar19 != (long *)0x0) {
          iVar21 = 0;
          do {
            lVar16 = *plVar19;
            lVar14 = *(long *)puVar7;
            uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar13 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar14) {
                  puVar15 = (undefined8 *)(lVar16 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                  goto LAB_0626b35c;
                }
                uVar13 = uVar13 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)FUN_02dd004c(plVar19,lVar14,2);
LAB_0626b35c:
            lVar14 = (*(code *)*puVar15)(plVar19,puVar15[1]);
            auVar6._8_8_ = local_b8._8_8_;
            auVar6._0_8_ = local_b8._0_8_;
            auVar5._8_8_ = local_c8._8_8_;
            auVar5._0_8_ = local_c8._0_8_;
            auVar31._8_8_ = local_d8._8_8_;
            auVar31._0_8_ = local_d8._0_8_;
            if (lVar14 == 0) break;
            bVar22 = iVar21 < *(int *)(lVar14 + 0x18);
            if (*(int *)(lVar14 + 0x18) <= iVar21)
            goto UnityEngine_Rendering_VertexAttributeDescriptor__get_dimension;
            plVar19 = *(long **)(param_1 + 0xf8);
            local_d8 = auVar31;
            local_c8 = auVar5;
            local_b8 = auVar6;
            if (plVar19 == (long *)0x0) break;
            lVar16 = *plVar19;
            uVar23 = *(ulong *)(param_1 + 0x90);
            lVar14 = *(long *)puVar7;
            uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar13 != 0) {
              piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar14) {
                  puVar15 = (undefined8 *)(lVar16 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                  goto LAB_0626b3d8;
                }
                uVar13 = uVar13 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)FUN_02dd004c(plVar19,lVar14,2);
LAB_0626b3d8:
            lVar14 = (*(code *)*puVar15)(plVar19,puVar15[1]);
            if (lVar14 == 0) break;
            plVar19 = (long *)FUN_0400ff1c(lVar14,iVar21,*(undefined8 *)puVar9);
            if (plVar19 == (long *)0x0) break;
            lVar14 = *plVar19;
            uVar13 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar13 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar8) {
                  puVar15 = (undefined8 *)(lVar14 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                  goto LAB_0626b44c;
                }
                uVar13 = uVar13 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)FUN_02dd004c(plVar19,*(long *)puVar8,4);
LAB_0626b44c:
            uVar13 = (*(code *)*puVar15)(plVar19,puVar15[1]);
            if ((uVar13 & uVar23) >> 0x20 != 0) goto LAB_0626b478;
            plVar19 = *(long **)(param_1 + 0xf8);
            iVar21 = iVar21 + 1;
          } while (plVar19 != (long *)0x0);
        }
        goto LAB_0626b470;
      }
UnityEngine_Rendering_VertexAttributeDescriptor__get_dimension:
      bVar22 = false;
LAB_0626b478:
      bVar12 = bVar10 & bVar11 & bVar22;
      bVar4 = 0;
      if (*(char *)(param_1 + 0x98) != '\0') {
        bVar4 = *(byte *)(param_1 + 0x1a5);
      }
      if (((bVar4 & bVar10) == 0 && (local_a4[0] == '\0' && bVar12 == 0)) ||
         (1.0 <= *(float *)(param_1 + 0x8c))) {
        cVar20 = '\0';
      }
      else {
        *(undefined4 *)(param_1 + 0x128) = 0x14;
        *(undefined4 *)(param_1 + 200) = 0x13;
        if (bVar12 != 0) {
          FUN_0626c418(param_1,&local_80,&local_a0);
        }
        cVar20 = '\x01';
      }
      FUN_0626c6bc(param_1 + 0x118,*(undefined4 *)(param_1 + 0x128));
      uVar13 = FUN_0626c6bc(param_1 + 0x138,*(undefined4 *)(param_1 + 0x128));
      if ((uVar13 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x148) = 0;
      }
      uVar13 = FUN_0626c6bc(param_1 + 0x150,*(undefined4 *)(param_1 + 0x128));
      if ((uVar13 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x160) = 0;
      }
      if (cVar20 != '\0') {
        if (*(char *)(param_1 + 0x69) != '\0') {
          if ((*(char *)(param_1 + 0x188) != '\0') && (0 < *(int *)(param_1 + 0x160))) {
            fVar30 = *(float *)(param_1 + 0x6c);
            fVar24 = (float)FUN_06359e88(0);
            fVar30 = fVar30 * fVar24;
            fVar24 = 1.0;
            if (fVar30 <= 1.0) {
              fVar24 = fVar30;
            }
            fVar29 = (float)*(undefined8 *)(param_1 + 0x18c);
            fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0x18c) >> 0x20);
            fVar26 = 0.0;
            if (0.0 <= fVar30) {
              fVar26 = fVar24;
            }
            local_90 = CONCAT44(fVar28 + ((float)((ulong)local_90 >> 0x20) - fVar28) * fVar26,
                                fVar29 + ((float)local_90 - fVar29) * fVar26);
            local_88 = *(float *)(param_1 + 0x194) +
                       fVar26 * (local_88 - *(float *)(param_1 + 0x194));
            uVar18 = **(undefined8 **)(param_1 + 0x150);
            fVar29 = *(float *)(*(undefined8 **)(param_1 + 0x150) + 1);
            fVar24 = (float)uVar18;
            fVar30 = (float)((ulong)uVar18 >> 0x20);
            local_80 = CONCAT44(fVar30 + ((float)((ulong)local_80 >> 0x20) - fVar30) * fVar26,
                                fVar24 + ((float)local_80 - fVar24) * fVar26);
            local_78 = fVar29 + fVar26 * (local_78 - fVar29);
          }
          *(float *)(param_1 + 0x194) = local_88;
          *(undefined8 *)(param_1 + 0x18c) = local_90;
        }
        FUN_0626d1d0(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x128),&local_80,
                     &local_90,&local_a0,param_1 + 0x118);
      }
      uVar1 = *(uint *)(param_1 + 0x160);
      *(char *)(param_1 + 0x188) = cVar20;
      if (uVar1 == *(uint *)(param_1 + 0x128)) {
        if ((((0 < (int)uVar1) && (*(char *)(param_1 + 0x69) != '\0')) &&
            ((int)uVar1 <= *(int *)(param_1 + 0x158))) && ((int)uVar1 <= *(int *)(param_1 + 0x120)))
        {
          lVar14 = *(long *)(param_1 + 0x150) + (ulong)uVar1 * 0xc;
          lVar16 = *(long *)(param_1 + 0x118) + (ulong)uVar1 * 0xc;
          uVar18 = *(undefined8 *)(lVar14 + -0xc);
          uVar27 = *(undefined8 *)(lVar16 + -0xc);
          fVar24 = (float)uVar18 - (float)uVar27;
          fVar30 = (float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar27 >> 0x20);
          fVar26 = *(float *)(lVar14 + -4) - *(float *)(lVar16 + -4);
          bVar10 = *(float *)(param_1 + 0xac) < fVar26 * fVar26 + fVar24 * fVar24 + fVar30 * fVar30;
          goto LAB_0626b680;
        }
      }
      else {
        bVar10 = true;
LAB_0626b680:
        *(bool *)(param_1 + 0xcc) = bVar10;
      }
      FUN_0626c778(param_1,bVar11 & 1,cVar20,&local_80,&local_a0);
      puVar7 = Method_Unity_Networking_Transport_PacketProcessor_RemoveFromPayloadStart<byte>__;
      if (((cVar20 == '\0') && (*(char *)(param_1 + 0x69) != '\0')) &&
         (*(int *)(param_1 + 0x160) == *(int *)(param_1 + 0x128))) {
        bVar12 = *(byte *)(param_1 + 0xcc) ^ 1;
      }
      else {
        bVar12 = 0;
      }
      if (*(char *)(param_1 + 0x24) == '\0' && bVar12 == 0) {
        FUN_04274228(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),0,
                     *(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140),0,
                     *(undefined4 *)(param_1 + 0x128),
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_PlayerInputManager_JoinPlayerFromUI__);
        uVar25 = *(undefined4 *)(param_1 + 0x128);
      }
      else {
        local_b8 = FUN_03365934(param_1 + 0x118,
                                *(undefined8 *)
                                 Method_Unity_Networking_Transport_PacketProcessor_RemoveFromPayloadStart<byte>__
                               );
        local_c8 = FUN_03365934(param_1 + 0x150,*(undefined8 *)puVar7);
        local_d8 = FUN_03365934(param_1 + 0x138,*(undefined8 *)puVar7);
        cVar20 = *(char *)(param_1 + 0x24);
        if ((cVar20 == '\0') || (*(char *)(param_1 + 0x2c) == '\0')) {
          uVar25 = *(undefined4 *)(param_1 + 0x28);
        }
        else {
          uVar25 = FUN_0626cbbc(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x28),
                                *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                                param_1,&local_80,&local_a0,*(byte *)(param_1 + 0x1a5) | bVar11 & 1,
                                *(undefined1 *)(param_1 + 0x34));
          cVar20 = *(char *)(param_1 + 0x24);
        }
        uVar2 = *(undefined4 *)(param_1 + 0x148);
        uVar3 = *(undefined4 *)(param_1 + 0x128);
        fVar30 = *(float *)(param_1 + 0x6c);
        fVar24 = (float)FUN_06359e88(0);
        uVar25 = FUN_0626d2b8(uVar25,fVar30 * fVar24,uVar2,uVar3,bVar12 != 0,cVar20 != '\0',local_b8
                              ,local_c8,local_d8);
      }
      *(undefined4 *)(param_1 + 0x148) = uVar25;
      if ((*(char *)(param_1 + 0x1a5) == '\0') && ((*(byte *)(param_1 + 0x68) & bVar11 & 1) == 0)) {
        FUN_0626d138(param_1);
        FUN_0626cda8(param_1,*(undefined8 *)(param_1 + 0x58));
      }
      else {
        if (((bVar11 & 1) == 0) && (*(char *)(param_1 + 0x1c1) != '\0')) {
          lVar14 = *(long *)(param_1 + 0x108);
          if (lVar14 == 0) goto LAB_0626b470;
          if (*(char *)(lVar14 + 0xa8) != '\0') {
            lVar16 = *(long *)(lVar14 + 0x30);
            lVar14 = FUN_0624a5f8(lVar14,0);
            if (lVar14 == 0) goto LAB_0626b470;
            FUN_04010c90(&local_108,lVar14,*(undefined8 *)Method_LeanTween_onLevelWasLoaded54__);
            puVar8 = Method_UnityEngine_Rendering_LightUnitUtils_GetNativeLightUnit__;
            puVar7 = Method_LeaderboardManager_GetFullLeaderboardComplete__;
            puStack_e8 = puStack_100;
            local_f0 = local_108;
            local_e0 = local_f8;
            local_108 = 0;
            puStack_100 = &local_f0;
            do {
              do {
                uVar13 = FUN_05156804(&local_f0,*(undefined8 *)puVar7);
                if ((uVar13 & 1) == 0) {
                  FUN_05156800(&local_f0,
                               *(undefined8 *)
                                Method_System_Threading_LazyInitializer_EnsureInitialized<bool>__);
                  if (param_1 == 0) goto LAB_0626b470;
                  puVar15 = (undefined8 *)(param_1 + 0x60);
                  uVar25 = 1;
                  goto LAB_0626b8b8;
                }
                auVar31 = thunk_FUN_02dd3048(local_e0,*(undefined8 *)puVar8);
                lVar14 = auVar31._0_8_;
              } while (lVar14 == 0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860(lVar14,auVar31._8_8_,lVar14);
              }
              uVar13 = FUN_061e42f4(lVar16,*(undefined8 *)(param_1 + 0x108),lVar14,0);
            } while ((uVar13 & 1) == 0);
            FUN_05156800(&local_f0,
                         *(undefined8 *)
                          Method_System_Threading_LazyInitializer_EnsureInitialized<bool>__);
          }
        }
        uVar25 = 0;
        puVar15 = (undefined8 *)(param_1 + 0x50);
LAB_0626b8b8:
        FUN_0626cda8(param_1,*puVar15);
        FUN_0626cdcc(param_1,uVar25);
      }
      lVar14 = *(long *)(param_1 + 0xd8);
      if (*(int *)(param_1 + 0x148) < 2) {
        if (lVar14 != 0) {
          FUN_0631cb1c(lVar14,0,0);
          return;
        }
      }
      else if (lVar14 != 0) {
        FUN_0631cb1c(lVar14,1,0);
        if (*(long *)(param_1 + 0xd8) != 0) {
          FUN_06318fe8(*(long *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x148),0);
          if (*(long *)(param_1 + 0xd8) != 0) {
            FUN_063199a4(*(long *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x138),
                         *(undefined8 *)(param_1 + 0x140),0);
            FUN_04274228(*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140),0,
                         *(undefined8 *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158),0,
                         *(undefined4 *)(param_1 + 0x148),
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_PlayerInputManager_JoinPlayerFromUI__);
            *(undefined1 *)(param_1 + 0xcc) = 0;
            *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x148);
            return;
          }
        }
      }
      goto LAB_0626b470;
    }
  }
  else {
    lVar14 = *(long *)(param_1 + 0x108);
    if (lVar14 == 0) goto LAB_0626b470;
    if ((*(char *)(lVar14 + 0x59) == '\0') || (uVar13 = FUN_062441e8(lVar14,0), (uVar13 & 1) == 0))
    goto LAB_0626b1ac;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_0631cb1c(*(long *)(param_1 + 0xd8),0,0);
    return;
  }
LAB_0626b470:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


