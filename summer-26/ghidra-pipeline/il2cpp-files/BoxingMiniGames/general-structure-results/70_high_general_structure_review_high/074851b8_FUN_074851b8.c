/*
FUNCTION_NAME: FUN_074851b8
ENTRY_POINT: 074851b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_2
*/


void FUN_074851b8(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  undefined1 local_50 [16];
  int local_34;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_079fd2e0;
                    /* try { // try from 074851b8 to 075851c3 has its CatchHandler @ 07485274 */
  if ((DAT_07ef3ed6 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4540);
                    /* try { // try from 074851fc to 0758522b has its CatchHandler @ 0748527c */
    FUN_03642964(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_Init__);
    FUN_03642964(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_PostDispatch__)
    ;
    FUN_03642964(
                Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_get_mousePosition__
                );
    FUN_03642964(PTR_DAT_079fd2e0);
                    /* try { // try from 0748522c to 07585267 has its CatchHandler @ 07485054 */
    FUN_03642964(Method_Unity_Collections_NativeArray<byte>_CopyTo__);
    FUN_03642964(Method_Unity_Collections_NativeArray<byte>_Dispose__);
    FUN_03642964(Method_Unity_Collections_NativeArray<byte>_Dispose__);
    DAT_07ef3ed6 = 1;
  }
  lVar3 = *(long *)puVar2;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
                    /* try { // try from 07485268 to 0758526b has its CatchHandler @ 07485270 */
    lVar3 = *(long *)puVar2;
  }
                    /* try { // try from 0748526c to 07585297 has its CatchHandler @ 07485054 */
  puVar1 = PTR_DAT_079f4540;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 07485268 with catch @ 07485270
                        */
  param_2 = param_2 + -1;
  local_34 = param_2;
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 074851b8 with catch @ 07485274
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 074851a8 with catch @ 07485278
                        */
  if (-1 < param_2) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 074851fc with catch @ 0748527c
                        */
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_07485408:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = *(long *)puVar2;
                    /* try { // try from 07485298 to 0758529b has its CatchHandler @ 074852b4 */
                    /* try { // try from 0748529c to 075852b7 has its CatchHandler @ 07485054 */
    if (param_2 < *(int *)(lVar7 + 0x18)) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
                    /* catch() { ... } // from try @ 07485298 with catch @ 074852b4 */
                    /* try { // try from 074852b8 to 075852bf has its CatchHandler @ 074852c8 */
                    /* try { // try from 074852c0 to 075852cb has its CatchHandler @ 07485054 */
      local_50 = FUN_04769984(lVar7,param_2,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_PostDispatch__
                             );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 074852b8 with catch @ 074852c8
                        */
      if ((local_50._8_8_ & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar4 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&local_34);
        puVar6 = (undefined8 *)Method_Unity_Collections_NativeArray<byte>_Dispose__;
      }
      else {
        if (0 < local_50._12_4_) {
          local_50._0_8_ = param_3;
          thunk_FUN_036b7ad0(local_50,param_3);
          lVar3 = *(long *)(param_1 + 0x10);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if (lVar3 != 0) {
            FUN_047699d8(lVar3,param_2,local_50._0_8_,local_50._8_8_,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_get_mousePosition__
                        );
            return;
          }
          goto LAB_07485408;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar4 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&local_34);
        puVar6 = (undefined8 *)Method_Unity_Collections_NativeArray<byte>_Dispose__;
      }
      uVar5 = *puVar6;
      goto LAB_074853bc;
    }
  }
  puVar2 = Method_Unity_Collections_NativeArray<byte>_CopyTo__;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&local_34);
  uVar5 = *(undefined8 *)puVar2;
LAB_074853bc:
  uVar4 = FUN_05c8e390(uVar5,uVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)puVar1);
  }
  FUN_0717994c(uVar4,0);
  return;
}


