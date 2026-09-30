/*
FUNCTION_NAME: FUN_0291a440
ENTRY_POINT: 0291a440
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_0291a440(long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_5 + 0x20);
  iVar2 = param_3 - param_2;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ae9e74();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ae9e74();
  }
  uVar5 = param_2 + (iVar2 >> 1);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ae9e74();
  }
  FUN_02919f3c(param_1,param_4,param_2,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ae9e74();
  }
  FUN_02919f3c(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  lVar3 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ae9e74();
  }
  FUN_02919f3c(param_1,param_4,uVar5,param_3,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  if (param_1 == 0) {
System_Array_InternalEnumerator<OVRPlugin_Vector2f>___ctor:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (uVar5 < *(uint *)(param_1 + 0x18)) {
    uVar4 = *(undefined8 *)(param_1 + (long)(int)uVar5 * 8 + 0x20);
    uVar1 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    FUN_0291a014(param_1,uVar5,uVar1);
    uVar5 = uVar1;
    if ((int)uVar1 <= (int)param_2) {
LAB_0291a65c:
      lVar3 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ae9e74();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      FUN_0291a014(param_1,param_2,uVar1);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      if (param_4 == 0) goto System_Array_InternalEnumerator<OVRPlugin_Vector2f>___ctor;
      uVar6 = *(undefined8 *)(param_1 + (long)(int)param_2 * 8 + 0x20);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      iVar2 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),uVar6,uVar4,*(undefined8 *)(param_4 + 0x28)
                        );
      if (-1 < iVar2) {
        do {
          uVar5 = uVar5 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_0291a6c8;
          uVar6 = *(undefined8 *)(param_1 + (long)(int)uVar5 * 8 + 0x20);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_01ae9e74();
          }
          iVar2 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar4,uVar6,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar2 < 0);
        if ((int)uVar5 <= (int)param_2) goto LAB_0291a65c;
        lVar3 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ae9e74();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ae9e74();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_01ae9e74();
        }
        FUN_0291a014(param_1,param_2,uVar5);
      }
    }
  }
LAB_0291a6c8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


