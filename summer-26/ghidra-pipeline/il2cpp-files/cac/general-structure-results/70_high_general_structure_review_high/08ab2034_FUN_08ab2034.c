/*
FUNCTION_NAME: FUN_08ab2034
ENTRY_POINT: 08ab2034
PROGRAM: cac-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_08ab2034(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar3 = PTR_DAT_09120ac0;
  if ((DAT_096a4fe8 & 1) == 0) {
    FUN_03f13384(Unity_Services_CloudSave_Internal_Http_HttpException<T>_var);
    FUN_03f13384(System_Func<Transform,_string,_Transform>_TypeInfo);
    FUN_03f13384(System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo);
    FUN_03f13384(System_Func<Translate,_Translate,_bool>_TypeInfo);
    FUN_03f13384(System_Func<float,_sbyte,_object>_TypeInfo);
    FUN_03f13384(PTR_DAT_0910bb08);
    FUN_03f13384(UnityEngine_Rendering_Universal_AntialiasingMode_var);
    FUN_03f13384(PTR_DAT_09120ac0);
    FUN_03f13384(System_Func<Type,_JsonSerializerOptions,_JsonTypeInfo>_TypeInfo);
    FUN_03f13384(System_Func<ushort,_byte,_object>_TypeInfo);
    FUN_03f13384(System_Func<ushort,_Decimal,_object>_TypeInfo);
    DAT_096a4fe8 = 1;
  }
  puVar2 = Unity_Services_CloudSave_Internal_Http_HttpException<T>_var;
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar5 = *(long *)puVar3;
  }
  puVar4 = System_Func<Translate,_Translate,_bool>_TypeInfo;
  puVar3 = System_Func<float,_sbyte,_object>_TypeInfo;
  uVar11 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03f6fea8(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_0910bb08;
  FUN_08ac1264(param_1,param_2,uVar11,0);
  uVar11 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
  uVar6 = thunk_FUN_03f4e68c(*(undefined8 *)puVar3);
  FUN_08aaddac(uVar6,uVar11);
  uVar11 = thunk_FUN_03f4e68c(*(undefined8 *)puVar4);
  FUN_08aa343c(uVar11,uVar6);
  (**(code **)(*param_1 + 0x278))(param_1,uVar11,*(undefined8 *)(*param_1 + 0x280));
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    param_1[0x3f] = 0;
  }
  else {
    lVar5 = *(long *)UnityEngine_Rendering_Universal_AntialiasingMode_var;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        plVar8 = (long *)0x0;
      }
    }
    param_1[0x3f] = (long)plVar8;
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
      param_2 = (long *)0x0;
    }
  }
  plVar8 = param_1 + 0x3f;
  thunk_FUN_03f86000(plVar8,param_2);
  lVar5 = *plVar8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  uVar7 = FUN_087fdf64(lVar5,0,0);
  if ((uVar7 & 1) == 0) {
    uVar11 = *(undefined8 *)System_Func<ushort,_Decimal,_object>_TypeInfo;
  }
  else {
    if (*plVar8 == 0) goto LAB_08ab2364;
    uVar11 = thunk_FUN_087fc370(*plVar8,0);
  }
  puVar3 = System_Func<ushort,_byte,_object>_TypeInfo;
  FUN_08abf198(param_1,uVar11,0);
  lVar5 = (**(code **)(*param_1 + 1000))(param_1,*(undefined8 *)(*param_1 + 0x3f0));
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_03f6fea8(lVar9);
    lVar9 = *(long *)puVar3;
  }
  puVar10 = *(undefined8 **)(lVar9 + 0xb8);
  lVar12 = puVar10[1];
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_03f6fea8(lVar9);
      puVar10 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar11 = *puVar10;
    lVar12 = thunk_FUN_03f4e68c(*(undefined8 *)
                                 System_Func<TransformOrigin,_TransformOrigin,_bool>_TypeInfo);
    FUN_04fb009c(lVar12,uVar11,
                 *(undefined8 *)System_Func<Type,_JsonSerializerOptions,_JsonTypeInfo>_TypeInfo,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar8 = lVar12;
    thunk_FUN_03f86000(plVar8,lVar12);
  }
  if (lVar5 != 0) {
    FUN_04891e0c(lVar5,lVar12,param_1,1,
                 *(undefined8 *)System_Func<Transform,_string,_Transform>_TypeInfo);
    return;
  }
LAB_08ab2364:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


