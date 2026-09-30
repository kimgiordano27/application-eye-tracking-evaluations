/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetEnumerator
ENTRY_POINT: 05cd1910
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetEnumerator
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  long in_stack_00000018;
  
  if (param_2 != 1) {
    if (param_2 == 1) {
      __cxa_begin_catch(param_1);
      __cxa_end_catch();
      FUN_03877148();
      return;
    }
    FUN_03877148();
                    /* WARNING: Subroutine does not return */
    FUN_03e223b0(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_03d1e194(PTR_DAT_091a4f90);
  uVar3 = thunk_FUN_03d19be4(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&PTR_PTR_08cb6798,0);
  }
  plVar10 = (long *)*puVar1;
  __cxa_end_catch();
  if (*(long *)(in_stack_00000018 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  plVar11 = *(long **)(*(long *)(in_stack_00000018 + 0x90) + 0x18);
  uVar2 = *(undefined8 *)(in_stack_00000018 + 0xd0);
  if (plVar10 == (long *)0x0) {
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_091fcc58);
    uVar7 = 0;
  }
  else {
    uVar5 = thunk_FUN_03d1e194(PTR_DAT_091fcc58);
    uVar7 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
  }
  uVar2 = FUN_06fd2168(uVar2,uVar5,uVar7,0);
  lVar6 = thunk_FUN_03d1e194(PTR_DAT_091a0c08);
  lVar8 = *(long *)(lVar6 + 0x38);
  if (lVar8 == 0) {
    FUN_03d8f2c8(lVar6);
    lVar8 = *(long *)(lVar6 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03d8f26c();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar5 = **(undefined8 **)(lVar6 + 0xb8);
  lVar6 = thunk_FUN_03d1e194(PTR_DAT_091faf08);
  lVar8 = *plVar11;
  uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar3 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar1 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_05cd1adc;
      }
      uVar3 = uVar3 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03d8f370(plVar11,lVar6,1);
LAB_05cd1adc:
  (*(code *)*puVar1)(plVar11,1,uVar2,uVar5,puVar1[1]);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(plVar10);
}


