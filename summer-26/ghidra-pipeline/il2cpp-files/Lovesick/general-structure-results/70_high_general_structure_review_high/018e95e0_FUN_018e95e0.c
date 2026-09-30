/*
FUNCTION_NAME: FUN_018e95e0
ENTRY_POINT: 018e95e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_018e95e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = StringLiteral_3960;
  puVar1 = Method_Sirenix_Serialization_BaseDictionaryKeyPathProvider<Vector2>__ctor__;
  if ((DAT_03779aed & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlUntypedConverter_ToInt64__);
    thunk_FUN_00d48444(StringLiteral_3960);
    thunk_FUN_00d48444(StringLiteral_7323);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vfma_f64__);
    thunk_FUN_00d48444(Method_System_Collections_Specialized_OrderedDictionary_OnDeserialization__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_BaseDictionaryKeyPathProvider<Vector2>__ctor__);
    DAT_03779aed = 1;
  }
  uVar3 = FUN_00da4fb8(*(undefined8 *)puVar1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar1 = Method_System_Collections_Specialized_OrderedDictionary_OnDeserialization__;
  if (lVar4 != 0) {
    FUN_01298da0(lVar4,*(undefined8 *)Method_System_Xml_Schema_XmlUntypedConverter_ToInt64__);
    *(long *)(param_1 + 0x20) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_Remove__;
    if (lVar4 != 0) {
      FUN_012dd38c(lVar4,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vfma_f64__);
      *(long *)(param_1 + 0x30) = lVar4;
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        FUN_012dd38c(lVar4,*(undefined8 *)StringLiteral_7323);
        *(long *)(param_1 + 0x38) = lVar4;
        thunk_FUN_0268a01c(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


