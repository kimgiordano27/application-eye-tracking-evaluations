/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLocalStorageManagerBuildingBlock$$GetAnchorAnchorUuidFromLocalStorage
ENTRY_POINT: 039c8b54
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_SpatialAnchorLocalStorageManagerBuildingBlock__GetAnchorAnchorUuidFromLocalStorage
          (void)

{
  uint uVar1;
  int iVar2;
  char in_NG;
  char in_OV;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint unaff_w19;
  uint uVar11;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  undefined2 in_stack_00000010;
  undefined2 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  while( true ) {
    if (in_NG == in_OV) {
      FUN_031dbf48(0);
    }
    unaff_w29 = unaff_w29 + 1;
    uVar6 = (uint)*(undefined8 *)(unaff_x26 + 0x18);
    if (uVar6 <= unaff_w19) break;
    if (*(int *)(unaff_x26 + (long)(int)unaff_w19 * (long)(int)unaff_x22 + 0x20) == unaff_w27) {
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_015c2790(lVar8);
      }
      lVar7 = *unaff_x23;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_039c8b24;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_015c2a80();
LAB_039c8b24:
      uVar9 = (*(code *)*puVar3)();
      if ((uVar9 & 1) != 0) {
                    /* try { // try from 039c8d1c to 03ac8d27 has its CatchHandler @ 039c8da4 */
                    /* try { // try from 039c8d28 to 03ac8dbb has its CatchHandler @ 039c8a8c */
        if (in_stack_00000008._4_1_ == '\x02') {
          uStack0000000000000014 = in_stack_00000018._4_2_;
          lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
          if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
            lVar8 = FUN_015c2790();
          }
          uVar4 = thunk_FUN_015d01b0(lVar8,&stack0x00000014);
          FUN_031dbe34(uVar4,0);
          return 0;
        }
        if (in_stack_00000008._4_1_ != '\x01') {
          return 0;
        }
        if (unaff_w19 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined2 *)(unaff_x26 + (long)(int)unaff_w19 * 0xc + 0x2a) = in_stack_00000010;
          return 1;
        }
        goto LAB_039c8de4;
      }
      uVar6 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar6 <= unaff_w19) goto LAB_039c8de4;
    unaff_w19 = *(uint *)(unaff_x26 + (int)unaff_w19 * unaff_x22 + 0x24);
    in_OV = SBORROW4(unaff_w29,uVar6);
    in_NG = (int)(unaff_w29 - uVar6) < 0;
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar11 = *(uint *)(unaff_x20 + 0x20);
    if (uVar11 == uVar6) {
      (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168) + 8))();
      lVar8 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
      if (lVar8 == 0) goto LAB_039c8de8;
      uVar6 = *(uint *)(lVar8 + 0x18);
      iVar2 = 0;
      if (uVar6 != 0) {
        iVar2 = unaff_w27 / (int)uVar6;
      }
      uVar1 = unaff_w27 - iVar2 * uVar6;
      if (uVar6 <= uVar1) goto LAB_039c8de4;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar8 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
    }
    if (unaff_x26 == 0) {
LAB_039c8de8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    bVar5 = false;
  }
  else {
    uVar11 = *(uint *)(unaff_x20 + 0x24);
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    bVar5 = true;
  }
  if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
    if (bVar5) {
      *(undefined4 *)(unaff_x20 + 0x24) =
           *(undefined4 *)(unaff_x26 + (long)(int)uVar11 * 0xc + 0x24);
    }
    lVar8 = unaff_x26 + (long)(int)uVar11 * 0xc;
    *(int *)(lVar8 + 0x20) = unaff_w27;
    *(int *)(lVar8 + 0x24) = *unaff_x28 + -1;
    *(undefined2 *)(lVar8 + 0x2a) = in_stack_00000010;
    *(undefined2 *)(lVar8 + 0x28) = in_stack_00000018._4_2_;
    *unaff_x28 = uVar11 + 1;
    return 1;
  }
LAB_039c8de4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


