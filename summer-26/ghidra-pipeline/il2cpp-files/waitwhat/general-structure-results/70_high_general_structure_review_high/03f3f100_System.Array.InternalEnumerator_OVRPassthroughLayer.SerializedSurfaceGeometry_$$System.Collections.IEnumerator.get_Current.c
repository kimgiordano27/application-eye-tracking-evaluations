/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03f3f100
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5
               ,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  code *in_x9;
  long unaff_x19;
  size_t unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x25;
  int unaff_w26;
  undefined8 unaff_x27;
  long unaff_x29;
  
  while( true ) {
    *(undefined8 **)(unaff_x29 + -0x20) = param_1;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x27;
    (*in_x9)(param_2,param_3,param_4,param_5,param_6);
    unaff_w26 = unaff_w26 + 1;
    if (*(long *)(unaff_x21 + 0x10) == 0) break;
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30))();
    if (iVar1 <= unaff_w26) {
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* try { // try from 03f3f150 to 0403f15b has its CatchHandler @ 03f3f1ac */
        return;
      }
      goto LAB_03f3f158;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) break;
    lVar5 = *(long *)(unaff_x19 + 0x20);
    *(int *)(unaff_x29 + -0xc) = unaff_w26;
    puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xa0);
    uVar2 = *puVar3;
    pcVar6 = (code *)puVar3[2];
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x27;
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (*pcVar6)(uVar2,puVar3,lVar4,unaff_x29 + -0x20);
    param_4 = *(long *)(unaff_x21 + 0x18);
    memcpy(unaff_x23,unaff_x22,unaff_x20);
    if (param_4 == 0) break;
    plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    param_1 = unaff_x23;
    if (-1 < *(int *)(*plVar7 + 0x28)) {
      param_1 = (undefined8 *)*unaff_x23;
    }
    param_3 = (undefined8 *)plVar7[0x18];
    param_5 = unaff_x29 + -0x20;
    param_6 = unaff_x29 + -0xc;
    *(int *)(unaff_x29 + -0xc) = unaff_w26;
    param_2 = *param_3;
    in_x9 = (code *)param_3[2];
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03f3f124 to 0403f12b has its CatchHandler @ 03f3f1b0 */
    FUN_03188cd8();
  }
LAB_03f3f158:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


