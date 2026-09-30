/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 0276872c
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy
               (long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  lVar7 = *(long *)(param_5 + 0x20);
  iVar6 = param_3 - param_2;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 1;
  }
                    /* try { // try from 0276876c to 028687b3 has its CatchHandler @ 0276876c
                       catch() { ... } // from try @ 0276876c with catch @ 0276876c
                       catch() { ... } // from try @ 0276880c with catch @ 0276876c
                       catch() { ... } // from try @ 0276883c with catch @ 0276876c
                       catch() { ... } // from try @ 027688b8 with catch @ 0276876c */
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x48);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  uVar8 = param_2 + (iVar6 >> 1);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar7 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  FUN_02768154(param_1,param_4,param_2,uVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
  lVar7 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  FUN_02768154(param_1,param_4,param_2,param_3,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
  lVar7 = *(long *)(param_5 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0185daa4();
  }
  FUN_02768154(param_1,param_4,uVar8,param_3,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
  if (param_1 == 0) {
LAB_027689dc:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (uVar8 < *(uint *)(param_1 + 0x18)) {
    lVar7 = param_1 + (long)(int)uVar8 * 0x10;
    uVar1 = *(undefined8 *)(lVar7 + 0x20);
    uVar3 = *(undefined8 *)(lVar7 + 0x28);
    uVar5 = param_3 - 1;
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_027682a0(param_1,uVar8,uVar5);
    uVar8 = uVar5;
    if ((int)uVar5 <= (int)param_2) {
LAB_02768968:
      lVar7 = *(long *)(param_5 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0185daa4();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x48);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0185daa4();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      FUN_027682a0(param_1,param_2,uVar5);
      return param_2;
    }
    while (param_2 = param_2 + 1, param_2 < *(uint *)(param_1 + 0x18)) {
      if (param_4 == 0) goto LAB_027689dc;
      lVar7 = param_1 + (long)(int)param_2 * 0x10;
      uVar2 = *(undefined8 *)(lVar7 + 0x20);
      uVar4 = *(undefined8 *)(lVar7 + 0x28);
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      iVar6 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),uVar2,uVar4,uVar1,uVar3,
                         *(undefined8 *)(param_4 + 0x28));
      if (-1 < iVar6) {
        do {
          uVar8 = uVar8 - 1;
          if (*(uint *)(param_1 + 0x18) <= uVar8) goto LAB_027689d8;
          lVar7 = param_1 + (long)(int)uVar8 * 0x10;
          uVar2 = *(undefined8 *)(lVar7 + 0x20);
          uVar4 = *(undefined8 *)(lVar7 + 0x28);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          iVar6 = (**(code **)(param_4 + 0x18))
                            (*(undefined8 *)(param_4 + 0x40),uVar1,uVar3,uVar2,uVar4,
                             *(undefined8 *)(param_4 + 0x28));
        } while (iVar6 < 0);
        if ((int)uVar8 <= (int)param_2) goto LAB_02768968;
        lVar7 = *(long *)(param_5 + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0185daa4();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x48);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_0185daa4();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        FUN_027682a0(param_1,param_2,uVar8);
      }
    }
  }
LAB_027689d8:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


