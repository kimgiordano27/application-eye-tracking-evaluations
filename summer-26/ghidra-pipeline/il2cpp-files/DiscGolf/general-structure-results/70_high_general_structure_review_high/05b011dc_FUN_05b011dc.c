/*
FUNCTION_NAME: FUN_05b011dc
ENTRY_POINT: 05b011dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05b011dc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_48;
  
  if ((DAT_06dc1f06 & 1) == 0) {
                    /* try { // try from 05b01204 to 05c0120b has its CatchHandler @ 05b01218 */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputAction_CallbackContext>>_RemoveCallback__
                );
                    /* try { // try from 05b0120c to 05c0122f has its CatchHandler @ 05b011b8 */
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05b01204 with catch @ 05b01218
                        */
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__
                );
    FUN_02d965b8(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
                    /* try { // try from 05b01230 to 05c01247 has its CatchHandler @ 05b012b4 */
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<QueryResponse>_Start<WrappedLobbyService_<QueryLobbiesAsync>d__20>__
                );
    DAT_06dc1f06 = 1;
  }
  local_48 = 0;
  if (((param_1 == 0) || (*(long *)(param_1 + 0x88) == 0)) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x88) + 0x20), lVar2 == 0)) goto LAB_05b014ec;
  uVar3 = FUN_05bca8a4(lVar2,0);
  if ((uVar3 & 1) != 0) {
    FUN_05afcfc8(param_1,*(undefined8 *)
                          Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                 ,**(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8));
  }
  puVar1 = Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__;
  lVar2 = *(long *)(param_1 + 0x88);
  if ((lVar2 == 0) || (*(long *)(param_1 + 0x68) == 0)) goto LAB_05b014ec;
  lVar7 = *(long *)(lVar2 + 0x18);
  lVar2 = *(long *)(lVar2 + 0x20);
  plVar4 = *(long **)(*(long *)(param_1 + 0x68) + 0x38);
  if (plVar4 == (long *)0x0) {
LAB_05b012f4:
    if (lVar7 == 0) goto LAB_05b014ec;
    lVar5 = lVar2;
    if (*(int *)(lVar7 + 0x10) == 0) {
      if (lVar2 == 0) goto LAB_05b014ec;
      uVar9 = *(undefined8 *)(lVar2 + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      lVar5 = thunk_FUN_02dd3144(*(undefined8 *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo)
      ;
      FUN_05bca5c4(lVar5,uVar9,uVar10,0);
    }
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x50), lVar6 == 0)) goto LAB_05b014ec;
    uVar3 = FUN_04e95158(lVar6,lVar5,&local_48,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
    if ((uVar3 & 1) != 0) {
      if ((local_48 == 0) || (plVar4 = (long *)FUN_05ac7820(local_48,0), plVar4 == (long *)0x0))
      goto LAB_05b014ec;
      plVar4[2] = lVar2;
      LeanTween__value(plVar4 + 2,lVar2);
      goto LAB_05b01384;
    }
    if (*(int *)(lVar7 + 0x10) != 0) {
      if (lVar2 == 0) goto LAB_05b014ec;
      uVar9 = *(undefined8 *)(lVar2 + 0x10);
      if (*(int *)(*(long *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_05bcab08(uVar9,lVar7,0);
      FUN_05afcfc8(param_1,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<QueryResponse>_Start<WrappedLobbyService_<QueryLobbiesAsync>d__20>__
                   ,uVar9);
    }
    plVar4 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_05ac7410(plVar4,lVar2,lVar7,0);
    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputAction_CallbackContext>>_RemoveCallback__
                              );
    FUN_0552aca4(lVar2,0);
    FUN_05b0150c(lVar2);
    if (lVar2 == 0) goto LAB_05b014ec;
    *(long *)(lVar2 + 0x58) = (long)plVar4;
    *(undefined1 *)(lVar2 + 0x48) = 1;
    LeanTween__value((long *)(lVar2 + 0x58),plVar4);
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_05b014ec;
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x20);
    LeanTween__value();
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_05b014ec;
    *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10);
    LeanTween__value();
    lVar7 = *(long *)(param_1 + 0x88);
    if (lVar7 == 0) goto LAB_05b014ec;
    uVar9 = *(undefined8 *)(lVar7 + 0x30);
    *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(lVar7 + 0x44);
    *(undefined8 *)(lVar2 + 0x30) = uVar9;
    LeanTween__value();
    plVar8 = (long *)(param_1 + 0x80);
    *(long *)(lVar2 + 0x60) = *plVar8;
    LeanTween__value();
    *plVar8 = lVar2;
    LeanTween__value(plVar8,lVar2);
  }
  else {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x2f8))(plVar4,lVar2,*(undefined8 *)(*plVar4 + 0x300));
    if (plVar4 == (long *)0x0) goto LAB_05b012f4;
    if (*plVar4 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar4);
    }
LAB_05b01384:
    FUN_05afe56c(param_1,*(undefined8 *)(param_1 + 0x88),plVar4);
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x68) + 0x10), lVar2 != 0)) {
    FUN_05ae16dc(lVar2,plVar4,0);
    return;
  }
LAB_05b014ec:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


