/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$.cctor
ENTRY_POINT: 053ae4f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 174
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>___cctor
          (undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  char cStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    uVar10 = (uint)param_1;
    if (*(int *)(in_x9 + 0x20) == unaff_w27) {
                    /* try { // try from 053ae508 to 054ae54b has its CatchHandler @ 053ae5b8 */
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02feb2c4(lVar6);
      }
      lVar7 = *unaff_x23;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 053ae54c to 054ae57f has its CatchHandler @ 053ae258 */
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_053ae57c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02feb5b8();
LAB_053ae57c:
                    /* try { // try from 053ae580 to 054ae583 has its CatchHandler @ 053ae5b4 */
                    /* try { // try from 053ae584 to 054ae597 has its CatchHandler @ 053ae5bc */
      uVar8 = (*(code *)*puVar4)();
      if ((uVar8 & 1) != 0) {
        if (cStack0000000000000008 == '\x02') {
          in_stack_00000010 = in_stack_00000018;
          uVar5 = thunk_FUN_0301043c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000010);
          FUN_05b107f0(uVar5,0);
        }
        else if (cStack0000000000000008 == '\x01') {
          if (unaff_w24 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined4 *)(unaff_x26 + (long)(int)unaff_w24 * 0x14 + 0x30) = uStack000000000000000c
            ;
            return 1;
          }
          goto LAB_053ae804;
        }
        return 0;
      }
      uVar10 = *(uint *)(unaff_x26 + 0x18);
    }
                    /* try { // try from 053ae598 to 054ae5a7 has its CatchHandler @ 053ae258 */
    if (uVar10 <= unaff_w24) goto LAB_053ae804;
    unaff_w24 = *(uint *)(unaff_x26 + (int)unaff_w24 * unaff_x22 + 0x24);
                    /* try { // try from 053ae5a8 to 054ae5ab has its CatchHandler @ 053ae5ac */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 053ae5a8 with catch @ 053ae5ac
                       try { // try from 053ae5ac to 054ae5d3 has its CatchHandler @ 053ae258 */
    if ((int)uVar10 <= unaff_w29) {
      FUN_05b108f4(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    unaff_w29 = unaff_w29 + 1;
    if ((uint)param_1 <= unaff_w24) break;
    in_x9 = unaff_x26 + (long)(int)unaff_w24 * (long)(int)unaff_x22;
  } while( true );
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar10 = *(uint *)(unaff_x20 + 0x20);
    if (uVar10 == (uint)param_1) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
      lVar6 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
      if (lVar6 == 0) goto LAB_053ae808;
      uVar1 = *(uint *)(lVar6 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_053ae804;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
    }
    if (unaff_x26 == 0) {
LAB_053ae808:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_053ae804;
    lVar6 = (long)(int)uVar10;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar10 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) {
LAB_053ae804:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar6 = (long)(int)uVar10;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x14 + 0x24);
  }
  lVar6 = unaff_x26 + lVar6 * 0x14;
  *(int *)(lVar6 + 0x20) = unaff_w27;
  *(int *)(lVar6 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar6 + 0x30) = uStack000000000000000c;
  *(undefined8 *)(lVar6 + 0x28) = in_stack_00000018;
  *unaff_x28 = uVar10 + 1;
  return 1;
}


