/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 057528c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceDiscoveryResult>__ToArray(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined1 *__s;
  code *pcVar3;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  
  __s = &stack0x00000000 + -((ulong)*(uint *)(param_1 + 0xfc) + 0xf & 0x1fffffff0);
  memset(__s,0,(ulong)*(uint *)(param_1 + 0xfc));
  lVar1 = *(long *)(unaff_x24 + 0x88);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80))
            (unaff_x29 + -0x20);
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x18);
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x20);
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x10);
  FUN_0351987c(__s,*(long *)(lVar1 + 0x80) + 0x20,unaff_x29 + -0x40);
  FUN_03515348(__s,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98) + 0x80)
                   + 0x60);
  FUN_03515348(__s,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98) + 0x80)
                   + 0x40);
  FUN_035198d0(__s,*(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98) + 0x80),
               0xffffffff);
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  pcVar3 = (code *)**(undefined8 **)(lVar1 + 0xa0);
  uVar2 = thunk_FUN_03ae913c(__s,*(long *)(*(long *)(lVar1 + 0x98) + 0x80) + 0x20);
  (*pcVar3)(uVar2,__s,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0));
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  pcVar3 = (code *)**(undefined8 **)(lVar1 + 0xb0);
  uVar2 = thunk_FUN_03ae913c(__s,*(long *)(*(long *)(lVar1 + 0x98) + 0x80) + 0x20);
  (*pcVar3)(uVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


