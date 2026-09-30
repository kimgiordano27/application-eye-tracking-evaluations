/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06ad8498
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  uint unaff_w26;
  long unaff_x27;
  long unaff_x28;
  
  do {
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_03cf1244(param_2);
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_2) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06ad84fc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06ad84fc:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) != 0) {
      return unaff_w26;
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    do {
      if (uVar1 <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      unaff_w26 = *(uint *)(unaff_x23 + unaff_x28 * unaff_x27 + 0x24);
      if ((int)uVar1 <= unaff_w25) {
        FUN_07122f08(0);
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      unaff_w25 = unaff_w25 + 1;
      if (uVar1 <= unaff_w26) {
        return unaff_w26;
      }
      unaff_x28 = (long)(int)unaff_w26;
    } while (*(int *)(unaff_x23 + (long)(int)unaff_w26 * (long)(int)unaff_x27 + 0x20) != unaff_w24);
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  } while( true );
}


