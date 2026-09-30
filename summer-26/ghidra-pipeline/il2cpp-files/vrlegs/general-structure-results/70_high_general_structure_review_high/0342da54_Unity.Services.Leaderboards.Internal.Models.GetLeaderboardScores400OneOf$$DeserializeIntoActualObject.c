/*
FUNCTION_NAME: Unity.Services.Leaderboards.Internal.Models.GetLeaderboardScores400OneOf$$DeserializeIntoActualObject
ENTRY_POINT: 0342da54
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
               (long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  int in_w9;
  long lVar24;
  long lVar25;
  undefined4 *puVar26;
  int *piVar27;
  ulong uVar28;
  long unaff_x19;
  long lVar29;
  uint unaff_w21;
  int unaff_w23;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  uint unaff_w28;
  int iVar30;
  undefined8 unaff_x29;
  int iVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 in_stack_00000020;
  long *in_stack_00000038;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long *in_stack_00000070;
  undefined4 in_stack_00000080;
  undefined8 in_stack_00000098;
  long *in_stack_000000a0;
  uint *in_stack_000000a8;
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
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  uint uVar40;
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
  
                    /* try { // try from 0342da58 to 0352da6b has its CatchHandler @ 0342db60 */
  while (unaff_w21 = in_w9 + unaff_w21, 0 < (int)unaff_w21) {
    iVar12 = FUN_0342cef4();
    param_1 = *unaff_x26;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar25 = (long)(int)unaff_w21 + -1;
    if (*(uint *)(param_1 + 0x18) <= (uint)lVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar24 = param_1 + lVar25 * unaff_x19;
    iVar18 = unaff_w24;
    if (*(char *)(lVar24 + 0x2c) != '\0') {
      iVar18 = unaff_w23;
    }
    if (iVar18 * iVar12 <= *(int *)(lVar24 + 0x28)) break;
    in_w9 = unaff_w25;
    if (*(char *)(param_1 + lVar25 * unaff_x19 + 0x2d) == '\0') {
      in_w9 = -1;
    }
  }
                    /* try { // try from 0342da78 to 0352da93 has its CatchHandler @ 0342db4c */
  lVar25 = (long)(int)unaff_w21;
  uVar16 = (uint)*(undefined8 *)(param_1 + 0x18);
  if ((long)(int)unaff_w21 < (long)(int)uVar16) {
    puVar26 = (undefined4 *)(param_1 + lVar25 * 0x1c + 0x28);
    lVar24 = lVar25;
    do {
                    /* try { // try from 0342da9c to 0352daa7 has its CatchHandler @ 0342db40 */
      if (uVar16 <= (uint)lVar24) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar24 = lVar24 + 1;
      *puVar26 = 0;
      puVar26 = puVar26 + 7;
    } while (lVar24 < (int)uVar16);
  }
  lVar24 = *(long *)(in_stack_000000b8 + 0x158);
                    /* try { // try from 0342dabc to 0352dacf has its CatchHandler @ 0342db3c */
  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar40 = *(uint *)(lVar24 + 0x18);
  if (0 < (long)((ulong)uVar40 << 0x20)) {
                    /* try { // try from 0342dad0 to 0352db2b has its CatchHandler @ 0342d82c */
    uVar28 = 0;
    do {
      if (uVar40 <= uVar28) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(undefined4 *)(lVar24 + 0x20 + uVar28 * 4) = 0xffffffff;
      uVar28 = uVar28 + 1;
    } while ((long)uVar28 < (long)(int)uVar40);
  }
  for (uVar7 = unaff_w21 - 1; -1 < (int)uVar7; uVar7 = uVar7 - 1) {
    if (uVar16 <= unaff_w21 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar6 = *(uint *)(param_1 + (ulong)uVar7 * 0x1c + 0x20);
    if (uVar40 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(uint *)(lVar24 + (long)(int)uVar6 * 4 + 0x20) = uVar7;
                    /* try { // try from 0342db2c to 0352db33 has its CatchHandler @ 0342db40 */
  }
                    /* try { // try from 0342db34 to 0352db7f has its CatchHandler @ 0342d82c */
                    /* catch() { ... } // from try @ 0342d930 with catch @ 0342db38 */
                    /* catch() { ... } // from try @ 0342dabc with catch @ 0342db3c */
                    /* catch() { ... } // from try @ 0342da9c with catch @ 0342db40
                       catch() { ... } // from try @ 0342db2c with catch @ 0342db40 */
  FUN_0342cf7c(in_stack_000000b8,in_stack_00000080,lVar25);
                    /* catch() { ... } // from try @ 0342da78 with catch @ 0342db4c */
                    /* catch() { ... } // from try @ 0342d9bc with catch @ 0342db50 */
  plVar2 = (long *)(in_stack_000000b8 + 0x108);
                    /* catch() { ... } // from try @ 0342da48 with catch @ 0342db54 */
                    /* catch() { ... } // from try @ 0342da3c with catch @ 0342db58 */
                    /* catch() { ... } // from try @ 0342da20 with catch @ 0342db5c */
                    /* catch() { ... } // from try @ 0342da58 with catch @ 0342db60 */
                    /* catch() { ... } // from try @ 0342da0c with catch @ 0342db64 */
  if ((*(long *)(in_stack_000000b8 + 0x108) == 0) ||
     (*(int *)(*(long *)(in_stack_000000b8 + 0x108) + 0x18) < (int)unaff_w21)) {
    lVar24 = FUN_01ab6a94(*(undefined8 *)Fusion_Ptr_TypeInfo,lVar25);
                    /* try { // try from 0342db80 to 0352db83 has its CatchHandler @ 0342dbc8 */
    *plVar2 = lVar24;
                    /* try { // try from 0342db8c to 0352db97 has its CatchHandler @ 0342dc08 */
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
                    /* try { // try from 0342db98 to 0352dbaf has its CatchHandler @ 0342d82c */
  plVar3 = (long *)(in_stack_000000b8 + 0x138);
                    /* try { // try from 0342dbb0 to 0352dbb3 has its CatchHandler @ 0342dbd4 */
  if ((*(long *)(in_stack_000000b8 + 0x138) == 0) ||
     ((*(char *)(in_stack_000000b8 + 0xe0) != '\0' &&
      (*(int *)(*(long *)(in_stack_000000b8 + 0x138) + 0x18) < (int)unaff_w21)))) {
                    /* try { // try from 0342dbc0 to 0352dbf3 has its CatchHandler @ 0342dc08 */
                    /* catch() { ... } // from try @ 0342db80 with catch @ 0342dbc8 */
    lVar25 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc8b40,lVar25);
                    /* catch() { ... } // from try @ 0342dbb0 with catch @ 0342dbd4 */
    *plVar3 = lVar25;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  puVar9 = UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
  if (0 < (int)in_stack_00000060._4_4_) {
                    /* try { // try from 0342dbf4 to 0352dbff has its CatchHandler @ 0342d82c */
    uVar28 = 0;
                    /* try { // try from 0342dc00 to 0352dc07 has its CatchHandler @ 0342dc08 */
    do {
      lVar24 = *(long *)puVar9;
                    /* catch() { ... } // from try @ 0342db8c with catch @ 0342dc08
                       catch() { ... } // from try @ 0342dbc0 with catch @ 0342dc08
                       catch() { ... } // from try @ 0342dc00 with catch @ 0342dc08 */
      lVar25 = *(long *)(in_stack_000000b8 + 0x130);
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar24 = *(long *)puVar9;
      }
      if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar25 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar19 = **(undefined8 **)(lVar24 + 0xb8);
      lVar25 = lVar25 + uVar28 * 0x10;
      uVar28 = uVar28 + 1;
      *(undefined8 *)(lVar25 + 0x28) = (*(undefined8 **)(lVar24 + 0xb8))[1];
      *(undefined8 *)(lVar25 + 0x20) = uVar19;
    } while (in_stack_00000060._4_4_ != uVar28);
  }
  if (0 < (int)unaff_w28) {
    uVar28 = 0;
    iVar12 = 0;
    cVar5 = *(char *)(in_stack_000000b0 + 0x284);
    uVar16 = 0;
    lVar25 = in_stack_000000b0 + 8;
    do {
      uVar19 = FUN_01fb3ff4(unaff_x29,in_stack_00000098,uVar28 & 0xffffffff,
                            *(undefined8 *)System_Runtime_Remoting_Proxies_ProxyAttribute_TypeInfo);
      if (uVar28 == *in_stack_000000a8) {
        lVar24 = *in_stack_00000070;
        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar24 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined4 *)(lVar24 + uVar28 * 4 + 0x20) = 0xffffffff;
        uVar40 = uVar16;
      }
      else {
        lVar24 = *unaff_x27;
        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar40 = uVar16 + 1;
        if ((int)uVar16 < (int)*(uint *)(lVar24 + 0x18)) {
          if (*(uint *)(lVar24 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar22 = (long)(int)uVar16;
          *(int *)(lVar24 + lVar22 * 4 + 0x20) = (int)uVar28;
          lVar24 = *in_stack_00000070;
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar24 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(uint *)(lVar24 + uVar28 * 4 + 0x20) = uVar16;
          if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (((int)uVar16 < (int)in_stack_00000060._4_4_) &&
             (*(int *)(*(long *)(in_stack_000000b8 + 0x120) + 0x18) < (int)unaff_w21)) {
            uVar20 = FUN_03701768(uVar19,0);
            iVar13 = (int)uVar20;
            iVar18 = 6;
            if (iVar13 != 2) {
              iVar18 = 0;
            }
            lVar24 = *(long *)(in_stack_000000b8 + 0x120);
            if (iVar13 == 0) {
              iVar18 = 1;
            }
            if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if ((int)unaff_w21 < *(int *)(lVar24 + 0x18) + iVar18) {
              uVar21 = FUN_0342ed34(uVar20,in_stack_000000a8,uVar28 & 0xffffffff);
              if ((uVar21 & 1) != 0) break;
              lVar24 = *(long *)(in_stack_000000b8 + 0x120);
              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
            }
            if (iVar18 != 0) {
              if (lVar24 == 0) {
LAB_0342e73c:
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              iVar31 = *(int *)(lVar24 + 0x18);
              iVar30 = 0;
              iVar15 = 0;
              do {
                uVar7 = *(uint *)(lVar24 + 0x18);
                lVar24 = (long)(int)uVar7;
                uVar21 = FUN_036f60c4(lVar25,uVar28 & 0xffffffff,&stack0x00000378,0);
                if ((((uVar21 & 1) != 0) && (*(char *)(in_stack_000000b0 + 0x278) != '\0')) &&
                   (uVar21 = FUN_0342ed34(uVar21,in_stack_000000a8,uVar28 & 0xffffffff),
                   (uVar21 & 1) != 0)) {
                  lVar29 = *(long *)(in_stack_000000b8 + 0x158);
                  if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  if (*(uint *)(lVar29 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  uVar6 = *(uint *)(lVar29 + uVar28 * 4 + 0x20);
                  if (uVar6 != 0xffffffff) {
                    if (iVar13 == 0) {
                      lVar29 = *plVar2;
                      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(uint *)(lVar29 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo +
                                  0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      lVar23 = lVar29 + lVar24 * 0x1c8;
                      uVar21 = FUN_03407fec(lVar25,in_stack_00000020,uVar28 & 0xffffffff,
                                            &stack0x00000330,lVar23 + 0x20,lVar23 + 0x60,
                                            lVar29 + lVar24 * 0x1c8 + 0xec,0);
                      if ((uVar21 & 1) != 0) {
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
                        lVar29 = FUN_037016dc(uVar19,0);
                        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        uVar33 = FUN_036a042c(lVar29,0);
                        if (cVar5 == '\0') {
                          bVar11 = false;
                        }
                        else {
                          iVar15 = FUN_036a03ac(lVar29,0);
                          bVar11 = iVar15 == 2;
                        }
                        if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo +
                                    0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar17 = FUN_034092a0(lVar29,bVar11,0);
                        lVar29 = *plVar3;
                        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        if (*(uint *)(lVar29 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        lVar29 = lVar29 + lVar24 * 0x40;
                        *(undefined8 *)(lVar29 + 0x48) = in_stack_00000358;
                        *(undefined8 *)(lVar29 + 0x40) = in_stack_00000350;
                        *(undefined8 *)(lVar29 + 0x58) = in_stack_00000368;
                        *(undefined8 *)(lVar29 + 0x50) = in_stack_00000360;
                        *(undefined8 *)(lVar29 + 0x28) = in_stack_00000338;
                        *(undefined8 *)(lVar29 + 0x20) = in_stack_00000330;
                        *(undefined8 *)(lVar29 + 0x38) = in_stack_00000348;
                        *(undefined8 *)(lVar29 + 0x30) = in_stack_00000340;
                        lVar24 = *(long *)(in_stack_000000b8 + 0x130);
                        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        if (*(uint *)(lVar24 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        lVar24 = lVar24 + lVar22 * 0x10;
                        *(undefined4 *)(lVar24 + 0x20) = uVar33;
                        *(undefined4 *)(lVar24 + 0x24) = uVar17;
                        *(undefined4 *)(lVar24 + 0x28) = 0;
                        in_stack_00000270 = in_stack_00000330;
LAB_0342e1f0:
                        iVar15 = 1;
                        *(float *)(lVar24 + 0x2c) = (float)iVar31;
                      }
                    }
                    else if (iVar13 == 2) {
                      lVar29 = *in_stack_000000a0;
                      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(uint *)(lVar29 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      uVar33 = *(undefined4 *)(lVar29 + (long)(int)uVar6 * 0x1c + 0x38);
                      lVar29 = FUN_037016dc(uVar19,0);
                      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      iVar14 = FUN_036a03ac(lVar29,0);
                      if (*(int *)(*(long *)UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo +
                                  0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar20 = FUN_0342cb28(uVar33,iVar14 == 2);
                      lVar29 = *plVar2;
                      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c3c();
                      }
                      if (*(uint *)(lVar29 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo +
                                  0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      lVar23 = lVar29 + lVar24 * 0x1c8;
                      uVar21 = FUN_034080f8(uVar20,lVar25,in_stack_00000020,uVar28 & 0xffffffff,
                                            iVar30,&stack0x000002f0,lVar23 + 0x20,lVar23 + 0x60,
                                            lVar29 + lVar24 * 0x1c8 + 0xec);
                      if ((uVar21 & 1) != 0) {
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
                        lVar29 = FUN_037016dc(uVar19,0);
                        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        uVar33 = FUN_036a042c(lVar29,0);
                        if (cVar5 == '\0') {
                          bVar11 = false;
                        }
                        else {
                          iVar15 = FUN_036a03ac(lVar29,0);
                          bVar11 = iVar15 == 2;
                        }
                        if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo +
                                    0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar17 = FUN_034092a0(lVar29,bVar11,0);
                        lVar29 = *plVar3;
                        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        if (*(uint *)(lVar29 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        lVar29 = lVar29 + lVar24 * 0x40;
                        *(undefined8 *)(lVar29 + 0x48) = in_stack_00000318;
                        *(undefined8 *)(lVar29 + 0x40) = in_stack_00000310;
                        *(undefined8 *)(lVar29 + 0x58) = in_stack_00000328;
                        *(undefined8 *)(lVar29 + 0x50) = in_stack_00000320;
                        *(undefined8 *)(lVar29 + 0x28) = in_stack_000002f8;
                        *(undefined8 *)(lVar29 + 0x20) = in_stack_000002f0;
                        *(undefined8 *)(lVar29 + 0x38) = in_stack_00000308;
                        *(undefined8 *)(lVar29 + 0x30) = in_stack_00000300;
                        lVar24 = *(long *)(in_stack_000000b8 + 0x130);
                        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
                        }
                        if (*(uint *)(lVar24 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c44();
                        }
                        lVar24 = lVar24 + lVar22 * 0x10;
                        *(undefined4 *)(lVar24 + 0x20) = uVar33;
                        *(undefined4 *)(lVar24 + 0x24) = uVar17;
                        *(undefined4 *)(lVar24 + 0x28) = 0x3f800000;
                        in_stack_00000270 = in_stack_000002f0;
                        goto LAB_0342e1f0;
                      }
                    }
                  }
                }
                unaff_x27 = in_stack_00000038;
                unaff_x29 = in_stack_00000058;
                if (iVar18 + -1 == iVar30) goto LAB_0342e224;
                iVar30 = iVar30 + 1;
                lVar24 = *(long *)(in_stack_000000b8 + 0x120);
                if (lVar24 == 0) goto LAB_0342e73c;
              } while( true );
            }
            iVar15 = 0;
LAB_0342e224:
            iVar12 = iVar12 + iVar15;
          }
        }
      }
      uVar16 = uVar40;
      uVar28 = uVar28 + 1;
    } while (uVar28 != unaff_w28);
    if (iVar12 != 0) {
      if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar16 = *(uint *)(*(long *)(in_stack_000000b8 + 0x120) + 0x18);
      if ((int)unaff_w21 < 1) {
        uVar33 = 0;
        uVar28 = 0;
      }
      else {
        lVar25 = *in_stack_000000a0;
        if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar21 = 0;
        piVar27 = (int *)(lVar25 + 0x38);
        uVar28 = 0;
        do {
          if (*(uint *)(lVar25 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          piVar1 = piVar27 + -2;
          iVar12 = *piVar27;
          uVar21 = uVar21 + 1;
          piVar27 = piVar27 + 7;
          uVar28 = NEON_smax(uVar28,CONCAT44(iVar12 + (int)((ulong)*(undefined8 *)piVar1 >> 0x20),
                                             iVar12 + (int)*(undefined8 *)piVar1),4);
        } while (unaff_w21 != uVar21);
        uVar33 = (undefined4)(uVar28 >> 0x20);
        uVar28 = uVar28 & 0xffffffff;
      }
      uVar17 = FUN_036c1d60(uVar28,0);
      *(undefined4 *)(in_stack_000000b8 + 0x168) = uVar17;
      iVar18 = FUN_036c1d60(uVar33,0);
      iVar12 = *(int *)(in_stack_000000b8 + 0x168);
      *(int *)(in_stack_000000b8 + 0x16c) = iVar18;
      puVar10 = PTR_DAT_03cbec20;
      puVar9 = PTR_DAT_03cbe590;
      fVar8 = DAT_00d38bdc;
      if (0 < (int)uVar16) {
        uVar28 = 0;
        lVar25 = 0x20;
        lVar24 = 0xe0;
        do {
          if (*(long *)(in_stack_000000b8 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02215a88(*(long *)(in_stack_000000b8 + 0x120),uVar28 & 0xffffffff,&stack0x00000270,
                       *(undefined8 *)puVar9);
          lVar22 = *(long *)(in_stack_000000b8 + 0x130);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar40 = (uint)in_stack_00000270;
          lVar29 = (long)(int)uVar40;
          if (*(uint *)(lVar22 + 0x18) <= uVar40) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          fVar39 = *(float *)(lVar22 + lVar29 * 0x10 + 0x20);
          if (DAT_0411f262 == '\0') {
            FUN_01ab69ac(puVar10);
            DAT_0411f262 = '\x01';
          }
          fVar37 = ABS(fVar39);
          if (fVar37 <= 0.0) {
            fVar37 = 0.0;
          }
          fVar37 = fVar37 * fVar8;
          fVar32 = **(float **)(*(long *)puVar10 + 0xb8) * 8.0;
          if (fVar37 <= fVar32) {
            fVar37 = fVar32;
          }
          if (fVar37 <= ABS(0.0 - fVar39)) {
            lVar22 = *(long *)(in_stack_000000b8 + 0x130);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(uint *)(lVar22 + 0x18) <= uVar40) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            fVar37 = *(float *)(lVar22 + lVar29 * 0x10 + 0x2c);
            fVar39 = ABS(fVar37);
            if (fVar39 <= 1.0) {
              fVar39 = 1.0;
            }
            fVar39 = fVar39 * fVar8;
            if (fVar39 <= fVar32) {
              fVar39 = fVar32;
            }
            if (fVar39 <= ABS(-1.0 - fVar37)) {
              lVar22 = *unaff_x27;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (*(uint *)(lVar22 + 0x18) <= uVar40) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              lVar23 = *(long *)(in_stack_000000b8 + 0x158);
              if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uVar7 = *(uint *)(lVar22 + lVar29 * 4 + 0x20);
              if (*(uint *)(lVar23 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              if (*(long *)(in_stack_000000b8 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              iVar13 = *(int *)(lVar23 + (long)(int)uVar7 * 4 + 0x20);
              FUN_02215a88(*(long *)(in_stack_000000b8 + 0x128),uVar28 & 0xffffffff,&stack0x00000270
                           ,*(undefined8 *)puVar9);
              lVar22 = *in_stack_000000a0;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uVar40 = uVar40 + iVar13;
              if (*(uint *)(lVar22 + 0x18) <= uVar40) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              lVar22 = lVar22 + (long)(int)uVar40 * 0x1c;
              iVar13 = *(int *)(lVar22 + 0x30);
              iVar30 = *(int *)(lVar22 + 0x34);
              iVar15 = *(int *)(lVar22 + 0x38);
              if (DAT_0411f171 == '\0') {
                FUN_01ab69ac(PTR_DAT_03cbe2f0);
                DAT_0411f171 = '\x01';
              }
              lVar22 = *(long *)(*(long *)PTR_DAT_03cbe2f0 + 0xb8);
              uVar38 = *(undefined8 *)(lVar22 + 0x58);
              uVar35 = *(undefined8 *)(lVar22 + 0x68);
              uVar20 = *(undefined8 *)(lVar22 + 0x60);
              uVar19 = *(undefined8 *)(lVar22 + 0x78);
              uVar36 = ((undefined8 *)((ulong)&stack0x00000270 | 4))[1];
              uVar34 = *(undefined8 *)((ulong)&stack0x00000270 | 4);
              lVar22 = *plVar2;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (*(uint *)(lVar22 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              piVar27 = (int *)(lVar22 + lVar24);
              *piVar27 = iVar13;
              piVar27[1] = iVar30;
              piVar27[2] = iVar15;
              lVar22 = *plVar3;
              in_stack_000001c0 = uVar38;
              in_stack_000001c8 = uVar20;
              in_stack_000001d0 = uVar35;
              in_stack_000001e0 = uVar34;
              in_stack_000001e8 = uVar36;
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if (*(uint *)(lVar22 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              in_stack_00000150._4_4_ = (float)iVar15;
              puVar4 = (undefined8 *)(lVar22 + lVar25);
              in_stack_00000140 = (1.0 / (float)iVar12) * in_stack_00000150._4_4_;
              in_stack_00000108 = puVar4[1];
              in_stack_00000270 = *puVar4;
              in_stack_00000118 = puVar4[3];
              in_stack_00000110 = puVar4[2];
              in_stack_00000128 = puVar4[5];
              in_stack_00000120 = puVar4[4];
              in_stack_00000138 = puVar4[7];
              in_stack_00000130 = puVar4[6];
              ((undefined8 *)((ulong)&stack0x00000140 | 4))[1] = uVar36;
              *(undefined8 *)((ulong)&stack0x00000140 | 4) = uVar34;
              in_stack_00000150._4_4_ = (1.0 / (float)iVar18) * in_stack_00000150._4_4_;
              fStack0000000000000170 = (1.0 / (float)iVar12) * (float)iVar13;
              fStack0000000000000174 = (1.0 / (float)iVar18) * (float)iVar30;
              in_stack_00000100 = in_stack_00000270;
              in_stack_00000178 = uVar19;
              in_stack_00000158 = uVar38;
              in_stack_00000160 = uVar20;
              in_stack_00000168 = uVar35;
              FUN_036bd894(&stack0x00000180,&stack0x00000140,&stack0x00000100,0);
              if (*(uint *)(lVar22 + 0x18) <= uVar28) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              puVar4[5] = in_stack_000001a8;
              puVar4[4] = in_stack_000001a0;
              puVar4[7] = in_stack_000001b8;
              puVar4[6] = in_stack_000001b0;
              puVar4[1] = in_stack_00000188;
              *puVar4 = in_stack_00000180;
              puVar4[3] = in_stack_00000198;
              puVar4[2] = in_stack_00000190;
              unaff_x27 = in_stack_00000038;
            }
          }
          uVar28 = uVar28 + 1;
          lVar25 = lVar25 + 0x40;
          lVar24 = lVar24 + 0x1c8;
        } while (uVar16 != uVar28);
        iVar12 = *(int *)(in_stack_000000b8 + 0x168);
        iVar18 = *(int *)(in_stack_000000b8 + 0x16c);
      }
      if (*(int *)(*(long *)UnityApplicationInsights_PageViewEnvelope_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar16 = 1;
      FUN_034091a4(0,in_stack_000000b8 + 0xe8,iVar12,iVar18,0x10,1,
                   *(undefined8 *)Mono_CSharp_PropertySpec_TypeInfo,0);
      *(float *)(in_stack_000000b8 + 0x100) =
           *(float *)(in_stack_000000b0 + 0x1a4) * *(float *)(in_stack_000000b0 + 0x1a4);
      uVar33 = *(undefined4 *)(in_stack_000000b0 + 0x274);
      *(undefined1 *)(in_stack_000000b8 + 0xf0) = 0;
      *(undefined1 *)(in_stack_000000b8 + 0x42) = 1;
      *(undefined4 *)(in_stack_000000b8 + 0x104) = uVar33;
      goto LAB_0342e6e8;
    }
  }
  uVar16 = FUN_0342eb14(in_stack_000000b8,in_stack_000000b0);
LAB_0342e6e8:
  FUN_033a2194(&stack0x000003c8,0);
  return uVar16 & 1;
}


