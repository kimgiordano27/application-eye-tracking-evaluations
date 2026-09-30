/*
FUNCTION_NAME: FUN_015806dc
ENTRY_POINT: 015806dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void FUN_015806dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = StringLiteral_1232;
  if ((DAT_03777ca2 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__97>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f44b8);
    thunk_FUN_00d48444(System_Net_ServicePointManager_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<Vector4>__ctor__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRIOBuffer_var);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<HandJointId>>_Dispose__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonTextReader_DoReadAsync__);
    thunk_FUN_00d48444(System_Func<AudioSource,_bool>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzq_s64__);
    thunk_FUN_00d48444(
                      Method_Messenger<Haptics_VibrationForce,_OVRInput_Controller,_float>_Broadcast__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectOfType<TunePower>__);
    thunk_FUN_00d48444(StringLiteral_1232);
    DAT_03777ca2 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<TunePower>__;
  if (lVar3 != 0) {
    FUN_026c84d4(lVar3,0);
    *(long *)(param_1 + 0x20) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = Method_Messenger<Haptics_VibrationForce,_OVRInput_Controller,_float>_Broadcast__;
    if (lVar3 != 0) {
      FUN_013df774(lVar3,*(undefined8 *)
                          Method_Messenger<Haptics_VibrationForce,_OVRInput_Controller,_float>_Broadcast__
                  );
      *(long *)(param_1 + 0x28) = lVar3;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_013df774(lVar3,*(undefined8 *)puVar2);
        *(long *)(param_1 + 0x30) = lVar3;
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = System_Func<AudioSource,_bool>_TypeInfo;
        if (lVar3 != 0) {
          FUN_013df774(lVar3,*(undefined8 *)puVar2);
          *(long *)(param_1 + 0x38) = lVar3;
          *(undefined1 *)(param_1 + 0x40) = 1;
          if (DAT_03775725 == '\0') {
            thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
            DAT_03775725 = '\x01';
          }
          lVar3 = *(long *)(*(long *)System_Xml_Schema_Datatype_byte_TypeInfo + 0xb8);
          uVar6 = *(undefined8 *)(lVar3 + 0x68);
          uVar5 = *(undefined8 *)(lVar3 + 0x60);
          uVar4 = *(undefined8 *)(lVar3 + 0x70);
          uVar10 = *(undefined8 *)(lVar3 + 0x48);
          uVar9 = *(undefined8 *)(lVar3 + 0x40);
          uVar8 = *(undefined8 *)(lVar3 + 0x58);
          uVar7 = *(undefined8 *)(lVar3 + 0x50);
          *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(lVar3 + 0x78);
          *(undefined8 *)(param_1 + 0x74) = uVar4;
          *(undefined8 *)(param_1 + 0x6c) = uVar6;
          *(undefined8 *)(param_1 + 100) = uVar5;
          *(undefined8 *)(param_1 + 0x5c) = uVar8;
          *(undefined8 *)(param_1 + 0x54) = uVar7;
          *(undefined8 *)(param_1 + 0x4c) = uVar10;
          *(undefined8 *)(param_1 + 0x44) = uVar9;
          lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar1 = Method_Newtonsoft_Json_JsonTextReader_DoReadAsync__;
          if (lVar3 != 0) {
            FUN_01320ebc(lVar3,1,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int,_List<HandJointId>>_Dispose__
                        );
            *(long *)(param_1 + 0xb8) = lVar3;
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzq_s64__;
            if (lVar3 != 0) {
              FUN_01320e50(lVar3,*(undefined8 *)OVR_OpenVR_IVRIOBuffer_var);
              *(long *)(param_1 + 0xd8) = lVar3;
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              puVar1 = System_Net_ServicePointManager_TypeInfo;
              if (lVar3 != 0) {
                FUN_01a9a42c(lVar3,0);
                *(long *)(param_1 + 0xe0) = lVar3;
                lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                puVar1 = Method_UnityEngine_Events_UnityEvent<Vector4>__ctor__;
                if (lVar3 != 0) {
                  FUN_01298da0(lVar3,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__97>__
                              );
                  *(long *)(param_1 + 0xf0) = lVar3;
                  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  if (lVar3 != 0) {
                    FUN_01298da0(lVar3,*(undefined8 *)PTR_DAT_033f44b8);
                    *(long *)(param_1 + 0xf8) = lVar3;
                    thunk_FUN_0268a01c(param_1,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


