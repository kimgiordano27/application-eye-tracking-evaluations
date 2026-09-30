/*
FUNCTION_NAME: FUN_0355c86c
ENTRY_POINT: 0355c86c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0355c86c(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  
  if ((DAT_0412df5a & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cfd918);
    DAT_0412df5a = 1;
  }
  if (*(long *)(param_1 + 0x6e8) != 0) {
    cVar1 = *(char *)(param_1 + 0x306);
    lVar4 = FUN_03693b80(*(long *)(param_1 + 0x6e8),0);
    puVar3 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
    puVar2 = PTR_DAT_03cbdf88;
    if (lVar4 != 0) {
      if (cVar1 == '\0') {
        FUN_0369d098(0,lVar4,*(undefined8 *)PTR_DAT_03cfd918,0);
        lVar4 = *(long *)(param_1 + 0x708);
        if (lVar4 != 0) {
          lVar7 = 5;
          do {
            uVar8 = (int)lVar7 - 4;
            if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar8) {
              return;
            }
            if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_0355cb04;
            uVar6 = *(undefined8 *)(lVar4 + lVar7 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar5 = FUN_036cee6c(uVar6,0,0);
            if ((uVar5 & 1) == 0) {
              return;
            }
            lVar4 = *(long *)(param_1 + 0x708);
            if (lVar4 == 0) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_0355cb04;
            lVar4 = *(long *)(lVar4 + lVar7 * 8);
            if (lVar4 == 0) break;
            lVar4 = FUN_0359d3d8(lVar4,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)puVar2);
            }
            uVar5 = FUN_036cee6c(lVar4,0,0);
            if ((uVar5 & 1) != 0) {
              if (lVar4 == 0) break;
              lVar4 = FUN_03693b80(lVar4,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)puVar3);
              }
              if (lVar4 == 0) break;
              FUN_0369d098(0,lVar4,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x120),0);
            }
            lVar4 = *(long *)(param_1 + 0x708);
            lVar7 = lVar7 + 1;
          } while (lVar4 != 0);
        }
      }
      else {
        FUN_0369d098(0x40000000,lVar4,*(undefined8 *)PTR_DAT_03cfd918,0);
        lVar4 = *(long *)(param_1 + 0x708);
        if (lVar4 != 0) {
          lVar7 = 5;
          do {
            uVar8 = (int)lVar7 - 4;
            if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar8) {
              return;
            }
            if (*(uint *)(lVar4 + 0x18) <= uVar8) {
LAB_0355cb04:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            uVar6 = *(undefined8 *)(lVar4 + lVar7 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar5 = FUN_036cee6c(uVar6,0,0);
            if ((uVar5 & 1) == 0) {
              return;
            }
            lVar4 = *(long *)(param_1 + 0x708);
            if (lVar4 == 0) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_0355cb04;
            lVar4 = *(long *)(lVar4 + lVar7 * 8);
            if (lVar4 == 0) break;
            lVar4 = FUN_0359d3d8(lVar4,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)puVar2);
            }
            uVar5 = FUN_036cee6c(lVar4,0,0);
            if ((uVar5 & 1) != 0) {
              if (lVar4 == 0) break;
              lVar4 = FUN_03693b80(lVar4,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*(long *)puVar3);
              }
              if (lVar4 == 0) break;
              FUN_0369d098(0x40000000,lVar4,
                           *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x120),0);
            }
            lVar4 = *(long *)(param_1 + 0x708);
            lVar7 = lVar7 + 1;
          } while (lVar4 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


