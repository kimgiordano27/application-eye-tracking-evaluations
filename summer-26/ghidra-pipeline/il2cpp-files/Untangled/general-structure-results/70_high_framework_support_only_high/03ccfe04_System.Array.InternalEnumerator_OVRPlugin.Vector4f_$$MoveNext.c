/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$MoveNext
ENTRY_POINT: 03ccfe04
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cd00dc) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__MoveNext(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  long unaff_x26;
  long unaff_x29;
  
                    /* try { // try from 03ccfe08 to 03dcfef3 has its CatchHandler @ 03ccf894 */
  FUN_05b3a31c();
  if (unaff_x23 != (long *)0x0) {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02eea768(lVar7);
    }
    lVar8 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03ccfe84;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c();
LAB_03ccfe84:
    puVar1 = PTR_DAT_06d01f60;
    plVar5 = (long *)(*(code *)*puVar4)();
    puVar2 = PTR_DAT_06d02048;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    do {
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03ccfef4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar2,0);
LAB_03ccfef4:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_03cd0018;
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_03ccfff0;
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_03ccffd8;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02eea768(lVar7);
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03ccff6c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar5,lVar7,0);
LAB_03ccff6c:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      iVar3 = FUN_03cd0198();
      if (-1 < iVar3) {
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_05b3a390(param_1,iVar3,0);
      }
    } while( true );
  }
LAB_03cd00cc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03ccffd8:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03cd000c;
    }
  }
LAB_03ccfff0:
  puVar4 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar1,0);
LAB_03cd000c:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_03cd0018:
  if (0 < (int)unaff_x21) {
    uVar9 = 0;
    lVar7 = 0x20;
    do {
      lVar8 = *(long *)(unaff_x20 + 0x18);
      if (lVar8 == 0) goto LAB_03cd00cc;
      if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_03cd00d0:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      if (-1 < *(int *)(lVar8 + lVar7)) {
        if (param_1 == 0) goto LAB_03cd00cc;
        uVar6 = FUN_05b3a40c(param_1,uVar9 & 0xffffffff,0);
        if ((uVar6 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_03cd00cc;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar9) goto LAB_03cd00d0;
          FUN_03cccc58();
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x18;
    } while (unaff_x21 != uVar9);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


