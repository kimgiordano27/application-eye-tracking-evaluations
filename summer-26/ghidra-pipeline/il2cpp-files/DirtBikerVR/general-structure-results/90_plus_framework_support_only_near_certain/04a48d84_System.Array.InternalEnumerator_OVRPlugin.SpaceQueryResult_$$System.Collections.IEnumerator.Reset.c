/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04a48d84
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_Reset
               (int *param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  if (param_2 < 0) {
LAB_04a48e70:
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar3 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(PTR_DAT_08486d40);
    FUN_066b7618(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,param_3);
  }
  iVar1 = *param_1;
  if (iVar1 <= param_2) goto LAB_04a48e70;
  if (param_2 == 0) {
    if (iVar1 == 2) {
      lVar6 = *(long *)(param_1 + 4);
      if (lVar6 == 0) {
LAB_04a48eb0:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_04a48eb4:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar6 + 0x20);
      *(undefined8 *)(lVar6 + 0x20) = 0;
      goto LAB_04a48ddc;
    }
    if (iVar1 - 1U == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      goto LAB_04a48ddc;
    }
    lVar6 = *(long *)(param_1 + 4);
    if (lVar6 == 0) goto LAB_04a48eb0;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_04a48eb4;
    lVar2 = *(long *)(param_3 + 0x20);
    uStack0000000000000008 = (ulong)(iVar1 - 1U) << 0x20;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
    puVar5 = (undefined1 *)((long)register0x00000008 + 0xc);
    param_2 = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x20);
    lVar6 = *(long *)(param_1 + 4);
    param_2 = param_2 + -1;
    uStack0000000000000008 = (ulong)(iVar1 - 1);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
    puVar5 = (undefined1 *)&stack0x00000008;
  }
  FUN_043d7de0(lVar6,puVar5,param_2,*(undefined8 *)(lVar2 + 0xc0));
LAB_04a48ddc:
  *param_1 = *param_1 + -1;
  return;
}


