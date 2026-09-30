/*
FUNCTION_NAME: FUN_01015f7c
ENTRY_POINT: 01015f7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_01015f7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_03775e14 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Data_DataTable_set_Locale__);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_8E2129A5F232A49B45FCB149981C3507166B7EE6265A5B90A1C9B0B87B2C0A80
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<IEnumerator<ITreeViewItem>>_Push__);
    thunk_FUN_00d48444(Method_System_Net_WebRequestStream_TryReadFromBufferedContent__);
    thunk_FUN_00d48444(
                      Method_System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_1857);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Utilities_ConvertUtils_Convert__);
    thunk_FUN_00d48444(Method_Autohand_AutoHandExtensions_CanGetComponent<Rigidbody>__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03775e14 = 1;
  }
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_90 = 0;
  if (*(char *)(param_1 + 0x60) != '\0') {
    return;
  }
  FUN_010162a4(param_1);
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_02689f9c(*(long *)(param_1 + 0x90),0,0);
    puVar8 = StringLiteral_1857;
    puVar7 = 
    Field_<PrivateImplementationDetails>_8E2129A5F232A49B45FCB149981C3507166B7EE6265A5B90A1C9B0B87B2C0A80
    ;
    puVar6 = Method_System_Net_WebRequestStream_TryReadFromBufferedContent__;
    puVar5 = Method_System_Data_DataTable_set_Locale__;
    puVar4 = Method_Autohand_AutoHandExtensions_CanGetComponent<Rigidbody>__;
    puVar3 = 
    Method_System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>__ctor__
    ;
    puVar2 = Method_System_Collections_Generic_Stack<IEnumerator<ITreeViewItem>>_Push__;
    puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (*(long *)(param_1 + 0xb0) != 0) {
      FUN_01323390(*(long *)(param_1 + 0xb0),&local_a8,
                   *(undefined8 *)Method_Newtonsoft_Json_Utilities_ConvertUtils_Convert__);
      uStack_68 = uStack_a0;
      local_70 = local_a8;
      local_60 = local_98;
      while (uVar9 = FUN_012b894c(&local_70,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
        lVar10 = FUN_00ad7204(&local_70,*(undefined8 *)puVar3);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0268ace8(*(long *)(lVar10 + 0x18),0,0);
      }
      FUN_012b8948(&local_70,*(undefined8 *)puVar7);
      if (*(long *)(param_1 + 0x80) != 0) {
        FUN_01323390(*(long *)(param_1 + 0x80),&local_a8,*(undefined8 *)puVar4);
        uStack_88 = uStack_a0;
        local_90 = local_a8;
        local_80 = local_98;
        while( true ) {
          uVar9 = FUN_012b894c(&local_90,*(undefined8 *)puVar6);
          if ((uVar9 & 1) == 0) {
            FUN_012b8948(&local_90,*(undefined8 *)puVar5);
            FUN_010164bc(param_1,0);
            return;
          }
          lVar10 = FUN_00ac66a0(&local_90,*(undefined8 *)puVar8);
          if (lVar10 == 0) break;
          uVar11 = *(undefined8 *)(lVar10 + 0xb0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar1);
          }
          uVar9 = FUN_0268b5e4(uVar11,0);
          if ((uVar9 & 1) != 0) {
            *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


