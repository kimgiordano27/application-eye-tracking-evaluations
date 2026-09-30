/*
FUNCTION_NAME: FUN_05ab8a84
ENTRY_POINT: 05ab8a84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05ab8a84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 local_34 [4];
  
  puVar1 = PTR_DAT_067ca4e8;
  if ((DAT_06bc2557 & 1) == 0) {
    FUN_02f08768(Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__);
    FUN_02f08768(Method_System_Array_Resize<OVRPlugin_Quatf>__);
    FUN_02f08768(Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    FUN_02f08768(PTR_DAT_067ca4e8);
    FUN_02f08768(Method_System_Array_Resize<OVRPlugin_Vector3f>__);
    FUN_02f08768(Method_System_Array_Reverse<byte>__);
    FUN_02f08768(Method_System_Array_Reverse<int>__);
    FUN_02f08768(Method_System_Array_Reverse<Vector2>__);
    FUN_02f08768(Method_System_Array_Reverse<byte>__);
    DAT_06bc2557 = 1;
  }
  puVar3 = Method_System_Array_Reverse<byte>__;
  puVar2 = Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  local_34[0] = 0;
  uVar4 = thunk_FUN_02f44ec4(*(undefined8 *)puVar2,local_34);
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar5);
    lVar5 = *(long *)puVar3;
  }
  puVar1 = Method_System_Array_Resize<OVRPlugin_Vector3f>__;
  puVar6 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* try { // try from 05ab8b88 to 05bb8b93 has its CatchHandler @ 05ab8c48 */
      thunk_FUN_02f6670c(lVar5);
      puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar8 = *puVar6;
                    /* try { // try from 05ab8ba0 to 05bb8ba7 has its CatchHandler @ 05ab8c44 */
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__
                              );
                    /* try { // try from 05ab8ba8 to 05bb8c37 has its CatchHandler @ 05ab89ec */
    FUN_04dff178(lVar7,uVar8,*(undefined8 *)Method_System_Array_Reverse<int>__,0);
    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar7;
  }
  uVar4 = FUN_0349934c(uVar4,lVar7,*(undefined8 *)puVar1);
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar5);
    lVar5 = *(long *)puVar3;
  }
  puVar1 = Method_System_Array_Reverse<byte>__;
  puVar6 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar6[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar5);
      puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar8 = *puVar6;
                    /* try { // try from 05ab8c38 to 05bb8c3b has its CatchHandler @ 05ab8c4c */
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__);
                    /* try { // try from 05ab8c3c to 05bb8c67 has its CatchHandler @ 05ab89ec */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05ab8ba0 with catch @ 05ab8c44
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05ab8b88 with catch @ 05ab8c48
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05ab8c38 with catch @ 05ab8c4c
                        */
    FUN_04e0200c(lVar7,uVar8,*(undefined8 *)Method_System_Array_Reverse<Vector2>__,0);
    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar7;
  }
                    /* try { // try from 05ab8c68 to 05bb8c6b has its CatchHandler @ 05ab8c74 */
  FUN_0349969c(uVar4,lVar7,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 05ab8c68 with catch @ 05ab8c74 */
                    /* try { // try from 05ab8c78 to 05bb8c7f has its CatchHandler @ 05ab8c88 */
                    /* try { // try from 05ab8c80 to 05bb8c8b has its CatchHandler @ 05ab89ec */
  return;
}


