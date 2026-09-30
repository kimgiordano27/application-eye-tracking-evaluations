/*
FUNCTION_NAME: System.Net.HttpWebRequest$$GetRequestHeaders
ENTRY_POINT: 02e9e264
PROGRAM: vrlegs-libil2cpp.so
SCORE: 104
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02e9e970) */
/* WARNING: Removing unreachable block (ram,0x02e9e9a0) */

void System_Net_HttpWebRequest__GetRequestHeaders(void)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x19;
  long *unaff_x20;
  uint uVar14;
  undefined4 unaff_w22;
  long lVar15;
  uint unaff_w25;
  ulong unaff_x26;
  ulong unaff_x27;
  char cStack0000000000000004;
  ushort uStack0000000000000008;
  ushort uStack000000000000000c;
  
  lVar10 = FUN_025b1328();
  *unaff_x20 = lVar10;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if ((*(long *)(unaff_x19 + 0x38) == 0) || (*unaff_x20 == 0)) goto LAB_02e9e13c;
  uStack0000000000000008 = *(ushort *)(*unaff_x20 + 0x10);
  *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x30) = uStack0000000000000008;
  if ((*(long *)(unaff_x19 + 0x18) == 0) ||
     ((((unaff_w25 & 0x60) != 0 && (((uint)*(undefined8 *)(unaff_x19 + 0x30) >> 0x1d & 1) == 0)) &&
      ((*(long *)(unaff_x19 + 0x20) == 0 ||
       ((bVar4 = FUN_02ee5290(*(long *)(unaff_x19 + 0x20),0x20,0), (bVar4 & 1) == 0 &&
        ((*(long *)(unaff_x19 + 0x20) == 0 ||
         (FUN_02ee5290(*(long *)(unaff_x19 + 0x20),0x40,0), (unaff_x19 != 0 & (bVar4 ^ 0xff)) == 0))
        )))))))) goto LAB_02e9e13c;
  uVar11 = FUN_02ea7edc();
  uVar3 = uStack000000000000000c;
  uVar9 = (uint)uStack000000000000000c;
  lVar10 = FUN_02ea7f30(uVar11,*(undefined8 *)(unaff_x19 + 0x18),unaff_w22,uStack000000000000000c,
                        0x10);
  if (*(int *)(*(long *)PTR_DAT_03d1f430 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)PTR_DAT_03d1f430);
  }
  uVar12 = FluffyUnderware_Curvy_Generator_CGBoundsGroup__get_ScaleX(0);
  lVar15 = *unaff_x20;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_025b1328(lVar15,lVar10,0);
    *unaff_x20 = lVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar11 = FUN_025c5de8(lVar10,1,0);
    lVar10 = FUN_025b1328(lVar15,uVar11,0);
    *unaff_x20 = lVar10;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  lVar10 = *unaff_x20;
  if (lVar10 == 0) goto LAB_02e9e13c;
  uVar14 = *(uint *)(lVar10 + 0x10);
  iVar6 = thunk_FUN_01a5ddb0(0);
  if (((((unaff_w25 & 0x60) != 0) && (((uint)*(undefined8 *)(unaff_x19 + 0x30) >> 0x1d & 1) == 0))
      && ((unaff_w25 >> 5 & 1) == 0)) &&
     (((*(long *)(unaff_x19 + 0x20) == 0 ||
       (FUN_02ee5290(*(long *)(unaff_x19 + 0x20),0x40,0), unaff_x19 == 0)) ||
      ((unaff_w25 >> 5 & 1) != 0)))) goto LAB_02e9e13c;
  uVar7 = FUN_02ea5f94();
  uVar8 = (uint)*(undefined8 *)(unaff_x19 + 0x30);
  if (((unaff_w25 >> 0x15 & 1) != 0) && ((uVar8 >> 0x14 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_02e9e13c;
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if (((uint)uVar1 == (uVar14 & 0xffff)) ||
       ((sVar5 = *(short *)(lVar10 + iVar6 + (ulong)uVar1 * 2), sVar5 != 0x2f && (sVar5 != 0x5c))))
    {
      unaff_x27 = unaff_x27 | 0x4000;
    }
  }
  uVar12 = unaff_x27;
  if ((uVar8 >> 0x1b & 1) == 0) {
    if ((uVar8 >> 0x14 & 1) != 0) {
      if ((unaff_w25 & 0xc00000) == 0) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_02e9e13c;
        uVar13 = FUN_02ee5290(*(long *)(unaff_x19 + 0x20),0x2000000,0);
        if ((uVar13 & 1) == 0) goto LAB_02e9e4ac;
      }
      goto LAB_02e9e4e0;
    }
LAB_02e9e4ac:
    uVar8 = (uVar7 & 0x10) >> 4;
    if ((uVar7 & 0x10) != 0) {
      uVar12 = unaff_x27 | 0x400;
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
      uVar12 = unaff_x27 | 0x410;
      if ((uVar8 & 1) == 0) {
        uVar12 = unaff_x27;
      }
    }
    uVar2 = (uint)((unaff_w25 & 0x400000) == 0 || (uVar7 & 0x10) == 0);
    uVar8 = uVar8 | uVar2 ^ 1;
    if (uVar2 == 0) {
      uVar12 = uVar12 | 0x410;
    }
    if (((unaff_w25 >> 0x17 & 1) != 0) && ((uVar12 & 0x400) != 0 || (uVar7 & 4) != 0)) {
      uVar12 = uVar12 | 0x2000;
    }
    if ((uVar7 & 0x10) != 0) {
      uVar12 = uVar12 | 0x8000;
    }
  }
  uVar13 = *(ulong *)(unaff_x19 + 0x30) & 0x20000000;
  if ((uVar7 >> 1 & 1) == 0) {
    if (((uVar13 == 0) || ((uVar7 >> 5 & 1) != 0)) ||
       (((uint)*(ulong *)(unaff_x19 + 0x30) >> 0x13 & 1) != 0)) {
      uVar12 = uVar12 | 0x10;
      uVar8 = 1;
    }
    else {
      uVar13 = 1;
    }
  }
  if (uVar13 != 0 && (uVar7 & 0x21) != 0) {
    uVar7 = uVar7 & 0xfffffffe;
  }
  uVar13 = uVar12 | 0x400;
  if ((uVar7 & 1) != 0) {
    uVar13 = uVar12;
  }
  uVar12 = uVar13;
  if ((*(char *)(unaff_x19 + 0x40) != '\0') &&
     (uVar12 = uVar13 | 0x10000000000, ((uint)((uVar7 & 0x4b) == 10) & (uVar8 ^ 1)) == 0)) {
    uVar12 = uVar13;
  }
  if ((unaff_x26 & 1) == 0) {
    lVar10 = *(long *)(unaff_x19 + 0x18);
    if (lVar10 == 0) goto LAB_02e9e13c;
    uVar9 = (uint)uVar3;
    if (((int)(uint)uVar3 < *(int *)(lVar10 + 0x10)) &&
       (sVar5 = FUN_025b8a2c(lVar10,uVar3,0), sVar5 == 0x3f)) {
      uStack000000000000000c = uVar3 + 1;
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_02e9e13c;
      uVar11 = FUN_02ea7edc();
      uVar1 = uStack000000000000000c;
      lVar10 = FUN_02ea7f30(uVar11,*(undefined8 *)(unaff_x19 + 0x18),uVar3,uStack000000000000000c,
                            0x20);
      if (*(int *)(*(long *)PTR_DAT_03d1f430 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d1f430);
      }
      uVar13 = FluffyUnderware_Curvy_Generator_CGBoundsGroup__get_ScaleX(0);
      lVar15 = *unaff_x20;
      if ((uVar13 & 1) == 0) {
        lVar10 = FUN_025b1328(lVar15,lVar10,0);
        *unaff_x20 = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      else {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar11 = FUN_025c5de8(lVar10,1,0);
        lVar10 = FUN_025b1328(lVar15,uVar11,0);
        *unaff_x20 = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      if (*unaff_x20 == 0) goto LAB_02e9e13c;
      uVar14 = *(uint *)(*unaff_x20 + 0x10);
      uVar9 = (uint)uVar1;
    }
  }
  uVar3 = uStack0000000000000008;
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_02e9e13c;
  uVar13 = (ulong)uStack0000000000000008;
  uVar7 = (uint)uStack0000000000000008;
  *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x32) = uStack0000000000000008;
  lVar10 = *unaff_x20;
  if (lVar10 != 0) {
    iVar6 = thunk_FUN_01a5ddb0(0);
    lVar10 = lVar10 + iVar6;
  }
  if ((uVar7 < (uVar14 & 0xffff)) && (*(short *)(lVar10 + uVar13 * 2) == 0x3f)) {
    uStack0000000000000008 = uVar3 + 1;
    uVar7 = FUN_02ea5f94();
    uVar13 = uVar12 | 0x20;
    if ((uVar7 & 2) != 0) {
      uVar13 = uVar12;
    }
    if ((uVar7 & 0x11) != 1) {
      uVar13 = uVar13 | 0x800;
    }
    uVar12 = uVar13 | 0x20000000000;
    if ((uVar7 & 0x5b) != 10 || *(char *)(unaff_x19 + 0x40) == '\0') {
      uVar12 = uVar13;
    }
  }
  if ((unaff_x26 & 1) == 0) {
    lVar10 = *(long *)(unaff_x19 + 0x18);
    if (lVar10 == 0) goto LAB_02e9e13c;
    if (((int)uVar9 < *(int *)(lVar10 + 0x10)) &&
       (sVar5 = FUN_025b8a2c(lVar10,uVar9,0), sVar5 == 0x23)) {
      uStack000000000000000c = (short)uVar9 + 1;
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_02e9e13c;
      uVar11 = FUN_02ea7edc();
      lVar10 = FUN_02ea7f30(uVar11,*(undefined8 *)(unaff_x19 + 0x18),uVar9,uStack000000000000000c,
                            0x40);
      if (*(int *)(*(long *)PTR_DAT_03d1f430 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d1f430);
      }
      uVar13 = FluffyUnderware_Curvy_Generator_CGBoundsGroup__get_ScaleX(0);
      lVar15 = *unaff_x20;
      if ((uVar13 & 1) == 0) {
        lVar10 = FUN_025b1328(lVar15,lVar10,0);
        *unaff_x20 = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      else {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar11 = FUN_025c5de8(lVar10,1,0);
        lVar10 = FUN_025b1328(lVar15,uVar11,0);
        *unaff_x20 = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      if (*unaff_x20 == 0) goto LAB_02e9e13c;
      uVar14 = *(uint *)(*unaff_x20 + 0x10);
    }
  }
  uVar3 = uStack0000000000000008;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar13 = (ulong)uStack0000000000000008;
    uVar9 = (uint)uStack0000000000000008;
    *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x34) = uStack0000000000000008;
    lVar10 = *unaff_x20;
    if (lVar10 != 0) {
      iVar6 = thunk_FUN_01a5ddb0(0);
      lVar10 = lVar10 + iVar6;
    }
    if ((uVar9 < (uVar14 & 0xffff)) && (*(short *)(lVar10 + uVar13 * 2) == 0x23)) {
      uStack0000000000000008 = uVar3 + 1;
      uVar9 = FUN_02ea5f94();
      uVar13 = uVar12 | 0x40;
      if ((uVar9 & 2) != 0) {
        uVar13 = uVar12;
      }
      if ((uVar9 & 0x11) != 1) {
        uVar13 = uVar13 | 0x1000;
      }
      uVar12 = uVar13 | 0x40000000000;
      if ((uVar9 & 0x5b) != 10 || *(char *)(unaff_x19 + 0x40) == '\0') {
        uVar12 = uVar13;
      }
    }
    lVar10 = *(long *)(unaff_x19 + 0x38);
    if (lVar10 != 0) {
      *(ushort *)(lVar10 + 0x36) = uStack0000000000000008;
      cStack0000000000000004 = '\0';
      FUN_027e0bd8(lVar10,&stack0x00000004,0);
      *(ulong *)(unaff_x19 + 0x30) = uVar12 | *(ulong *)(unaff_x19 + 0x30) | 0x80000000;
      if (cStack0000000000000004 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar10,0);
      }
      *(ulong *)(unaff_x19 + 0x30) = *(ulong *)(unaff_x19 + 0x30) | 0x800000000;
      return;
    }
  }
LAB_02e9e13c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


