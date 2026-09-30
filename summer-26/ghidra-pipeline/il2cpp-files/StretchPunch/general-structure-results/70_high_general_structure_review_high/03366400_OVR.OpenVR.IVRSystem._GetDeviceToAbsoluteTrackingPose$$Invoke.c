/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 03366400
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long * OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__Invoke(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  int in_w8;
  undefined4 *puVar12;
  long unaff_x22;
  long *plVar13;
  long lVar14;
  long lVar15;
  ushort uStack000000000000002c;
  
  plVar13 = *(long **)(unaff_x22 + 0x968);
  if (in_w8 == 0) {
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    plVar8 = (long *)FUN_03366114();
  }
  else {
    uVar7 = FUN_0327d284();
    plVar8 = (long *)thunk_FUN_01de27b8(*plVar13);
    FUN_033d8040(plVar8,0);
    *(undefined1 *)(plVar8 + 0x16) = 1;
    uVar9 = FUN_03367df0(plVar8,uVar7);
    if ((uVar9 & 1) == 0) {
      thunk_FUN_01dd295c(StringLiteral_1369);
      FUN_01a94a5c();
      uVar7 = FUN_03367e90();
      uVar11 = thunk_FUN_01dd295c(StringLiteral_7742);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar7,uVar11);
    }
    uVar9 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
    if ((uVar9 & 1) != 0) {
      uVar7 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*plVar13);
      }
      plVar8 = (long *)FUN_033685c0(uVar7);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
    }
    puVar5 = StringLiteral_1167;
    puVar12 = (undefined4 *)plVar8[0x12];
    lVar14 = plVar8[9];
    uVar3 = *(undefined4 *)((long)plVar8 + 0x1c);
    uVar1 = *puVar12;
    uVar2 = puVar12[3];
    uVar4 = puVar12[4];
    uVar6 = FUN_03367b04(plVar8);
    uStack000000000000002c = (ushort)((uint)uVar4 >> 8) & 0xff;
    lVar10 = plVar8[4];
    lVar15 = plVar8[0xd];
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*(long *)puVar5);
    }
    FUN_032835a0(&stack0x0000002c,0);
    lVar10 = FUN_0335a6bc(lVar14,0,uVar3,uVar6,(int)lVar10,lVar15,uVar1,uVar2);
    plVar8[0x18] = lVar10;
    thunk_FUN_01e10808();
  }
  return plVar8;
}


