/*
FUNCTION_NAME: FUN_03a6c0ac
ENTRY_POINT: 03a6c0ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03a6c0ac(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  puVar4 = Method_UnityEngine_InputSystem_InputControlPath_TryGetControlLayout__;
  puVar3 = 
  Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__;
  if ((DAT_04838d8b & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7797);
    thunk_FUN_01efb3a4(StringLiteral_7798);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_6486);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputControlExtensions_ReadValueFromEventAsObject__
                      );
    thunk_FUN_01efb3a4(StringLiteral_7799);
    thunk_FUN_01efb3a4(StringLiteral_7561);
    thunk_FUN_01efb3a4(
                      Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_SetDefault__);
    thunk_FUN_01efb3a4(StringLiteral_7800);
    thunk_FUN_01efb3a4(StringLiteral_7801);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputControlPath_TryGetControlLayout__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_16__);
    thunk_FUN_01efb3a4(StringLiteral_7802);
    thunk_FUN_01efb3a4(
                      Method_Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_<MonoToInternal>b__0__
                      );
    thunk_FUN_01efb3a4(StringLiteral_7803);
    thunk_FUN_01efb3a4(StringLiteral_7804);
    DAT_04838d8b = 1;
  }
  puVar5 = StringLiteral_7799;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  puVar11 = (undefined8 *)(param_1 + 0x60);
  *puVar11 = *(undefined8 *)puVar4;
  thunk_FUN_01f51358(puVar11);
  *(undefined4 *)(param_1 + 0x94) = 100000;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_035aedf8(param_1,0);
  uVar12 = *(undefined8 *)puVar5;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar12 = FUN_03579868(uVar12,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar8 = (long *)FUN_03489498(param_2,*(undefined8 *)StringLiteral_7801,uVar12,0);
  if (plVar8 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    lVar10 = *(long *)StringLiteral_7561;
    bVar1 = *(byte *)(lVar10 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar1 - 1) * 8) != lVar10)) goto LAB_03a6c3d8;
    *(long **)(param_1 + 0x58) = plVar8;
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar1 - 1) * 8) != lVar10)) goto LAB_03a6c3d8;
  }
  puVar4 = StringLiteral_7804;
  puVar3 = StringLiteral_7797;
  thunk_FUN_01f51358(param_1 + 0x58,plVar8);
  uVar12 = FUN_03579868(*(undefined8 *)puVar3,0);
                    /* try { // try from 03a6c2e0 to 03b6c353 has its CatchHandler @ 03a6c2e0
                       catch() { ... } // from try @ 03a6c2e0 with catch @ 03a6c2e0
                       catch() { ... } // from try @ 03a6c37c with catch @ 03a6c2e0
                       catch() { ... } // from try @ 03a6c398 with catch @ 03a6c2e0
                       catch() { ... } // from try @ 03a6c3b4 with catch @ 03a6c2e0
                       catch() { ... } // from try @ 03a6c3f8 with catch @ 03a6c2e0 */
  lVar10 = FUN_03489498(param_2,*(undefined8 *)puVar4,uVar12,0);
  puVar3 = StringLiteral_7798;
  if (lVar10 == 0) {
    lVar9 = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    uVar12 = *(undefined8 *)StringLiteral_7798;
    lVar9 = thunk_FUN_01f116d0(lVar10,uVar12);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar10,uVar12);
    }
    *(long *)(param_1 + 0x68) = lVar9;
    uVar12 = *(undefined8 *)puVar3;
    lVar9 = thunk_FUN_01f116d0(lVar10,uVar12);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar10,uVar12);
    }
  }
  puVar4 = StringLiteral_6486;
  puVar3 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_SetDefault__;
  thunk_FUN_01f51358(param_1 + 0x68,lVar9);
                    /* try { // try from 03a6c354 to 03b6c37b has its CatchHandler @ 03a6c398 */
  uVar12 = FUN_03579868(*(undefined8 *)puVar4,0);
  plVar8 = (long *)FUN_03489498(param_2,*(undefined8 *)puVar3,uVar12,0);
  if (plVar8 == (long *)0x0) {
                    /* catch() { ... } // from try @ 03a6c3b0 with catch @ 03a6c3e4 */
    *(undefined8 *)(param_1 + 0x98) = 0;
LAB_03a6c3e8:
    puVar6 = StringLiteral_7803;
    puVar5 = StringLiteral_7802;
    puVar2 = StringLiteral_7800;
    puVar4 = Method_Unity_VisualScripting_DivisionHandler_<>c_<_ctor>b__0_16__;
    puVar3 = 
    Method_Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_<MonoToInternal>b__0__;
                    /* try { // try from 03a6c3e8 to 03b6c3f7 has its CatchHandler @ 03a6c40c */
                    /* try { // try from 03a6c3f8 to 03b6c403 has its CatchHandler @ 03a6c2e0 */
                    /* try { // try from 03a6c404 to 03b6c40b has its CatchHandler @ 03a6c40c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03a6c3e8 with catch @ 03a6c40c
                       catch(type#2 @ 00000000) { ... } // from try @ 03a6c404 with catch @ 03a6c40c
                        */
    thunk_FUN_01f51358(param_1 + 0x98,plVar8);
    uVar12 = FUN_0348b9c8(param_2,*(undefined8 *)puVar2,0);
    *(undefined8 *)(param_1 + 0x38) = uVar12;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x38),uVar12);
    uVar12 = FUN_0348b9c8(param_2,*(undefined8 *)puVar3,0);
    *(undefined8 *)(param_1 + 0x60) = uVar12;
    thunk_FUN_01f51358(puVar11,uVar12);
    uVar12 = FUN_0348b6e0(param_2,*(undefined8 *)puVar6,0);
    *(undefined8 *)(param_1 + 0x40) = uVar12;
    uVar7 = FUN_0348b56c(param_2,*(undefined8 *)puVar4,0);
    *(undefined4 *)(param_1 + 0x94) = uVar7;
    uVar7 = FUN_0348b56c(param_2,*(undefined8 *)puVar5,0);
    *(undefined4 *)(param_1 + 0x50) = uVar7;
    return;
  }
                    /* try { // try from 03a6c37c to 03b6c393 has its CatchHandler @ 03a6c2e0 */
  lVar10 = *(long *)
            Method_UnityEngine_InputSystem_InputControlExtensions_ReadValueFromEventAsObject__;
  bVar1 = *(byte *)(lVar10 + 0x130);
                    /* try { // try from 03a6c394 to 03b6c397 has its CatchHandler @ 03a6c398 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a6c354 with catch @ 03a6c398
                       catch(type#1 @ 042b3198) { ... } // from try @ 03a6c394 with catch @ 03a6c398
                       try { // try from 03a6c398 to 03b6c3af has its CatchHandler @ 03a6c2e0 */
  if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
     (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar1 - 1) * 8) == lVar10)) {
                    /* try { // try from 03a6c3b0 to 03b6c3b3 has its CatchHandler @ 03a6c3e4 */
                    /* try { // try from 03a6c3b4 to 03b6c3e7 has its CatchHandler @ 03a6c2e0 */
    *(long **)(param_1 + 0x98) = plVar8;
    if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar1 - 1) * 8) == lVar10)) goto LAB_03a6c3e8;
  }
LAB_03a6c3d8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08cfc(plVar8);
}


