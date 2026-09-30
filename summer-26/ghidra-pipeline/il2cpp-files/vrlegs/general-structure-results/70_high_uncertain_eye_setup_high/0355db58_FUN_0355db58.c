/*
FUNCTION_NAME: FUN_0355db58
ENTRY_POINT: 0355db58
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_21
*/


undefined4 FUN_0355db58(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  void *__dest;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar20;
  uint unaff_w22;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  long unaff_x24;
  long *plVar24;
  long *unaff_x25;
  uint unaff_w26;
  ulong uVar25;
  long unaff_x27;
  long unaff_x28;
  uint *puVar26;
  long lVar27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  uint uStack00000000000001a8;
  undefined1 uStack00000000000001ac;
  
code_r0x0355db58:
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,param_2);
  bVar4 = true;
  uVar7 = unaff_w22;
LAB_0355db64:
  if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0)) goto LAB_0355e9f0;
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
  lVar16 = lVar16 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28;
  plVar11 = (long *)(lVar16 + 0x30);
  *plVar11 = unaff_x27;
  *(undefined4 *)(lVar16 + 0x2c) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,unaff_x27);
  if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0)) goto LAB_0355e9f0;
  uVar6 = *(uint *)(unaff_x19 + 0x490);
  if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_0355e9f4;
  lVar19 = lVar16 + (int)uVar6 * unaff_x28;
  *(short *)(lVar19 + 0x20) = (short)unaff_w26;
  *(undefined1 *)(lVar19 + 0x5c) = uStack00000000000001ac;
  if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_0355e9f4;
  lVar16 = lVar16 + (int)uVar6 * unaff_x28;
  *(undefined8 *)(lVar16 + 0x24) = *(undefined8 *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
  *(long *)(lVar16 + 0x38) = *unaff_x25;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  plVar11 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
  if (*(char *)(unaff_x27 + 0x10) == '\x02') {
    plVar24 = *(long **)(unaff_x27 + 0x18);
    if (plVar24 == (long *)0x0) goto LAB_0355e9f0;
    bVar3 = *(byte *)(*(long *)OVRPlugin_Sizei_TypeInfo + 0x130);
    if ((*(byte *)(*plVar24 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)OVRPlugin_Sizei_TypeInfo)) goto LAB_0355e9f0;
    lVar19 = plVar24[4];
    lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar16 = *plVar11;
    }
    uVar6 = FUN_03558224(lVar19,plVar24,*(long *)(lVar16 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar6;
    lVar16 = **(long **)(*plVar11 + 0xb8);
    if (lVar16 == 0) goto LAB_0355e9f0;
    if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_0355e9f4;
    lVar16 = lVar16 + (long)(int)uVar6 * 0x38;
    *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
    goto LAB_0355e9f0;
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
    lVar16 = lVar16 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28;
    *(undefined4 *)(lVar16 + 0x2c) = 1;
    uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined8 *)(lVar16 + 0x40) = plVar24;
    *(undefined4 *)(lVar16 + 0x58) = uVar8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar16 + 0x40),plVar24);
    plVar11 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0)) goto LAB_0355e9f0;
    uVar6 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_0355e9f4;
    *(undefined4 *)(lVar16 + (int)uVar6 * unaff_x28 + 0x48) = *(undefined4 *)(unaff_x27 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
    unaff_x25 = in_stack_00000038;
    plVar24 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
  }
  else {
    if (bVar4) {
      lVar16 = *unaff_x25;
      if (lVar16 == 0) goto LAB_0355e9f0;
      iVar9 = *(int *)(lVar16 + 0x18);
      if (iVar9 == 0) {
        iVar9 = FUN_036d3364(lVar16,0);
        *(int *)(lVar16 + 0x18) = iVar9;
      }
      lVar16 = *(long *)(unaff_x19 + 0xf8);
      if (lVar16 == 0) goto LAB_0355e9f0;
      iVar10 = *(int *)(lVar16 + 0x18);
      if (iVar10 == 0) {
        iVar10 = FUN_036d3364(lVar16,0);
        *(int *)(lVar16 + 0x18) = iVar10;
      }
      unaff_x28 = 0x178;
      if (iVar9 != iVar10) {
        uVar20 = FUN_0359778c(0);
        if ((uVar20 & 1) == 0) {
          if (*unaff_x25 == 0) goto LAB_0355e9f0;
          uVar23 = *(undefined8 *)(*unaff_x25 + 0x20);
        }
        else {
          if (*unaff_x25 == 0) goto LAB_0355e9f0;
          uVar15 = *(undefined8 *)(*unaff_x25 + 0x20);
          uVar23 = *in_stack_00000028;
          if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_03594e9c(uVar23,uVar15,0);
          unaff_x25 = in_stack_00000038;
        }
        *in_stack_00000028 = uVar23;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028);
        lVar16 = *plVar11;
        uVar23 = *in_stack_00000028;
        lVar19 = *unaff_x25;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *plVar11;
        }
        uVar8 = FUN_03557fec(uVar23,lVar19,*(long *)(lVar16 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
        *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
        unaff_x25 = in_stack_00000038;
      }
    }
    if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_0355e9f0;
    iVar9 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
    if (0 < iVar9) {
      if (*(long *)(unaff_x27 + 0x20) == 0) goto LAB_0355e9f0;
      lVar16 = *unaff_x25;
      uVar23 = *in_stack_00000028;
      uVar8 = FUN_03776eb8(*(long *)(unaff_x27 + 0x20),0);
      if (*(int *)(*(long *)OVRPlugin_Sizef_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)OVRPlugin_Sizef_TypeInfo);
      }
      uVar23 = FUN_03594928(lVar16,uVar23,uVar8,0);
      *in_stack_00000028 = uVar23;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000028,uVar23);
      lVar16 = *plVar11;
      uVar23 = *in_stack_00000028;
      lVar19 = *unaff_x25;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar16 = *plVar11;
      }
      unaff_x28 = 0x178;
      uVar8 = FUN_03557fec(uVar23,lVar19,*(long *)(lVar16 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
      bVar4 = true;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
      unaff_x25 = in_stack_00000038;
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_026b63d8(unaff_w26,0);
    plVar24 = (long *)OVRPlugin_OVRP_0_1_1_TypeInfo;
    if ((unaff_w26 != 0x200b) && ((uVar20 & 1) == 0)) {
      lVar16 = *plVar11;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar16);
        lVar16 = *plVar11;
      }
      lVar19 = **(long **)(lVar16 + 0xb8);
      if (lVar19 == 0) goto LAB_0355e9f0;
      uVar6 = *(uint *)(unaff_x19 + 0x120);
      if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_0355e9f4;
      if (*(int *)(lVar19 + (long)(int)uVar6 * 0x38 + 0x54) < 0x3fff) {
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar16);
          lVar19 = **(long **)(*plVar11 + 0xb8);
          if (lVar19 == 0) goto LAB_0355e9f0;
          uVar6 = *(uint *)(unaff_x19 + 0x120);
        }
      }
      else {
        uVar15 = *in_stack_00000028;
        uVar23 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
        FUN_0369922c(uVar23,uVar15,0);
        lVar16 = *plVar11;
        lVar19 = *unaff_x25;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar16 = *plVar11;
        }
        uVar6 = FUN_03557fec(uVar23,lVar19,*(long *)(lVar16 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar6;
        lVar19 = **(long **)(*plVar11 + 0xb8);
        if (lVar19 == 0) goto LAB_0355e9f0;
      }
      if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_0355e9f4;
      lVar19 = lVar19 + (long)(int)uVar6 * 0x38;
      *(int *)(lVar19 + 0x54) = *(int *)(lVar19 + 0x54) + 1;
    }
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
    goto LAB_0355e9f0;
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
    *(undefined8 *)(lVar16 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28 + 0x50) =
         *in_stack_00000028;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
    goto LAB_0355e9f0;
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
    uVar6 = *(uint *)(unaff_x19 + 0x120);
    *(uint *)(lVar16 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x28 + 0x58) = uVar6;
    lVar16 = *plVar11;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar16 = *plVar11;
      uVar6 = *(uint *)(unaff_x19 + 0x120);
    }
    lVar19 = **(long **)(lVar16 + 0xb8);
    if (lVar19 == 0) goto LAB_0355e9f0;
    if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_0355e9f4;
    *(bool *)(lVar19 + (long)(int)uVar6 * 0x38 + 0x41) = bVar4;
    if (bVar4) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar19 = **(long **)(*plVar11 + 0xb8);
        if (lVar19 == 0) goto LAB_0355e9f0;
        uVar6 = *(uint *)(unaff_x19 + 0x120);
      }
      if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_0355e9f4;
      puVar14 = (undefined8 *)(lVar19 + (long)(int)uVar6 * 0x38 + 0x48);
      *puVar14 = in_stack_00000018;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar14,in_stack_00000018);
      *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
      *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (in_stack_00000028,in_stack_00000018);
      *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
    }
    uVar6 = *(uint *)(unaff_x19 + 0x490);
  }
  do {
    *(uint *)(unaff_x19 + 0x490) = uVar6 + 1;
    do {
      uVar6 = *(uint *)(unaff_x21 + 0x18);
      unaff_w22 = uVar7 + 1;
      if ((int)uVar6 <= (int)unaff_w22) {
LAB_0355e17c:
        if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
          goto LAB_0355e188;
        }
        lVar16 = *unaff_x20;
        if (lVar16 == 0) goto LAB_0355e9f0;
        *(int *)(lVar16 + 0x1c) = in_stack_00000020._4_4_;
        lVar19 = *plVar11;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar19 = *plVar11;
        }
        lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
        if (lVar19 == 0) goto LAB_0355e9f0;
        uVar7 = FUN_0219b384(lVar19,*(undefined8 *)PTR_DAT_03ceb270);
        *(uint *)(lVar16 + 0x34) = uVar7;
        if (*unaff_x20 == 0) goto LAB_0355e9f0;
        plVar21 = (long *)(*unaff_x20 + 0x60);
        lVar16 = *plVar21;
        if (lVar16 == 0) goto LAB_0355e9f0;
        uVar20 = (ulong)uVar7;
        if (*(int *)(lVar16 + 0x18) < (int)uVar7) {
          if (*(int *)(*plVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff02b8(plVar21,uVar20,0,*(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo);
        }
        if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_0355e9f0;
        plVar21 = (long *)(unaff_x19 + 0x708);
        if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar7) {
          uVar8 = FUN_036c1d60(uVar7 + 1,0);
          if (*(int *)(*plVar24 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*plVar24);
          }
          FUN_01ff025c(plVar21,uVar8,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo);
        }
        if (*(char *)(unaff_x19 + 0x321) != '\0') {
          if (*unaff_x20 == 0) goto LAB_0355e9f0;
          plVar22 = (long *)(*unaff_x20 + 0x38);
          lVar16 = *plVar22;
          if (lVar16 == 0) goto LAB_0355e9f0;
          iVar9 = *(int *)(unaff_x19 + 0x490);
          if (0x100 < *(int *)(lVar16 + 0x18) - iVar9) {
            iVar10 = 0x100;
            if (0x100 < iVar9 + 1) {
              iVar10 = iVar9 + 1;
            }
            if (*(int *)(*plVar24 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff02b8(plVar22,iVar10,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
            plVar11 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
          }
        }
        if ((int)uVar7 < 1) goto LAB_0355e92c;
        lVar16 = 0;
        uVar25 = 0;
        lVar19 = 0x54;
        lVar27 = 0x20;
        goto LAB_0355e31c;
      }
      if (uVar6 <= unaff_w22) goto LAB_0355e9f4;
      puVar26 = (uint *)(unaff_x21 + (long)(int)unaff_w22 * 0xc + 0x20);
      if (*puVar26 == 0) goto LAB_0355e17c;
      if (*unaff_x20 == 0) goto LAB_0355e9f0;
      plVar11 = (long *)(*unaff_x20 + 0x38);
      lVar16 = *plVar11;
      iVar9 = *(int *)(unaff_x19 + 0x490);
      if ((lVar16 == 0) || (*(int *)(lVar16 + 0x18) <= iVar9)) {
        if (*(int *)(*plVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_01ff02b8(plVar11,iVar9 + 1,1,*(undefined8 *)OVRPlugin_SkeletonType_TypeInfo);
        uVar6 = *(uint *)(unaff_x21 + 0x18);
      }
      if (uVar6 <= unaff_w22) goto LAB_0355e9f4;
      unaff_w26 = *puVar26;
      unaff_x24 = (long)(int)unaff_w22;
      if ((unaff_w26 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_0355d414:
        in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
        in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x118);
        in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
        if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_0355d4ec;
        uVar7 = *(uint *)(unaff_x19 + 0x25c);
        if ((uVar7 >> 4 & 1) == 0) {
          if ((uVar7 >> 3 & 1) == 0) {
            if ((uVar7 >> 5 & 1) != 0) goto LAB_0355d440;
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar20 = FUN_026b8070(unaff_w26,0);
            if ((uVar20 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar7 = FUN_026b8594(unaff_w26,0);
              goto LAB_0355d4e8;
            }
          }
        }
        else {
LAB_0355d440:
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_026b812c(unaff_w26,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar7 = FUN_026b8410(unaff_w26,0);
LAB_0355d4e8:
            unaff_w26 = uVar7 & 0xffff;
          }
        }
LAB_0355d4ec:
        unaff_x27 = FUN_03591848();
        if (unaff_x27 == 0) {
          iVar9 = FUN_035975f8();
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_0355e9f4;
          if (iVar9 == 0) {
            uVar7 = 0x25a1;
          }
          else {
            uVar7 = FUN_035975f8(0);
          }
          *puVar26 = uVar7;
          uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          unaff_x27 = FUN_03570fc4(uVar7,uVar23,1,uVar8,uVar2,(long)&stack0x000001a8 + 4,0);
          if (unaff_x27 == 0) {
            lVar16 = FUN_03597770();
            if (lVar16 != 0) {
              lVar16 = FUN_03597770(0);
              if (lVar16 == 0) goto LAB_0355e9f0;
              if (0 < *(int *)(lVar16 + 0x18)) {
                uVar15 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar23 = FUN_03597770(0);
                uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
                }
                unaff_x27 = FUN_035714e4(uVar7,uVar15,uVar23,1,uVar8,uVar2,
                                         (long)&stack0x000001a8 + 4,0);
                if (unaff_x27 != 0) goto LAB_0355d59c;
              }
            }
            uVar23 = FUN_03597650(0);
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbdf88);
            }
            uVar20 = FUN_036cee6c(uVar23,0,0);
            if ((uVar20 & 1) != 0) {
              uVar23 = FUN_03597650(0);
              uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)OVRPlugin_Size3f_TypeInfo);
              }
              unaff_x27 = FUN_03570fc4(uVar7,uVar23,1,uVar8,uVar2,(long)&stack0x000001a8 + 4,0);
              if (unaff_x27 != 0) goto LAB_0355d59c;
            }
            if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_0355e9f4;
            *puVar26 = 0x20;
            uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar7 = 0x20;
            unaff_x27 = FUN_03570fc4(0x20,uVar23,1,uVar8,uVar2,(long)&stack0x000001a8 + 4,0);
            if (unaff_x27 == 0) {
              if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_0355e9f4;
              *puVar26 = 3;
              uVar23 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)OVRPlugin_Size3f_TypeInfo + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar7 = 3;
              unaff_x27 = FUN_03570fc4(3,uVar23,1,uVar8,uVar2,(long)&stack0x000001a8 + 4,0);
            }
          }
LAB_0355d59c:
          uVar20 = FUN_03597634(0);
          if ((uVar20 & 1) == 0) {
            plVar11 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,4);
            if ((int)unaff_w26 < 0x10000) {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
              lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
              if (plVar11 == (long *)0x0) goto LAB_0355e9f0;
              if ((lVar16 != 0) &&
                 (lVar19 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0355e9f8;
              if ((int)plVar11[3] == 0) goto LAB_0355e9f4;
              plVar11[4] = lVar16;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 4,lVar16);
              if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_0355e9f0;
              lVar16 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
              if ((lVar16 != 0) &&
                 (lVar19 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0355e9f8;
              if (*(uint *)(plVar11 + 3) < 2) goto LAB_0355e9f4;
              plVar11[5] = lVar16;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 5,lVar16);
              if (unaff_x27 == 0) goto LAB_0355e9f0;
              in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
              lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4
                                         );
              if ((lVar16 != 0) &&
                 (lVar19 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0355e9f8;
              if (*(uint *)(plVar11 + 3) < 3) goto LAB_0355e9f4;
              plVar11[6] = lVar16;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 6,lVar16);
              lVar16 = FUN_036d3824();
              if ((lVar16 != 0) &&
                 (lVar19 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0355e9f8;
              if (*(uint *)(plVar11 + 3) < 4) goto LAB_0355e9f4;
              plVar11[7] = lVar16;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 7,lVar16);
              puVar14 = (undefined8 *)OVRPlugin_TrackedKeyboardFlags_TypeInfo;
            }
            else {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
              lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,&stack0x000000e0);
              if (plVar11 == (long *)0x0) goto LAB_0355e9f0;
              if ((lVar16 != 0) &&
                 (lVar19 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0355e9f8;
              if ((int)plVar11[3] == 0) goto LAB_0355e9f4;
              plVar11[4] = lVar16;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 4,lVar16);
              if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_0355e9f0;
              lVar16 = FUN_036d3824(*(long *)(unaff_x19 + 0xf8),0);
              if ((lVar16 != 0) &&
                 (lVar19 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0355e9f8;
              if (*(uint *)(plVar11 + 3) < 2) goto LAB_0355e9f4;
              plVar11[5] = lVar16;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 5,lVar16);
              if (unaff_x27 == 0) goto LAB_0355e9f0;
              in_stack_00000168._4_4_ = *(undefined4 *)(unaff_x27 + 0x14);
              lVar16 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000168 + 4
                                         );
              if ((lVar16 != 0) &&
                 (lVar19 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0355e9f8;
              if (*(uint *)(plVar11 + 3) < 3) goto LAB_0355e9f4;
              plVar11[6] = lVar16;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 6,lVar16);
              lVar16 = FUN_036d3824();
              if ((lVar16 != 0) &&
                 (lVar19 = thunk_FUN_01a89d6c(lVar16,*(undefined8 *)(*plVar11 + 0x40)), lVar19 == 0)
                 ) goto LAB_0355e9f8;
              if (*(uint *)(plVar11 + 3) < 4) goto LAB_0355e9f4;
              plVar11[7] = lVar16;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 7,lVar16);
              puVar14 = (undefined8 *)OVRPlugin_TextureRectMatrixf_TypeInfo;
            }
            uVar23 = FUN_025be8f4(*puVar14,plVar11,0);
            if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_0367b470(uVar23);
            unaff_x25 = in_stack_00000038;
            unaff_w26 = uVar7;
          }
          else {
            unaff_x25 = in_stack_00000038;
            unaff_w26 = uVar7;
            if (unaff_x27 == 0) goto LAB_0355e9f0;
          }
        }
        unaff_x28 = 0x178;
        uVar7 = unaff_w22;
        if (*(char *)(unaff_x27 + 0x10) != '\x01') {
          bVar4 = false;
          goto LAB_0355db64;
        }
        lVar16 = *(long *)(unaff_x27 + 0x18);
        if (lVar16 == 0) goto LAB_0355e9f0;
        iVar9 = *(int *)(lVar16 + 0x18);
        if (iVar9 == 0) {
          iVar9 = FUN_036d3364(lVar16,0);
          *(int *)(lVar16 + 0x18) = iVar9;
        }
        lVar16 = *unaff_x25;
        if (lVar16 == 0) goto LAB_0355e9f0;
        iVar10 = *(int *)(lVar16 + 0x18);
        if (iVar10 == 0) {
          iVar10 = FUN_036d3364(lVar16,0);
          *(int *)(lVar16 + 0x18) = iVar10;
        }
        if (iVar9 == iVar10) {
          bVar4 = false;
          unaff_x28 = 0x178;
          goto LAB_0355db64;
        }
        param_2 = *(long **)(unaff_x27 + 0x18);
        if (param_2 == (long *)0x0) {
          param_2 = (long *)0x0;
          *unaff_x25 = 0;
          unaff_x28 = 0x178;
        }
        else {
          lVar16 = *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo;
          bVar3 = *(byte *)(lVar16 + 0x130);
          if (*(byte *)(*param_2 + 0x130) < bVar3) {
            plVar11 = (long *)0x0;
          }
          else {
            plVar11 = param_2;
            if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) != lVar16) {
              plVar11 = (long *)0x0;
            }
          }
          *unaff_x25 = (long)plVar11;
          unaff_x28 = 0x178;
          if (*(byte *)(*param_2 + 0x130) < bVar3) {
            param_2 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) != lVar16) {
            param_2 = (long *)0x0;
          }
        }
        goto code_r0x0355db58;
      }
      uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
      uVar20 = FUN_03586568();
      uVar7 = uStack00000000000001a8;
      if ((uVar20 & 1) == 0) goto LAB_0355d414;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22) goto LAB_0355e9f4;
      iVar9 = *(int *)(unaff_x21 + unaff_x24 * 0xc + 0x24);
      if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x26a) = 1;
      }
      puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      plVar11 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    } while (*(int *)(unaff_x19 + 0x644) != 1);
    lVar16 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar16 = *(long *)puVar5;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_0355e9f0;
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_0355e9f4;
    lVar16 = lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
    *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
    goto LAB_0355e9f0;
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
    lVar16 = lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    *(short *)(lVar16 + 0x20) = (short)uVar2 + -0x2000;
    *(undefined4 *)(lVar16 + 0x48) = uVar2;
    *(long *)(lVar16 + 0x38) = *in_stack_00000038;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
    goto LAB_0355e9f0;
    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_0355e9f4;
    *(undefined8 *)(lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
         *(undefined8 *)(unaff_x19 + 0x698);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
    goto LAB_0355e9f0;
    uVar6 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_0355e9f4;
    *(undefined4 *)(lVar16 + (long)(int)uVar6 * 0x178 + 0x58) = *(undefined4 *)(unaff_x19 + 0x120);
    if ((*(long *)(unaff_x19 + 0x698) == 0) ||
       (lVar19 = UnityEngine_Material__DisableKeyword(*(long *)(unaff_x19 + 0x698),0), lVar19 == 0))
    goto LAB_0355e9f0;
    FUN_02215a88(lVar19,*(undefined4 *)(unaff_x19 + 0x6a4),&stack0x000000e0,
                 *(undefined8 *)OVRPlugin_HandStatus_TypeInfo);
    if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_0355e9f4;
    *(undefined8 *)(lVar16 + (long)(int)uVar6 * 0x178 + 0x30) = in_stack_000000e0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
    goto LAB_0355e9f0;
    uVar6 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_0355e9f4;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
    lVar19 = lVar16 + (long)(int)uVar6 * 0x178;
    *(int *)(lVar19 + 0x24) = iVar9;
    *(undefined4 *)(lVar19 + 0x2c) = uVar2;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_0355e9f4;
    *(int *)(lVar16 + (long)(int)uVar6 * 0x178 + 0x28) =
         (*(int *)(unaff_x21 + (long)(int)uVar7 * 0xc + 0x24) - iVar9) + 1;
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
    plVar11 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    unaff_x25 = in_stack_00000038;
  } while( true );
