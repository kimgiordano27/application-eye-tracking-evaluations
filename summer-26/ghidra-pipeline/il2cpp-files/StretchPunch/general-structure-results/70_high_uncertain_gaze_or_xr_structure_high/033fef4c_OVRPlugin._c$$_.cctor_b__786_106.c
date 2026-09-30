/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_106
ENTRY_POINT: 033fef4c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_4;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033ff1d8) */

undefined4
OVRPlugin_<>c__<_cctor>b__786_106(long param_1,long *param_2,undefined1 *param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  char local_64 [4];
  
  if ((DAT_044a6c22 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9463);
    DAT_044a6c22 = 1;
  }
  puVar5 = StringLiteral_9463;
  local_64[0] = '\0';
  *param_2 = 0;
  thunk_FUN_01e10808(param_2,0);
  uVar9 = 0;
  puVar1 = (uint *)(param_1 + 0x1c);
  do {
    iVar8 = *(int *)(param_1 + 0x1c);
    thunk_FUN_01da0934();
    iVar2 = *(int *)(param_1 + 0x20);
    thunk_FUN_01da0934();
    if (iVar2 <= iVar8) goto LAB_033ff19c;
    local_64[0] = '\0';
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Supported(param_1 + 0x24,param_4,local_64);
    if (local_64[0] == '\0') {
      *param_3 = 1;
      return 0;
    }
    uVar3 = *puVar1;
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    thunk_FUN_01d9987c(puVar1,uVar3 + 1,0);
    iVar8 = *(int *)(param_1 + 0x20);
    thunk_FUN_01da0934();
    if ((int)uVar3 < iVar8) {
      uVar4 = *(uint *)(param_1 + 0x18);
      thunk_FUN_01da0934();
      lVar7 = *(long *)(param_1 + 0x10);
      thunk_FUN_01da0934();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar4 = uVar4 & uVar3;
      if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar7 = *(long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
      thunk_FUN_01da0934();
      *param_2 = lVar7;
      thunk_FUN_01e10808(param_2,lVar7);
      if (*param_2 == 0) {
        iVar8 = 2;
      }
      else {
        lVar7 = *(long *)(param_1 + 0x10);
        thunk_FUN_01da0934();
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
        *puVar6 = 0;
        thunk_FUN_01e10808(puVar6,0);
        uVar9 = 1;
        iVar8 = 7;
      }
    }
    else {
      thunk_FUN_01da0934();
      *puVar1 = uVar3;
      *param_2 = 0;
      thunk_FUN_01e10808(param_2,0);
      iVar8 = 8;
      *param_3 = 1;
    }
    if (local_64[0] != '\0') {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(param_1 + 0x24,0);
    }
  } while (iVar8 == 2);
  if (iVar8 != 7) {
LAB_033ff19c:
    uVar9 = 0;
  }
  return uVar9;
}


