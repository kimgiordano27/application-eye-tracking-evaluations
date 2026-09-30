/*
FUNCTION_NAME: Unity.Services.Leaderboards.Internal.Models.GetLeaderboardScores400OneOf$$DeserializeIntoActualObject
ENTRY_POINT: 0342d500
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint Unity_Services_Leaderboards_Internal_Models_GetLeaderboardScores400OneOf__DeserializeIntoActualObject
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,
               undefined8 param_5)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  undefined4 *puVar31;
  int *piVar32;
  undefined8 *unaff_x19;
  long lVar33;
  undefined8 unaff_x22;
  long lVar34;
  long lVar35;
  ulong unaff_x28;
  int iVar36;
  float fVar37;
  float extraout_s0;
  int iVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  uint uStack0000000000000064;
  long *in_stack_00000070;
  undefined4 in_stack_00000080;
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
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  
  *(undefined8 *)(in_stack_000000b8 + 0x148) = param_5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000000b8 + 0x148);
  uVar23 = FUN_01ab6a94(*unaff_x19,unaff_x28 & 0xffffffff);
  *(undefined8 *)(in_stack_000000b8 + 0x158) = uVar23;
  uVar24 = GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                     (in_stack_000000b8 + 0x158);
  uVar21 = (uint)unaff_x28;
  uStack0000000000000064 = uVar21;
  if (*(char *)(in_stack_000000b8 + 0xe0) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_03cd9310 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_03417f74(0);
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar24 = FUN_0276c214(unaff_x28 & 0xffffffff,uVar15,0);
    uStack0000000000000064 = (uint)uVar24;
  }
  if (*(long *)(in_stack_000000b8 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar2 = (long *)(in_stack_000000b8 + 0x118);
  if (*(int *)(*(long *)(in_stack_000000b8 + 0x118) + 0x18) < (int)uStack0000000000000064) {
    lVar25 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbe888,uStack0000000000000064);
    *plVar2 = lVar25;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2);
    uVar23 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc3470,uStack0000000000000064);
    *(undefined8 *)(in_stack_000000b8 + 0x130) = uVar23;
    uVar24 = GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                       (in_stack_000000b8 + 0x130);
  }
  lVar25 = *(long *)(in_stack_000000b8 + 0x148);
  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar17 = *(uint *)(lVar25 + 0x18);
  if (0 < (long)((ulong)uVar17 << 0x20)) {
    uVar30 = 0;
    do {
      if (uVar17 <= uVar30) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined4 *)(lVar25 + 0x20 + uVar30 * 4) = 0x7f7fffff;
      uVar30 = uVar30 + 1;
    } while ((long)uVar30 < (long)(int)uVar17);
  }
  puVar13 = System_Runtime_Remoting_ProviderData_TypeInfo;
  puVar12 = PTR_DAT_03cbe590;
  puVar3 = (uint *)(in_stack_000000b0 + 0x230);
  if ((int)uVar21 < 1) {
    uVar17 = 0;
  }
  else {
    uVar30 = 0;
    uVar17 = 0;
    do {
      if ((uVar30 != *puVar3) &&
         (uVar24 = FUN_0342ed34(uVar24,puVar3,uVar30 & 0xffffffff), (uVar24 & 1) != 0)) {
        uVar23 = FUN_01fb3ff4(unaff_x22,unaff_x28,uVar30 & 0xffffffff,
                              *(undefined8 *)System_Runtime_Remoting_Proxies_ProxyAttribute_TypeInfo
                             );
        iVar16 = FUN_03701768(uVar23,0);
        fVar45 = (float)param_3;
        fVar43 = (float)param_2;
        iVar27 = 6;
        if (iVar16 != 2) {
          iVar27 = 0;
        }
        if (iVar16 == 0) {
          iVar27 = 1;
        }
        if (iVar27 != 0) {
          iVar16 = 0;
          do {
            if (*(long *)(in_stack_000000b0 + 0x298) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar35 = *(long *)(in_stack_000000b8 + 0x140);
            FUN_02215a88(*(long *)(in_stack_000000b0 + 0x298),uVar30 & 0xffffffff,&stack0x00000270,
                         *(undefined8 *)puVar12);
            lVar25 = FUN_037016dc(uVar23,0);
            if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_036a03ac(lVar25,0);
            FUN_03701768(uVar23,0);
            if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_01b5f01c(lVar35,&stack0x000002d0,*(undefined8 *)puVar13);
            fVar45 = (float)param_3;
            fVar43 = (float)param_2;
            iVar16 = iVar16 + 1;
          } while (iVar27 != iVar16);
        }
        if (*(long *)(in_stack_000000b0 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar35 = *(long *)(in_stack_000000b8 + 0x148);
        lVar25 = FUN_036cbb80(*(long *)(in_stack_000000b0 + 0xe0),0);
        if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        fVar37 = (float)FUN_036dc9e4(lVar25,0);
        fVar44 = fVar43;
        fVar39 = fVar45;
        lVar25 = FUN_037016dc(uVar23,0);
        if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar25 = FUN_036cbb80(lVar25,0);
        if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar24 = FUN_036dc9e4(lVar25,0);
        if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar35 + 0x18) <= uVar30) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar17 = iVar27 + uVar17;
        fVar43 = (fVar43 - fVar44) * (fVar43 - fVar44);
        param_2 = (ulong)(uint)fVar43;
        fVar45 = (fVar45 - fVar39) * (fVar45 - fVar39);
        param_3 = (ulong)(uint)fVar45;
        *(float *)(lVar35 + uVar30 * 4 + 0x20) =
             fVar45 + (fVar37 - extraout_s0) * (fVar37 - extraout_s0) + fVar43;
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != (unaff_x28 & 0xffffffff));
  }
                    /* try { // try from 0342d82c to 0352d92f has its CatchHandler @ 0342d82c
                       catch() { ... } // from try @ 0342d82c with catch @ 0342d82c
                       catch() { ... } // from try @ 0342d948 with catch @ 0342d82c
                       catch() { ... } // from try @ 0342dad0 with catch @ 0342d82c
                       catch() { ... } // from try @ 0342db34 with catch @ 0342d82c
                       catch() { ... } // from try @ 0342db98 with catch @ 0342d82c
                       catch() { ... } // from try @ 0342dbf4 with catch @ 0342d82c */
  plVar4 = (long *)(in_stack_000000b8 + 0x150);
  if ((*(long *)(in_stack_000000b8 + 0x150) == 0) ||
     (*(int *)(*(long *)(in_stack_000000b8 + 0x150) + 0x18) < (int)uVar17)) {
    lVar25 = FUN_01ab6a94(*(undefined8 *)Mono_CSharp_ProxyMethodContext_TypeInfo,uVar17);
    *plVar4 = lVar25;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4);
  }
  puVar12 = UnityEngine_InputSystem_ProximitySensor_TypeInfo;
  lVar25 = *(long *)(in_stack_000000b8 + 0x140);
  if (lVar25 == 0) {
LAB_0342d91c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar24 = 0;
  lVar35 = 0x20;
  while (lVar34 = *plVar4, (long)uVar24 < (long)*(int *)(lVar25 + 0x18)) {
    FUN_02215a88(lVar25,uVar24 & 0xffffffff,&stack0x00000180,*(undefined8 *)puVar12);
    if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar34 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    puVar7 = (undefined8 *)(lVar34 + lVar35);
    lVar35 = lVar35 + 0x1c;
    *(ulong *)((long)puVar7 + 0x14) = CONCAT44(uStack0000000000000198,uStack0000000000000194);
    *(ulong *)((long)puVar7 + 0xc) = CONCAT44(uStack0000000000000190,uStack000000000000018c);
    puVar7[1] = CONCAT44(uStack000000000000018c,uStack0000000000000188);
    *puVar7 = in_stack_00000180;
    uVar24 = uVar24 + 1;
    lVar25 = *(long *)(in_stack_000000b8 + 0x140);
    in_stack_00000270 = in_stack_00000180;
    if (lVar25 == 0) goto LAB_0342d91c;
  }
  if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar28 = (uint)*(undefined8 *)(lVar34 + 0x18);
                    /* try { // try from 0342d930 to 0352d947 has its CatchHandler @ 0342db38 */
  if ((long)(int)uVar17 < (long)(int)uVar28) {
    lVar25 = (long)(int)uVar17;
                    /* try { // try from 0342d948 to 0352d9bb has its CatchHandler @ 0342d82c */
    puVar31 = (undefined4 *)(lVar34 + lVar25 * 0x1c + 0x28);
    do {
      if (uVar28 <= (uint)lVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar25 = lVar25 + 1;
      *puVar31 = 0;
      puVar31 = puVar31 + 7;
    } while (lVar25 < (int)uVar28);
  }
  uVar23 = FUN_0342cc4c(in_stack_000000b8,lVar34,0,uVar17);
  if (*(char *)(in_stack_000000b8 + 0xe0) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_03cd9310 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_03417f74(0);
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                    /* try { // try from 0342d9bc to 0352d9f3 has its CatchHandler @ 0342db50 */
      thunk_FUN_01a58e78();
    }
    uVar23 = FUN_0276c214(uVar17,uVar15,0);
    uVar17 = (uint)uVar23;
  }
  if ((int)uVar17 < 1) {
    lVar25 = *plVar4;
    if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  else {
    do {
      uVar23 = FUN_0342cef4(uVar23,plVar4,uVar17,in_stack_00000080);
      lVar25 = *plVar4;
                    /* try { // try from 0342da0c to 0352da17 has its CatchHandler @ 0342db64 */
      if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar35 = (long)(int)uVar17 + -1;
                    /* try { // try from 0342da20 to 0352da2f has its CatchHandler @ 0342db5c */
      if (*(uint *)(lVar25 + 0x18) <= (uint)lVar35) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar34 = lVar25 + lVar35 * 0x1c;
      iVar27 = 8;
      if (*(char *)(lVar34 + 0x2c) != '\0') {
        iVar27 = 0x10;
      }
                    /* try { // try from 0342da3c to 0352da43 has its CatchHandler @ 0342db58 */
      if (iVar27 * (int)uVar23 <= *(int *)(lVar34 + 0x28)) break;
                    /* try { // try from 0342da48 to 0352da4f has its CatchHandler @ 0342db54 */
      iVar27 = -6;
      if (*(char *)(lVar25 + lVar35 * 0x1c + 0x2d) == '\0') {
        iVar27 = -1;
      }
      uVar17 = iVar27 + uVar17;
    } while (0 < (int)uVar17);
  }
  lVar35 = (long)(int)uVar17;
  uVar28 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if ((long)(int)uVar17 < (long)(int)uVar28) {
    puVar31 = (undefined4 *)(lVar25 + lVar35 * 0x1c + 0x28);
    lVar34 = lVar35;
    do {
      if (uVar28 <= (uint)lVar34) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar34 = lVar34 + 1;
      *puVar31 = 0;
      puVar31 = puVar31 + 7;
    } while (lVar34 < (int)uVar28);
  }
  lVar34 = *(long *)(in_stack_000000b8 + 0x158);
  if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar8 = *(uint *)(lVar34 + 0x18);
  if (0 < (long)((ulong)uVar8 << 0x20)) {
    uVar24 = 0;
    do {
      if (uVar8 <= uVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined4 *)(lVar34 + 0x20 + uVar24 * 4) = 0xffffffff;
      uVar24 = uVar24 + 1;
    } while ((long)uVar24 < (long)(int)uVar8);
  }
  for (uVar11 = uVar17 - 1; -1 < (int)uVar11; uVar11 = uVar11 - 1) {
    if (uVar28 <= uVar17 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar10 = *(uint *)(lVar25 + (ulong)uVar11 * 0x1c + 0x20);
    if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(uint *)(lVar34 + (long)(int)uVar10 * 4 + 0x20) = uVar11;
  }
  FUN_0342cf7c(in_stack_000000b8,in_stack_00000080,lVar35);
  plVar5 = (long *)(in_stack_000000b8 + 0x108);
  if ((*(long *)(in_stack_000000b8 + 0x108) == 0) ||
     (*(int *)(*(long *)(in_stack_000000b8 + 0x108) + 0x18) < (int)uVar17)) {
    lVar25 = FUN_01ab6a94(*(undefined8 *)Fusion_Ptr_TypeInfo,lVar35);
    *plVar5 = lVar25;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  plVar6 = (long *)(in_stack_000000b8 + 0x138);
  if ((*(long *)(in_stack_000000b8 + 0x138) == 0) ||
     ((*(char *)(in_stack_000000b8 + 0xe0) != '\0' &&
      (*(int *)(*(long *)(in_stack_000000b8 + 0x138) + 0x18) < (int)uVar17)))) {
    lVar25 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc8b40,lVar35);
    *plVar6 = lVar25;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  puVar12 = UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
  if (0 < (int)uStack0000000000000064) {
    uVar24 = 0;
    do {
      lVar35 = *(long *)puVar12;
      lVar25 = *(long *)(in_stack_000000b8 + 0x130);
      if (*(int *)(lVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar35 = *(long *)puVar12;
      }
      if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar25 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar23 = **(undefined8 **)(lVar35 + 0xb8);
      lVar25 = lVar25 + uVar24 * 0x10;
      uVar24 = uVar24 + 1;
      *(undefined8 *)(lVar25 + 0x28) = (*(undefined8 **)(lVar35 + 0xb8))[1];
      *(undefined8 *)(lVar25 + 0x20) = uVar23;
    } while (uStack0000000000000064 != uVar24);
  }
  if (0 < (int)uVar21) {
    uVar24 = 0;
    iVar27 = 0;
    cVar9 = *(char *)(in_stack_000000b0 + 0x284);
    uVar21 = 0;
    lVar25 = in_stack_000000b0 + 8;
    do {
      uVar23 = FUN_01fb3ff4(unaff_x22,unaff_x28,uVar24 & 0xffffffff,
                            *(undefined8 *)System_Runtime_Remoting_Proxies_ProxyAttribute_TypeInfo);
      if (uVar24 != *puVar3) {
        lVar35 = *plVar2;
        if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar28 = uVar21 + 1;
        if ((int)*(uint *)(lVar35 + 0x18) <= (int)uVar21) goto LAB_0342e234;
        if (*(uint *)(lVar35 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar34 = (long)(int)uVar21;
        *(int *)(lVar35 + lVar34 * 4 + 0x20) = (int)uVar24;
        lVar35 = *in_stack_00000070;
        if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar35 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(uint *)(lVar35 + uVar24 * 4 + 0x20) = uVar21;
        if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (((int)uStack0000000000000064 <= (int)uVar21) ||
           ((int)uVar17 <= *(int *)(*(long *)(in_stack_000000b8 + 0x120) + 0x18)))
        goto LAB_0342e234;
        uVar26 = FUN_03701768(uVar23,0);
        iVar18 = (int)uVar26;
        iVar16 = 6;
        if (iVar18 != 2) {
          iVar16 = 0;
        }
        lVar35 = *(long *)(in_stack_000000b8 + 0x120);
        if (iVar18 == 0) {
          iVar16 = 1;
        }
        if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(int *)(lVar35 + 0x18) + iVar16 <= (int)uVar17) {
LAB_0342ddb8:
          if (iVar16 != 0) {
            if (lVar35 == 0) {
LAB_0342e73c:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            iVar38 = *(int *)(lVar35 + 0x18);
            iVar36 = 0;
            iVar20 = 0;
            do {
              uVar8 = *(uint *)(lVar35 + 0x18);
              lVar35 = (long)(int)uVar8;
              uVar30 = FUN_036f60c4(lVar25,uVar24 & 0xffffffff,&stack0x00000378,0);
              if ((((uVar30 & 1) != 0) && (*(char *)(in_stack_000000b0 + 0x278) != '\0')) &&
                 (uVar30 = FUN_0342ed34(uVar30,puVar3,uVar24 & 0xffffffff), (uVar30 & 1) != 0)) {
                lVar33 = *(long *)(in_stack_000000b8 + 0x158);
                if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                if (*(uint *)(lVar33 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                uVar11 = *(uint *)(lVar33 + uVar24 * 4 + 0x20);
                if (uVar11 != 0xffffffff) {
                  if (iVar18 == 0) {
                    lVar33 = *plVar5;
                    if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    if (*(uint *)(lVar33 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c44();
                    }
                    if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo + 0xe0)
                        == 0) {
                      thunk_FUN_01a58e78();
                    }
                    lVar29 = lVar33 + lVar35 * 0x1c8;
                    uVar30 = FUN_03407fec(lVar25,in_stack_000000b0 + 600,uVar24 & 0xffffffff,
                                          &stack0x00000330,lVar29 + 0x20,lVar29 + 0x60,
                                          lVar33 + lVar35 * 0x1c8 + 0xec,0);
                    if ((uVar30 & 1) != 0) {
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
                      lVar33 = FUN_037016dc(uVar23,0);
                      if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      uVar15 = FUN_036a042c(lVar33,0);
                      if (cVar9 == '\0') {
                        bVar14 = false;
                      }
                      else {
                        iVar20 = FUN_036a03ac(lVar33,0);
                        bVar14 = iVar20 == 2;
                      }
                      if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo +
                                  0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar22 = FUN_034092a0(lVar33,bVar14,0);
                      lVar33 = *plVar6;
                      if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(uint *)(lVar33 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      lVar33 = lVar33 + lVar35 * 0x40;
                      *(undefined8 *)(lVar33 + 0x48) = in_stack_00000358;
                      *(undefined8 *)(lVar33 + 0x40) = in_stack_00000350;
                      *(undefined8 *)(lVar33 + 0x58) = in_stack_00000368;
                      *(undefined8 *)(lVar33 + 0x50) = in_stack_00000360;
                      *(undefined8 *)(lVar33 + 0x28) = in_stack_00000338;
                      *(undefined8 *)(lVar33 + 0x20) = in_stack_00000330;
                      *(undefined8 *)(lVar33 + 0x38) = in_stack_00000348;
                      *(undefined8 *)(lVar33 + 0x30) = in_stack_00000340;
                      lVar35 = *(long *)(in_stack_000000b8 + 0x130);
                      if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(uint *)(lVar35 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      lVar35 = lVar35 + lVar34 * 0x10;
                      *(undefined4 *)(lVar35 + 0x20) = uVar15;
                      *(undefined4 *)(lVar35 + 0x24) = uVar22;
                      *(undefined4 *)(lVar35 + 0x28) = 0;
                      in_stack_00000270 = in_stack_00000330;
LAB_0342e1f0:
                      iVar20 = 1;
                      *(float *)(lVar35 + 0x2c) = (float)iVar38;
                    }
                  }
                  else if (iVar18 == 2) {
                    lVar33 = *plVar4;
                    if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    if (*(uint *)(lVar33 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c44();
                    }
                    uVar15 = *(undefined4 *)(lVar33 + (long)(int)uVar11 * 0x1c + 0x38);
                    lVar33 = FUN_037016dc(uVar23,0);
                    if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    iVar19 = FUN_036a03ac(lVar33,0);
                    if (*(int *)(*(long *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo +
                                0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar26 = FUN_0342cb28(uVar15,iVar19 == 2);
                    lVar33 = *plVar5;
                    if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    if (*(uint *)(lVar33 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c44();
                    }
                    if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo + 0xe0)
                        == 0) {
                      thunk_FUN_01a58e78();
                    }
                    lVar29 = lVar33 + lVar35 * 0x1c8;
                    uVar30 = FUN_034080f8(uVar26,lVar25,in_stack_000000b0 + 600,uVar24 & 0xffffffff,
                                          iVar36,&stack0x000002f0,lVar29 + 0x20,lVar29 + 0x60,
                                          lVar33 + lVar35 * 0x1c8 + 0xec);
                    if ((uVar30 & 1) != 0) {
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
                      lVar33 = FUN_037016dc(uVar23,0);
                      if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      uVar15 = FUN_036a042c(lVar33,0);
                      if (cVar9 == '\0') {
                        bVar14 = false;
                      }
                      else {
                        iVar20 = FUN_036a03ac(lVar33,0);
                        bVar14 = iVar20 == 2;
                      }
                      if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo +
                                  0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar22 = FUN_034092a0(lVar33,bVar14,0);
                      lVar33 = *plVar6;
                      if (lVar33 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(uint *)(lVar33 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      lVar33 = lVar33 + lVar35 * 0x40;
                      *(undefined8 *)(lVar33 + 0x48) = in_stack_00000318;
                      *(undefined8 *)(lVar33 + 0x40) = in_stack_00000310;
                      *(undefined8 *)(lVar33 + 0x58) = in_stack_00000328;
                      *(undefined8 *)(lVar33 + 0x50) = in_stack_00000320;
                      *(undefined8 *)(lVar33 + 0x28) = in_stack_000002f8;
                      *(undefined8 *)(lVar33 + 0x20) = in_stack_000002f0;
                      *(undefined8 *)(lVar33 + 0x38) = in_stack_00000308;
                      *(undefined8 *)(lVar33 + 0x30) = in_stack_00000300;
                      lVar35 = *(long *)(in_stack_000000b8 + 0x130);
                      if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(uint *)(lVar35 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      lVar35 = lVar35 + lVar34 * 0x10;
                      *(undefined4 *)(lVar35 + 0x20) = uVar15;
                      *(undefined4 *)(lVar35 + 0x24) = uVar22;
                      *(undefined4 *)(lVar35 + 0x28) = 0x3f800000;
                      in_stack_00000270 = in_stack_000002f0;
                      goto LAB_0342e1f0;
                    }
                  }
                }
              }
              if (iVar16 + -1 == iVar36) goto LAB_0342e224;
              iVar36 = iVar36 + 1;
              lVar35 = *(long *)(in_stack_000000b8 + 0x120);
              if (lVar35 == 0) goto LAB_0342e73c;
            } while( true );
          }
          iVar20 = 0;
LAB_0342e224:
          iVar27 = iVar27 + iVar20;
          goto LAB_0342e234;
        }
        uVar30 = FUN_0342ed34(uVar26,puVar3,uVar24 & 0xffffffff);
        if ((uVar30 & 1) == 0) {
          lVar35 = *(long *)(in_stack_000000b8 + 0x120);
          if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          goto LAB_0342ddb8;
        }
        break;
      }
      lVar35 = *in_stack_00000070;
      if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar35 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined4 *)(lVar35 + uVar24 * 4 + 0x20) = 0xffffffff;
      uVar28 = uVar21;
LAB_0342e234:
      uVar21 = uVar28;
      uVar24 = uVar24 + 1;
    } while (uVar24 != (unaff_x28 & 0xffffffff));
    if (iVar27 != 0) {
      if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar21 = *(uint *)(*(long *)(in_stack_000000b8 + 0x120) + 0x18);
      if ((int)uVar17 < 1) {
        uVar15 = 0;
        uVar24 = 0;
      }
      else {
        lVar25 = *plVar4;
        if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar30 = 0;
        piVar32 = (int *)(lVar25 + 0x38);
        uVar24 = 0;
        do {
          if (*(uint *)(lVar25 + 0x18) <= uVar30) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          piVar1 = piVar32 + -2;
          iVar27 = *piVar32;
          uVar30 = uVar30 + 1;
          piVar32 = piVar32 + 7;
          uVar24 = NEON_smax(uVar24,CONCAT44(iVar27 + (int)((ulong)*(undefined8 *)piVar1 >> 0x20),
                                             iVar27 + (int)*(undefined8 *)piVar1),4);
        } while (uVar17 != uVar30);
        uVar15 = (undefined4)(uVar24 >> 0x20);
        uVar24 = uVar24 & 0xffffffff;
      }
      uVar22 = FUN_036c1d60(uVar24,0);
      *(undefined4 *)(in_stack_000000b8 + 0x168) = uVar22;
      iVar16 = FUN_036c1d60(uVar15,0);
      iVar27 = *(int *)(in_stack_000000b8 + 0x168);
      *(int *)(in_stack_000000b8 + 0x16c) = iVar16;
      puVar13 = PTR_DAT_03cbec20;
      puVar12 = PTR_DAT_03cbe590;
      fVar43 = DAT_00d38bdc;
      if (0 < (int)uVar21) {
        uVar24 = 0;
        lVar25 = 0x20;
        lVar35 = 0xe0;
        do {
          if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02215a88(*(long *)(in_stack_000000b8 + 0x120),uVar24 & 0xffffffff,&stack0x00000270,
                       *(undefined8 *)puVar12);
          lVar34 = *(long *)(in_stack_000000b8 + 0x130);
          if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar17 = (uint)in_stack_00000270;
          lVar33 = (long)(int)uVar17;
          if (*(uint *)(lVar34 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          fVar45 = *(float *)(lVar34 + lVar33 * 0x10 + 0x20);
          if (DAT_0411f262 == '\0') {
            FUN_01ab69ac(puVar13);
            DAT_0411f262 = '\x01';
          }
          fVar44 = ABS(fVar45);
          if (fVar44 <= 0.0) {
            fVar44 = 0.0;
          }
          fVar44 = fVar44 * fVar43;
          fVar39 = **(float **)(*(long *)puVar13 + 0xb8) * 8.0;
          if (fVar44 <= fVar39) {
            fVar44 = fVar39;
          }
          if (fVar44 <= ABS(0.0 - fVar45)) {
            lVar34 = *(long *)(in_stack_000000b8 + 0x130);
            if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(uint *)(lVar34 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            fVar44 = *(float *)(lVar34 + lVar33 * 0x10 + 0x2c);
            fVar45 = ABS(fVar44);
            if (fVar45 <= 1.0) {
              fVar45 = 1.0;
            }
            fVar45 = fVar45 * fVar43;
            if (fVar45 <= fVar39) {
              fVar45 = fVar39;
            }
            if (fVar45 <= ABS(-1.0 - fVar44)) {
              lVar34 = *plVar2;
              if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (*(uint *)(lVar34 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              lVar29 = *(long *)(in_stack_000000b8 + 0x158);
              if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uVar28 = *(uint *)(lVar34 + lVar33 * 4 + 0x20);
              if (*(uint *)(lVar29 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              if (*(long *)(in_stack_000000b8 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              iVar18 = *(int *)(lVar29 + (long)(int)uVar28 * 4 + 0x20);
              FUN_02215a88(*(long *)(in_stack_000000b8 + 0x128),uVar24 & 0xffffffff,&stack0x00000270
                           ,*(undefined8 *)puVar12);
              lVar34 = *plVar4;
              if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uVar17 = uVar17 + iVar18;
              if (*(uint *)(lVar34 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              lVar34 = lVar34 + (long)(int)uVar17 * 0x1c;
              iVar18 = *(int *)(lVar34 + 0x30);
              iVar36 = *(int *)(lVar34 + 0x34);
              iVar20 = *(int *)(lVar34 + 0x38);
              if (DAT_0411f171 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbe2f0);
                DAT_0411f171 = '\x01';
              }
              lVar34 = *(long *)(*(long *)PTR_DAT_03cbe2f0 + 0xb8);
              uVar46 = *(undefined8 *)(lVar34 + 0x58);
              uVar41 = *(undefined8 *)(lVar34 + 0x68);
              uVar26 = *(undefined8 *)(lVar34 + 0x60);
              uVar23 = *(undefined8 *)(lVar34 + 0x78);
              uVar42 = ((undefined8 *)((ulong)&stack0x00000270 | 4))[1];
              uVar40 = *(undefined8 *)((ulong)&stack0x00000270 | 4);
              lVar34 = *plVar5;
              if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (*(uint *)(lVar34 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              piVar32 = (int *)(lVar34 + lVar35);
              *piVar32 = iVar18;
              piVar32[1] = iVar36;
              piVar32[2] = iVar20;
              lVar34 = *plVar6;
              in_stack_000001c0 = uVar46;
              in_stack_000001c8 = uVar26;
              in_stack_000001d0 = uVar41;
              in_stack_000001e0 = uVar40;
              in_stack_000001e8 = uVar42;
              if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (*(uint *)(lVar34 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              in_stack_00000150._4_4_ = (float)iVar20;
              puVar7 = (undefined8 *)(lVar34 + lVar25);
              in_stack_00000140 = (1.0 / (float)iVar27) * in_stack_00000150._4_4_;
              in_stack_00000108 = puVar7[1];
              in_stack_00000270 = *puVar7;
              in_stack_00000118 = puVar7[3];
              in_stack_00000110 = puVar7[2];
              in_stack_00000128 = puVar7[5];
              in_stack_00000120 = puVar7[4];
              in_stack_00000138 = puVar7[7];
              in_stack_00000130 = puVar7[6];
              ((undefined8 *)((ulong)&stack0x00000140 | 4))[1] = uVar42;
              *(undefined8 *)((ulong)&stack0x00000140 | 4) = uVar40;
              in_stack_00000150._4_4_ = (1.0 / (float)iVar16) * in_stack_00000150._4_4_;
              fStack0000000000000170 = (1.0 / (float)iVar27) * (float)iVar18;
              fStack0000000000000174 = (1.0 / (float)iVar16) * (float)iVar36;
              in_stack_00000100 = in_stack_00000270;
              in_stack_00000178 = uVar23;
              in_stack_00000158 = uVar46;
              in_stack_00000160 = uVar26;
              in_stack_00000168 = uVar41;
              FUN_036bd894(&stack0x00000180,&stack0x00000140,&stack0x00000100,0);
              if (*(uint *)(lVar34 + 0x18) <= uVar24) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              puVar7[5] = in_stack_000001a8;
              puVar7[4] = in_stack_000001a0;
              puVar7[7] = in_stack_000001b8;
              puVar7[6] = in_stack_000001b0;
              puVar7[1] = CONCAT44(uStack000000000000018c,uStack0000000000000188);
              *puVar7 = in_stack_00000180;
              puVar7[3] = CONCAT44(uStack000000000000019c,uStack0000000000000198);
              puVar7[2] = CONCAT44(uStack0000000000000194,uStack0000000000000190);
            }
          }
          uVar24 = uVar24 + 1;
          lVar25 = lVar25 + 0x40;
          lVar35 = lVar35 + 0x1c8;
        } while (uVar21 != uVar24);
        iVar27 = *(int *)(in_stack_000000b8 + 0x168);
        iVar16 = *(int *)(in_stack_000000b8 + 0x16c);
      }
      if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar21 = 1;
      FUN_034091a4(0,in_stack_000000b8 + 0xe8,iVar27,iVar16,0x10,1,
                   *(undefined8 *)Mono_CSharp_PropertySpec_TypeInfo,0);
      *(float *)(in_stack_000000b8 + 0x100) =
           *(float *)(in_stack_000000b0 + 0x1a4) * *(float *)(in_stack_000000b0 + 0x1a4);
      uVar15 = *(undefined4 *)(in_stack_000000b0 + 0x274);
      *(undefined1 *)(in_stack_000000b8 + 0xf0) = 0;
      *(undefined1 *)(in_stack_000000b8 + 0x42) = 1;
      *(undefined4 *)(in_stack_000000b8 + 0x104) = uVar15;
      goto LAB_0342e6e8;
    }
  }
  uVar21 = FUN_0342eb14(in_stack_000000b8,in_stack_000000b0);
LAB_0342e6e8:
  FUN_033a2194(&stack0x000003c8,0);
  return uVar21 & 1;
}


