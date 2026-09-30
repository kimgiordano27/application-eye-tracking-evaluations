/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 05cd197c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 *unaff_x20;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long in_stack_00000018;
  
  uVar1 = thunk_FUN_03d19be4(param_2,*param_1);
  if ((uVar1 & 1) == 0) {
    puVar4 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar4 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&PTR_PTR_08cb6798,0);
  }
  plVar8 = (long *)*unaff_x20;
  __cxa_end_catch();
  if (*(long *)(in_stack_00000018 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar9 = *(long **)(*(long *)(in_stack_00000018 + 0x90) + 0x18);
  uVar10 = *(undefined8 *)(in_stack_00000018 + 0xd0);
  if (plVar8 == (long *)0x0) {
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091fcc58);
    uVar5 = 0;
  }
  else {
    uVar2 = thunk_FUN_03d1e194(PTR_DAT_091fcc58);
    uVar5 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
  }
  uVar10 = FUN_06fd2168(uVar10,uVar2,uVar5,0);
  lVar3 = thunk_FUN_03d1e194(PTR_DAT_091a0c08);
  lVar6 = *(long *)(lVar3 + 0x38);
  if (lVar6 == 0) {
    FUN_03d8f2c8(lVar3);
    lVar6 = *(long *)(lVar3 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  lVar3 = thunk_FUN_03d1e194(PTR_DAT_091faf08);
  lVar6 = *plVar9;
  uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar1 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_05cd1adc;
      }
      uVar1 = uVar1 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar1 != 0);
  }
  puVar4 = (undefined8 *)FUN_03d8f370(plVar9,lVar3,1);
LAB_05cd1adc:
  (*(code *)*puVar4)(plVar9,1,uVar10,uVar2,puVar4[1]);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(plVar8);
}


