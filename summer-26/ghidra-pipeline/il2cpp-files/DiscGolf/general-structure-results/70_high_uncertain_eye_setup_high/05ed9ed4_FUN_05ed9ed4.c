/*
FUNCTION_NAME: FUN_05ed9ed4
ENTRY_POINT: 05ed9ed4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05ed9ed4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_06dc3f47 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
    FUN_02d965b8(Method_System_Collections_Generic_List<HoleDifficultyImporter_HoleStat>_Find__);
    FUN_02d965b8(Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__);
    FUN_02d965b8(Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
    FUN_02d965b8(Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
    FUN_02d965b8(
                Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__
                );
    DAT_06dc3f47 = 1;
  }
  iVar3 = FUN_05f07090(param_2,0);
  if (iVar3 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List<HoleDifficultyImporter_HoleStat>_Find__ +
                0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_05ed9998(uVar7);
    puVar2 = Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__;
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 05eda068 to 05fda07b has its CatchHandler @ 05eda0a8 */
      local_84 = 2;
      uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__,
                                 &local_84);
                    /* try { // try from 05eda07c to 05fda0c3 has its CatchHandler @ 05ed9fa8 */
      local_88 = 0x17;
      uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2,&local_88);
      puVar8 = (undefined8 *)
               Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__
      ;
    }
    else {
      local_84 = 2;
      uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__,
                                 &local_84);
      local_88 = 0x17;
      uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar2,&local_88);
      puVar8 = (undefined8 *)Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
    }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05eda058 with catch @ 05eda0a4
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05eda068 with catch @ 05eda0a8
                        */
    uVar7 = FUN_0536e120(*puVar8,uVar7,uVar5,uVar6,0);
                    /* try { // try from 05eda0c4 to 05fda0c7 has its CatchHandler @ 05eda0e0 */
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
                    /* try { // try from 05eda0c8 to 05fda0e3 has its CatchHandler @ 05ed9fa8 */
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
    }
  }
  else {
    FUN_05ed951c(param_1);
    uStack_78 = param_2[1];
    local_80 = *param_2;
    uStack_68 = param_2[3];
    uStack_70 = param_2[2];
    uStack_58 = param_2[5];
    local_60 = param_2[4];
    uStack_48 = param_2[7];
    uStack_50 = param_2[6];
    iVar3 = FUN_05f06b94(param_1 + 0x88,&local_80,0);
    if (iVar3 == 0) {
      iVar3 = FUN_05f06bcc(param_1 + 0x88,0);
      if (iVar3 == 0) {
        uVar7 = 1;
        goto LAB_05eda0e0;
      }
      puVar8 = (undefined8 *)Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__;
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar8 = (undefined8 *)Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__;
      }
    }
    else {
                    /* try { // try from 05ed9fa8 to 05fda057 has its CatchHandler @ 05ed9fa8
                       catch() { ... } // from try @ 05ed9fa8 with catch @ 05ed9fa8
                       catch() { ... } // from try @ 05eda07c with catch @ 05ed9fa8
                       catch() { ... } // from try @ 05eda0c8 with catch @ 05ed9fa8
                       catch() { ... } // from try @ 05eda0ec with catch @ 05ed9fa8 */
      puVar8 = (undefined8 *)Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__;
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar8 = (undefined8 *)Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__;
      }
    }
    uVar7 = *puVar8;
  }
  FUN_0630bbe4(uVar7,0);
  uVar7 = 0;
LAB_05eda0e0:
                    /* catch() { ... } // from try @ 05eda0c4 with catch @ 05eda0e0 */
                    /* try { // try from 05eda0e4 to 05fda0eb has its CatchHandler @ 05eda0f4 */
                    /* try { // try from 05eda0ec to 05fda0f7 has its CatchHandler @ 05ed9fa8 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05eda0e4 with catch @ 05eda0f4
                        */
                    /* try { // try from 05eda0f8 to 05fda1ab has its CatchHandler @ 05eda0f8
                       catch() { ... } // from try @ 05eda0f8 with catch @ 05eda0f8
                       catch() { ... } // from try @ 05eda1d0 with catch @ 05eda0f8
                       catch() { ... } // from try @ 05eda220 with catch @ 05eda0f8
                       catch() { ... } // from try @ 05eda244 with catch @ 05eda0f8 */
  return;
}


