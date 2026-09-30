/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03ccfd6c
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cd00dc) */

void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  ulong uVar13;
  undefined1 *__s;
  long unaff_x26;
  long unaff_x29;
  
                    /* try { // try from 03ccfd70 to 03dcfd73 has its CatchHandler @ 03ccff10 */
  uVar3 = FUN_05b3a490(unaff_x21 & 0xffffffff);
                    /* try { // try from 03ccfd74 to 03dcfd7f has its CatchHandler @ 03ccff1c */
  uVar13 = (ulong)uVar3;
  if ((int)uVar3 < 0x65) {
    uVar13 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
    if (uVar3 == 0) {
      __s = (undefined1 *)0x0;
    }
    else {
      __s = &stack0x00000000 + -(uVar13 + 0xf & 0xfffffffffffffff0);
    }
    memset(__s,0,uVar13);
    lVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d39158);
    FUN_05b3a31c(lVar6,__s,uVar3,0);
  }
  else {
    uVar5 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d03ce0,uVar13);
                    /* try { // try from 03ccfd94 to 03dcfda3 has its CatchHandler @ 03ccff20 */
    lVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d39158);
                    /* try { // try from 03ccfdb8 to 03dcfe07 has its CatchHandler @ 03ccff2c */
    FUN_05b3a354(lVar6,uVar5,uVar13,0);
  }
  if (unaff_x23 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02eea768(lVar10);
    }
    lVar11 = *unaff_x23;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03ccfe84;
        }
        uVar13 = uVar13 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02eea86c();
LAB_03ccfe84:
    puVar1 = PTR_DAT_06d01f60;
    plVar8 = (long *)(*(code *)*puVar7)();
    puVar2 = PTR_DAT_06d02048;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    do {
      lVar10 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03ccfef4;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)puVar2,0);
LAB_03ccfef4:
      uVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_03cd0018;
        lVar10 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 == 0) goto LAB_03ccfff0;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_03ccffd8;
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02eea768(lVar10);
      }
      lVar11 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03ccff6c;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)FUN_02eea86c(plVar8,lVar10,0);
LAB_03ccff6c:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      iVar4 = FUN_03cd0198();
      if (-1 < iVar4) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_05b3a390(lVar6,iVar4,0);
      }
    } while( true );
  }
LAB_03cd00cc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar12 = piVar12 + 4;
    if (uVar13 == 0) break;
LAB_03ccffd8:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03cd000c;
    }
  }
LAB_03ccfff0:
  puVar7 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)puVar1,0);
LAB_03cd000c:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_03cd0018:
  if (0 < (int)unaff_x21) {
    uVar13 = 0;
    lVar10 = 0x20;
    do {
      lVar11 = *(long *)(unaff_x20 + 0x18);
      if (lVar11 == 0) goto LAB_03cd00cc;
      if (*(uint *)(lVar11 + 0x18) <= uVar13) {
LAB_03cd00d0:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      if (-1 < *(int *)(lVar11 + lVar10)) {
        if (lVar6 == 0) goto LAB_03cd00cc;
        uVar9 = FUN_05b3a40c(lVar6,uVar13 & 0xffffffff,0);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_03cd00cc;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar13) goto LAB_03cd00d0;
          FUN_03cccc58();
        }
      }
      uVar13 = uVar13 + 1;
      lVar10 = lVar10 + 0x18;
    } while (unaff_x21 != uVar13);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


