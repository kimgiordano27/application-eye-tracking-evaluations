/*
FUNCTION_NAME: FUN_03563d74
ENTRY_POINT: 03563d74
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


void FUN_03563d74(long *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_03cbdf88;
  if ((DAT_0412df90 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cfd918);
    DAT_0412df90 = 1;
  }
  cVar1 = *(char *)((long)param_1 + 0x306);
  lVar4 = (**(code **)(*param_1 + 0x358))(param_1,*(undefined8 *)(*param_1 + 0x360));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar2);
  }
  puVar3 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  uVar5 = FUN_036cee6c(lVar4,0,0);
  if (cVar1 == '\0') {
    if ((uVar5 & 1) != 0) {
      if (lVar4 == 0) goto LAB_03564020;
      FUN_0369d098(0,lVar4,*(undefined8 *)PTR_DAT_03cfd918,0);
    }
    lVar4 = param_1[0xe1];
    if (lVar4 != 0) {
      lVar8 = 5;
      do {
        uVar9 = (int)lVar8 - 4;
        if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar9) {
          return;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_03564038;
        uVar7 = *(undefined8 *)(lVar4 + lVar8 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_036cee6c(uVar7,0,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar4 = param_1[0xe1];
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_03564038;
        plVar6 = *(long **)(lVar4 + lVar8 * 8);
        if (plVar6 == (long *)0x0) break;
        lVar4 = (**(code **)(*plVar6 + 0x358))(plVar6,*(undefined8 *)(*plVar6 + 0x360));
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar2);
        }
        uVar5 = FUN_036cee6c(lVar4,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar4 == 0) break;
          FUN_0369d098(0,lVar4,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x120),0);
        }
        lVar4 = param_1[0xe1];
        lVar8 = lVar8 + 1;
      } while (lVar4 != 0);
    }
  }
  else {
    if ((uVar5 & 1) != 0) {
      if (lVar4 == 0) goto LAB_03564020;
      FUN_0369d098(0x40000000,lVar4,*(undefined8 *)PTR_DAT_03cfd918,0);
    }
    lVar4 = param_1[0xe1];
    if (lVar4 != 0) {
      lVar8 = 5;
      do {
        uVar9 = (int)lVar8 - 4;
        if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar9) {
          return;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar9) {
LAB_03564038:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar7 = *(undefined8 *)(lVar4 + lVar8 * 8);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_036cee6c(uVar7,0,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar4 = param_1[0xe1];
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_03564038;
        plVar6 = *(long **)(lVar4 + lVar8 * 8);
        if (plVar6 == (long *)0x0) break;
        lVar4 = (**(code **)(*plVar6 + 0x358))(plVar6,*(undefined8 *)(*plVar6 + 0x360));
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)puVar2);
        }
        uVar5 = FUN_036cee6c(lVar4,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar4 == 0) break;
          FUN_0369d098(0x40000000,lVar4,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x120),0
                      );
        }
        lVar4 = param_1[0xe1];
        lVar8 = lVar8 + 1;
      } while (lVar4 != 0);
    }
  }
LAB_03564020:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


