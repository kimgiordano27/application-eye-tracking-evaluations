/*
FUNCTION_NAME: FUN_03559d70
ENTRY_POINT: 03559d70
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_03559d70(long *param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_0412df5f & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_84_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_85_0_TypeInfo);
    DAT_0412df5f = 1;
  }
  if ((*(char *)((long)param_1 + 0x3fd) != '\0') &&
     ((uVar3 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0)),
      (uVar3 & 1) != 0 || (*(char *)((long)param_1 + 0x6ac) != '\0')))) {
    lVar5 = param_1[0x1f];
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_036d35a8(lVar5,0,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = FUN_03559490(param_1);
      if (lVar5 != 0) {
        uVar4 = FUN_036d3824(lVar5,0);
        uVar4 = FUN_025bdc88(*(undefined8 *)OVRPlugin_OVRP_1_84_0_TypeInfo,uVar4,
                             *(undefined8 *)OVRPlugin_OVRP_1_85_0_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_0367b470(uVar4,param_1,0);
        return;
      }
LAB_03559fb4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (((char)param_1[0x6e] != '\0') || (*(char *)((long)param_1 + 0x3fc) != '\0')) {
      if ((char)param_1[0x61] != '\0') {
        FUN_0355b8e4(param_1);
        *(undefined1 *)(param_1 + 0x61) = 0;
      }
      if (*(char *)((long)param_1 + 0x301) != '\0') {
        (**(code **)(*param_1 + 0x7f8))(param_1,*(undefined8 *)(*param_1 + 0x800));
      }
      FUN_03580470(param_1,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_83_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      UnityEngine_Application__GetStreamProgressForLevel(0);
      if ((char)param_1[0x47] == '\0') {
        fVar6 = *(float *)((long)param_1 + 0x254);
        fVar7 = *(float *)(param_1 + 0x4a);
      }
      else {
        fVar8 = *(float *)((long)param_1 + 0x1ec);
        fVar6 = *(float *)((long)param_1 + 0x254);
        fVar7 = *(float *)(param_1 + 0x4a);
        fVar9 = fVar6;
        if (fVar8 <= fVar6) {
          fVar9 = fVar8;
        }
        if (fVar8 < fVar7) {
          fVar9 = fVar7;
        }
        *(float *)((long)param_1 + 0x1e4) = fVar9;
      }
      *(float *)((long)param_1 + 0x23c) = fVar6;
      *(float *)(param_1 + 0x48) = fVar7;
      *(undefined4 *)((long)param_1 + 700) = 0;
      *(undefined4 *)((long)param_1 + 0x2d4) = 0;
      *(undefined1 *)(param_1 + 0x5f) = 0;
      *(undefined1 *)(param_1 + 0x6e) = 0;
      *(undefined1 *)((long)param_1 + 0x3fc) = 0;
      *(undefined1 *)((long)param_1 + 0x6ac) = 0;
      *(undefined1 *)((long)param_1 + 0x24c) = 0;
      *(undefined4 *)((long)param_1 + 0x244) = 0;
      if (param_1[0xdd] == 0) goto LAB_03559fb4;
      uVar2 = FUN_03692bc0(param_1[0xdd],0);
      FUN_0355eed4(param_1,uVar2 & 1);
      cVar1 = *(char *)((long)param_1 + 0x24c);
      while (cVar1 == '\0') {
        (**(code **)(*param_1 + 0x9e8))(param_1,*(undefined8 *)(*param_1 + 0x9f0));
        cVar1 = *(char *)((long)param_1 + 0x24c);
        *(int *)((long)param_1 + 0x244) = *(int *)((long)param_1 + 0x244) + 1;
      }
    }
  }
  return;
}


