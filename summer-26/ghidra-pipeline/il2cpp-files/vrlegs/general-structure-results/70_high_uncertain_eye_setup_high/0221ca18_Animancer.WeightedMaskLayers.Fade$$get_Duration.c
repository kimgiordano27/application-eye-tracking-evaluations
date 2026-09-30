/*
FUNCTION_NAME: Animancer.WeightedMaskLayers.Fade$$get_Duration
ENTRY_POINT: 0221ca18
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221cc28) */

void Animancer_WeightedMaskLayers_Fade__get_Duration
               (long param_1,uint param_2,undefined4 param_3,int param_4,int param_5,long param_6)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  char cStack000000000000000c;
  
  if ((DAT_0412225b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cda268);
    DAT_0412225b = 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    cStack000000000000000c = '\0';
    FUN_027e0bd8(param_1,&stack0x0000000c,0);
    puVar1 = PTR_DAT_03cda268;
    uVar8 = 10000;
    if (param_4 != 2) {
      uVar8 = 60000;
    }
    if ((0 < *(int *)(param_1 + 0x18) && param_2 < *(uint *)(param_1 + 0x1c)) ||
       (uVar8 < param_2 - *(uint *)(param_1 + 0x1c))) {
      lVar5 = *(long *)PTR_DAT_03cda268;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      iVar9 = 1;
      if (param_4 == 1) {
        iVar9 = 2;
      }
      else if (param_4 == 2) {
        iVar2 = FUN_02002818(*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x38));
        iVar3 = FUN_02002818(*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x38));
        iVar9 = 8;
        if (0x4000 < param_5) {
          iVar9 = 9;
        }
        if (0x10 < iVar2) {
          iVar9 = iVar9 + 1;
        }
        if (0x20 < iVar3) {
          iVar9 = iVar9 + 1;
        }
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (0 < iVar2) {
        iVar9 = iVar9 + 1;
        do {
          iVar9 = iVar9 + -1;
          if (iVar9 < 1) {
            if (*(uint *)(param_1 + 0x1c) < 0xffffc567) {
              *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) + 15000;
            }
            break;
          }
          lVar10 = *(long *)(param_1 + 0x10);
          uVar8 = iVar2 - 1;
          *(uint *)(param_1 + 0x18) = uVar8;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          puVar6 = (undefined8 *)(lVar10 + (ulong)uVar8 * 8 + 0x20);
          plVar11 = (long *)*puVar6;
          *puVar6 = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar7 = FUN_02726974(lVar5,0);
          if ((uVar7 & 1) != 0) {
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar4 = (**(code **)(*plVar11 + 0x158))(plVar11,*(undefined8 *)(*plVar11 + 0x160));
            FUN_02738750(lVar5,uVar4,(int)plVar11[3],param_3,0);
          }
          iVar2 = *(int *)(param_1 + 0x18);
        } while (0 < iVar2);
      }
    }
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(param_1,0);
    }
  }
  return;
}


