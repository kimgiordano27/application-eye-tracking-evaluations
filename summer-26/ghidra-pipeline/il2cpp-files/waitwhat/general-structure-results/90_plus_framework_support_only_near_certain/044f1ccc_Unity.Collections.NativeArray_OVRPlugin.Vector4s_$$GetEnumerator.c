/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetEnumerator
ENTRY_POINT: 044f1ccc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetEnumerator
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  FUN_05971910(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05941350(6,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4(lVar5);
  }
  plVar2 = (long *)thunk_FUN_031c3cac(param_2,lVar5);
  if (plVar2 == (long *)0x0) {
    lVar5 = *(long *)(param_3 + 0x20);
    *(undefined4 *)(param_1 + 0x18) = 0;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
      lVar6 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    }
    *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    FUN_044f42a4(param_1,param_2,*(undefined8 *)(lVar6 + 0x40));
    return;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_044f1e08;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_031c0d08(plVar2,lVar5,0);
LAB_044f1e08:
  iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x18);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    uVar4 = FUN_03188b1c(lVar5,iVar1);
    lVar5 = *(long *)(param_3 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_044f1f04;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(plVar2,lVar5,5);
LAB_044f1f04:
    (*(code *)*puVar3)(plVar2,uVar4,0,puVar3[1]);
    *(int *)(param_1 + 0x18) = iVar1;
  }
  return;
}


