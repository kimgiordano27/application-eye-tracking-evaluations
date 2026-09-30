/*
FUNCTION_NAME: FUN_07defe24
ENTRY_POINT: 07defe24
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_07defe24(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  
  puVar1 = OVRPlugin_OVRP_0_1_3_TypeInfo;
  if ((DAT_0899a1ee & 1) == 0) {
    FUN_03a8a718(OVRPlugin_Media_TypeInfo);
    FUN_03a8a718(PTR_DAT_084961e0);
    FUN_03a8a718(OVRPlugin_OVRP_0_1_3_TypeInfo);
    DAT_0899a1ee = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_07eaa354(param_2,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_07df003c;
    uVar3 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
    puVar1 = OVRPlugin_Media_TypeInfo;
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)OVRPlugin_Media_TypeInfo);
    }
    FUN_07de46f4(uVar3);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_07df003c;
    uVar3 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
    uVar2 = FUN_07f69f88(uVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_07df003c;
      uVar2 = FUN_07e08834(*(long *)(param_1 + 0x20),0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_07df003c;
        uVar3 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar1);
        }
        uVar2 = FUN_07de49dc(uVar3,param_2,&local_48);
        if ((uVar2 & 1) != 0) {
          lVar7 = *(long *)(param_1 + 0x20);
          if (lVar7 == 0) goto LAB_07df003c;
          uVar3 = FUN_07dfdfd8(lVar7,0);
          uVar2 = FUN_07f75bd0(lVar7,param_2,uVar3,param_3,local_48._4_4_,uStack_40 & 0xffffffff,
                               local_38,0);
          if ((uVar2 & 1) != 0) {
            return;
          }
          goto LAB_07df0008;
        }
      }
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (plVar4 = (long *)FUN_07e02864(*(long *)(param_1 + 0x20),0), plVar4 == (long *)0x0))
    goto LAB_07df003c;
    lVar7 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_084961e0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar6 + 0x12) * 0x10 + 0x138);
          goto LAB_07defff8;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)PTR_DAT_084961e0,0x12);
LAB_07defff8:
    (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
  }
LAB_07df0008:
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
    FUN_07f71dcc(uVar3,param_2,param_3,0);
    return;
  }
LAB_07df003c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


