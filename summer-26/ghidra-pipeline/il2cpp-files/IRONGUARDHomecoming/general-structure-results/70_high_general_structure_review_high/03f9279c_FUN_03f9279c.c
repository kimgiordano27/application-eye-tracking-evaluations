/*
FUNCTION_NAME: FUN_03f9279c
ENTRY_POINT: 03f9279c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16] FUN_03f9279c(long param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 local_58;
  
  puVar2 = Method_System_DBNull_System_IConvertible_ToDecimal__;
  if ((DAT_0483b6f3 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04581d70);
    thunk_FUN_01efb3a4(PTR_DAT_04581d78);
    thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Reflection_RuntimePropertyInfo_GetObjectData__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Read__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Count<InputActionMap>__);
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    DAT_0483b6f3 = 1;
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar2;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
  uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  auVar10 = FUN_03f8a4a0(param_1,param_2,1);
  auVar10 = FUN_03f8a724(uVar8,uVar9,auVar10._0_8_,auVar10._8_8_);
  if ((auVar10._0_8_ & 0xff) == 0) {
    return auVar10;
  }
  if ((param_2 == 0) ||
     (lVar6 = FUN_03f8c2dc(param_2), puVar3 = PTR_DAT_04581d70,
     puVar1 = Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Read__, lVar6 == 0)) {
LAB_03f92a80:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar7 = FUN_02b6b4d8(lVar6,*(undefined8 *)
                              Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Read__,
                       *(undefined8 *)PTR_DAT_04581d70);
  if ((uVar7 & 1) == 0) {
    return auVar10;
  }
  lVar6 = FUN_03f8c2dc(param_2);
  puVar4 = PTR_DAT_04581d78;
  if (lVar6 == 0) goto LAB_03f92a80;
  uVar8 = FUN_02b6b264(lVar6,*(undefined8 *)puVar1,*(undefined8 *)PTR_DAT_04581d78);
  local_58 = 0;
  lVar6 = *(long *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)Method_System_Convert_ToUInt64__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  uVar9 = FUN_03579868(uVar9,0);
  if (lVar6 == 0) goto LAB_03f92a80;
  auVar11 = FUN_03fa1c80(lVar6,uVar8,uVar9,&local_58,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  auVar10 = FUN_03f8a724(auVar10._0_8_,auVar10._8_8_,auVar11._0_8_,auVar11._8_8_);
  if ((auVar10._0_8_ & 0xff) == 0) {
    return auVar10;
  }
  lVar6 = FUN_03f8c2dc(param_2);
  puVar2 = Method_System_Linq_Enumerable_Count<InputActionMap>__;
  if (lVar6 == 0) goto LAB_03f92a80;
  uVar7 = FUN_02b6b4d8(lVar6,*(undefined8 *)Method_System_Linq_Enumerable_Count<InputActionMap>__,
                       *(undefined8 *)puVar3);
  if ((uVar7 & 1) != 0) {
    lVar6 = FUN_03f8c2dc(param_2);
    if ((lVar6 == 0) ||
       (lVar6 = FUN_02b6b264(lVar6,*(undefined8 *)puVar2,*(undefined8 *)puVar4), lVar6 == 0))
    goto LAB_03f92a80;
    if ((DAT_0483b73d & 1) == 0) {
      thunk_FUN_01efb3a4(
                        Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                        );
      DAT_0483b73d = 1;
    }
    if ((*(long **)(lVar6 + 0x10) != (long *)0x0) &&
       (**(long **)(lVar6 + 0x10) ==
        *(long *)Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
       )) {
      lVar6 = FUN_03f8c2dc(param_2);
      if ((lVar6 == 0) ||
         (lVar6 = FUN_02b6b264(lVar6,*(undefined8 *)puVar2,*(undefined8 *)puVar4), lVar6 == 0))
      goto LAB_03f92a80;
      uVar5 = FUN_03f91a60();
      goto LAB_03f929fc;
    }
  }
  uVar5 = 0;
LAB_03f929fc:
  uVar8 = local_58;
  uVar9 = thunk_FUN_01f117cc(*(undefined8 *)
                              Method_System_Reflection_RuntimePropertyInfo_GetObjectData__);
  FUN_035c458c(uVar9,uVar8,uVar5 & 1,0);
  *param_3 = uVar9;
  thunk_FUN_01f51358(param_3,uVar9);
  return auVar10;
}


