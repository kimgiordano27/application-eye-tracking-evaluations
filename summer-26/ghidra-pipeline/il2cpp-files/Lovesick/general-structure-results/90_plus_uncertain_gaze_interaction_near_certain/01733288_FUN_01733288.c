/*
FUNCTION_NAME: FUN_01733288
ENTRY_POINT: 01733288
PROGRAM: Lovesick-libil2cpp.so
SCORE: 158
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_5
*/


void FUN_01733288(long param_1,int param_2,byte param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  ushort local_68 [2];
  int local_64;
  
  local_64 = param_2;
  if ((DAT_03778aff & 1) == 0) {
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    DAT_03778aff = 1;
  }
  local_68[0] = 0;
  FUN_017b46ec(param_1,0);
  if (-1 < param_2) {
    *(undefined1 *)(param_1 + 0xb0) = 1;
    *(byte *)(param_1 + 0x10) = param_4 & 1;
    *(byte *)(param_1 + 0x28) = param_3 & 1;
    if (param_2 == 0x7f) {
      uVar11 = FUN_017266f0(0);
      *(undefined8 *)(param_1 + 0xc0) = uVar11;
      FUN_01733124(param_1,param_4 & 1);
    }
    else {
      uVar12 = FUN_00d9066c(param_1,param_2);
      puVar9 = Newtonsoft_Json_JsonReader_State_TypeInfo;
      if ((uVar12 & 1) == 0) {
        thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
        FUN_00acb0a4();
        uVar11 = FUN_01731954();
        uVar16 = FUN_01731954();
        uVar16 = FUN_0176ec60(&local_64,uVar16,0);
        uVar13 = FUN_01731954();
        uVar14 = thunk_FUN_00d48444(
                                   System_Collections_Generic_IDictionary<string,_StyleComplexSelector>_TypeInfo
                                   );
        uVar13 = FUN_0176ecf8(&local_64,uVar14,uVar13,0);
        uVar14 = thunk_FUN_00d48444(
                                   System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualBoolean_TypeInfo
                                   );
        uVar11 = FUN_01600ce8(uVar11,uVar14,uVar16,uVar13,0);
        thunk_FUN_00d48444(
                          Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>_CreateTrackableImmediate__
                          );
        uVar16 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar13 = thunk_FUN_00d48444(Method_System_Collections_Stack__ctor__);
        FUN_0170dd78(uVar16,uVar13,uVar11,0);
        uVar11 = thunk_FUN_00d48444(
                                   Method_UnityEngine_Rendering_Universal_ShaderData_GetOrUpdateBuffer<Vector4>__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar16,uVar11);
      }
      puVar15 = *(undefined4 **)(param_1 + 0x90);
      uVar11 = *(undefined8 *)(param_1 + 0x48);
      cVar8 = *(char *)(param_1 + 0x28);
      uVar1 = *puVar15;
      uVar3 = puVar15[1];
      uVar5 = puVar15[4];
      uVar6 = *(undefined4 *)(param_1 + 0x1c);
      uVar2 = puVar15[2];
      uVar4 = puVar15[3];
      uVar10 = FUN_01732a1c(param_1);
      local_68[0] = (ushort)((uint)uVar5 >> 8) & 0xff;
      uVar7 = *(undefined4 *)(param_1 + 0x20);
      uVar16 = *(undefined8 *)(param_1 + 0x68);
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar9);
      }
      uVar13 = FUN_016e8b00(local_68,0);
      uVar11 = FUN_0172a7e0(uVar11,cVar8 != '\0',uVar6,uVar10,uVar7,uVar16,uVar1,uVar4,uVar2,uVar3,
                            (byte)uVar5 & 1,uVar13,0);
      *(undefined8 *)(param_1 + 0xc0) = uVar11;
    }
    return;
  }
  thunk_FUN_00d48444(StringLiteral_8570);
  uVar11 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar16 = thunk_FUN_00d48444(Method_System_Collections_Stack__ctor__);
  uVar13 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_91__);
  FUN_016efd4c(uVar11,uVar16,uVar13,0);
  uVar16 = thunk_FUN_00d48444(
                             Method_UnityEngine_Rendering_Universal_ShaderData_GetOrUpdateBuffer<Vector4>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar11,uVar16);
}


