/*
FUNCTION_NAME: System.Array.InternalEnumerator<JointRotationActiveState.JointRotationFeatureState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02ea0798
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02ea09a8) */

void System_Array_InternalEnumerator<JointRotationActiveState_JointRotationFeatureState>__System_Collections_IEnumerator_Reset
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong in_x9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x02ea0798:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_02ea0788;
LAB_02ea07a0:
  puVar3 = (undefined8 *)FUN_01ecb238();
  do {
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 == (long *)0x0) {
      memset(unaff_x24,0,unaff_x22);
      memcpy(unaff_x27,unaff_x24,unaff_x22);
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar1 = *(byte *)(*(long *)Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__
                     + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar4);
    }
    memset(unaff_x24,0,unaff_x22);
    memcpy(unaff_x27,unaff_x24,unaff_x22);
    lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar3 = unaff_x27;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x18) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x27;
    }
    lVar7 = thunk_FUN_01ec485c(*(undefined8 *)
                                (*plVar4 + (ulong)*(ushort *)(*(long *)(lVar7 + 0x20) + 0x50) * 0x10
                                + 0x140));
    *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar4,unaff_x29 + -0x20);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar3 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x18) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x25;
    }
    puVar6 = *(undefined8 **)(lVar7 + 0x28);
    uVar5 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
    (*(code *)puVar6[2])(uVar5);
    lVar7 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02ea0760;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02ea0760:
    uVar9 = (*(code *)*puVar3)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar9 & 1) == 0) {
      lVar7 = *(long *)(unaff_x29 + -0x28);
      plVar4 = (long *)thunk_FUN_01f116d0();
      if (plVar4 == (long *)0x0) goto LAB_02ea0938;
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_02ea0910;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x20;
    param_3 = *unaff_x28;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_02ea07a0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02ea0788:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x02ea0798;
    }
    puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02ea092c;
    }
  }
LAB_02ea0910:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_02ea092c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_02ea0938:
  if (*(long *)(lVar7 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


