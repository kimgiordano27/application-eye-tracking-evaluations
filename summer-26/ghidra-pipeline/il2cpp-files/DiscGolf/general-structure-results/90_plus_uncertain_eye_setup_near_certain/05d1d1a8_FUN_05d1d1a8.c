/*
FUNCTION_NAME: FUN_05d1d1a8
ENTRY_POINT: 05d1d1a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d1d1a8(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_28;
  undefined *puVar10;
  
  if ((DAT_06dc2f19 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl<Bone>_FinishSetup__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl<double>__ctor__);
    FUN_02d965b8(PTR_DAT_069fd8d8);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControl<Eyes>__ctor__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__);
    FUN_02d965b8(OVRPlugin_OVRP_1_100_0_TypeInfo);
    DAT_06dc2f19 = 1;
  }
  local_28 = 0;
  FUN_0552aca4(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar8 = thunk_FUN_02dd3144();
    uVar7 = thunk_FUN_02dfd288(PTR_DAT_06a1ab70);
                    /* try { // try from 05d1d3f8 to 05e1d417 has its CatchHandler @ 05d1d73c */
    FUN_0544bf54(uVar8,uVar7,0);
  }
  else {
    if (*(int *)(param_2 + 0x10) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__ +
                  0xe4) == 0) {
        thunk_FUN_02df485c();
      }
                    /* try { // try from 05d1d264 to 05e1d267 has its CatchHandler @ 05d1d274 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d1d120 with catch @ 05d1d268
                       try { // try from 05d1d268 to 05e1d28b has its CatchHandler @ 05d1cfa8 */
      uVar6 = FUN_05d18284(param_2,param_1 + 0x120,&local_28);
      uVar7 = local_28;
      puVar10 = Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d1d110 with catch @ 05d1d26c
                        */
      if ((uVar6 & 1) == 0) {
                    /* try { // try from 05d1d468 to 05e1d473 has its CatchHandler @ 05d1d6cc */
        thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
        uVar8 = thunk_FUN_02dd3144();
        puVar10 = PTR_DAT_06a1ab70;
LAB_05d1d4a8:
        uVar9 = thunk_FUN_02dfd288(puVar10);
        FUN_0544bfcc(uVar8,uVar7,uVar9,0);
        uVar7 = thunk_FUN_02dfd288(Method_UnityEngine_InputSystem_InputControl<int>__ctor__);
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar8,uVar7);
      }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d1d108 with catch @ 05d1d270
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d1d264 with catch @ 05d1d274
                        */
      if ((param_3 != 0) && (*(long *)(param_3 + 0x18) != 0)) {
                    /* try { // try from 05d1d28c to 05e1d2a3 has its CatchHandler @ 05d1d2d0 */
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_InputControlList<InputDevice>_get_Count__ +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar6 = FUN_05d1d4d8(param_3,&local_28);
        uVar7 = local_28;
        if ((uVar6 & 1) == 0) {
                    /* try { // try from 05d1d48c to 05e1d497 has its CatchHandler @ 05d1d6c4 */
          thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
          uVar8 = thunk_FUN_02dd3144();
          puVar10 = 
          Method_UnityEngine_InputSystem_InputControl<int>_ReadUnprocessedValueFromStateWithCaching__
          ;
          goto LAB_05d1d4a8;
        }
                    /* try { // try from 05d1d2a4 to 05e1d2bf has its CatchHandler @ 05d1cfa8 */
        *(long *)(param_1 + 0xd8) = param_3;
        LeanTween__value((long *)(param_1 + 0xd8),param_3);
      }
      puVar4 = Method_UnityEngine_InputSystem_InputControl<Eyes>__ctor__;
      puVar3 = Method_UnityEngine_InputSystem_InputControl<double>__ctor__;
      puVar2 = Method_UnityEngine_InputSystem_InputControl<Bone>_FinishSetup__;
                    /* try { // try from 05d1d2c0 to 05e1d2cf has its CatchHandler @ 05d1d2d0 */
                    /* catch() { ... } // from try @ 05d1d28c with catch @ 05d1d2d0
                       catch() { ... } // from try @ 05d1d2c0 with catch @ 05d1d2d0 */
                    /* try { // try from 05d1d2d4 to 05e1d2d7 has its CatchHandler @ 05d1d2e0 */
      if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                    /* try { // try from 05d1d2d8 to 05e1d2e3 has its CatchHandler @ 05d1cfa8 */
        thunk_FUN_02df485c();
      }
      uVar7 = FUN_05d1d67c();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d1d2d4 with catch @ 05d1d2e0
                        */
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      LeanTween__value();
      uVar7 = *(undefined8 *)puVar3;
      *(undefined1 *)(param_1 + 0x20) = 1;
      uVar7 = thunk_FUN_02dd3144(uVar7);
      FUN_05d1c140(uVar7,4,0,0);
      thunk_FUN_02da4860();
      *(undefined8 *)(param_1 + 0x98) = uVar7;
      LeanTween__value((undefined8 *)(param_1 + 0x98),uVar7);
      uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
      FUN_04be213c(uVar7,param_1,*(undefined8 *)puVar4,0);
      *(undefined8 *)(param_1 + 0xa0) = uVar7;
      LeanTween__value((undefined8 *)(param_1 + 0xa0),uVar7);
                    /* try { // try from 05d1d360 to 05e1d3f7 has its CatchHandler @ 05d1d360
                       catch() { ... } // from try @ 05d1d360 with catch @ 05d1d360
                       catch() { ... } // from try @ 05d1d5f0 with catch @ 05d1d360
                       catch() { ... } // from try @ 05d1d6c4 with catch @ 05d1d360
                       catch() { ... } // from try @ 05d1d738 with catch @ 05d1d360
                       catch() { ... } // from try @ 05d1d770 with catch @ 05d1d360
                       catch() { ... } // from try @ 05d1d7bc with catch @ 05d1d360 */
      *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
      puVar2 = OVRPlugin_OVRP_1_100_0_TypeInfo;
      puVar10 = PTR_DAT_069fd8d8;
      if (*(long *)(param_1 + 0x120) != 0) {
        uVar7 = FUN_05c0c424(*(long *)(param_1 + 0x120),0);
        bVar5 = thunk_FUN_0536b75c(uVar7,*(undefined8 *)puVar2,0);
        iVar1 = *(int *)(*(long *)puVar10 + 0xe4);
        *(byte *)(param_1 + 0x10c) = bVar5 & 1;
        if (iVar1 == 0) {
          thunk_FUN_02df485c();
        }
        uVar7 = FUN_054ff750(0x4014000000000000,0);
        *(undefined8 *)(param_1 + 0x128) = uVar7;
        FUN_05d1d740(param_1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar8 = thunk_FUN_02dd3144();
    uVar7 = thunk_FUN_02dfd288(Method_UnityEngine_InputSystem_InputControl<Eyes>_FinishSetup__);
    uVar9 = thunk_FUN_02dfd288(PTR_DAT_06a1ab70);
    FUN_0544bfcc(uVar8,uVar7,uVar9,0);
  }
                    /* try { // try from 05d1d450 to 05e1d453 has its CatchHandler @ 05d1d6dc */
  uVar7 = thunk_FUN_02dfd288(Method_UnityEngine_InputSystem_InputControl<int>__ctor__);
                    /* try { // try from 05d1d458 to 05e1d463 has its CatchHandler @ 05d1d6d0 */
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar8,uVar7);
}


