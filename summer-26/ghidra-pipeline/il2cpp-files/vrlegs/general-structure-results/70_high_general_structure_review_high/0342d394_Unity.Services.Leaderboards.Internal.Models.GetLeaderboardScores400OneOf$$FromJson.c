/*
FUNCTION_NAME: Unity.Services.Leaderboards.Internal.Models.GetLeaderboardScores400OneOf$$FromJson
ENTRY_POINT: 0342d394
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint Unity_Services_Leaderboards_Internal_Models_GetLeaderboardScores400OneOf__FromJson
               (undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined4 *puVar32;
  int *piVar33;
  long lVar34;
  long lVar35;
  long unaff_x21;
  undefined8 uVar36;
  long lVar37;
  ulong uVar38;
  int iVar39;
  float fVar40;
  float extraout_s0;
  int iVar41;
  float fVar42;
  ulong uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  uint uStack0000000000000064;
  long in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  float in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  float fStack0000000000000170;
  float fStack0000000000000174;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 uStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined4 uStack0000000000000198;
  undefined4 uStack000000000000019c;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000270;
  
  FUN_01ab69ac(Mono_CSharp_PropertySpec_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x63b) = 1;
  FUN_033a2190(&stack0x000003c8,0,*(undefined8 *)(in_stack_000000b8 + 0x170),0);
  if (*(char *)(in_stack_000000b0 + 0x279) == '\0') {
    uVar22 = 0;
  }
  else {
    if (*(char *)(in_stack_000000b0 + 0x278) != '\0') {
      FUN_0342ec44(in_stack_000000b8);
      lVar34 = *(long *)(in_stack_000000b8 + 0x140);
      uVar43 = *(ulong *)(in_stack_000000b0 + 0x27c);
      *(ulong *)(in_stack_000000b8 + 0x168) = uVar43;
      if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar36 = *(undefined8 *)(in_stack_000000b0 + 0x240);
      uVar38 = *(ulong *)(in_stack_000000b0 + 0x248);
      lVar30 = *(long *)
                UnityEngine_ResourceManagement_ResourceProviders_ProviderLoadRequestOptions_TypeInfo
      ;
      *(int *)(lVar34 + 0x1c) = *(int *)(lVar34 + 0x1c) + 1;
      uVar24 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 200));
      if ((uVar24 & 1) == 0) {
        *(undefined4 *)(lVar34 + 0x18) = 0;
      }
      else {
        iVar27 = *(int *)(lVar34 + 0x18);
        *(undefined4 *)(lVar34 + 0x18) = 0;
        if (0 < iVar27) {
          uVar24 = FUN_02793a34(*(undefined8 *)(lVar34 + 0x10),0,iVar27,0);
        }
      }
      puVar13 = PTR_DAT_03cbe888;
      if (*(long *)(in_stack_000000b8 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar22 = (uint)uVar38;
      plVar2 = (long *)(in_stack_000000b8 + 0x110);
      if (*(int *)(*(long *)(in_stack_000000b8 + 0x110) + 0x18) < (int)uVar22) {
        lVar34 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888,uVar38 & 0xffffffff);
        *plVar2 = lVar34;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar25 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,uVar38 & 0xffffffff);
        *(undefined8 *)(in_stack_000000b8 + 0x148) = uVar25;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000b8 + 0x148)
        ;
        uVar25 = FUN_01ab6a94(*(undefined8 *)puVar13,uVar38 & 0xffffffff);
        *(undefined8 *)(in_stack_000000b8 + 0x158) = uVar25;
        uVar24 = GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                           (in_stack_000000b8 + 0x158);
      }
      uStack0000000000000064 = uVar22;
      if (*(char *)(in_stack_000000b8 + 0xe0) == '\0') {
        if (*(int *)(*(long *)PTR_DAT_03cd9310 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_03417f74(0);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar24 = FUN_0276c214(uVar38 & 0xffffffff,uVar16,0);
        uStack0000000000000064 = (uint)uVar24;
      }
      if (*(long *)(in_stack_000000b8 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar3 = (long *)(in_stack_000000b8 + 0x118);
      if (*(int *)(*(long *)(in_stack_000000b8 + 0x118) + 0x18) < (int)uStack0000000000000064) {
        lVar34 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888,uStack0000000000000064);
        *plVar3 = lVar34;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar3);
        uVar25 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc3470,uStack0000000000000064);
        *(undefined8 *)(in_stack_000000b8 + 0x130) = uVar25;
        uVar24 = GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                           (in_stack_000000b8 + 0x130);
      }
      lVar34 = *(long *)(in_stack_000000b8 + 0x148);
      if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar18 = *(uint *)(lVar34 + 0x18);
      if (0 < (long)((ulong)uVar18 << 0x20)) {
        uVar31 = 0;
        do {
          if (uVar18 <= uVar31) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(undefined4 *)(lVar34 + 0x20 + uVar31 * 4) = 0x7f7fffff;
          uVar31 = uVar31 + 1;
        } while ((long)uVar31 < (long)(int)uVar18);
      }
      puVar14 = System_Runtime_Remoting_ProviderData_TypeInfo;
      puVar13 = PTR_DAT_03cbe590;
      puVar4 = (uint *)(in_stack_000000b0 + 0x230);
      if ((int)uVar22 < 1) {
        uVar18 = 0;
      }
      else {
        uVar31 = 0;
        uVar18 = 0;
        do {
          if ((uVar31 != *puVar4) &&
             (uVar24 = FUN_0342ed34(uVar24,puVar4,uVar31 & 0xffffffff), (uVar24 & 1) != 0)) {
            uVar25 = FUN_01fb3ff4(uVar36,uVar38,uVar31 & 0xffffffff,
                                  *(undefined8 *)
                                   System_Runtime_Remoting_Proxies_ProxyAttribute_TypeInfo);
            iVar17 = FUN_03701768(uVar25,0);
            fVar48 = (float)param_3;
            fVar46 = (float)param_2;
            iVar27 = 6;
            if (iVar17 != 2) {
              iVar27 = 0;
            }
            if (iVar17 == 0) {
              iVar27 = 1;
            }
            if (iVar27 != 0) {
              iVar17 = 0;
              do {
                if (*(long *)(in_stack_000000b0 + 0x298) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                lVar30 = *(long *)(in_stack_000000b8 + 0x140);
                FUN_02215a88(*(long *)(in_stack_000000b0 + 0x298),uVar31 & 0xffffffff,
                             &stack0x00000270,*(undefined8 *)puVar13);
                lVar34 = FUN_037016dc(uVar25,0);
                if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                FUN_036a03ac(lVar34,0);
                FUN_03701768(uVar25,0);
                if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                FUN_01b5f01c(lVar30,&stack0x000002d0,*(undefined8 *)puVar14);
                fVar48 = (float)param_3;
                fVar46 = (float)param_2;
                iVar17 = iVar17 + 1;
              } while (iVar27 != iVar17);
            }
            if (*(long *)(in_stack_000000b0 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar30 = *(long *)(in_stack_000000b8 + 0x148);
            lVar34 = FUN_036cbb80(*(long *)(in_stack_000000b0 + 0xe0),0);
            if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            fVar40 = (float)FUN_036dc9e4(lVar34,0);
            fVar47 = fVar46;
            fVar42 = fVar48;
            lVar34 = FUN_037016dc(uVar25,0);
            if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar34 = FUN_036cbb80(lVar34,0);
            if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar24 = FUN_036dc9e4(lVar34,0);
            if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(uint *)(lVar30 + 0x18) <= uVar31) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            uVar18 = iVar27 + uVar18;
            fVar46 = (fVar46 - fVar47) * (fVar46 - fVar47);
            param_2 = (ulong)(uint)fVar46;
            fVar48 = (fVar48 - fVar42) * (fVar48 - fVar42);
            param_3 = (ulong)(uint)fVar48;
            *(float *)(lVar30 + uVar31 * 4 + 0x20) =
                 fVar48 + (fVar40 - extraout_s0) * (fVar40 - extraout_s0) + fVar46;
          }
          uVar31 = uVar31 + 1;
        } while (uVar31 != (uVar38 & 0xffffffff));
      }
      plVar5 = (long *)(in_stack_000000b8 + 0x150);
      if ((*(long *)(in_stack_000000b8 + 0x150) == 0) ||
         (*(int *)(*(long *)(in_stack_000000b8 + 0x150) + 0x18) < (int)uVar18)) {
        lVar34 = FUN_01ab6a94(*(undefined8 *)Mono_CSharp_ProxyMethodContext_TypeInfo,uVar18);
        *plVar5 = lVar34;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5);
      }
      puVar13 = UnityEngine_InputSystem_ProximitySensor_TypeInfo;
      lVar34 = *(long *)(in_stack_000000b8 + 0x140);
      if (lVar34 == 0) {
LAB_0342d91c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar24 = 0;
      lVar30 = 0x20;
      while (lVar37 = *plVar5, (long)uVar24 < (long)*(int *)(lVar34 + 0x18)) {
        FUN_02215a88(lVar34,uVar24 & 0xffffffff,&stack0x00000180,*(undefined8 *)puVar13);
        if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar37 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        puVar8 = (undefined8 *)(lVar37 + lVar30);
        lVar30 = lVar30 + 0x1c;
        *(ulong *)((long)puVar8 + 0x14) = CONCAT44(uStack0000000000000198,uStack0000000000000194);
        *(ulong *)((long)puVar8 + 0xc) = CONCAT44(uStack0000000000000190,uStack000000000000018c);
        puVar8[1] = CONCAT44(uStack000000000000018c,uStack0000000000000188);
        *puVar8 = in_stack_00000180;
        uVar24 = uVar24 + 1;
        lVar34 = *(long *)(in_stack_000000b8 + 0x140);
        in_stack_00000270 = in_stack_00000180;
        if (lVar34 == 0) goto LAB_0342d91c;
      }
      if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar28 = (uint)*(undefined8 *)(lVar37 + 0x18);
      if ((long)(int)uVar18 < (long)(int)uVar28) {
        lVar34 = (long)(int)uVar18;
        puVar32 = (undefined4 *)(lVar37 + lVar34 * 0x1c + 0x28);
        do {
          if (uVar28 <= (uint)lVar34) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar34 = lVar34 + 1;
          *puVar32 = 0;
          puVar32 = puVar32 + 7;
        } while (lVar34 < (int)uVar28);
      }
      uVar25 = FUN_0342cc4c(in_stack_000000b8,lVar37,0,uVar18);
      if (*(char *)(in_stack_000000b8 + 0xe0) == '\0') {
        if (*(int *)(*(long *)PTR_DAT_03cd9310 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar16 = FUN_03417f74(0);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar25 = FUN_0276c214(uVar18,uVar16,0);
        uVar18 = (uint)uVar25;
      }
      if ((int)uVar18 < 1) {
        lVar34 = *plVar5;
        if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      else {
        do {
          uVar25 = FUN_0342cef4(uVar25,plVar5,uVar18,uVar43 & 0xffffffff);
          lVar34 = *plVar5;
          if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar30 = (long)(int)uVar18 + -1;
          if (*(uint *)(lVar34 + 0x18) <= (uint)lVar30) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar37 = lVar34 + lVar30 * 0x1c;
          iVar27 = 8;
          if (*(char *)(lVar37 + 0x2c) != '\0') {
            iVar27 = 0x10;
          }
          if (iVar27 * (int)uVar25 <= *(int *)(lVar37 + 0x28)) break;
          iVar27 = -6;
          if (*(char *)(lVar34 + lVar30 * 0x1c + 0x2d) == '\0') {
            iVar27 = -1;
          }
          uVar18 = iVar27 + uVar18;
        } while (0 < (int)uVar18);
      }
      lVar30 = (long)(int)uVar18;
      uVar28 = (uint)*(undefined8 *)(lVar34 + 0x18);
      if ((long)(int)uVar18 < (long)(int)uVar28) {
        puVar32 = (undefined4 *)(lVar34 + lVar30 * 0x1c + 0x28);
        lVar37 = lVar30;
        do {
          if (uVar28 <= (uint)lVar37) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar37 = lVar37 + 1;
          *puVar32 = 0;
          puVar32 = puVar32 + 7;
        } while (lVar37 < (int)uVar28);
      }
      lVar37 = *(long *)(in_stack_000000b8 + 0x158);
      if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar9 = *(uint *)(lVar37 + 0x18);
      if (0 < (long)((ulong)uVar9 << 0x20)) {
        uVar24 = 0;
        do {
          if (uVar9 <= uVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(undefined4 *)(lVar37 + 0x20 + uVar24 * 4) = 0xffffffff;
          uVar24 = uVar24 + 1;
        } while ((long)uVar24 < (long)(int)uVar9);
      }
      for (uVar12 = uVar18 - 1; -1 < (int)uVar12; uVar12 = uVar12 - 1) {
        if (uVar28 <= uVar18 - 1) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar11 = *(uint *)(lVar34 + (ulong)uVar12 * 0x1c + 0x20);
        if (uVar9 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(uint *)(lVar37 + (long)(int)uVar11 * 4 + 0x20) = uVar12;
      }
      FUN_0342cf7c(in_stack_000000b8,uVar43 & 0xffffffff,lVar30);
      plVar6 = (long *)(in_stack_000000b8 + 0x108);
      if ((*(long *)(in_stack_000000b8 + 0x108) == 0) ||
         (*(int *)(*(long *)(in_stack_000000b8 + 0x108) + 0x18) < (int)uVar18)) {
        lVar34 = FUN_01ab6a94(*(undefined8 *)Fusion_Ptr_TypeInfo,lVar30);
        *plVar6 = lVar34;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      plVar7 = (long *)(in_stack_000000b8 + 0x138);
      if ((*(long *)(in_stack_000000b8 + 0x138) == 0) ||
         ((*(char *)(in_stack_000000b8 + 0xe0) != '\0' &&
          (*(int *)(*(long *)(in_stack_000000b8 + 0x138) + 0x18) < (int)uVar18)))) {
        lVar34 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc8b40,lVar30);
        *plVar7 = lVar34;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      puVar13 = UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
      if (0 < (int)uStack0000000000000064) {
        uVar43 = 0;
        do {
          lVar30 = *(long *)puVar13;
          lVar34 = *(long *)(in_stack_000000b8 + 0x130);
          if (*(int *)(lVar30 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar30 = *(long *)puVar13;
          }
          if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar34 + 0x18) <= uVar43) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          uVar25 = **(undefined8 **)(lVar30 + 0xb8);
          lVar34 = lVar34 + uVar43 * 0x10;
          uVar43 = uVar43 + 1;
          *(undefined8 *)(lVar34 + 0x28) = (*(undefined8 **)(lVar30 + 0xb8))[1];
          *(undefined8 *)(lVar34 + 0x20) = uVar25;
        } while (uStack0000000000000064 != uVar43);
      }
      if (0 < (int)uVar22) {
        uVar43 = 0;
        iVar27 = 0;
        cVar10 = *(char *)(in_stack_000000b0 + 0x284);
        uVar22 = 0;
        lVar34 = in_stack_000000b0 + 8;
        do {
          uVar25 = FUN_01fb3ff4(uVar36,uVar38,uVar43 & 0xffffffff,
                                *(undefined8 *)
                                 System_Runtime_Remoting_Proxies_ProxyAttribute_TypeInfo);
          if (uVar43 != *puVar4) {
            lVar30 = *plVar3;
            if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar28 = uVar22 + 1;
            if ((int)*(uint *)(lVar30 + 0x18) <= (int)uVar22) goto LAB_0342e234;
            if (*(uint *)(lVar30 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            lVar37 = (long)(int)uVar22;
            *(int *)(lVar30 + lVar37 * 4 + 0x20) = (int)uVar43;
            lVar30 = *plVar2;
            if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(uint *)(lVar30 + 0x18) <= uVar43) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            *(uint *)(lVar30 + uVar43 * 4 + 0x20) = uVar22;
            if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (((int)uStack0000000000000064 <= (int)uVar22) ||
               ((int)uVar18 <= *(int *)(*(long *)(in_stack_000000b8 + 0x120) + 0x18)))
            goto LAB_0342e234;
            uVar26 = FUN_03701768(uVar25,0);
            iVar19 = (int)uVar26;
            iVar17 = 6;
            if (iVar19 != 2) {
              iVar17 = 0;
            }
            lVar30 = *(long *)(in_stack_000000b8 + 0x120);
            if (iVar19 == 0) {
              iVar17 = 1;
            }
            if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(int *)(lVar30 + 0x18) + iVar17 <= (int)uVar18) {
LAB_0342ddb8:
              if (iVar17 != 0) {
                if (lVar30 == 0) {
LAB_0342e73c:
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                iVar41 = *(int *)(lVar30 + 0x18);
                iVar39 = 0;
                iVar21 = 0;
                do {
                  uVar9 = *(uint *)(lVar30 + 0x18);
                  lVar30 = (long)(int)uVar9;
                  uVar24 = FUN_036f60c4(lVar34,uVar43 & 0xffffffff,&stack0x00000378,0);
                  if ((((uVar24 & 1) != 0) && (*(char *)(in_stack_000000b0 + 0x278) != '\0')) &&
                     (uVar24 = FUN_0342ed34(uVar24,puVar4,uVar43 & 0xffffffff), (uVar24 & 1) != 0))
                  {
                    lVar35 = *(long *)(in_stack_000000b8 + 0x158);
                    if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    if (*(uint *)(lVar35 + 0x18) <= uVar43) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c44();
                    }
                    uVar12 = *(uint *)(lVar35 + uVar43 * 4 + 0x20);
                    if (uVar12 != 0xffffffff) {
                      if (iVar19 == 0) {
                        lVar35 = *plVar6;
                        if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        if (*(uint *)(lVar35 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo +
                                    0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        lVar29 = lVar35 + lVar30 * 0x1c8;
                        uVar24 = FUN_03407fec(lVar34,in_stack_000000b0 + 600,uVar43 & 0xffffffff,
                                              &stack0x00000330,lVar29 + 0x20,lVar29 + 0x60,
                                              lVar35 + lVar30 * 0x1c8 + 0xec,0);
                        if ((uVar24 & 1) != 0) {
                          if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c3c();
                          }
                          FUN_01b5f01c(*(long *)(in_stack_000000b8 + 0x120),&stack0x00000270,
                                       *(undefined8 *)PTR_DAT_03cbe508);
                          if (*(long *)(in_stack_000000b8 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c3c();
                          }
                          FUN_01b5f01c(*(long *)(in_stack_000000b8 + 0x128),&stack0x00000270,
                                       *(undefined8 *)PTR_DAT_03cbe508);
                          lVar35 = FUN_037016dc(uVar25,0);
                          if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c3c();
                          }
                          uVar16 = FUN_036a042c(lVar35,0);
                          if (cVar10 == '\0') {
                            bVar15 = false;
                          }
                          else {
                            iVar21 = FUN_036a03ac(lVar35,0);
                            bVar15 = iVar21 == 2;
                          }
                          if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo +
                                      0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar23 = FUN_034092a0(lVar35,bVar15,0);
                          lVar35 = *plVar7;
                          if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c3c();
                          }
                          if (*(uint *)(lVar35 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c44();
                          }
                          lVar35 = lVar35 + lVar30 * 0x40;
                          *(undefined8 *)(lVar35 + 0x48) = 0;
                          *(undefined8 *)(lVar35 + 0x40) = 0;
                          *(undefined8 *)(lVar35 + 0x58) = 0;
                          *(undefined8 *)(lVar35 + 0x50) = 0;
                          *(undefined8 *)(lVar35 + 0x28) = 0;
                          *(undefined8 *)(lVar35 + 0x20) = 0;
                          *(undefined8 *)(lVar35 + 0x38) = 0;
                          *(undefined8 *)(lVar35 + 0x30) = 0;
                          lVar30 = *(long *)(in_stack_000000b8 + 0x130);
                          if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c3c();
                          }
                          if (*(uint *)(lVar30 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c44();
                          }
                          lVar30 = lVar30 + lVar37 * 0x10;
                          *(undefined4 *)(lVar30 + 0x20) = uVar16;
                          *(undefined4 *)(lVar30 + 0x24) = uVar23;
                          *(undefined4 *)(lVar30 + 0x28) = 0;
LAB_0342e1f0:
                          in_stack_00000270 = 0;
                          iVar21 = 1;
                          *(float *)(lVar30 + 0x2c) = (float)iVar41;
                        }
                      }
                      else if (iVar19 == 2) {
                        lVar35 = *plVar5;
                        if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        if (*(uint *)(lVar35 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        uVar16 = *(undefined4 *)(lVar35 + (long)(int)uVar12 * 0x1c + 0x38);
                        lVar35 = FUN_037016dc(uVar25,0);
                        if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        iVar20 = FUN_036a03ac(lVar35,0);
                        if (*(int *)(*(long *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo
                                    + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar26 = FUN_0342cb28(uVar16,iVar20 == 2);
                        lVar35 = *plVar6;
                        if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        if (*(uint *)(lVar35 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo +
                                    0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        lVar29 = lVar35 + lVar30 * 0x1c8;
                        uVar24 = FUN_034080f8(uVar26,lVar34,in_stack_000000b0 + 600,
                                              uVar43 & 0xffffffff,iVar39,&stack0x000002f0,
                                              lVar29 + 0x20,lVar29 + 0x60,
                                              lVar35 + lVar30 * 0x1c8 + 0xec);
                        if ((uVar24 & 1) != 0) {
                          if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c3c();
                          }
                          FUN_01b5f01c(*(long *)(in_stack_000000b8 + 0x120),&stack0x00000270,
                                       *(undefined8 *)PTR_DAT_03cbe508);
                          if (*(long *)(in_stack_000000b8 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c3c();
                          }
                          FUN_01b5f01c(*(long *)(in_stack_000000b8 + 0x128),&stack0x00000270,
                                       *(undefined8 *)PTR_DAT_03cbe508);
                          lVar35 = FUN_037016dc(uVar25,0);
                          if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c3c();
                          }
                          uVar16 = FUN_036a042c(lVar35,0);
                          if (cVar10 == '\0') {
                            bVar15 = false;
                          }
                          else {
                            iVar21 = FUN_036a03ac(lVar35,0);
                            bVar15 = iVar21 == 2;
                          }
                          if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo +
                                      0xe0) == 0) {
                            thunk_FUN_01a58e78();
                          }
                          uVar23 = FUN_034092a0(lVar35,bVar15,0);
                          lVar35 = *plVar7;
                          if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c3c();
                          }
                          if (*(uint *)(lVar35 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c44();
                          }
                          lVar35 = lVar35 + lVar30 * 0x40;
                          *(undefined8 *)(lVar35 + 0x48) = 0;
                          *(undefined8 *)(lVar35 + 0x40) = 0;
                          *(undefined8 *)(lVar35 + 0x58) = 0;
                          *(undefined8 *)(lVar35 + 0x50) = 0;
                          *(undefined8 *)(lVar35 + 0x28) = 0;
                          *(undefined8 *)(lVar35 + 0x20) = 0;
                          *(undefined8 *)(lVar35 + 0x38) = 0;
                          *(undefined8 *)(lVar35 + 0x30) = 0;
                          lVar30 = *(long *)(in_stack_000000b8 + 0x130);
                          if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c3c();
                          }
                          if (*(uint *)(lVar30 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
                            FUN_01ab6c44();
                          }
                          lVar30 = lVar30 + lVar37 * 0x10;
                          *(undefined4 *)(lVar30 + 0x20) = uVar16;
                          *(undefined4 *)(lVar30 + 0x24) = uVar23;
                          *(undefined4 *)(lVar30 + 0x28) = 0x3f800000;
                          goto LAB_0342e1f0;
                        }
                      }
                    }
                  }
                  if (iVar17 + -1 == iVar39) goto LAB_0342e224;
                  iVar39 = iVar39 + 1;
                  lVar30 = *(long *)(in_stack_000000b8 + 0x120);
                  if (lVar30 == 0) goto LAB_0342e73c;
                } while( true );
              }
              iVar21 = 0;
LAB_0342e224:
              iVar27 = iVar27 + iVar21;
              goto LAB_0342e234;
            }
            uVar24 = FUN_0342ed34(uVar26,puVar4,uVar43 & 0xffffffff);
            if ((uVar24 & 1) == 0) {
              lVar30 = *(long *)(in_stack_000000b8 + 0x120);
              if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              goto LAB_0342ddb8;
            }
            break;
          }
          lVar30 = *plVar2;
          if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar30 + 0x18) <= uVar43) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(undefined4 *)(lVar30 + uVar43 * 4 + 0x20) = 0xffffffff;
          uVar28 = uVar22;
LAB_0342e234:
          uVar22 = uVar28;
          uVar43 = uVar43 + 1;
        } while (uVar43 != (uVar38 & 0xffffffff));
        if (iVar27 != 0) {
          if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar22 = *(uint *)(*(long *)(in_stack_000000b8 + 0x120) + 0x18);
          if ((int)uVar18 < 1) {
            uVar16 = 0;
            uVar43 = 0;
          }
          else {
            lVar34 = *plVar5;
            if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar24 = 0;
            piVar33 = (int *)(lVar34 + 0x38);
            uVar43 = 0;
            do {
              if (*(uint *)(lVar34 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              piVar1 = piVar33 + -2;
              iVar27 = *piVar33;
              uVar24 = uVar24 + 1;
              piVar33 = piVar33 + 7;
              uVar43 = NEON_smax(uVar43,CONCAT44(iVar27 + (int)((ulong)*(undefined8 *)piVar1 >> 0x20
                                                               ),iVar27 + (int)*(undefined8 *)piVar1
                                                ),4);
            } while (uVar18 != uVar24);
            uVar16 = (undefined4)(uVar43 >> 0x20);
            uVar43 = uVar43 & 0xffffffff;
          }
          uVar23 = FUN_036c1d60(uVar43,0);
          *(undefined4 *)(in_stack_000000b8 + 0x168) = uVar23;
          iVar17 = FUN_036c1d60(uVar16,0);
          iVar27 = *(int *)(in_stack_000000b8 + 0x168);
          *(int *)(in_stack_000000b8 + 0x16c) = iVar17;
          puVar14 = PTR_DAT_03cbec20;
          puVar13 = PTR_DAT_03cbe590;
          fVar46 = DAT_00d38bdc;
          if (0 < (int)uVar22) {
            uVar43 = 0;
            lVar34 = 0x20;
            lVar30 = 0xe0;
            do {
              if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              FUN_02215a88(*(long *)(in_stack_000000b8 + 0x120),uVar43 & 0xffffffff,&stack0x00000270
                           ,*(undefined8 *)puVar13);
              lVar37 = *(long *)(in_stack_000000b8 + 0x130);
              if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uVar18 = (uint)in_stack_00000270;
              lVar35 = (long)(int)uVar18;
              if (*(uint *)(lVar37 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              fVar48 = *(float *)(lVar37 + lVar35 * 0x10 + 0x20);
              if (DAT_0411f262 == '\0') {
                FUN_01ab69ac(puVar14);
                DAT_0411f262 = '\x01';
              }
              fVar47 = ABS(fVar48);
              if (fVar47 <= 0.0) {
                fVar47 = 0.0;
              }
              fVar47 = fVar47 * fVar46;
              fVar42 = **(float **)(*(long *)puVar14 + 0xb8) * 8.0;
              if (fVar47 <= fVar42) {
                fVar47 = fVar42;
              }
              if (fVar47 <= ABS(0.0 - fVar48)) {
                lVar37 = *(long *)(in_stack_000000b8 + 0x130);
                if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                if (*(uint *)(lVar37 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                fVar47 = *(float *)(lVar37 + lVar35 * 0x10 + 0x2c);
                fVar48 = ABS(fVar47);
                if (fVar48 <= 1.0) {
                  fVar48 = 1.0;
                }
                fVar48 = fVar48 * fVar46;
                if (fVar48 <= fVar42) {
                  fVar48 = fVar42;
                }
                if (fVar48 <= ABS(-1.0 - fVar47)) {
                  lVar37 = *plVar3;
                  if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  if (*(uint *)(lVar37 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  lVar29 = *(long *)(in_stack_000000b8 + 0x158);
                  if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  uVar28 = *(uint *)(lVar37 + lVar35 * 4 + 0x20);
                  if (*(uint *)(lVar29 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  if (*(long *)(in_stack_000000b8 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  iVar19 = *(int *)(lVar29 + (long)(int)uVar28 * 4 + 0x20);
                  FUN_02215a88(*(long *)(in_stack_000000b8 + 0x128),uVar43 & 0xffffffff,
                               &stack0x00000270,*(undefined8 *)puVar13);
                  lVar37 = *plVar5;
                  if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  uVar18 = uVar18 + iVar19;
                  if (*(uint *)(lVar37 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  lVar37 = lVar37 + (long)(int)uVar18 * 0x1c;
                  iVar19 = *(int *)(lVar37 + 0x30);
                  iVar39 = *(int *)(lVar37 + 0x34);
                  iVar21 = *(int *)(lVar37 + 0x38);
                  if (DAT_0411f171 == '\0') {
                    FUN_01ab69ac(PTR_DAT_03cbe2f0);
                    DAT_0411f171 = '\x01';
                  }
                  lVar37 = *(long *)(*(long *)PTR_DAT_03cbe2f0 + 0xb8);
                  uVar49 = *(undefined8 *)(lVar37 + 0x58);
                  uVar44 = *(undefined8 *)(lVar37 + 0x68);
                  uVar25 = *(undefined8 *)(lVar37 + 0x60);
                  uVar36 = *(undefined8 *)(lVar37 + 0x78);
                  uVar45 = ((undefined8 *)((ulong)&stack0x00000270 | 4))[1];
                  uVar26 = *(undefined8 *)((ulong)&stack0x00000270 | 4);
                  lVar37 = *plVar6;
                  if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  if (*(uint *)(lVar37 + 0x18) <= uVar43) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  piVar33 = (int *)(lVar37 + lVar30);
                  *piVar33 = iVar19;
                  piVar33[1] = iVar39;
                  piVar33[2] = iVar21;
                  lVar37 = *plVar7;
                  in_stack_000001c0 = uVar49;
                  in_stack_000001c8 = uVar25;
                  in_stack_000001d0 = uVar44;
                  in_stack_000001e0 = uVar26;
                  in_stack_000001e8 = uVar45;
                  if (lVar37 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  if (*(uint *)(lVar37 + 0x18) <= uVar43) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  in_stack_00000150._4_4_ = (float)iVar21;
                  puVar8 = (undefined8 *)(lVar37 + lVar34);
                  in_stack_00000140 = (1.0 / (float)iVar27) * in_stack_00000150._4_4_;
                  in_stack_00000108 = puVar8[1];
                  in_stack_00000270 = *puVar8;
                  in_stack_00000118 = puVar8[3];
                  in_stack_00000110 = puVar8[2];
                  in_stack_00000128 = puVar8[5];
                  in_stack_00000120 = puVar8[4];
                  in_stack_00000138 = puVar8[7];
                  in_stack_00000130 = puVar8[6];
                  ((undefined8 *)((ulong)&stack0x00000140 | 4))[1] = uVar45;
                  *(undefined8 *)((ulong)&stack0x00000140 | 4) = uVar26;
                  in_stack_00000150._4_4_ = (1.0 / (float)iVar17) * in_stack_00000150._4_4_;
                  fStack0000000000000170 = (1.0 / (float)iVar27) * (float)iVar19;
                  fStack0000000000000174 = (1.0 / (float)iVar17) * (float)iVar39;
                  in_stack_00000100 = in_stack_00000270;
                  in_stack_00000178 = uVar36;
                  in_stack_00000158 = uVar49;
                  in_stack_00000160 = uVar25;
                  in_stack_00000168 = uVar44;
                  FUN_036bd894(&stack0x00000180,&stack0x00000140,&stack0x00000100,0);
                  if (*(uint *)(lVar37 + 0x18) <= uVar43) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  puVar8[5] = in_stack_000001a8;
                  puVar8[4] = in_stack_000001a0;
                  puVar8[7] = in_stack_000001b8;
                  puVar8[6] = in_stack_000001b0;
                  puVar8[1] = CONCAT44(uStack000000000000018c,uStack0000000000000188);
                  *puVar8 = in_stack_00000180;
                  puVar8[3] = CONCAT44(uStack000000000000019c,uStack0000000000000198);
                  puVar8[2] = CONCAT44(uStack0000000000000194,uStack0000000000000190);
                }
              }
              uVar43 = uVar43 + 1;
              lVar34 = lVar34 + 0x40;
              lVar30 = lVar30 + 0x1c8;
            } while (uVar22 != uVar43);
            iVar27 = *(int *)(in_stack_000000b8 + 0x168);
            iVar17 = *(int *)(in_stack_000000b8 + 0x16c);
          }
          if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar22 = 1;
          FUN_034091a4(0,in_stack_000000b8 + 0xe8,iVar27,iVar17,0x10,1,
                       *(undefined8 *)Mono_CSharp_PropertySpec_TypeInfo,0);
          *(float *)(in_stack_000000b8 + 0x100) =
               *(float *)(in_stack_000000b0 + 0x1a4) * *(float *)(in_stack_000000b0 + 0x1a4);
          uVar16 = *(undefined4 *)(in_stack_000000b0 + 0x274);
          *(undefined1 *)(in_stack_000000b8 + 0xf0) = 0;
          *(undefined1 *)(in_stack_000000b8 + 0x42) = 1;
          *(undefined4 *)(in_stack_000000b8 + 0x104) = uVar16;
          goto LAB_0342e6e8;
        }
      }
      uVar22 = FUN_0342eb14(in_stack_000000b8,in_stack_000000b0);
      goto LAB_0342e6e8;
    }
    uVar22 = FUN_0342eb14(in_stack_000000b8);
  }
LAB_0342e6e8:
  FUN_033a2194(&stack0x000003c8,0);
  return uVar22 & 1;
}


