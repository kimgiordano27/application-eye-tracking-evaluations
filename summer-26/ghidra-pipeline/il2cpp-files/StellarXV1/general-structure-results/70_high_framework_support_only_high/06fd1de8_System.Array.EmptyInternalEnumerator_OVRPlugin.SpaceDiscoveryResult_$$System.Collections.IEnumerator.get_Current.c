/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06fd1de8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  __cxa_end_catch();
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_041676cc(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_040dedf8(PTR_DAT_0928fca8);
  uVar3 = thunk_FUN_040daa88(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    __cxa_end_catch();
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x218);
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar2 = FUN_0768890c(uVar2,0);
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_09287040,uVar2,0);
    uVar5 = FUN_04077674(uVar5,2);
    FUN_03b0899c();
    FUN_03b089e0(uVar5);
    FUN_03b08cc0(uVar5,0);
    FUN_03b089e0(uVar5,uVar2);
    FUN_03b08cc0(uVar5,1,uVar2);
    uVar2 = thunk_FUN_040dedf8(PTR_DAT_092dac88);
    uVar2 = FUN_076be814(uVar2,uVar5,0);
    thunk_FUN_040dedf8(PTR_DAT_09287028);
    uVar5 = thunk_FUN_040b4efc();
    uVar6 = thunk_FUN_040dedf8(PTR_DAT_092a7a58);
    FUN_075ce148(uVar5,uVar2,uVar6,0);
    uVar2 = thunk_FUN_040dedf8(PTR_DAT_092dac90);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar5,uVar2);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_08d635d8,0);
}


