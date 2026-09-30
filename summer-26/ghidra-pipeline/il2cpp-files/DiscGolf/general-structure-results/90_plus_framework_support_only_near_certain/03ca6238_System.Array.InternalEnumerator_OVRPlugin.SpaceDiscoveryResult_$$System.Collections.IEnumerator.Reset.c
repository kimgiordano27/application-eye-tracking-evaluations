/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03ca6238
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
               (int *param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iStack000000000000000c;
  
  if (-1 < param_2) {
    iVar1 = *param_1;
    if (param_2 < iVar1) {
      iStack000000000000000c = iVar1 + -1;
      if (param_2 == 0) {
        if (iVar1 < 2) {
          param_1[1] = 0;
        }
        else {
          lVar2 = *(long *)(param_1 + 2);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar2 + 0x18) <= iVar1 - 2U) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar2 = lVar2 + (ulong)(iVar1 - 2U) * 4;
          param_1[1] = *(int *)(lVar2 + 0x20);
          *(undefined4 *)(lVar2 + 0x20) = 0;
        }
      }
      else {
        lVar2 = *(long *)(param_3 + 0x20);
        uVar4 = *(undefined8 *)(param_1 + 2);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02dcfd18();
        }
        FUN_0352ea90(uVar4,&stack0x0000000c,param_2 + -1,
                     *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 200));
      }
      *param_1 = *param_1 + -1;
      return;
    }
  }
  thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
  uVar4 = thunk_FUN_02dd3144();
  uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a0d1d0);
  FUN_05453f78(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,param_3);
}


