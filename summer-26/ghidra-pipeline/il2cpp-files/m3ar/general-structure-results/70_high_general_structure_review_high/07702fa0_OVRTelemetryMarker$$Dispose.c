/*
FUNCTION_NAME: OVRTelemetryMarker$$Dispose
ENTRY_POINT: 07702fa0
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void OVRTelemetryMarker__Dispose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  puVar2 = PTR_DAT_08fae950;
  lVar5 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fae920);
  FUN_057d4bb0(lVar5,*(undefined8 *)puVar2);
  puVar4 = PTR_DAT_08faec18;
  puVar3 = PTR_DAT_08faec08;
  puVar2 = PTR_DAT_08faec00;
  if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_058f1e68(&stack0x000000c0,*unaff_x21,*(undefined8 *)PTR_DAT_08faec20);
  while( true ) {
    uVar6 = FUN_072508a0(&stack0x000000c0,*(undefined8 *)puVar3);
    if ((uVar6 & 1) == 0) {
      FUN_0725089c(&stack0x000000c0,*(undefined8 *)puVar2);
      *(long *)(unaff_x19 + 0x130) = lVar5;
      return;
    }
    uVar7 = FUN_07703110();
    if (lVar5 == 0) break;
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)puVar4;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
    }
    else {
      FUN_057d53ac(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


