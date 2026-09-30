/*
FUNCTION_NAME: FUN_0355c010
ENTRY_POINT: 0355c010
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_0355c010(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  
  if ((DAT_0412df54 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ceb6b0);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Result_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_1_TypeInfo);
    DAT_0412df54 = 1;
  }
  if (param_1[0x6d] == 0) {
LAB_0355c3a0:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = *(uint *)(param_1[0x6d] + 0x34);
  plVar1 = param_1 + 0x25;
  if (param_1[0x25] == 0) {
    lVar12 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03ceb6b0,uVar2);
    *plVar1 = lVar12;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar12);
  }
  else if (uVar2 != *(uint *)(param_1[0x25] + 0x18)) {
    if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_01ff02b8(plVar1,uVar2,0,*(undefined8 *)OVRPlugin_Result_TypeInfo);
  }
  puVar4 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  puVar3 = PTR_DAT_03cbdf88;
  if (0 < (int)uVar2) {
    if (param_2 == 0) goto LAB_0355c3a0;
    uVar10 = 0;
    do {
      if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_0355c3a4;
      lVar14 = (long)(int)uVar10;
      plVar15 = (long *)(param_2 + lVar14 * 8 + 0x20);
      lVar12 = *plVar15;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar12 == 0) goto LAB_0355c3a0;
      lVar12 = FUN_036996d8(lVar12,**(undefined4 **)(*(long *)puVar4 + 0xb8),0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar3);
      }
      uVar7 = FUN_036d35a8(lVar12,0,0);
      if (uVar10 == 0) {
        if ((uVar7 & 1) == 0) {
          if (lVar12 == 0) goto LAB_0355c3a0;
          iVar5 = FUN_036d3364(lVar12,0);
          lVar12 = param_1[0x22];
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)puVar4);
          }
          if ((lVar12 == 0) ||
             (lVar12 = FUN_036996d8(lVar12,**(undefined4 **)(*(long *)puVar4 + 0xb8),0), lVar12 == 0
             )) goto LAB_0355c3a0;
          iVar6 = FUN_036d3364(lVar12,0);
          if (iVar5 == iVar6) {
            if (*(int *)(param_2 + 0x18) == 0) goto LAB_0355c3a4;
            plVar11 = (long *)*plVar1;
            if (plVar11 == (long *)0x0) goto LAB_0355c3a0;
            lVar12 = *plVar15;
            if ((lVar12 != 0) &&
               (lVar14 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
            {
LAB_0355c3a8:
              uVar9 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar9,0);
            }
            if ((int)plVar11[3] == 0) goto LAB_0355c3a4;
            plVar11[4] = lVar12;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 4,lVar12);
            param_1[0x22] = lVar12;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x22,lVar12)
            ;
            uVar16 = (**(code **)(*param_1 + 0x788))
                               (param_1,param_1[0x22],*(undefined8 *)(*param_1 + 0x790));
            *(undefined4 *)(param_1 + 0xc3) = uVar16;
          }
        }
      }
      else if ((uVar7 & 1) == 0) {
        if (lVar12 == 0) goto LAB_0355c3a0;
        iVar5 = FUN_036d3364(lVar12,0);
        lVar12 = param_1[0xe1];
        if (lVar12 == 0) goto LAB_0355c3a0;
        if (*(uint *)(lVar12 + 0x18) <= uVar10) {
LAB_0355c3a4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar12 = *(long *)(lVar12 + lVar14 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_0355c3a0;
        lVar12 = *(long *)(lVar12 + 0x38);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if ((lVar12 == 0) ||
           (lVar12 = FUN_036996d8(lVar12,**(undefined4 **)(*(long *)puVar4 + 0xb8),0), lVar12 == 0))
        goto LAB_0355c3a0;
        iVar6 = FUN_036d3364(lVar12,0);
        if (iVar5 == iVar6) {
          lVar12 = param_1[0xe1];
          if (lVar12 == 0) goto LAB_0355c3a0;
          if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0355c3a4;
          lVar12 = *(long *)(lVar12 + lVar14 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_0355c3a0;
          if (*(char *)(lVar12 + 0x50) != '\0') {
            if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_0355c3a4;
            plVar11 = (long *)*plVar1;
            if (plVar11 == (long *)0x0) goto LAB_0355c3a0;
            lVar13 = *plVar15;
            if ((lVar13 != 0) &&
               (lVar8 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
            goto LAB_0355c3a8;
            if (*(uint *)(plVar11 + 3) <= uVar10) goto LAB_0355c3a4;
            plVar11[lVar14 + 4] = lVar13;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (plVar11 + lVar14 + 4,lVar13);
            thunk_FUN_0359d22c(lVar12,lVar13,0);
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
  }
  return;
}


