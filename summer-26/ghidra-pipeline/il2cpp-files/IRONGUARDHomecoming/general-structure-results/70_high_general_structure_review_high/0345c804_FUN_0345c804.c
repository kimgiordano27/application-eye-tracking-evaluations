/*
FUNCTION_NAME: FUN_0345c804
ENTRY_POINT: 0345c804
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0345c804(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar5 = Method_System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord_Read__;
  puVar4 = Method_Sirenix_Serialization_SerializationData_get_HasEditorData__;
  puVar3 = Method_System_RuntimeType_InvokeMember__;
  puVar2 = Method_System_RuntimeType_CreateInstanceImpl__;
  puVar1 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__;
  if ((DAT_04832936 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord_Read__
                      );
    thunk_FUN_01efb3a4(Method_System_RuntimeType_CreateInstanceImpl__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_SerializationInfo__ctor__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_InvokeMember__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationData_get_HasEditorData__);
    thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_SerializationInfo_AddValue__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_SerializationInfo_AddValueInternal__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Serialization_SerializationInfo_FindElement__);
    DAT_04832936 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_03546db4(uVar7,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar7;
  thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar7);
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(uVar7,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
  *puVar8 = uVar7;
  thunk_FUN_01f51358(puVar8,uVar7);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = 1;
  uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_0347e6ec(uVar9,0);
  FUN_0348bb44(&local_50,0x10,0,0);
  uVar6 = uStack_48;
  uVar7 = local_50;
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_03492938(uVar10,uVar9,uVar7,uVar6,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar8 = uVar10;
  thunk_FUN_01f51358(puVar8,uVar10);
  uVar6 = uStack_48;
  uVar7 = local_50;
  uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_03492938(uVar9,0,uVar7,uVar6,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
  *puVar8 = uVar9;
  thunk_FUN_01f51358(puVar8,uVar9);
  lVar11 = *(long *)(*(long *)puVar3 + 0xb8);
  lVar12 = *(long *)(lVar11 + 8);
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x34) = 1;
    puVar5 = Method_System_Runtime_Serialization_SerializationInfo_AddValueInternal__;
    puVar4 = Method_System_Runtime_Serialization_SerializationInfo__ctor__;
    puVar2 = Method_System_Convert_ToUInt64__;
    puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    lVar11 = *(long *)(lVar11 + 0x10);
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x34) = 1;
      FUN_0345caec();
      uVar7 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_03579868(uVar7,0);
      FUN_03454edc(uVar7,*(undefined8 *)puVar5,1);
      lVar11 = FUN_03579868(*(undefined8 *)puVar2,0);
      if (lVar11 != 0) {
        uVar7 = FUN_03584c60(lVar11,*(undefined8 *)
                                     Method_System_Runtime_Serialization_SerializationInfo_AddValue__
                             ,0x24,0);
        puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
        *puVar8 = uVar7;
        thunk_FUN_01f51358(puVar8,uVar7);
        lVar11 = FUN_03579868(*(undefined8 *)puVar2,0);
        if (lVar11 != 0) {
          uVar7 = FUN_03584c60(lVar11,*(undefined8 *)
                                       Method_System_Runtime_Serialization_SerializationInfo_FindElement__
                               ,0x24,0);
          puVar8 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
          *puVar8 = uVar7;
          thunk_FUN_01f51358(puVar8,uVar7);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


