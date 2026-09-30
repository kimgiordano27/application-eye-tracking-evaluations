/*
FUNCTION_NAME: FUN_03cb5cb0
ENTRY_POINT: 03cb5cb0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


int FUN_03cb5cb0(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050e6f14(8);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_03cb5e78;
      if (param_2 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
      memcpy(auStack_d0,(void *)(lVar4 + lVar6),0x48);
      memcpy(auStack_88,auStack_d0,0x48);
      uVar2 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),auStack_88,*(undefined8 *)(param_2 + 0x28))
      ;
      iVar1 = *(int *)(param_1 + 0x18);
      if ((uVar2 & 1) != 0) break;
      uVar9 = uVar9 + 1;
      lVar6 = lVar6 + 0x48;
    } while ((long)uVar9 < (long)iVar1);
  }
  if (iVar1 <= (int)uVar9) {
    return 0;
  }
  uVar2 = uVar9 & 0xffffffff;
  do {
    uVar9 = (ulong)((int)uVar9 + 1);
    do {
      iVar7 = (int)uVar9;
      uVar5 = (uint)uVar2;
      if (iVar1 <= iVar7) {
        Newtonsoft_Json_Linq_JObject__LoadAsync
                  (*(undefined8 *)(param_1 + 0x10),uVar2,iVar1 - uVar5,0);
        iVar1 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar5;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return iVar1 - uVar5;
      }
      uVar9 = (ulong)iVar7;
      lVar6 = (long)iVar7 * 0x48 + 0x20;
      do {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar9) goto LAB_03cb5e78;
        if (param_2 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy;
        memcpy(auStack_118,(void *)(lVar4 + lVar6),0x48);
        memcpy(auStack_88,auStack_118,0x48);
        uVar3 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),auStack_88,
                           *(undefined8 *)(param_2 + 0x28));
        iVar1 = *(int *)(param_1 + 0x18);
        if ((uVar3 & 1) == 0) break;
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 0x48;
      } while ((long)uVar9 < (long)iVar1);
      uVar8 = (uint)uVar9;
    } while (iVar1 <= (int)uVar8);
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((*(uint *)(lVar6 + 0x18) <= uVar8) || (*(uint *)(lVar6 + 0x18) <= uVar5)) {
LAB_03cb5e78:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar2 = (ulong)(uVar5 + 1);
    memmove((void *)(lVar6 + 0x20 + (long)(int)uVar5 * 0x48),
            (void *)(lVar6 + 0x20 + (long)(int)uVar8 * 0x48),0x48);
    iVar1 = *(int *)(param_1 + 0x18);
  } while( true );
}


