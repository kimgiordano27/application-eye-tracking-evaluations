/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 04c3dc3c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Dispose(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined4 uVar9;
  
  lVar4 = (**(code **)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138))();
  if (lVar4 == 0) {
    lVar4 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04c3dca8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c();
LAB_04c3dca8:
    uVar7 = (*(code *)*puVar5)();
    puVar3 = PTR_DAT_07d985f0;
    if ((uVar7 & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_07d985f0;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar4 = *(long *)puVar3;
      }
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *unaff_x19;
      lVar2 = unaff_x20[0xd];
      uVar9 = *(undefined4 *)((long)unaff_x20 + 0x6c);
      uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 8);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d98578) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_04c3dd4c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0377596c();
LAB_04c3dd4c:
      (*(code *)*puVar5)();
      if (*(int *)(*(long *)PTR_DAT_07d96318 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d96318);
      }
      FUN_07841778((int)lVar2,uVar9,uVar1);
      return;
    }
  }
  return;
}


