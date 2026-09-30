/*
FUNCTION_NAME: FUN_0141e724
ENTRY_POINT: 0141e724
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


long FUN_0141e724(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((DAT_03776991 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_DebugMember>>>__ctor__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_TaskAwaiter<VRequestResponse<byte[]>>_get_IsCompleted__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_get_size__);
    thunk_FUN_00d48444(Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>__ctor__);
    DAT_03776991 = 1;
  }
  if ((param_2 != (long *)0x0) &&
     (lVar5 = FUN_0266ba24(param_2,0),
     puVar3 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__,
     puVar2 = Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>__ctor__,
     puVar1 = Method_UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_get_size__, lVar5 != 0
     )) {
    if (*(long *)(lVar5 + 0x18) == 0) {
      iVar7 = *(int *)(param_1 + 0x10);
      if (3 < iVar7) {
        uVar8 = *(undefined8 *)Method_Obi_ObiConstraints<ObiSkinConstraintsBatch>__ctor__;
        uVar6 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar6 = FUN_01600424(uVar8,uVar6,*(undefined8 *)puVar1,0);
        lVar9 = *(long *)puVar3;
        lVar5 = *(long *)(lVar9 + 0x38);
        if (lVar5 == 0) {
          FUN_00d59478(lVar9);
          lVar5 = *(long *)(lVar9 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
          lVar5 = FUN_00d5941c();
        }
        FUN_013f38b0(uVar6,**(undefined8 **)(lVar5 + 0xb8),0);
        iVar7 = *(int *)(param_1 + 0x10);
      }
      puVar4 = StringLiteral_302;
      puVar3 = 
      Method_System_Runtime_CompilerServices_TaskAwaiter<VRequestResponse<byte[]>>_get_IsCompleted__
      ;
      puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (1 < iVar7) {
        uVar8 = *(undefined8 *)puVar2;
        uVar6 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        uVar6 = FUN_01600424(uVar8,uVar6,*(undefined8 *)puVar3,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar4);
        }
        FUN_02661754(uVar6,0);
      }
      puVar2 = 
      Method_System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_DebugMember>>>__ctor__
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar9 = FUN_0112fd4c(param_2,*(undefined8 *)puVar2);
      if (lVar9 == 0) goto LAB_0141e944;
      FUN_0266ee8c(lVar9,0);
      lVar5 = FUN_0266ba24(lVar9,0);
      FUN_0142deac(lVar9,0);
    }
    return lVar5;
  }
LAB_0141e944:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


