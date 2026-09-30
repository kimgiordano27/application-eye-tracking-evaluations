/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.SpaceDiscoveryResult>$$LastIndexOf
ENTRY_POINT: 0700b674
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_SpaceDiscoveryResult>__LastIndexOf
               (void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long in_stack_00000008;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_04980b34();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x58);
  if (lVar1 != 0) {
    uVar2 = FUN_085f2d50(lVar1,*unaff_x19,unaff_x19[1],&stack0x00000008,
                         *(undefined8 *)PTR_DAT_0ac44700);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar1 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x58);
    if ((lVar1 != 0) &&
       (FUN_085f2758(lVar1,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_0ac446f0),
       in_stack_00000008 != 0)) {
      (**(code **)(in_stack_00000008 + 0x18))
                (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000008 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


