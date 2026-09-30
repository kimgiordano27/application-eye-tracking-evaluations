/*
FUNCTION_NAME: thunk_FUN_0368d990
ENTRY_POINT: 0368e1a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


bool thunk_FUN_0368d990(undefined8 param_1,undefined1 param_2 [16],float param_3,long param_4,
                       float *param_5,float *param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_88;
  float fStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_04833eb4 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_45__);
    DAT_04833eb4 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = FUN_0368db1c(param_1,*(long *)(param_4 + 0x20),param_5,param_6);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_45__;
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__653_45__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    uVar2 = FUN_0368d66c(param_4,*(long *)(lVar3 + 0xb8) + 0x18,&uStack_78);
    if ((uVar2 & 1) != 0) {
      uStack_88 = *(undefined8 *)param_6;
      fVar5 = param_6[2];
      fStack_80 = fVar5;
      fVar4 = (float)FUN_0368d8ac(param_4,&uStack_88,&uStack_78);
      *param_6 = fVar4;
      param_6[1] = fVar5;
      param_6[2] = param_3;
      fVar7 = *param_5;
      fVar6 = param_5[1];
      fVar8 = param_5[2];
      if (DAT_0482f03f == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        DAT_0482f03f = '\x01';
      }
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar4 = SQRT((fVar8 - param_3) * (fVar8 - param_3) +
                   (fVar7 - fVar4) * (fVar7 - fVar4) + (fVar6 - fVar5) * (fVar6 - fVar5));
      param_6[6] = fVar4;
      if (0.0 < (float)param_1) {
        return fVar4 <= (float)param_1;
      }
      return true;
    }
  }
  return false;
}


