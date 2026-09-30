/*
FUNCTION_NAME: FUN_03563408
ENTRY_POINT: 03563408
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_03563408(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  
                    /* try { // try from 03563428 to 03663487 has its CatchHandler @ 03563428
                       catch() { ... } // from try @ 03563428 with catch @ 03563428
                       catch() { ... } // from try @ 03563580 with catch @ 03563428
                       catch() { ... } // from try @ 035635d8 with catch @ 03563428
                       catch() { ... } // from try @ 03563660 with catch @ 03563428 */
  if ((DAT_0412df8b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ceb6b0);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Result_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_0_1_1_TypeInfo);
    DAT_0412df8b = 1;
  }
  if (param_1[0x6d] != 0) {
    uVar2 = *(uint *)(param_1[0x6d] + 0x34);
                    /* try { // try from 03563488 to 0366348b has its CatchHandler @ 035635a8 */
    plVar1 = param_1 + 0x25;
    if (param_1[0x25] == 0) {
      lVar11 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03ceb6b0,uVar2);
      *plVar1 = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar1,lVar11);
    }
    else if (uVar2 != *(uint *)(param_1[0x25] + 0x18)) {
                    /* try { // try from 035634a4 to 036634a7 has its CatchHandler @ 03563598 */
                    /* try { // try from 035634a8 to 036634b7 has its CatchHandler @ 035635a4 */
      if (*(int *)(*(long *)OVRPlugin_OVRP_0_1_1_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
                    /* try { // try from 035634bc to 036634db has its CatchHandler @ 035635a0 */
      FUN_01ff02b8(plVar1,uVar2,0,*(undefined8 *)OVRPlugin_Result_TypeInfo);
    }
    puVar4 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
    puVar3 = PTR_DAT_03cbdf88;
    if (0 < (int)uVar2) {
      if (param_2 == 0) goto LAB_035637cc;
      uVar10 = 0;
      do {
        if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_035637d0;
        lVar14 = (long)(int)uVar10;
        plVar12 = (long *)(param_2 + lVar14 * 8 + 0x20);
        lVar11 = *plVar12;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar11 == 0) goto LAB_035637cc;
        uVar7 = FUN_036996d8(lVar11,**(undefined4 **)(*(long *)puVar4 + 0xb8),0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar3);
        }
        uVar8 = FUN_036d35a8(uVar7,0,0);
        if (uVar10 == 0) {
          if ((uVar8 & 1) == 0) {
            if (*(int *)(param_2 + 0x18) == 0) goto LAB_035637d0;
            lVar11 = *plVar12;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if ((lVar11 == 0) ||
               (lVar11 = FUN_036996d8(lVar11,**(undefined4 **)(*(long *)puVar4 + 0xb8),0),
               lVar11 == 0)) goto LAB_035637cc;
            iVar5 = FUN_036d3364(lVar11,0);
            lVar11 = param_1[0x22];
            if (lVar11 == 0) goto LAB_035637cc;
            lVar11 = FUN_036996d8(lVar11,**(undefined4 **)(*(long *)puVar4 + 0xb8),0);
            if (lVar11 == 0) goto LAB_035637cc;
            iVar6 = FUN_036d3364(lVar11,0);
            if (iVar5 == iVar6) {
              if (*(int *)(param_2 + 0x18) == 0) goto LAB_035637d0;
              plVar15 = (long *)*plVar1;
              if (plVar15 == (long *)0x0) goto LAB_035637cc;
              lVar11 = *plVar12;
              if ((lVar11 != 0) &&
                 (lVar14 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar14 == 0)
                 ) {
LAB_035637d4:
                uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar7,0);
              }
              if ((int)plVar15[3] == 0) goto LAB_035637d0;
              plVar15[4] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar15 + 4,lVar11);
              param_1[0x22] = lVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (param_1 + 0x22,lVar11);
              uVar16 = (**(code **)(*param_1 + 0x788))
                                 (param_1,param_1[0x22],*(undefined8 *)(*param_1 + 0x790));
              *(undefined4 *)(param_1 + 0xc3) = uVar16;
            }
          }
        }
        else if ((uVar8 & 1) == 0) {
          if (*(uint *)(param_2 + 0x18) <= uVar10) {
LAB_035637d0:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          lVar11 = *plVar12;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if ((lVar11 == 0) ||
             (lVar11 = FUN_036996d8(lVar11,**(undefined4 **)(*(long *)puVar4 + 0xb8),0), lVar11 == 0
             )) goto LAB_035637cc;
          iVar5 = FUN_036d3364(lVar11,0);
          lVar11 = param_1[0xe1];
          if (lVar11 == 0) goto LAB_035637cc;
          if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_035637d0;
          lVar11 = *(long *)(lVar11 + lVar14 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_035637cc;
          lVar11 = *(long *)(lVar11 + 0xf0);
          if ((lVar11 == 0) ||
             (lVar11 = FUN_036996d8(lVar11,**(undefined4 **)(*(long *)puVar4 + 0xb8),0), lVar11 == 0
             )) goto LAB_035637cc;
          iVar6 = FUN_036d3364(lVar11,0);
          if (iVar5 == iVar6) {
            lVar11 = param_1[0xe1];
            if (lVar11 == 0) goto LAB_035637cc;
            if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_035637d0;
            lVar11 = *(long *)(lVar11 + lVar14 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_035637cc;
            if (*(char *)(lVar11 + 0x108) != '\0') {
              if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_035637d0;
              plVar15 = (long *)*plVar1;
              if (plVar15 == (long *)0x0) goto LAB_035637cc;
              lVar13 = *plVar12;
              if ((lVar13 != 0) &&
                 (lVar9 = thunk_FUN_01a89d6c(lVar13,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0))
              goto LAB_035637d4;
              if (*(uint *)(plVar15 + 3) <= uVar10) goto LAB_035637d0;
              plVar15[lVar14 + 4] = lVar13;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (plVar15 + lVar14 + 4,lVar13);
              thunk_FUN_0359e5ac(lVar11,lVar13,0);
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    return;
  }
LAB_035637cc:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


