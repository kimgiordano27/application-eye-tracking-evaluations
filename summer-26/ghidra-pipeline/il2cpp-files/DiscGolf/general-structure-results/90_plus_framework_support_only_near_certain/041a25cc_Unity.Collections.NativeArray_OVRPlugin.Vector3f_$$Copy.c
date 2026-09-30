/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 041a25cc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
              (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  ulong unaff_x22;
  ulong uVar6;
  undefined8 uVar7;
  
  do {
    puVar1 = (undefined8 *)(param_1 + (long)(int)unaff_w21 * 0x10);
    puVar3 = (undefined8 *)(param_1 + (long)(int)unaff_x22 * 0x10);
    uVar7 = *puVar3;
    unaff_w21 = unaff_w21 + 1;
    puVar1[1] = puVar3[1];
    *puVar1 = uVar7;
    LeanTween__value(puVar1,param_3);
    iVar2 = *(int *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      if (iVar2 <= (int)unaff_x22) {
        FUN_0550afb4(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar2 - unaff_w21,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w21;
      }
      uVar6 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
      unaff_x22 = (ulong)(int)unaff_x22;
      do {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_041a2624;
        if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22)
        goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy;
        if (unaff_x20 == 0) goto LAB_041a2624;
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + uVar6 + 0x20),
                           *(undefined8 *)(lVar5 + uVar6 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
        iVar2 = *(int *)(unaff_x19 + 0x18);
        if ((uVar4 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        uVar6 = uVar6 + 0x10;
      } while ((long)unaff_x22 < (long)iVar2);
    } while (iVar2 <= (int)(uint)unaff_x22);
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_041a2624:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if ((*(uint *)(param_1 + 0x18) <= (uint)unaff_x22) || (*(uint *)(param_1 + 0x18) <= unaff_w21))
    {
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    param_1 = param_1 + 0x20;
    param_3 = 0;
  } while( true );
}


