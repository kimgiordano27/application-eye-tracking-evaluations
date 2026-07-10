/*
FUNCTION_NAME: UnityEngine.InputSystem.InputDevice$$ExecuteCommand<RequestResetCommand>
ENTRY_POINT: 01f7f1d0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputSystem_InputDevice__ExecuteCommand<RequestResetCommand>
               (long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 local_70 [16];
  
  puVar1 = PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8;
                    /* try { // try from 01f7f1f8 to 0207f207 has its CatchHandler @ 01f7f388 */
  if ((DAT_03ef1467 & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_LockForChanges___03cb6df0
                );
                    /* try { // try from 01f7f214 to 0207f21f has its CatchHandler @ 01f7f38c */
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_UnlockForChanges___03cb6df8
                );
                    /* try { // try from 01f7f220 to 0207f24f has its CatchHandler @ 01f7ee14 */
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_Item___03cb6e00
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_length___03cb6e08
                );
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_InputSystem_TypeInfo_03cb6cc8);
    FUN_01c5c92c(PTR_Method_System_Nullable<long>_get_HasValue___03cb6e10);
                    /* try { // try from 01f7f250 to 0207f257 has its CatchHandler @ 01f7f408 */
    FUN_01c5c92c(PTR_Method_System_Nullable<long>_get_Value___03cb6e18);
    DAT_03ef1467 = 1;
  }
                    /* try { // try from 01f7f264 to 0207f273 has its CatchHandler @ 01f7f3fc */
  lVar6 = *(long *)puVar1;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
    lVar6 = *(long *)puVar1;
  }
  puVar1 = 
  PTR_Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_length___03cb6e08
  ;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01f7f490 to 0207f497 has its CatchHandler @ 01f7f4cc */
    FUN_01c5cbd4();
  }
                    /* try { // try from 01f7f294 to 0207f2fb has its CatchHandler @ 01f7f32c */
  UnityEngine_InputSystem_Utilities_CallbackArray<object>__LockForChanges
            (lVar6 + 0x1e0,
             *(undefined8 *)
              PTR_Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_LockForChanges___03cb6df0
            );
  iVar4 = UnityEngine_InputSystem_Utilities_CallbackArray<object>__get_length
                    (lVar6 + 0x1e0,*(undefined8 *)puVar1);
  puVar3 = PTR_Method_System_Nullable<long>_get_Value___03cb6e18;
  puVar2 = 
  PTR_Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_get_Item___03cb6e00
  ;
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      lVar7 = UnityEngine_InputSystem_Utilities_CallbackArray<object>__get_Item
                        (lVar6 + 0x1e0,iVar4,*(undefined8 *)puVar2);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
                    /* try { // try from 01f7f308 to 0207f30f has its CatchHandler @ 01f7f400 */
      auVar8 = (**(code **)(lVar7 + 0x18))
                         (*(undefined8 *)(lVar7 + 0x40),param_1,param_2,
                          *(undefined8 *)(lVar7 + 0x28));
      local_70 = auVar8;
      if ((auVar8._0_8_ & 0xff) != 0) {
                    /* try { // try from 01f7f324 to 0207f327 has its CatchHandler @ 01f7f32c */
                    /* try { // try from 01f7f328 to 0207f34b has its CatchHandler @ 01f7ee14 */
                    /* catch() { ... } // from try @ 01f7f294 with catch @ 01f7f32c
                       catch() { ... } // from try @ 01f7f324 with catch @ 01f7f32c */
        System_Nullable<long>__get_Value(local_70,*(undefined8 *)puVar3);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar5 = UnityEngine_InputSystem_Utilities_CallbackArray<object>__get_length
                        (lVar6 + 0x1e0,*(undefined8 *)puVar1);
                    /* try { // try from 01f7f43c to 0207f43f has its CatchHandler @ 01f7f4d0 */
                    /* try { // try from 01f7f440 to 0207f483 has its CatchHandler @ 01f7ee14 */
    } while (iVar4 < iVar5);
  }
  UnityEngine_InputSystem_Utilities_CallbackArray<object>__UnlockForChanges
            (lVar6 + 0x1e0,
             *(undefined8 *)
              PTR_Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_UnlockForChanges___03cb6df8
            );
  (**(code **)(*param_1 + 0x288))(param_1,param_2,*(undefined8 *)(*param_1 + 0x290));
                    /* try { // try from 01f7f484 to 0207f487 has its CatchHandler @ 01f7f4d0 */
                    /* catch() { ... } // from try @ 01f7f428 with catch @ 01f7f488 */
  return;
}


