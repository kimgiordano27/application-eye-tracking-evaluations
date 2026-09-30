/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 043adb10
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


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceDiscoveryResult>
              (long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_03cf12a0(param_3);
  }
  in_stack_00000028 = 0;
  iVar1 = thunk_FUN_03d12034(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_03ce5214(PTR_DAT_08e804b0);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e804b8);
    FUN_0711241c(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar4,param_3);
  }
  uVar2 = FUN_07119d8c(param_1,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000028,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      in_stack_00000018 = param_2;
      thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(param_3 + 0x38) + 8),&stack0x00000018);
      lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        FUN_03cf1244(lVar6);
      }
      uVar3 = thunk_FUN_0715d3b4();
      if ((uVar3 & 1) != 0) {
        iVar1 = thunk_FUN_03d11ff0(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_03d11ff0(param_1,0,0);
  return iVar1 + -1;
}


