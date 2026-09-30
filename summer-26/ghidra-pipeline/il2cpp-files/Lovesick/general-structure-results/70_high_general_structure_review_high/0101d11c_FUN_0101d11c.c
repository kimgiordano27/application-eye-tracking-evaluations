/*
FUNCTION_NAME: FUN_0101d11c
ENTRY_POINT: 0101d11c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0101d11c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03775e49 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
                      );
    thunk_FUN_00d48444(Method_System_Data_DataTable_set_Locale__);
    thunk_FUN_00d48444(Method_System_Net_WebRequestStream_TryReadFromBufferedContent__);
    thunk_FUN_00d48444(StringLiteral_1857);
    thunk_FUN_00d48444(Method_Autohand_AutoHandExtensions_CanGetComponent<Rigidbody>__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03775e49 = 1;
  }
  uStack_48 = 0;
  local_40 = 0;
  local_50 = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b5e4(uVar7,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x78) == 0) goto LAB_0101d2ac;
    FUN_02689f9c(*(long *)(param_1 + 0x78),0,0);
  }
  puVar4 = StringLiteral_1857;
  puVar3 = Method_System_Net_WebRequestStream_TryReadFromBufferedContent__;
  puVar2 = Method_System_Data_DataTable_set_Locale__;
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<TrackedDeviceGraphicRaycaster_RaycastHitData>_Dispose__
  ;
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x80),&local_68,
                 *(undefined8 *)Method_Autohand_AutoHandExtensions_CanGetComponent<Rigidbody>__);
    uStack_48 = uStack_60;
    local_50 = local_68;
    local_40 = local_58;
    while (uVar5 = FUN_012b894c(&local_50,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      lVar6 = FUN_00ac66a0(&local_50,*(undefined8 *)puVar4);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_010c2c5c(lVar6,&local_68,*(undefined8 *)puVar1);
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_026f2c70(local_68,1,0);
    }
    FUN_012b8948(&local_50,*(undefined8 *)puVar2);
    lVar6 = FUN_00ed56f0(0);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x40) != 0)) {
      FUN_00fcbec8(*(long *)(lVar6 + 0x40),*(undefined8 *)(param_1 + 0xc0),0);
      return;
    }
  }
LAB_0101d2ac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


