/*
FUNCTION_NAME: OVRPlugin$$ResetDefaultExternalCamera
ENTRY_POINT: 03383518
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ResetDefaultExternalCamera(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long in_stack_00000018;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x9e8));
  FUN_01c5d288(PTR_DAT_042304e0);
  *(undefined1 *)(unaff_x21 + 0x615) = 1;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar3 = FUN_032eb44c();
  uVar4 = 0;
  if ((uVar3 & 1) == 0) goto LAB_0338367c;
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
              + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_0336e6fc();
  puVar1 = PTR_DAT_04230108;
  switch(uVar2) {
  case 2:
  case 6:
  case 8:
  case 10:
  case 0xc:
  case 0xe:
  case 0x10:
    plVar6 = (long *)PTR_DAT_0422fd80;
    goto LAB_0338359c;
  default:
    if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar3 = FUN_03370750();
    if ((uVar3 & 1) == 0) {
      uVar4 = FUN_032fbc1c();
    }
    else {
      uVar4 = 0;
    }
    goto LAB_0338367c;
  case 4:
    lVar5 = *(long *)PTR_DAT_0422fa08;
    break;
  case 0x12:
  case 0x14:
    plVar6 = (long *)PTR_DAT_04230478;
    goto LAB_03383658;
  case 0x16:
    plVar6 = (long *)PTR_DAT_042304e0;
LAB_0338359c:
    lVar5 = *plVar6;
    break;
  case 0x18:
    plVar6 = (long *)PTR_DAT_042304a8;
    goto LAB_03383658;
  case 0x1a:
    plVar6 = (long *)PTR_DAT_0422f960;
LAB_03383658:
    lVar5 = *plVar6;
    break;
  case 0x1c:
    plVar6 = (long *)UnityEngine_ISubsystemDescriptor_TypeInfo;
    goto LAB_03383668;
  case 0x1e:
    lVar5 = *(long *)PTR_DAT_04230108;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar5 = *(long *)puVar1;
    }
    break;
  case 0x20:
    plVar6 = (long *)Method_System_Collections_Generic_Dictionary<int,_TreeItem>_TryGetValue__;
    goto LAB_03383668;
  case 0x24:
    plVar6 = (long *)PTR_DAT_04230358;
LAB_03383668:
    lVar5 = *plVar6;
  }
  uVar4 = thunk_FUN_01c49334(lVar5);
LAB_0338367c:
  if (*(long *)(unaff_x20 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


