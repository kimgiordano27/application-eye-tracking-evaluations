/*
FUNCTION_NAME: System.Net.HttpWebRequest$$DoPreAuthenticate
ENTRY_POINT: 02e9e068
PROGRAM: vrlegs-libil2cpp.so
SCORE: 99
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e9e970) */
/* WARNING: Removing unreachable block (ram,0x02e9e9a0) */

void System_Net_HttpWebRequest__DoPreAuthenticate(void)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x19;
  long *unaff_x20;
  uint uVar15;
  long unaff_x22;
  long lVar16;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  uint unaff_w26;
  long *unaff_x27;
  ulong uVar17;
  long unaff_x28;
  uint uStack0000000000000000;
  char cStack0000000000000004;
  ushort uStack0000000000000008;
  ushort uStack000000000000000c;
  
  uStack0000000000000000 = unaff_w25;
  while ((uint)unaff_x28 != (unaff_w23 & 0xffff)) {
    unaff_w23 = (unaff_w23 & 0xffff) - 1;
    uVar1 = *(ushort *)(unaff_x22 + ((ulong)(unaff_w23 * 2) & 0x1fffe));
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (((0x20 < uVar1) || (0x20 < uVar1)) || ((1L << ((ulong)uVar1 & 0x3f) & 0x100002600U) == 0))
    break;
  }
  uVar10 = (unaff_w23 & 0xffff) + 1;
  uVar6 = (uint)*(undefined8 *)(unaff_x19 + 0x30);
  if ((uVar6 >> 0x1d & 1) == 0) {
    lVar13 = *(long *)(unaff_x19 + 0x20);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x20) == 0)) goto LAB_02e9e13c;
    uVar15 = (uint)*(ushort *)(*(long *)(lVar13 + 0x20) + 0x10);
    if (uVar15 != 0) {
      uVar17 = 0;
      uVar7 = 0;
      do {
        if (*(long *)(lVar13 + 0x20) == 0) break;
        sVar5 = FUN_025b8a2c(*(long *)(lVar13 + 0x20),uVar7,0);
        uVar14 = (ulong)uVar7;
        uVar7 = uVar7 + 1 & 0xffff;
        uVar17 = uVar17 | *(short *)(unaff_x22 + (unaff_x28 + uVar14) * 2) != sVar5;
        if (uVar15 <= uVar7) {
          uVar6 = (uint)*(undefined8 *)(unaff_x19 + 0x30);
          goto joined_r0x02e9e158;
        }
        lVar13 = *(long *)(unaff_x19 + 0x20);
      } while (lVar13 != 0);
      goto LAB_02e9e13c;
    }
    uVar17 = 0;
    uVar7 = 0;
