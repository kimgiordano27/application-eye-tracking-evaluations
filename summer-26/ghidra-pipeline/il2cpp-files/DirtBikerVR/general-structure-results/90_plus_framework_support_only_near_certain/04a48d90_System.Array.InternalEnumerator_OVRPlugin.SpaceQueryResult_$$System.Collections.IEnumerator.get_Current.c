/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04a48d90
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (int *param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int in_w8;
  long lVar5;
  int iStack0000000000000008;
  int iStack000000000000000c;
  
  if (in_w8 <= param_2) {
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar2 = thunk_FUN_03ac74bc();
    uVar3 = thunk_FUN_03af1434(PTR_DAT_08486d40);
    FUN_066b7618(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar2,param_3);
  }
  if (param_2 == 0) {
    if (in_w8 == 2) {
      lVar5 = *(long *)(param_1 + 4);
      if (lVar5 == 0) {
LAB_04a48eb0:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_04a48eb4:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      goto LAB_04a48ddc;
    }
    iStack000000000000000c = in_w8 + -1;
    if (iStack000000000000000c == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      goto LAB_04a48ddc;
    }
    lVar5 = *(long *)(param_1 + 4);
    if (lVar5 == 0) goto LAB_04a48eb0;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_04a48eb4;
    lVar1 = *(long *)(param_3 + 0x20);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar5 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    lVar1 = *(long *)(lVar1 + 0xc0);
    puVar4 = (undefined8 *)((long)&stack0x00000008 + 4);
    param_2 = 0;
  }
  else {
    lVar1 = *(long *)(param_3 + 0x20);
    lVar5 = *(long *)(param_1 + 4);
    iStack0000000000000008 = in_w8 + -1;
    param_2 = param_2 + -1;
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090();
    }
    lVar1 = *(long *)(lVar1 + 0xc0);
    puVar4 = (undefined8 *)&stack0x00000008;
  }
  FUN_043d7de0(lVar5,puVar4,param_2,*(undefined8 *)(lVar1 + 0xc0));
LAB_04a48ddc:
  *param_1 = *param_1 + -1;
  return;
}


