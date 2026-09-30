/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 01445d9c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 114
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose
          (long param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < iVar3) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {

      Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
      :
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar5 = 0;
    puVar6 = (undefined4 *)(lVar4 + 0x2c);
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_01445e44:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      if (-1 < (int)puVar6[-3]) {
        plVar1 = (long *)FUN_01169cd0(*(undefined8 *)
                                       (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf8));
        if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_01445e44;
        if (plVar1 == (long *)0x0)
        goto 
        Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
        ;
        uVar2 = (**(code **)(*plVar1 + 0x1b8))
                          (plVar1,*puVar6,param_2,*(undefined8 *)(*plVar1 + 0x1c0));
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        iVar3 = *(int *)(param_1 + 0x20);
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 4;
    } while ((long)uVar5 < (long)iVar3);
  }
  return 0;
}