joined_r0x02e9e158:
    if (((uVar6 >> 0x14 & 1) != 0) &&
       (((lVar13 = unaff_x28 + (ulong)uVar7, (uVar10 & 0xffff) <= (int)lVar13 + 3U ||
         (*(short *)(unaff_x22 + lVar13 * 2 + 2) != 0x2f)) ||
        (*(short *)(unaff_x22 + (lVar13 * 2 & 0xffffffffU) + 4) != 0x2f)))) {
      uVar17 = 1;
    }
  }
  else {
    uVar17 = 1;
  }
  if ((uVar6 >> 0x15 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_02e9e13c;
    uStack0000000000000008 = *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x2a);
    uVar6 = FUN_02ea5f94();
    uVar14 = uVar17 | ~uVar6 & 2;
    if ((uVar6 & 0x11) != 1) {
      uVar14 = uVar14 | 0x80;
    }
    uVar17 = uVar14 | 0x8000000000;
    if ((uVar6 & 0x5b) != 10 || *(char *)(unaff_x19 + 0x40) == '\0') {
      uVar17 = uVar14;
    }
  }
  puVar3 = PTR_DAT_03cbede8;
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_02e9e13c;
  uStack0000000000000008 = *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  uVar15 = (uint)uStack0000000000000008;
  uVar6 = unaff_w26 | unaff_w24;
  uStack000000000000000c = uStack0000000000000008;
  if ((uVar6 & 1) == 0) {
    uVar10 = (uint)*(undefined8 *)(unaff_x19 + 0x30);
    if ((uVar10 >> 0x1b & 1) != 0) {
      if ((uVar10 >> 0x1d & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_02e9e13c;
        uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x20);
        lVar13 = *(long *)PTR_DAT_03cbede8;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar13 = *(long *)puVar3;
        }
        lVar13 = FUN_025b1328(uVar12,*(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x60),0);
      }
      else {
        lVar13 = **(long **)(*(long *)PTR_DAT_03cbebc0 + 0xb8);
      }
      *unaff_x20 = lVar13;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    if ((*(long *)(unaff_x19 + 0x38) == 0) || (*unaff_x20 == 0)) goto LAB_02e9e13c;
    uStack0000000000000008 = *(ushort *)(*unaff_x20 + 0x10);
    *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x30) = uStack0000000000000008;
    if ((*(long *)(unaff_x19 + 0x18) == 0) ||
       ((((uStack0000000000000000 & 0x60) != 0 &&
         (((uint)*(undefined8 *)(unaff_x19 + 0x30) >> 0x1d & 1) == 0)) &&
        ((*(long *)(unaff_x19 + 0x20) == 0 ||
         ((bVar4 = FUN_02ee5290(*(long *)(unaff_x19 + 0x20),0x20,0), (bVar4 & 1) == 0 &&
          ((*(long *)(unaff_x19 + 0x20) == 0 ||
           (FUN_02ee5290(*(long *)(unaff_x19 + 0x20),0x40,0), (unaff_x19 != 0 & (bVar4 ^ 0xff)) == 0
           )))))))))) goto LAB_02e9e13c;
    uVar12 = FUN_02ea7edc();
    uVar7 = (uint)uStack000000000000000c;
    lVar13 = FUN_02ea7f30(uVar12,*(undefined8 *)(unaff_x19 + 0x18),uVar15,uVar7,0x10);
    if (*(int *)(*(long *)PTR_DAT_03d1f430 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03d1f430);
    }
    uVar14 = FluffyUnderware_Curvy_Generator_CGBoundsGroup__get_ScaleX(0);
    lVar16 = *unaff_x20;
    if ((uVar14 & 1) == 0) {
      lVar13 = FUN_025b1328(lVar16,lVar13,0);
      *unaff_x20 = lVar13;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    else {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar12 = FUN_025c5de8(lVar13,1,0);
      lVar13 = FUN_025b1328(lVar16,uVar12,0);
      *unaff_x20 = lVar13;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    lVar13 = *unaff_x20;
    if (lVar13 == 0) goto LAB_02e9e13c;
    uVar10 = *(uint *)(lVar13 + 0x10);
    uVar15 = uVar7;
LAB_02e9e3fc:
    iVar9 = thunk_FUN_01a5ddb0(0);
    lVar13 = lVar13 + iVar9;
  }
  else {
    lVar13 = *unaff_x20;
    if (lVar13 != 0) goto LAB_02e9e3fc;
    lVar13 = 0;
  }
  if (((((uStack0000000000000000 & 0x60) != 0) &&
       (((uint)*(undefined8 *)(unaff_x19 + 0x30) >> 0x1d & 1) == 0)) &&
      ((uStack0000000000000000 >> 5 & 1) == 0)) &&
     (((*(long *)(unaff_x19 + 0x20) == 0 ||
       (FUN_02ee5290(*(long *)(unaff_x19 + 0x20),0x40,0), unaff_x19 == 0)) ||
      ((uStack0000000000000000 >> 5 & 1) != 0)))) goto LAB_02e9e13c;
  uVar7 = FUN_02ea5f94();
  uVar8 = (uint)*(undefined8 *)(unaff_x19 + 0x30);
  if (((uStack0000000000000000 >> 0x15 & 1) != 0) && ((uVar8 >> 0x14 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_02e9e13c;
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if (((uint)uVar1 == (uVar10 & 0xffff)) ||
       ((sVar5 = *(short *)(lVar13 + (ulong)uVar1 * 2), sVar5 != 0x2f && (sVar5 != 0x5c)))) {
      uVar17 = uVar17 | 0x4000;
    }
  }
  uVar14 = uVar17;
  if ((uVar8 >> 0x1b & 1) == 0) {
    if ((uVar8 >> 0x14 & 1) != 0) {
      if ((uStack0000000000000000 & 0xc00000) == 0) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_02e9e13c;
        uVar11 = FUN_02ee5290(*(long *)(unaff_x19 + 0x20),0x2000000,0);
        if ((uVar11 & 1) == 0) goto LAB_02e9e4ac;
      }
      goto LAB_02e9e4e0;
    }
LAB_02e9e4ac:
    uVar8 = (uVar7 & 0x10) >> 4;
    if ((uVar7 & 0x10) != 0) {
      uVar14 = uVar17 | 0x400;
    }
  }
  else {
LAB_02e9e4e0:
    if ((uVar7 >> 7 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_02e9e13c;
      uVar8 = FUN_02ee5290(*(long *)(unaff_x19 + 0x20),0x2000000,0);
      uVar14 = uVar17 | 0x410;
      if ((uVar8 & 1) == 0) {
        uVar14 = uVar17;
      }
    }
    uVar2 = (uint)((uStack0000000000000000 & 0x400000) == 0 || (uVar7 & 0x10) == 0);
    uVar8 = uVar8 | uVar2 ^ 1;
    if (uVar2 == 0) {
      uVar14 = uVar14 | 0x410;
    }
    if (((uStack0000000000000000 >> 0x17 & 1) != 0) && ((uVar14 & 0x400) != 0 || (uVar7 & 4) != 0))
    {
      uVar14 = uVar14 | 0x2000;
    }
    if ((uVar7 & 0x10) != 0) {
      uVar14 = uVar14 | 0x8000;
    }
  }
  uVar17 = *(ulong *)(unaff_x19 + 0x30) & 0x20000000;
  if ((uVar7 >> 1 & 1) == 0) {
    if (((uVar17 == 0) || ((uVar7 >> 5 & 1) != 0)) ||
       (((uint)*(ulong *)(unaff_x19 + 0x30) >> 0x13 & 1) != 0)) {
      uVar14 = uVar14 | 0x10;
      uVar8 = 1;
    }
    else {
      uVar17 = 1;
    }
  }
  if (uVar17 != 0 && (uVar7 & 0x21) != 0) {
    uVar7 = uVar7 & 0xfffffffe;
  }
  uVar17 = uVar14 | 0x400;
  if ((uVar7 & 1) != 0) {
    uVar17 = uVar14;
  }
  uVar14 = uVar17;
  if ((*(char *)(unaff_x19 + 0x40) != '\0') &&
     (uVar14 = uVar17 | 0x10000000000, ((uint)((uVar7 & 0x4b) == 10) & (uVar8 ^ 1)) == 0)) {
    uVar14 = uVar17;
  }
  uVar7 = uVar15;
  if ((uVar6 & 1) == 0) {
    lVar13 = *(long *)(unaff_x19 + 0x18);
    if (lVar13 == 0) goto LAB_02e9e13c;
    if (((int)uVar15 < *(int *)(lVar13 + 0x10)) &&
       (sVar5 = FUN_025b8a2c(lVar13,uVar15,0), sVar5 == 0x3f)) {
      uStack000000000000000c = (short)uVar15 + 1;
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_02e9e13c;
      uVar12 = FUN_02ea7edc();
      uVar7 = (uint)uStack000000000000000c;
      lVar13 = FUN_02ea7f30(uVar12,*(undefined8 *)(unaff_x19 + 0x18),uVar15,uStack000000000000000c,
                            0x20);
      if (*(int *)(*(long *)PTR_DAT_03d1f430 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d1f430);
      }
      uVar17 = FluffyUnderware_Curvy_Generator_CGBoundsGroup__get_ScaleX(0);
      lVar16 = *unaff_x20;
      if ((uVar17 & 1) == 0) {
        lVar13 = FUN_025b1328(lVar16,lVar13,0);
        *unaff_x20 = lVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      else {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar12 = FUN_025c5de8(lVar13,1,0);
        lVar13 = FUN_025b1328(lVar16,uVar12,0);
        *unaff_x20 = lVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      if (*unaff_x20 == 0) goto LAB_02e9e13c;
      uVar10 = *(uint *)(*unaff_x20 + 0x10);
    }
  }
  uVar1 = uStack0000000000000008;
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_02e9e13c;
  uVar17 = (ulong)uStack0000000000000008;
  uVar15 = (uint)uStack0000000000000008;
  *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x32) = uStack0000000000000008;
  lVar13 = *unaff_x20;
  if (lVar13 != 0) {
    iVar9 = thunk_FUN_01a5ddb0(0);
    lVar13 = lVar13 + iVar9;
  }
  if ((uVar15 < (uVar10 & 0xffff)) && (*(short *)(lVar13 + uVar17 * 2) == 0x3f)) {
    uStack0000000000000008 = uVar1 + 1;
    uVar15 = FUN_02ea5f94();
    uVar17 = uVar14 | 0x20;
    if ((uVar15 & 2) != 0) {
      uVar17 = uVar14;
    }
    if ((uVar15 & 0x11) != 1) {
      uVar17 = uVar17 | 0x800;
    }
    uVar14 = uVar17 | 0x20000000000;
    if ((uVar15 & 0x5b) != 10 || *(char *)(unaff_x19 + 0x40) == '\0') {
      uVar14 = uVar17;
    }
  }
  if ((uVar6 & 1) == 0) {
    lVar13 = *(long *)(unaff_x19 + 0x18);
    if (lVar13 == 0) goto LAB_02e9e13c;
    if (((int)uVar7 < *(int *)(lVar13 + 0x10)) &&
       (sVar5 = FUN_025b8a2c(lVar13,uVar7,0), sVar5 == 0x23)) {
      uStack000000000000000c = (short)uVar7 + 1;
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_02e9e13c;
      uVar12 = FUN_02ea7edc();
      lVar13 = FUN_02ea7f30(uVar12,*(undefined8 *)(unaff_x19 + 0x18),uVar7,uStack000000000000000c,
                            0x40);
      if (*(int *)(*(long *)PTR_DAT_03d1f430 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d1f430);
      }
      uVar17 = FluffyUnderware_Curvy_Generator_CGBoundsGroup__get_ScaleX(0);
      lVar16 = *unaff_x20;
      if ((uVar17 & 1) == 0) {
        lVar13 = FUN_025b1328(lVar16,lVar13,0);
        *unaff_x20 = lVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      else {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar12 = FUN_025c5de8(lVar13,1,0);
        lVar13 = FUN_025b1328(lVar16,uVar12,0);
        *unaff_x20 = lVar13;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      if (*unaff_x20 == 0) goto LAB_02e9e13c;
      uVar10 = *(uint *)(*unaff_x20 + 0x10);
    }
  }
  uVar1 = uStack0000000000000008;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar17 = (ulong)uStack0000000000000008;
    uVar6 = (uint)uStack0000000000000008;
    *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x34) = uStack0000000000000008;
    lVar13 = *unaff_x20;
    if (lVar13 != 0) {
      iVar9 = thunk_FUN_01a5ddb0(0);
      lVar13 = lVar13 + iVar9;
    }
    if ((uVar6 < (uVar10 & 0xffff)) && (*(short *)(lVar13 + uVar17 * 2) == 0x23)) {
      uStack0000000000000008 = uVar1 + 1;
      uVar10 = FUN_02ea5f94();
      uVar17 = uVar14 | 0x40;
      if ((uVar10 & 2) != 0) {
        uVar17 = uVar14;
      }
      if ((uVar10 & 0x11) != 1) {
        uVar17 = uVar17 | 0x1000;
      }
      uVar14 = uVar17 | 0x40000000000;
      if ((uVar10 & 0x5b) != 10 || *(char *)(unaff_x19 + 0x40) == '\0') {
        uVar14 = uVar17;
      }
    }
    lVar13 = *(long *)(unaff_x19 + 0x38);
    if (lVar13 != 0) {
      *(ushort *)(lVar13 + 0x36) = uStack0000000000000008;
      cStack0000000000000004 = '\0';
      FUN_027e0bd8(lVar13,&stack0x00000004,0);
      *(ulong *)(unaff_x19 + 0x30) = uVar14 | *(ulong *)(unaff_x19 + 0x30) | 0x80000000;
      if (cStack0000000000000004 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar13,0);
      }
      *(ulong *)(unaff_x19 + 0x30) = *(ulong *)(unaff_x19 + 0x30) | 0x800000000;
      return;
    }
  }
LAB_02e9e13c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


