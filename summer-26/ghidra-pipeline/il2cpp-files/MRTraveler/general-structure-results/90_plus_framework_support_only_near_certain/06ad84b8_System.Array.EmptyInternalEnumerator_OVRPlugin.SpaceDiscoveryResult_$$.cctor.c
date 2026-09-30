/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 06ad84b8
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


uint System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___cctor
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  uint unaff_w26;
  long unaff_x27;
  long unaff_x28;
  
  do {
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06ad84fc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_06ad84fc:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 06ad8570 to 06bd87ff has its CatchHandler @ 06ad8570
                       catch() { ... } // from try @ 06ad8570 with catch @ 06ad8570
                       catch() { ... } // from try @ 06ad8864 with catch @ 06ad8570
                       catch() { ... } // from try @ 06ad88b0 with catch @ 06ad8570
                       catch() { ... } // from try @ 06ad88c4 with catch @ 06ad8570
                       catch() { ... } // from try @ 06ad8904 with catch @ 06ad8570
                       catch() { ... } // from try @ 06ad8940 with catch @ 06ad8570 */
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
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_03cf1244(param_3);
    }
    param_1 = *unaff_x21;
  } while( true );
}


