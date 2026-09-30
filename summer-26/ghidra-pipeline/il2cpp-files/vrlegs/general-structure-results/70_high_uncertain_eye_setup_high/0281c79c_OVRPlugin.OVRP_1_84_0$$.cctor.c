/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$.cctor
ENTRY_POINT: 0281c79c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_84_0___cctor(long param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  *param_4 = 0;
  if (param_3 == 0) {
    return 3;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 <= param_2) {
LAB_0281c90c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  sVar4 = *(short *)(param_1 + (long)(int)param_2 * 2 + 0x20);
  if (sVar4 == 0x2d) {
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      return 3;
    }
    param_2 = param_2 + 1;
  }
  iVar1 = param_2 + param_3;
  if (param_3 < 0xb) {
    if (param_3 == 10) {
      if (uVar3 <= param_2) goto LAB_0281c90c;
      if (0x32 < *(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20)) goto LAB_0281c7e4;
    }
    if ((int)param_2 < iVar1) {
      iVar6 = 0;
      uVar2 = param_2;
      if (param_2 <= uVar3) {
        uVar2 = uVar3;
      }
      do {
        if (uVar2 == param_2) goto LAB_0281c90c;
        uVar7 = (uint)*(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20);
        if (9 < uVar7 - 0x30) {
          return 3;
        }
        iVar8 = (iVar6 * 10 - uVar7) + 0x30;
        if (iVar6 < iVar8) goto LAB_0281c8dc;
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
        *param_4 = iVar8;
        iVar6 = iVar8;
      } while (param_3 != 0);
      if (sVar4 != 0x2d) {
        if (iVar8 != -0x80000000) goto LAB_0281c8c0;
        goto LAB_0281c81c;
      }
    }
    else if (sVar4 != 0x2d) {
      iVar8 = 0;
LAB_0281c8c0:
      *param_4 = -iVar8;
    }
    uVar5 = 1;
  }
  else {
LAB_0281c7e4:
    if ((int)param_2 < iVar1) {
      uVar2 = param_2;
      if (param_2 <= uVar3) {
        uVar2 = uVar3;
      }
      do {
        if (uVar2 == param_2) goto LAB_0281c90c;
        if (9 < *(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20) - 0x30) {
          return 3;
        }
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
LAB_0281c81c:
    uVar5 = 2;
  }
  return uVar5;
LAB_0281c8dc:
  param_2 = param_2 + 1;
  if (iVar1 <= (int)param_2) goto LAB_0281c81c;
  if (uVar3 <= param_2) goto LAB_0281c90c;
  if (9 < *(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20) - 0x30) {
    return 3;
  }
  goto LAB_0281c8dc;
}


