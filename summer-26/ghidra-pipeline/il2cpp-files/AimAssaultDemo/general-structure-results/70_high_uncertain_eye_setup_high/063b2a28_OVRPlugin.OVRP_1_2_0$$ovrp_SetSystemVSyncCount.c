/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrp_SetSystemVSyncCount
ENTRY_POINT: 063b2a28
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_2_0__ovrp_SetSystemVSyncCount(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined1 uStack000000000000000c;
  
  if ((DAT_0825c6df & 1) == 0) {
                    /* try { // try from 063b2a3c to 064b2a4f has its CatchHandler @ 063b2b50 */
    FUN_0373b518(PTR_DAT_07db6f70);
    FUN_0373b518(PTR_DAT_07db6f88);
    DAT_0825c6df = 1;
  }
                    /* try { // try from 063b2a5c to 064b2a5f has its CatchHandler @ 063b2b20 */
  plVar3 = *(long **)(param_1 + 0x70);
  if (plVar3 == (long *)0x0) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    cVar2 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    if (cVar2 != '\x03') {
      cVar2 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      if (cVar2 != '\x04') {
        thunk_FUN_037a15ac(PTR_DAT_07d88078);
        FUN_031ae340();
        uVar4 = FUN_061d52c8(0);
        FUN_031a5e18(param_2);
        uStack000000000000000c =
             (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
        uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6fb0);
        uVar5 = thunk_FUN_037784fc(uVar5,&stack0x0000000c);
        uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db7138);
        uVar4 = FUN_063349e4(uVar6,uVar4,uVar5,0);
        uVar4 = FUN_063197f8(param_1,uVar4,0,0);
        uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db7140);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar4,uVar5);
      }
    }
    *(long **)(param_1 + 0x70) = param_2;
    thunk_FUN_037aeb94((long *)(param_1 + 0x70),param_2);
    plVar8 = (long *)(param_1 + 0x68);
    *plVar8 = (long)param_2;
  }
  else {
    lVar7 = *plVar3;
                    /* try { // try from 063b2a78 to 064b2a7f has its CatchHandler @ 063b2b38 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f88 + 0x130);
                    /* try { // try from 063b2a90 to 064b2a93 has its CatchHandler @ 063b2b30 */
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6f88)) {
                    /* try { // try from 063b2a9c to 064b2aa7 has its CatchHandler @ 063b2b28 */
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f70 + 0x130);
      if ((bVar1 <= *(byte *)(lVar7 + 0x130)) &&
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07db6f70)) {
        FUN_063b1fd8(plVar3,param_2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54();
    }
    plVar8 = (long *)(param_1 + 0x78);
    OVRPlugin_OVRP_1_1_0__ovrp_GetSystemCpuLevel(plVar3,*plVar8,param_2);
    param_2 = (long *)0x0;
    *plVar8 = 0;
  }
  thunk_FUN_037aeb94(plVar8,param_2);
  return;
}


