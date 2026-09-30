/*
FUNCTION_NAME: FUN_03595600
ENTRY_POINT: 03595600
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03595600(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar4 = PTR_DAT_03cbdf88;
  if ((DAT_0412e095 & 1) == 0) {
    FUN_01ab69ac(_Common_Shop_Scripts_Bundle_RechargeBundleBoard_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbe888);
    FUN_01ab69ac(PTR_DAT_03cbe000);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbeb08);
    FUN_01ab69ac(PTR_DAT_03cbeb90);
    FUN_01ab69ac(PTR_DAT_03cc3470);
    DAT_0412e095 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar10 = FUN_036d35a8(param_2,0,0);
  if ((uVar10 & 1) == 0) {
    if (param_2 == 0) goto LAB_03595b98;
    FUN_036aa240(param_2,0);
  }
  else {
    param_2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
    FUN_036a1b5c(param_2,0);
  }
  puVar9 = _Common_Shop_Scripts_Bundle_RechargeBundleBoard_<>c_TypeInfo;
  puVar8 = OVRPlugin_Media_TypeInfo;
  puVar7 = PTR_DAT_03cc3470;
  puVar6 = PTR_DAT_03cbeb90;
  puVar5 = PTR_DAT_03cbeb08;
  puVar4 = PTR_DAT_03cbe888;
  *param_1 = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1,param_2);
  *(undefined4 *)(param_1 + 1) = 0;
  iVar12 = param_3;
  if (0x3ffe < param_3) {
    iVar12 = 0x3fff;
  }
  iVar2 = iVar12 << 2;
  lVar11 = FUN_01ab6a94(*(undefined8 *)puVar6,iVar2);
  param_1[2] = lVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar11 = FUN_01ab6a94(*(undefined8 *)puVar5,iVar2);
  param_1[5] = lVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar11 = FUN_01ab6a94(*(undefined8 *)puVar5,iVar2);
  param_1[6] = lVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar11 = FUN_01ab6a94(*(undefined8 *)puVar9,iVar2);
  param_1[7] = lVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar11 = FUN_01ab6a94(*(undefined8 *)puVar6,iVar2);
  param_1[3] = lVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar11 = FUN_01ab6a94(*(undefined8 *)puVar7,iVar2);
  plVar20 = param_1 + 4;
  *plVar20 = lVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar20);
  lVar11 = FUN_01ab6a94(*(undefined8 *)puVar4,iVar12 * 6);
  plVar22 = param_1 + 8;
  *plVar22 = lVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar22,lVar11);
  puVar4 = PTR_DAT_03cbeb70;
  if (0 < param_3) {
    uVar14 = 0;
    uVar15 = 0;
    do {
      lVar13 = (long)(int)uVar15;
      lVar21 = 0;
      lVar11 = lVar13 * 8 + 0x20;
      lVar16 = (lVar13 * 2 + (long)(int)uVar15) * 4;
      do {
        lVar18 = param_1[2];
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f172 = '\x01';
        }
        if (lVar18 == 0) goto LAB_03595b98;
        uVar17 = uVar15 + (int)lVar21;
        if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_03595b94;
        uVar24 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8) + 1);
        *(undefined8 *)(lVar18 + lVar16 + 0x20) =
             **(undefined8 **)(*(long *)PTR_DAT_03cbded8 + 0xb8);
        *(undefined4 *)(lVar18 + lVar16 + 0x28) = uVar24;
        lVar18 = param_1[5];
        if (DAT_0411f1e3 == '\0') {
          FUN_01ab69ac(puVar4);
          DAT_0411f1e3 = '\x01';
        }
        if (lVar18 == 0) goto LAB_03595b98;
        if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_03595b94;
        *(undefined8 *)(lVar18 + lVar11 + lVar21 * 8) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
        lVar18 = param_1[6];
        if (lVar18 == 0) goto LAB_03595b98;
        if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_03595b94;
        *(undefined8 *)(lVar18 + lVar11 + lVar21 * 8) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
        lVar18 = *(long *)puVar8;
        lVar19 = param_1[7];
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar18 = *(long *)puVar8;
        }
        if (lVar19 == 0) goto LAB_03595b98;
        if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_03595b94;
        *(undefined4 *)(lVar19 + lVar13 * 4 + 0x20 + lVar21 * 4) = **(undefined4 **)(lVar18 + 0xb8);
        lVar18 = param_1[3];
        if (lVar18 == 0) goto LAB_03595b98;
        if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_03595b94;
        uVar24 = *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xc);
        *(undefined8 *)(lVar18 + lVar16 + 0x20) =
             *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 4);
        *(undefined4 *)(lVar18 + lVar16 + 0x28) = uVar24;
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_03595b98;
        if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_03595b94;
        lVar16 = lVar16 + 0xc;
        uVar23 = *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
        puVar3 = (undefined8 *)(lVar18 + lVar13 * 0x10 + 0x20 + lVar21 * 0x10);
        puVar3[1] = *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x18);
        *puVar3 = uVar23;
        lVar21 = lVar21 + 1;
      } while (lVar21 != 4);
      lVar11 = *plVar22;
      if (lVar11 == 0) goto LAB_03595b98;
      uVar17 = *(uint *)(lVar11 + 0x18);
      if (uVar17 <= uVar14) {
LAB_03595b94:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(uint *)(lVar11 + (long)(int)uVar14 * 4 + 0x20) = uVar15;
      if (uVar17 <= (uint)((long)(int)uVar14 | 1U)) goto LAB_03595b94;
      *(uint *)(lVar11 + ((long)(int)uVar14 | 1U) * 4 + 0x20) = uVar15 | 1;
      if (uVar17 <= uVar14 + 2) goto LAB_03595b94;
      *(uint *)(lVar11 + (long)(int)(uVar14 + 2) * 4 + 0x20) = uVar15 | 2;
      if (uVar17 <= uVar14 + 3) goto LAB_03595b94;
      *(uint *)(lVar11 + (long)(int)(uVar14 + 3) * 4 + 0x20) = uVar15 | 2;
      if (uVar17 <= uVar14 + 4) goto LAB_03595b94;
      *(uint *)(lVar11 + (long)(int)(uVar14 + 4) * 4 + 0x20) = uVar15 | 3;
      if (uVar17 <= uVar14 + 5) goto LAB_03595b94;
      *(uint *)(lVar11 + (long)(int)(uVar14 + 5) * 4 + 0x20) = uVar15;
      uVar17 = uVar15 + 4;
      uVar1 = uVar15 + 7;
      if (-1 < (int)uVar17) {
        uVar1 = uVar17;
      }
      uVar14 = uVar14 + 6;
      uVar15 = uVar17;
    } while ((int)uVar1 >> 2 < iVar12);
  }
  if (*param_1 != 0) {
    FUN_036a460c(*param_1,param_1[2],0);
    if (*param_1 != 0) {
      FUN_036a46b8(*param_1,param_1[3],0);
      if (*param_1 != 0) {
        FUN_036a4764(*param_1,param_1[4],0);
        if (*param_1 != 0) {
          FUN_036a8198(*param_1,param_1[8],0);
          lVar11 = *(long *)puVar8;
          lVar16 = *param_1;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar11 = *(long *)puVar8;
          }
          lVar11 = *(long *)(lVar11 + 0xb8);
          local_90 = *(undefined8 *)(lVar11 + 0x30);
          uStack_98 = *(undefined8 *)(lVar11 + 0x28);
          local_a0 = *(undefined8 *)(lVar11 + 0x20);
          local_80 = local_a0;
          uStack_78 = uStack_98;
          local_70 = local_90;
          if (lVar16 != 0) {
            FUN_036a3af4(lVar16,&local_a0,0);
            param_1[9] = 0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 9,0);
            return;
          }
        }
      }
    }
  }
LAB_03595b98:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


