/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 0417b184
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  
  plVar2 = (long *)thunk_FUN_02ef170c();
  if (plVar2 == (long *)0x0) {
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    thunk_FUN_02f411dc();
    FUN_0417daa4();
    return;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0417b274;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar2,lVar5,0);
LAB_0417b274:
  iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x10));
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768();
  }
  uVar4 = FUN_02f07f14(lVar5,iVar1);
  puVar3 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar3 = uVar4;
  thunk_FUN_02f411dc(puVar3,uVar4);
  uVar4 = *puVar3;
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02eea768(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto LAB_0417b380;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar2,lVar5,5);
LAB_0417b380:
  (*(code *)*puVar3)(plVar2,uVar4,0,puVar3[1]);
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}


