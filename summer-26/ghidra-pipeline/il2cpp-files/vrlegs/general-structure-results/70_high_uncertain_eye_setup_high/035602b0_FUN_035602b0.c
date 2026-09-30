/*
FUNCTION_NAME: FUN_035602b0
ENTRY_POINT: 035602b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_035602b0(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* catch() { ... } // from try @ 0356028c with catch @ 035602b8 */
  if ((DAT_0412df97 & 1) == 0) {
                    /* try { // try from 035602c8 to 036602cf has its CatchHandler @ 035602e4 */
                    /* try { // try from 035602d0 to 036602db has its CatchHandler @ 03560038 */
    FUN_01ab69ac(PTR_DAT_03cbe438);
                    /* try { // try from 035602dc to 036602e3 has its CatchHandler @ 035602e4 */
    FUN_01ab69ac(PTR_DAT_03cbdf88);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03560264 with catch @ 035602e4
                       catch(type#2 @ 00000000) { ... } // from try @ 035602c8 with catch @ 035602e4
                       catch(type#2 @ 00000000) { ... } // from try @ 035602dc with catch @ 035602e4
                        */
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_84_0_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_85_0_TypeInfo);
    DAT_0412df97 = 1;
  }
  if ((*(char *)((long)param_1 + 0x3fd) != '\0') &&
     ((uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0)),
      puVar1 = PTR_DAT_03cbdf88, (uVar2 & 1) != 0 || (*(char *)((long)param_1 + 0x6ac) != '\0')))) {
    lVar4 = param_1[0xe5];
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = FUN_036d35a8(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_037b4188(param_1,0);
      param_1[0xe5] = lVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xe5,lVar4);
      lVar4 = param_1[0xe5];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar2 = FUN_036d35a8(lVar4,0,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
    lVar4 = param_1[0x1f];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar2 = FUN_036d35a8(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = FUN_0357f060(param_1,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar3 = FUN_036d3824(lVar4,0);
      uVar3 = FUN_025bdc88(*(undefined8 *)OVRPlugin_OVRP_1_84_0_TypeInfo,uVar3,
                           *(undefined8 *)OVRPlugin_OVRP_1_85_0_TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
      }
      FUN_0367b470(uVar3,param_1,0);
      return;
    }
    if (((char)param_1[0x6e] != '\0') || (*(char *)((long)param_1 + 0x3fc) != '\0')) {
      if (*(char *)((long)param_1 + 0x301) != '\0') {
        (**(code **)(*param_1 + 0x7f8))(param_1,*(undefined8 *)(*param_1 + 0x800));
      }
      FUN_03580470(param_1,0);
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_83_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      UnityEngine_Application__GetStreamProgressForLevel(0);
      if ((char)param_1[0x47] == '\0') {
        fVar5 = *(float *)((long)param_1 + 0x254);
        fVar6 = *(float *)(param_1 + 0x4a);
      }
      else {
        fVar7 = *(float *)((long)param_1 + 0x1ec);
        fVar5 = *(float *)((long)param_1 + 0x254);
        fVar6 = *(float *)(param_1 + 0x4a);
        fVar8 = fVar5;
        if (fVar7 <= fVar5) {
          fVar8 = fVar7;
        }
        if (fVar7 < fVar6) {
          fVar8 = fVar6;
        }
        *(float *)((long)param_1 + 0x1e4) = fVar8;
      }
      *(float *)((long)param_1 + 0x23c) = fVar5;
      *(float *)(param_1 + 0x48) = fVar6;
      *(undefined4 *)((long)param_1 + 700) = 0;
      *(undefined4 *)((long)param_1 + 0x2d4) = 0;
      *(undefined1 *)(param_1 + 0x5f) = 0;
      *(undefined1 *)(param_1 + 0x6e) = 0;
      *(undefined1 *)((long)param_1 + 0x3fc) = 0;
      *(undefined1 *)((long)param_1 + 0x6ac) = 0;
      *(undefined1 *)((long)param_1 + 0x24c) = 0;
      *(undefined4 *)((long)param_1 + 0x244) = 0;
      do {
        (**(code **)(*param_1 + 0x9e8))(param_1,*(undefined8 *)(*param_1 + 0x9f0));
        *(int *)((long)param_1 + 0x244) = *(int *)((long)param_1 + 0x244) + 1;
      } while (*(char *)((long)param_1 + 0x24c) == '\0');
    }
  }
  return;
}


