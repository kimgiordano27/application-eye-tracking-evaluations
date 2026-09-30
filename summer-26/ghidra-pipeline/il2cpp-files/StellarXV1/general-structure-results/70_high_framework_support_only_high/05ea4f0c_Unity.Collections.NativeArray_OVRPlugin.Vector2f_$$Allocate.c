/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Allocate
ENTRY_POINT: 05ea4f0c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Allocate
               (undefined8 param_1,undefined8 param_2,void *param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  ulong __n;
  undefined1 *__src;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  undefined1 *puStack_10;
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_4 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar3 = *(long *)(param_4 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0xfc);
  __src = auStack_30 + -(__n + 0xf & 0x1fffffff0);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_040b1acc(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x90);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar3 = *(long *)(param_4 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x90);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  lVar4 = *(long *)(param_4 + 0x20);
  if (lVar3 == 0) {
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    lVar3 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    lVar4 = *(long *)(param_4 + 0x20);
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
    }
    uStack_28 = param_2;
    if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x88) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    lVar3 = thunk_FUN_040b4efc();
    lVar5 = *(long *)(param_4 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar4 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
      uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar4 = *(long *)(param_4 + 0x20);
    }
    pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xa0);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_040b1acc(lVar4);
      uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar5 = *(long *)(param_4 + 0x20);
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x98);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    (*pcVar6)(lVar3,uVar7,uVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0xa0));
    lVar4 = *(long *)(param_4 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    param_2 = uStack_28;
    lVar5 = *(long *)(param_4 + 0x20);
    *(long *)(*(long *)(lVar4 + 0xb8) + 8) = lVar3;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc();
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x90);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    thunk_FUN_040ec700(*(long *)(lVar4 + 0xb8) + 8,lVar3);
    lVar4 = *(long *)(param_4 + 0x20);
  }
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_040b1acc(lVar4);
    uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
    lVar5 = *(long *)(param_4 + 0x20);
  }
  uVar7 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xa8);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  lVar4 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xa8);
  uStack_20 = param_2;
  lStack_18 = lVar3;
  puStack_10 = __src;
  (**(code **)(lVar4 + 0x10))(uVar7,lVar4,param_1,&uStack_20,__src);
  memcpy(param_3,__src,__n);
  if (*(long *)(lVar2 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


