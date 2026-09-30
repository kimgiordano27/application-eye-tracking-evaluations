/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 05ea7450
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__ToArray
               (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x21;
  uint unaff_w22;
  undefined8 uVar7;
  long *plVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((int)unaff_w22 < 0) {
    lVar3 = *(long *)(unaff_x21 + 0x20);
    plVar8 = (long *)*param_2;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xa0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar8 + 0x130)) &&
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
      {
        lVar3 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_040b1acc();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xa0);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_040b1acc(lVar3);
        }
        lVar6 = *plVar8;
        if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(lVar6 + 0x130)) &&
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3))
        {
          (**(code **)(lVar6 + 0x188))
                    (&stack0x00000008,plVar8,unaff_w22 & 0x7fffffff,*(undefined8 *)(lVar6 + 400));
          param_1[1] = in_stack_00000010;
          *param_1 = in_stack_00000008;
          param_1[2] = in_stack_00000018;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(plVar8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  puVar2 = PTR_DAT_09285980;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70);
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(PTR_DAT_09285980 + 0xe0));
  }
  uVar7 = FUN_0768890c(uVar7,0);
                    /* try { // try from 05ea74a4 to 05fa74b3 has its CatchHandler @ 05ea74b4 */
  uVar4 = FUN_0768890c(*(long *)(puVar2 + 0x88) + 0x20,0);
                    /* catch() { ... } // from try @ 05ea73c8 with catch @ 05ea74b4
                       catch() { ... } // from try @ 05ea7404 with catch @ 05ea74b4
                       catch() { ... } // from try @ 05ea7430 with catch @ 05ea74b4
                       catch() { ... } // from try @ 05ea74a4 with catch @ 05ea74b4 */
                    /* try { // try from 05ea74b8 to 05fa74bb has its CatchHandler @ 05ea74c4 */
                    /* try { // try from 05ea74bc to 05fa74c7 has its CatchHandler @ 05ea7258 */
  uVar5 = FUN_07691f40(uVar7,uVar4,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ea74b8 with catch @ 05ea74c4
                        */
  plVar8 = (long *)*param_2;
                    /* catch() { ... } // from try @ 05ea7574 with catch @ 05ea74c8
                       catch() { ... } // from try @ 05ea75c4 with catch @ 05ea74c8
                       catch() { ... } // from try @ 05ea75f0 with catch @ 05ea74c8
                       catch() { ... } // from try @ 05ea7664 with catch @ 05ea74c8 */
  if ((((uVar5 & 1) == 0) || (plVar8 == (long *)0x0)) || (*plVar8 != *(long *)(puVar2 + 0x90))) {
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    lVar3 = thunk_FUN_040b4e00(plVar8,lVar3);
    if (lVar3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    if (*(int *)((long)param_2 + 0xc) < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0758dc78(lVar3,3,0);
    }
    iVar1 = *(int *)(param_2 + 1);
    param_1[2] = 0;
    *param_1 = 0;
    lVar3 = lVar3 + (long)iVar1 * 2 + 0x20;
  }
  else {
    uVar7 = FUN_0758dc78(plVar8,3,0);
    lVar3 = FUN_074e3264(plVar8,0);
    iVar1 = *(int *)(param_2 + 1);
    param_1[2] = 0;
    lVar3 = lVar3 + (long)iVar1 * 2;
    *param_1 = 0;
  }
  param_1[1] = 0;
  FUN_0762127c(param_1,lVar3,uVar7,0,0);
  return;
}


