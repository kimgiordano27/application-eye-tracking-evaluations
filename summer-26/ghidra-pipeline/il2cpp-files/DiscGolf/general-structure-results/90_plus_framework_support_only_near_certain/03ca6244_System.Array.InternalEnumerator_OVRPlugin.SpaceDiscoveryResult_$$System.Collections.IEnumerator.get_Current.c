/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03ca6244
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int in_w8;
  int *unaff_x19;
  undefined8 uVar3;
  int iStack000000000000000c;
  
  if (in_w8 <= param_2) {
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar3 = thunk_FUN_02dd3144();
    uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a0d1d0);
    FUN_05453f78(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar3,param_3);
  }
  iStack000000000000000c = in_w8 + -1;
  if (param_2 == 0) {
    if (in_w8 < 2) {
      unaff_x19[1] = 0;
    }
    else {
      lVar1 = *(long *)(unaff_x19 + 2);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar1 + 0x18) <= in_w8 - 2U) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar1 = lVar1 + (ulong)(in_w8 - 2U) * 4;
      unaff_x19[1] = *(int *)(lVar1 + 0x20);
      *(undefined4 *)(lVar1 + 0x20) = 0;
    }
  }
  else {
    lVar1 = *(long *)(param_3 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x19 + 2);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    FUN_0352ea90(uVar3,&stack0x0000000c,param_2 + -1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 200))
    ;
  }
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


