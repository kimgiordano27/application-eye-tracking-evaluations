/*
FUNCTION_NAME: FUN_068aac14
ENTRY_POINT: 068aac14
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_068aac14(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_075590ed & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_16_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2d40);
    DAT_075590ed = 1;
  }
  if (((char)param_1[0x50] != '\0') && ((char)param_1[0x18] == '\0')) {
    plVar2 = (long *)FUN_068a9e0c(param_1);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar4 = *plVar2;
    lVar7 = param_1[6];
    lVar8 = param_1[0x5d];
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)OVRPlugin_OVRP_1_16_0_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_068aacd0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(plVar2,*(long *)OVRPlugin_OVRP_1_16_0_TypeInfo,4);
LAB_068aacd0:
    uVar5 = (*(code *)*puVar3)(plVar2,lVar7,lVar8,puVar3[1]);
    if ((uVar5 & 1) != 0) {
      iVar1 = FUN_068ab1d0(param_1,param_1[0x5d],param_1[0x5f]);
      if (0 < iVar1) {
        *(undefined4 *)(param_1 + 0x5c) = 1;
      }
      lVar4 = FUN_068b3948(param_1,0);
      if (((lVar4 == 0) && (1 < iVar1)) && (*(char *)((long)param_1 + 0x29c) == '\0')) {
        lVar4 = (**(code **)(*param_1 + 0x908))
                          (param_1,(int)param_1[0x53],*(undefined8 *)(*param_1 + 0x910));
        if (lVar4 != 0) {
          lVar7 = param_1[0x5f];
          if (*(int *)(*(long *)PTR_DAT_070f2d40 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_0686ba98(param_1,lVar7,lVar4,0);
          return;
        }
      }
    }
  }
  return;
}


