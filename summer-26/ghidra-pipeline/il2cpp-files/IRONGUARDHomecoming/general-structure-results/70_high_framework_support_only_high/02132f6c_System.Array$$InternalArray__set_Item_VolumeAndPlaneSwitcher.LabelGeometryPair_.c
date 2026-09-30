/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<VolumeAndPlaneSwitcher.LabelGeometryPair>
ENTRY_POINT: 02132f6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x021331a4) */

void System_Array__InternalArray__set_Item<VolumeAndPlaneSwitcher_LabelGeometryPair>
               (undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x25;
  void *unaff_x26;
  long lVar6;
  long unaff_x28;
  long unaff_x29;
  
  FUN_02e67a8c();
  lVar6 = *(long *)(unaff_x20 + 0x38);
  if (-1 < *(int *)(*(long *)(lVar6 + 0x18) + 0x28)) {
    unaff_x26 = (void *)(unaff_x29 + -0x48);
  }
  memcpy(unaff_x25,unaff_x26,unaff_x22);
  lVar6 = *(long *)(lVar6 + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 == 0) {
    memcpy(unaff_x23,unaff_x25,unaff_x22);
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    uVar2 = **(undefined8 **)(lVar6 + 0xb8);
    lVar6 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Globalization_Bootstring_Decode__);
    FUN_02e6c0a0(lVar6,uVar2,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x30),0);
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    *(long *)(*(long *)(lVar1 + 0xb8) + 8) = lVar6;
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ecaf44();
    }
    thunk_FUN_01f51358(*(long *)(lVar1 + 0xb8) + 8,lVar6);
    unaff_x25 = unaff_x23;
  }
  memcpy(unaff_x21,unaff_x25,unaff_x22);
  puVar3 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x38);
  uVar2 = *puVar3;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x18) + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  *(long **)(unaff_x29 + -0x40) = unaff_x19;
  *(undefined8 *)(unaff_x29 + -0x38) = param_1;
  *(undefined8 **)(unaff_x29 + -0x30) = unaff_x21;
  *(long *)(unaff_x29 + -0x28) = lVar6;
  *(undefined1 *)(unaff_x29 + -0xc) = 1;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  (*(code *)puVar3[2])(uVar2,puVar3,0,unaff_x29 + -0x40,unaff_x29 + -0xc);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03ed669c();
  lVar6 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02133160;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02133160:
  (*(code *)*puVar3)();
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


