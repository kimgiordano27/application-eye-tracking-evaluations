/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03b12384
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOf<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar6;
  long *unaff_x23;
  long *unaff_x24;
  
  FUN_059324dc();
  if (unaff_x21 == 0) goto LAB_03b12528;
  uVar2 = FUN_04ec30c4();
  if ((uVar2 & 1) == 0) {
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *unaff_x23;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar6 = FUN_059324dc(uVar6,0);
    if (lVar3 == 0) goto LAB_03b12528;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar5 = *(long *)PTR_DAT_0727fb38;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_03b12528;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
      thunk_FUN_0333a630();
    }
    else {
      FUN_041e2c78(lVar3,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *unaff_x23;
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar6 = FUN_059324dc(uVar6,0);
  if (lVar3 != 0) {
    FUN_04ec48f0(lVar3,uVar6);
    lVar3 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
    if (lVar3 != 0) {
      uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar6 = FUN_059324dc(uVar6,0);
                    /* WARNING: Could not recover jumptable at 0x03b12510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),uVar6);
      return;
    }
    return;
  }
LAB_03b12528:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


