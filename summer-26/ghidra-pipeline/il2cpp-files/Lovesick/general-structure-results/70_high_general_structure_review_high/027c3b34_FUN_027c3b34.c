/*
FUNCTION_NAME: FUN_027c3b34
ENTRY_POINT: 027c3b34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_027c3b34(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03788886 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ef788);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseBoolField_OnKeyDown__);
    thunk_FUN_00d48444(System_Text_UTF8Encoding_UTF8Decoder_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Add__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<object,_int>_TryGetValue__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03788886 = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b4e0(uVar5,0,0);
  puVar1 = PTR_DAT_033ef788;
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_027c3d70;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseBoolField_OnKeyDown__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_010b9d8c(uVar5,param_2,*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_027c3d70;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
  }
  else {
    plVar7 = (long *)(param_1 + 0x20);
    lVar6 = *plVar7;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_0268b4e0(lVar6,param_2,0);
    if ((uVar4 & 1) != 0) goto LAB_027c3d50;
    lVar6 = *plVar7;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_02681b9c(lVar6,0,0);
    if ((uVar4 & 1) != 0) {
      if (*plVar7 == 0) goto LAB_027c3d70;
      FUN_027c3de4(*plVar7,param_1);
    }
    *plVar7 = param_2;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_02681b9c(param_2,0,0);
    if ((uVar4 & 1) != 0) {
      if (*plVar7 == 0) goto LAB_027c3d70;
      FUN_027c3e60(*plVar7,param_1);
    }
  }
  puVar3 = Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__;
  puVar1 = Method_System_Collections_Generic_List<Collider>_Add__;
  puVar2 = System_Text_UTF8Encoding_UTF8Decoder_TypeInfo;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    if (lVar6 == 0) {
LAB_027c3d70:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01323390(lVar6,&local_48,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<object,_int>_TryGetValue__);
    while (uVar4 = FUN_012b894c(&local_48,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
      lVar6 = FUN_00cea774(&local_48,*(undefined8 *)puVar1);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_027c3b34(lVar6,*(undefined8 *)(param_1 + 0x20));
    }
    FUN_012b8948(&local_48,*(undefined8 *)puVar2);
  }
LAB_027c3d50:
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  return;
}


