/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$get_Array
ENTRY_POINT: 055c9b60
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_ArraySegment<OVRPlugin_SpaceQueryResult>__get_Array
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long *unaff_x24;
  long unaff_x25;
  
  uVar3 = (**(code **)(param_1 + 0x2b8))(param_2,param_3,*(undefined8 *)(param_1 + 0x2c0));
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)PTR_DAT_092b99d0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar6 = FUN_0768890c(uVar6,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*unaff_x24);
    }
    goto LAB_055c9cc0;
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x5c8))();
  if ((uVar3 & 1) == 0) goto LAB_055c9d20;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar6 = FUN_076ae3f0();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_076947e0(uVar6,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_055c9c70;
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar4 = (undefined8 *)PTR_DAT_092b99e8;
      }
      else {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar4 = (undefined8 *)PTR_DAT_092b99c8;
      }
    }
    else {
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_092b99a8;
    }
  }
  else {
LAB_055c9c70:
    if (uVar2 != 5) {
LAB_055c9d20:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      uVar6 = thunk_FUN_040b4efc();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_040b1acc(lVar5);
      }
      FUN_0618028c(uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return uVar6;
    }
    lVar5 = *(long *)(unaff_x25 + 0xe0);
    puVar4 = (undefined8 *)PTR_DAT_092b99e0;
  }
  uVar6 = *puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar6 = FUN_0768890c(uVar6,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x24);
  }
LAB_055c9cc0:
  uVar6 = FUN_076bb894(uVar6);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc(lVar5);
  }
  uVar6 = FUN_03b0b7dc(uVar6,lVar5);
  return uVar6;
}


