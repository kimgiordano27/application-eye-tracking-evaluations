/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$get_Array
ENTRY_POINT: 065aaa14
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__get_Array
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong in_x9;
  int *in_x10;
  uint unaff_w19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w25;
  
code_r0x065aaa14:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_065aaa08;
  do {
    puVar2 = (undefined8 *)FUN_04980e68();
    while( true ) {
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) != 0) {
        return unaff_w19;
      }
      unaff_w19 = unaff_w19 - 1;
      if ((int)unaff_w19 < unaff_w25) {
        return 0xffffffff;
      }
      if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar1 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_04980b34();
      }
      param_3 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x78);
      if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_04980b34(param_3);
      }
      param_1 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      if (in_x9 == 0) break;
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_065aaa08:
      if (*(long *)(in_x10 + -2) != param_3) goto code_r0x065aaa14;
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    }
  } while( true );
}


