/*
FUNCTION_NAME: FUN_014303a4
ENTRY_POINT: 014303a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_014303a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long local_48;
  
  if ((DAT_037769cc & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_0__);
    thunk_FUN_00d48444(System_Collections_ArrayList_IListWrapper_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVRResources__GetResourceFullPath_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13354);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_037769cc = 1;
  }
  puVar4 = StringLiteral_13354;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_0__;
  puVar2 = System_Collections_ArrayList_IListWrapper_TypeInfo;
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 != 0) {
    iVar10 = 0;
    while (iVar10 < *(int *)(lVar5 + 0x18)) {
      FUN_0132138c(lVar5,iVar10,&local_48,*(undefined8 *)puVar4);
      if ((local_48 == 0) || (plVar6 = *(long **)(local_48 + 0x10), plVar6 == (long *)0x0))
      goto LAB_014305a4;
      uVar7 = (**(code **)(*plVar6 + 0x4d8))(plVar6,*(undefined8 *)(*plVar6 + 0x4e0));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar8 = FUN_02681b9c(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        if ((((*(long *)(param_1 + 0x98) == 0) ||
             (FUN_0132138c(*(long *)(param_1 + 0x98),iVar10,&local_48,*(undefined8 *)puVar4),
             local_48 == 0)) || (plVar6 = *(long **)(local_48 + 0x10), plVar6 == (long *)0x0)) ||
           (lVar5 = (**(code **)(*plVar6 + 0x4d8))(plVar6,*(undefined8 *)(*plVar6 + 0x4e0)),
           lVar5 == 0)) goto LAB_014305a4;
        FUN_0268fd4c(lVar5,0);
        FUN_0142deac();
      }
      if (((*(long *)(param_1 + 0x98) == 0) ||
          (FUN_0132138c(*(long *)(param_1 + 0x98),iVar10,&local_48,*(undefined8 *)puVar4),
          local_48 == 0)) || (*(long *)(local_48 + 0x10) == 0)) goto LAB_014305a4;
      FUN_013eb184(*(long *)(local_48 + 0x10),0);
      lVar5 = *(long *)(param_1 + 0x98);
      iVar10 = iVar10 + 1;
      if (lVar5 == 0) goto LAB_014305a4;
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      FUN_0129a9f4(*(long *)(param_1 + 0x90),*(undefined8 *)puVar3);
      lVar5 = *(long *)(param_1 + 0x98);
      if (lVar5 != 0) {
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        uVar8 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 200));
        if ((uVar8 & 1) == 0) {
          *(undefined4 *)(lVar5 + 0x18) = 0;
        }
        else {
          iVar10 = *(int *)(lVar5 + 0x18);
          *(undefined4 *)(lVar5 + 0x18) = 0;
          if (0 < iVar10) {
            FUN_0179519c(*(undefined8 *)(lVar5 + 0x10),0,iVar10,0);
          }
        }
        return;
      }
    }
  }
LAB_014305a4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


