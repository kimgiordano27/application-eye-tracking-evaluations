/*
FUNCTION_NAME: FUN_00f316b8
ENTRY_POINT: 00f316b8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_00f316b8(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_037755fa & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Reflection_RuntimeMethodInfo_Invoke__);
    thunk_FUN_00d48444(OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_ConditionalWeakTable<object,_SerializationInfo>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    thunk_FUN_00d48444(Obi_IAerodynamicConstraintsBatchImpl_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1309);
    DAT_037755fa = 1;
  }
  puVar3 = Method_System_ComponentModel_BooleanConverter_ConvertFrom__;
  puVar2 = Method_Unity_Collections_NativeArray<ushort>_get_IsCreated__;
  if (param_2 != (long *)0x0) {
    if (param_2[2] != 0) {
      thunk_FUN_00d48444(Method_System_ComponentModel_BooleanConverter_ConvertFrom__);
      uVar4 = thunk_FUN_00d48444(puVar3);
      uVar5 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      uVar4 = FUN_015f5b28(uVar4,uVar5,0);
LAB_00f318b4:
      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
      uVar5 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_017713a8(uVar5,uVar4,0);
      uVar4 = thunk_FUN_00d48444(StringLiteral_9764);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar5,uVar4);
    }
    lVar7 = *param_2;
    bVar1 = *(byte *)(*(long *)StringLiteral_1309 + 300);
    if ((*(byte *)(lVar7 + 300) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1309)) {
      bVar1 = *(byte *)(*(long *)Obi_IAerodynamicConstraintsBatchImpl_TypeInfo + 300);
      if ((*(byte *)(lVar7 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Obi_IAerodynamicConstraintsBatchImpl_TypeInfo)) {
        thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<ushort>_get_IsCreated__);
        uVar4 = thunk_FUN_00d48444(puVar2);
        uVar5 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar6 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrecpe_f64__);
        uVar4 = FUN_01600424(uVar4,uVar5,uVar6,0);
        goto LAB_00f318b4;
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_00f31820;
      FUN_01323a14(*(long *)(param_1 + 0x28),0,param_2,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_object>__ctor__);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x30);
      uVar4 = (**(code **)(lVar7 + 0x1c8))(param_2,*(undefined8 *)(lVar7 + 0x1d0));
      if (lVar8 == 0) goto LAB_00f31820;
      FUN_01299e64(lVar8,uVar4,param_2,
                   *(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
    }
    puVar2 = 
    Method_System_Runtime_CompilerServices_ConditionalWeakTable<object,_SerializationInfo>_TryGetValue__
    ;
    param_2[2] = param_1;
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar7 != 0) {
      FUN_01298da0(lVar7,*(undefined8 *)Method_System_Reflection_RuntimeMethodInfo_Invoke__);
      *(long *)(param_1 + 0x18) = lVar7;
      return;
    }
  }
LAB_00f31820:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


