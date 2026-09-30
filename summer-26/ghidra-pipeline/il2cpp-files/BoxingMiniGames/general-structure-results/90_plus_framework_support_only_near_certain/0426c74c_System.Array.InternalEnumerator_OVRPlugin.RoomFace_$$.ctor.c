/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.RoomFace>$$.ctor
ENTRY_POINT: 0426c74c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_RoomFace>___ctor
               (undefined8 param_1,long *param_2,void *param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x20;
  ulong uVar7;
  long unaff_x26;
  long unaff_x29;
  
                    /* try { // try from 0426c74c to 0436c777 has its CatchHandler @ 0426be30 */
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x26 + 0x28);
  lVar5 = *(long *)(param_4 + 0x20);
  *(void **)(unaff_x29 + -0x10) = param_3;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar2 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  uVar7 = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  FUN_03159758(param_1,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80),param_2);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar2 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x20 + 0x20);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x28)) {
    param_3 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(&stack0x00000000 + -(uVar7 + 0xf & 0x1fffffff0),param_3,uVar7);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  FUN_03642988(param_1,*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80) + 0x40,
               &stack0x00000000 + -(uVar7 + 0xf & 0x1fffffff0),uVar7);
  if (param_2 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0426c8dc;
        }
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(param_2,lVar2,2);
LAB_0426c8dc:
    uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    FUN_03159758(param_1,*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80) + 0x20,uVar4);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    FUN_0315dc8c(param_1,*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80) + 0x60,0xffffffff)
    ;
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


