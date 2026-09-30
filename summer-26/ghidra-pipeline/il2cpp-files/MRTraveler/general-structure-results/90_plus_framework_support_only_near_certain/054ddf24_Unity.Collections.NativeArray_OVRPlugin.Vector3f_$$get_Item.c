/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_Item
ENTRY_POINT: 054ddf24
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_Item
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
                    /* try { // try from 054ddf24 to 055ddf7f has its CatchHandler @ 054dddc0 */
  iVar1 = param_3 - param_2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03cf1244();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244();
  }
  uVar5 = param_2 + (iVar1 >> 1);
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_054dd8a0();
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_054dd8a0();
  if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  FUN_054dd8a0();
  if (unaff_x20 == 0) {
LAB_054de254:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (uVar5 < *(uint *)(unaff_x20 + 0x18)) {
    lVar2 = unaff_x20 + (long)(int)uVar5 * 0x18;
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    uVar5 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    FUN_054dda48();
    if ((int)uVar5 <= (int)param_2) {
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyTo:
      lVar2 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      FUN_054dda48();
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(unaff_x20 + 0x18)) {
      lVar2 = unaff_x20 + (long)(int)param_2 * 0x18;
      uVar4 = *(undefined8 *)(lVar2 + 0x30);
      uVar9 = *(undefined8 *)(lVar2 + 0x28);
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
      if (param_4 == 0) goto LAB_054de254;
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_000000e0 = uVar6;
      in_stack_000000e8 = uVar7;
      in_stack_000000f0 = uVar3;
      in_stack_00000100 = uVar8;
      in_stack_00000108 = uVar9;
      in_stack_00000110 = uVar4;
      iVar1 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar1) {
        do {
          uVar5 = uVar5 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar5) goto LAB_054de250;
          lVar2 = unaff_x20 + (long)(int)uVar5 * 0x18;
          uVar4 = *(undefined8 *)(lVar2 + 0x30);
          uVar9 = *(undefined8 *)(lVar2 + 0x28);
          uVar8 = *(undefined8 *)(lVar2 + 0x20);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_03cf1244();
          }
          in_stack_000000e0 = uVar8;
          in_stack_000000e8 = uVar9;
          in_stack_000000f0 = uVar4;
          in_stack_00000100 = uVar6;
          in_stack_00000108 = uVar7;
          in_stack_00000110 = uVar3;
          iVar1 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),&stack0x00000100,&stack0x000000e0,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar5 <= (int)param_2)
        goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyTo;
        lVar2 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03cf1244();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03cf1244();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        FUN_054dda48();
      }
    }
  }
LAB_054de250:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


