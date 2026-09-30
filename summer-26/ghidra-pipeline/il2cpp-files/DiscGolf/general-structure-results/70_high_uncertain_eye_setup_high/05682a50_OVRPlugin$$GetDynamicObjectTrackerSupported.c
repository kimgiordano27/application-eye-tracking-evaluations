/*
FUNCTION_NAME: OVRPlugin$$GetDynamicObjectTrackerSupported
ENTRY_POINT: 05682a50
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetDynamicObjectTrackerSupported(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 unaff_w19;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long in_stack_00000018;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x7b8));
  FUN_02d965b8(System_Collections_Generic_List<WeakReference>_TypeInfo);
  FUN_02d965b8(PTR_DAT_06a0e888);
  FUN_02d965b8(UnityEngine_UIElements_EventCallback<FocusInEvent>_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0x758) = 1;
  in_stack_00000018 = 0;
  uVar2 = FUN_0442a9f0(*unaff_x22);
  puVar1 = PTR_DAT_06a0e888;
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *(long *)(lVar3 + 0x1c0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar2 = FUN_04dfa0cc(lVar3,unaff_w19,&stack0x00000018,
                         *(undefined8 *)System_Collections_Generic_List<WeakReference>_TypeInfo);
    if ((uVar2 & 1) != 0) {
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      (**(code **)(in_stack_00000018 + 0x18))(*(undefined8 *)(in_stack_00000018 + 0x40),unaff_w21);
      lVar3 = *(long *)(*(long *)puVar1 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar3 = *(long *)(lVar3 + 0x1c0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04df9a98(lVar3,unaff_w19,
                   *(undefined8 *)System_Collections_Generic_List<VolumeStack>_TypeInfo);
    }
  }
  return;
}


