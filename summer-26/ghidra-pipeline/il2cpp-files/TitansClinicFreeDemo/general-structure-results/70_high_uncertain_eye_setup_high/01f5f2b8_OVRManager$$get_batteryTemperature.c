/*
FUNCTION_NAME: OVRManager$$get_batteryTemperature
ENTRY_POINT: 01f5f2b8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_batteryTemperature(int *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  uint uStack000000000000000c;
  
  uStack000000000000000c = param_3;
  if ((DAT_0293dcb1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba9b8);
    thunk_FUN_01279b34(PTR_DAT_027be618);
    thunk_FUN_01279b34(PTR_DAT_027c0ac0);
    DAT_0293dcb1 = 1;
  }
  uVar1 = param_1[9];
  if (((uVar1 >> 0xb & 1) != 0) && ((param_1[1] != -1 || (param_1[2] != -1)))) {
    if (((uVar1 >> 8 & 1) != 0) && ((uVar1 & 0x1000) != 0 || *param_1 == -1)) {
      uVar4 = *(undefined8 *)PTR_DAT_027c0ac0;
      param_1[0x10] = 4;
      *(undefined8 *)(param_1 + 0x12) = uVar4;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      return 0;
    }
  }
  if (((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) {
    if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5bfe8(param_1,&stack0x0000000c);
    iVar3 = param_1[1];
    if ((iVar3 == -1) && (param_1[2] == -1)) {
      if (*param_1 == -1) {
        if ((param_3 >> 3 & 1) == 0) {
          plVar5 = (long *)*param_2;
          if (plVar5 != (long *)0x0) {
            iVar3 = (**(code **)(*plVar5 + 0x268))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x270));
            *param_1 = iVar3;
            plVar5 = (long *)*param_2;
            if (plVar5 != (long *)0x0) {
              iVar3 = (**(code **)(*plVar5 + 0x248))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x250));
              param_1[1] = iVar3;
              param_2 = (long *)*param_2;
              if (param_2 != (long *)0x0) {
                iVar3 = (**(code **)(*param_2 + 0x1e8))
                                  (param_2,uVar4,*(undefined8 *)(*param_2 + 0x1f0));
                param_1[2] = iVar3;
                goto LAB_01f5f4dc;
              }
            }
          }
LAB_01f5f530:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        if (*(int *)(*(long *)PTR_DAT_027be618 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar6 = FUN_01f2b618(0);
        *param_2 = lVar6;
        thunk_FUN_01286abc(param_2,lVar6);
        param_1[2] = 1;
        param_1[0] = 1;
        param_1[1] = 1;
      }
      else {
        param_1[1] = 1;
        param_1[2] = 1;
      }
    }
    else {
      if (*param_1 == -1) {
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) goto LAB_01f5f530;
        iVar2 = (**(code **)(*param_2 + 0x268))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x270));
        iVar3 = param_1[1];
        *param_1 = iVar2;
      }
      if (iVar3 == -1) {
        param_1[1] = 1;
      }
      if (param_1[2] == -1) {
        param_1[2] = 1;
      }
    }
  }
LAB_01f5f4dc:
  if (param_1[3] == -1) {
    param_1[3] = 0;
  }
  if (param_1[4] == -1) {
    param_1[4] = 0;
  }
  if (param_1[5] == -1) {
    param_1[5] = 0;
  }
  if (param_1[8] == -1) {
    param_1[8] = 0;
  }
  return 1;
}


