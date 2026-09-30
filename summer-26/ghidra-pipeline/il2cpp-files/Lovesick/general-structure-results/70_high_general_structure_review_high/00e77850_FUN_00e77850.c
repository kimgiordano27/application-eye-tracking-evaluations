/*
FUNCTION_NAME: FUN_00e77850
ENTRY_POINT: 00e77850
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void FUN_00e77850(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  int local_34;
  undefined8 local_28;
  
  if ((DAT_03774f06 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1912);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_12305);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<ulong>__ctor__);
    thunk_FUN_00d48444(StringLiteral_10474);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_XRInteractorEvent_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_TextWriter_Write__);
    DAT_03774f06 = 1;
  }
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_00e77a94;
  FUN_0132138c(*(long *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80),&local_28,
               *(undefined8 *)StringLiteral_10474);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    if (param_2 != (long *)0x0) goto LAB_00e77930;
LAB_00e77950:
    plVar4 = (long *)0x0;
  }
  else {
    if (param_2 == (long *)0x0) goto LAB_00e77950;
LAB_00e77930:
    bVar1 = *(byte *)(*(long *)StringLiteral_1912 + 300);
    if (*(byte *)(*param_2 + 300) < bVar1) goto LAB_00e77950;
    plVar4 = param_2;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1912)
    {
      plVar4 = (long *)0x0;
    }
  }
  uVar5 = FUN_0268b4e0(plVar4,local_28,0);
  puVar3 = Method_System_IO_TextWriter_Write__;
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  if ((uVar5 & 1) != 0) {
    if (param_2 == (long *)0x0) goto LAB_00e77a94;
    lVar8 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_12305) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_00e779e8;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)StringLiteral_12305,4);
LAB_00e779e8:
    (*(code *)*puVar6)(param_2,puVar6[1]);
    local_34 = *(int *)(param_1 + 0x80) + 1;
    *(int *)(param_1 + 0x80) = local_34;
    uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar2,&local_34);
    uVar7 = FUN_015f6780(*(undefined8 *)puVar3,uVar7,0);
    FUN_00fdf628(uVar7,0);
    FUN_00e77a98(param_1);
  }
  puVar2 = UnityEngine_XR_Interaction_Toolkit_XRInteractorEvent_TypeInfo;
  if (*(long *)(param_1 + 0x78) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x78) + 0x18) <= *(int *)(param_1 + 0x80)) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar2,0);
      FUN_00e77060(param_1);
    }
    return;
  }
LAB_00e77a94:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


