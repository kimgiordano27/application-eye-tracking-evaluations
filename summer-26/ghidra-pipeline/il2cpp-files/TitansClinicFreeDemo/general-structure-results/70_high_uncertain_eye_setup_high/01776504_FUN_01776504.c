/*
FUNCTION_NAME: FUN_01776504
ENTRY_POINT: 01776504
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_01776504(long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = *(long *)(param_5 + 0x20);
  iVar4 = param_3 - param_2;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0122e748();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0122e748();
  }
  uVar6 = param_2 + (iVar4 >> 1);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar5 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0122e748();
  }
  FUN_01776010(param_1,param_4,param_2,uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x70));
  lVar5 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0122e748();
  }
  FUN_01776010(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x70));
  lVar5 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0122e748();
  }
  FUN_01776010(param_1,param_4,uVar6,param_3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_017767a0:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (uVar6 < *(uint *)(param_1 + 0x18)) {
    cVar1 = *(char *)(param_1 + (int)uVar6 + 0x20);
    uVar3 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    FUN_017760e4(param_1,uVar6,uVar3);
    uVar6 = uVar3;
    if ((int)uVar3 <= (int)param_2) {
System_Array_InternalEnumerator<OVRPlugin_Bone>___ctor:
      lVar5 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0122e748();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0122e748();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      FUN_017760e4(param_1,param_2,uVar3);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      if (param_4 == 0) goto LAB_017767a0;
      cVar2 = *(char *)(param_1 + (int)param_2 + 0x20);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      iVar4 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),cVar2 != '\0',cVar1 != '\0',
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar4) {
        do {
          uVar6 = uVar6 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar6) goto LAB_0177679c;
          cVar2 = *(char *)(param_1 + (int)uVar6 + 0x20);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0122e748();
          }
          iVar4 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),cVar1 != '\0',cVar2 != '\0',
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar4 < 0);
        if ((int)uVar6 <= (int)param_2) goto System_Array_InternalEnumerator<OVRPlugin_Bone>___ctor;
        lVar5 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0122e748();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0122e748();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0122e748();
        }
        FUN_017760e4(param_1,param_2,uVar6);
      }
    }
  }
LAB_0177679c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


