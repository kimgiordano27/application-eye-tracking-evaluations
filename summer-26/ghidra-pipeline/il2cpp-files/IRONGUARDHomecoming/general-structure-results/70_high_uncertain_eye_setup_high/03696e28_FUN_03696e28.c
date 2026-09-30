/*
FUNCTION_NAME: FUN_03696e28
ENTRY_POINT: 03696e28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03696e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 long param_5,float *param_6)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_04833efb & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_FovfPair_get_Item__);
    DAT_04833efb = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_5 != 0) {
    uVar2 = FUN_03695674(param_1,param_2,param_3,*param_6,param_6[1],param_6[2],param_5,&local_90);
    fVar6 = (float)param_3;
    fVar10 = (float)param_2;
    if ((uVar2 & 1) == 0) {
      return;
    }
    fVar11 = *param_6;
    fVar9 = param_6[1];
    fVar12 = param_6[2];
    if (*(int *)(*(long *)Method_OVRPlugin_FovfPair_get_Item__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    fVar5 = (float)FUN_03694cd0(&local_90);
    if (DAT_0482f03f == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
      DAT_0482f03f = '\x01';
    }
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    pfVar3 = param_6 + 10;
    uVar4 = *(undefined8 *)pfVar3;
    fVar8 = param_6[7];
    fVar7 = *(float *)(param_4 + 0x28);
    fVar10 = SQRT((fVar12 - fVar6) * (fVar12 - fVar6) +
                  (fVar11 - fVar5) * (fVar11 - fVar5) + (fVar9 - fVar10) * (fVar9 - fVar10));
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    fVar6 = -fVar10;
    uVar2 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      if (fVar7 <= ABS(fVar10 + fVar8)) {
        if (param_6[7] <= fVar6) {
          return;
        }
      }
      else {
        iVar1 = (**(code **)(*param_4 + 0x548))
                          (param_4,param_5,*(undefined8 *)pfVar3,*(undefined8 *)(*param_4 + 0x550));
        if (iVar1 < 1) {
          return;
        }
      }
    }
    param_6[7] = fVar6;
    *(undefined8 *)(param_6 + 0x14) = local_70;
    *(undefined8 *)(param_6 + 0xe) = uStack_88;
    *(undefined8 *)(param_6 + 0xc) = local_90;
    *(undefined8 *)(param_6 + 0x12) = uStack_78;
    *(undefined8 *)(param_6 + 0x10) = uStack_80;
    thunk_FUN_01f51358(param_6 + 0xc,0);
    *(long *)(param_6 + 10) = param_5;
    thunk_FUN_01f51358(pfVar3,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


