/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 03b611ac
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  code *pcVar11;
  undefined1 auStack_470 [352];
  undefined1 auStack_310 [352];
  undefined1 auStack_1b0 [352];
  
                    /* try { // try from 03b611ac to 03c6126f has its CatchHandler @ 03b60ddc */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04f428ec(8);
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    lVar7 = 0x20;
    do {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) goto LAB_03b613a0;
      if (*(uint *)(lVar3 + 0x18) <= uVar10) goto LAB_03b613a4;
      memcpy(auStack_310,(void *)(lVar3 + lVar7),0x160);
      if (param_2 == 0) goto LAB_03b613a0;
      pcVar11 = *(code **)(param_2 + 0x18);
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      memcpy(auStack_1b0,auStack_310,0x160);
      uVar2 = (*pcVar11)(uVar5,auStack_1b0,*(undefined8 *)(param_2 + 0x28));
      if ((uVar2 & 1) != 0) {
        uVar2 = (ulong)*(uint *)(param_1 + 0x18);
        break;
      }
      uVar2 = (ulong)*(int *)(param_1 + 0x18);
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 0x160;
    } while ((long)uVar10 < (long)uVar2);
  }
  if ((int)uVar2 <= (int)uVar10) {
    return 0;
  }
  uVar6 = uVar10 & 0xffffffff;
  do {
    uVar10 = (ulong)((int)uVar10 + 1);
    do {
      iVar8 = (int)uVar10;
      uVar4 = (uint)uVar6;
      if ((int)uVar2 <= iVar8) {
        FUN_04f53aa4(*(undefined8 *)(param_1 + 0x10),uVar6,(int)uVar2 - uVar4,0);
        iVar8 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = uVar4;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        return iVar8 - uVar4;
      }
      lVar7 = (long)iVar8 * 0x160 + 0x20;
      uVar10 = (ulong)iVar8;
      do {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 == 0) goto LAB_03b613a0;
        if (*(uint *)(lVar3 + 0x18) <= (uint)uVar10) goto LAB_03b613a4;
        memcpy(auStack_310,(void *)(lVar3 + lVar7),0x160);
        if (param_2 == 0) goto LAB_03b613a0;
        pcVar11 = *(code **)(param_2 + 0x18);
        uVar5 = *(undefined8 *)(param_2 + 0x40);
        memcpy(auStack_1b0,auStack_310,0x160);
        uVar2 = (*pcVar11)(uVar5,auStack_1b0,*(undefined8 *)(param_2 + 0x28));
        if ((uVar2 & 1) == 0) {
          uVar2 = (ulong)*(uint *)(param_1 + 0x18);
          break;
        }
        uVar2 = (ulong)*(int *)(param_1 + 0x18);
        uVar10 = uVar10 + 1;
        lVar7 = lVar7 + 0x160;
      } while ((long)uVar10 < (long)uVar2);
      uVar9 = (uint)uVar10;
    } while ((int)uVar2 <= (int)uVar9);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_03b613a0:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    if ((uVar1 <= uVar9) ||
       (memcpy(auStack_470,(void *)(lVar7 + (long)(int)uVar9 * 0x160 + 0x20),0x160), uVar1 <= uVar4)
       ) {
LAB_03b613a4:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    memcpy((void *)(lVar7 + (long)(int)uVar4 * 0x160 + 0x20),auStack_470,0x160);
    uVar2 = (ulong)*(uint *)(param_1 + 0x18);
    uVar6 = (ulong)(uVar4 + 1);
  } while( true );
}