LAB_0355e31c:
  do {
    if (uVar25 != 0) {
      lVar17 = *plVar21;
      if (lVar17 == 0) goto LAB_0355e9f0;
      if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
      uVar23 = *(undefined8 *)(lVar17 + uVar25 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_036d35a8(uVar23,0,0);
      if ((uVar12 & 1) != 0) {
        lVar17 = *plVar11;
        plVar24 = (long *)*plVar21;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar17 = *plVar11;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar17 = lVar17 + lVar19;
        in_stack_00000160 = *(undefined8 *)(lVar17 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar17 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar17 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar17 + -0x1c);
        in_stack_00000140 = *(undefined8 *)(lVar17 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar17 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar17 + -0x34);
        lVar17 = FUN_0359d71c();
        if (plVar24 == (long *)0x0) goto LAB_0355e9f0;
        if ((lVar17 != 0) &&
           (lVar13 = thunk_FUN_01a89d6c(lVar17,*(undefined8 *)(*plVar24 + 0x40)), lVar13 == 0)) {
LAB_0355e9f8:
          uVar23 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar23,0);
        }
        if (*(uint *)(plVar24 + 3) <= uVar25) goto LAB_0355e9f4;
        plVar24[uVar25 + 4] = lVar17;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long)plVar24 + lVar27,lVar17);
        plVar11 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
        if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
        goto LAB_0355e9f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
        puVar14 = (undefined8 *)(lVar17 + lVar16 + 0x30);
        *puVar14 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar14,0);
      }
      lVar17 = *plVar21;
      if (lVar17 == 0) goto LAB_0355e9f0;
      if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
      lVar17 = *(long *)(lVar17 + uVar25 * 8 + 0x20);
      if (lVar17 == 0) goto LAB_0355e9f0;
      uVar23 = *(undefined8 *)(lVar17 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_036d35a8(uVar23,0,0);
      if ((uVar12 & 1) == 0) {
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar17 = *(long *)(lVar17 + uVar25 * 8 + 0x20);
        if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x38), lVar17 == 0)) goto LAB_0355e9f0;
        iVar9 = FUN_036d3364(lVar17,0);
        lVar17 = *plVar11;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar17);
          lVar17 = *plVar11;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar17 = *(long *)(lVar17 + lVar19 + -0x1c);
        if (lVar17 == 0) goto LAB_0355e9f0;
        iVar10 = FUN_036d3364(lVar17,0);
        if (iVar9 != iVar10) goto LAB_0355e510;
      }
      else {
LAB_0355e510:
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar13 = *plVar11;
        lVar17 = *(long *)(lVar17 + uVar25 * 8 + 0x20);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *plVar11;
        }
        lVar13 = **(long **)(lVar13 + 0xb8);
        if (lVar13 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_0355e9f4;
        if (lVar17 == 0) goto LAB_0355e9f0;
        thunk_FUN_0359d22c(lVar17,*(undefined8 *)(lVar13 + lVar19 + -0x1c),0);
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar13 = **(long **)(*plVar11 + 0xb8);
        if (lVar13 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar17 = *(long *)(lVar17 + uVar25 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_0355e9f0;
        *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(lVar13 + lVar19 + -0x2c);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar13 = **(long **)(*plVar11 + 0xb8);
        if (lVar13 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar17 = *(long *)(lVar17 + uVar25 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_0355e9f0;
        *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar13 + lVar19 + -0x24);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      lVar17 = *plVar11;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar17 = *plVar11;
      }
      lVar13 = **(long **)(lVar17 + 0xb8);
      if (lVar13 == 0) goto LAB_0355e9f0;
      if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_0355e9f4;
      if (*(char *)(lVar13 + lVar19 + -0x13) != '\0') {
        lVar18 = *plVar21;
        if (lVar18 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = **(long **)(*plVar11 + 0xb8);
          if (lVar13 == 0) goto LAB_0355e9f0;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_0355e9f4;
        if (lVar18 == 0) goto LAB_0355e9f0;
        FUN_0359d25c(lVar18,*(undefined8 *)(lVar13 + lVar19 + -0x1c),0);
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar13 = **(long **)(*plVar11 + 0xb8);
        if (lVar13 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar17 = *(long *)(lVar17 + uVar25 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_0355e9f0;
        *(undefined8 *)(lVar17 + 0x48) = *(undefined8 *)(lVar13 + lVar19 + -0xc);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
    }
    lVar17 = *plVar11;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar17 = *plVar11;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto LAB_0355e9f0;
    if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0))
    goto LAB_0355e9f0;
    if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_0355e9f4;
    lVar18 = *(long *)(lVar13 + lVar16 + 0x30);
    iVar9 = *(int *)(lVar17 + lVar19);
    if (lVar18 == 0) {
      if (uVar25 == 0) {
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_03595600(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar9 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_0355e9f4;
        memcpy((void *)(lVar13 + lVar16 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar13 + 0x20);
      }
      else {
        lVar17 = *plVar21;
        if (lVar17 == 0) goto LAB_0355e9f0;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0355e9f4;
        lVar17 = *(long *)(lVar17 + uVar25 * 8 + 0x20);
        if (lVar17 == 0) goto LAB_0355e9f0;
        uVar23 = FUN_0359d5ac(lVar17,0);
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_03595600(&stack0x000000e0,uVar23,iVar9 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar13 + 0x18) <= uVar25) goto LAB_0355e9f4;
        __dest = (void *)(lVar13 + lVar16 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(__dest,0);
    }
    else {
      iVar10 = *(int *)(lVar18 + 0x18);
      if (iVar10 < iVar9 * 4) {
LAB_0355e77c:
        if (iVar9 < 0x401) {
          iVar9 = FUN_036c1d60(iVar9 + 1,0);
        }
        else {
          iVar9 = iVar9 + 0x100;
        }
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03595b9c(lVar13 + lVar16 + 0x20,iVar9,0);
      }
      else if ((0 < iVar9) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar10 + 3;
        if (-1 < iVar10) {
          iVar1 = iVar10;
        }
        if (0x100 < (iVar1 >> 2) - iVar9) goto LAB_0355e77c;
      }
    }
    plVar11 = (long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
    goto LAB_0355e9f0;
    lVar13 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar13 = *plVar11;
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
    if (lVar13 == 0) goto LAB_0355e9f0;
    if ((*(uint *)(lVar13 + 0x18) <= uVar25) || (*(uint *)(lVar17 + 0x18) <= uVar25))
    goto LAB_0355e9f4;
    *(undefined8 *)(lVar17 + lVar16 + 0x68) = *(undefined8 *)(lVar13 + lVar19 + -0x1c);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar25 = uVar25 + 1;
    lVar16 = lVar16 + 0x50;
    lVar19 = lVar19 + 0x38;
    lVar27 = lVar27 + 8;
  } while (uVar7 != uVar25);
LAB_0355e92c:
  puVar5 = OVRPlugin_Media_TypeInfo;
  lVar16 = *plVar21;
  if (lVar16 != 0) {
    lVar19 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3) + 0x20;
    lVar27 = (long)(int)uVar7 * 0x50 + 0x20;
    do {
      uVar7 = (uint)uVar20;
      if ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar7) {
LAB_0355e188:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar16 + 0x18) <= uVar7) {
LAB_0355e9f4:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar23 = *(undefined8 *)(lVar16 + lVar19);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar20 = FUN_036cee6c(uVar23,0,0);
      if ((uVar20 & 1) == 0) goto LAB_0355e188;
      if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0)) break;
      uVar6 = *(uint *)(lVar16 + 0x18);
      if ((int)uVar7 < (int)uVar6) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar6 = *(uint *)(lVar16 + 0x18);
        }
        if (uVar6 <= uVar7) goto LAB_0355e9f4;
        FUN_03596a5c(lVar16 + lVar27,0,1,0);
      }
      lVar16 = *plVar21;
      uVar20 = (ulong)(uVar7 + 1);
      lVar27 = lVar27 + 0x50;
      lVar19 = lVar19 + 8;
    } while (lVar16 != 0);
  }
LAB_0355e9f0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


