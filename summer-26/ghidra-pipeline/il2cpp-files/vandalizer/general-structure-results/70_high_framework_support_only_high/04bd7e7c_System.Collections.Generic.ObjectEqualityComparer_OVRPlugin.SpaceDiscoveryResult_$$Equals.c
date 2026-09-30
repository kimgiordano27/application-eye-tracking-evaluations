/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 04bd7e7c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04bd7ff8) */

undefined8
System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_SpaceDiscoveryResult>__Equals
          (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long unaff_x22;
  long *unaff_x24;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_056d32d0(lVar2,uVar3,uVar1);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  FUN_04bd874c(&stack0x00000010,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x228));
  return uVar3;
}


