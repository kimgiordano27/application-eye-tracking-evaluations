/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 03ccfde0
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

void System_Array_InternalEnumerator<OVRPlugin_Vector4f>___ctor
               (undefined8 param_1,undefined8 param_2,size_t param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  void *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  memset(unaff_x25,0,param_3);
  lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d39158);
  FUN_05b3a31c();
  if (unaff_x23 != (long *)0x0) {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02eea768(lVar8);
    }
    lVar9 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03ccfe84;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c();
LAB_03ccfe84:
    puVar1 = PTR_DAT_06d01f60;
    plVar6 = (long *)(*(code *)*puVar5)();
    puVar2 = PTR_DAT_06d02048;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    do {
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03ccfef4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0);
LAB_03ccfef4:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_03cd0018;
        lVar8 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_03ccfff0;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_03ccffd8;
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02eea768(lVar8);
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03ccff6c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02eea86c(plVar6,lVar8,0);
LAB_03ccff6c:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
      iVar3 = FUN_03cd0198();
      if (-1 < iVar3) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_05b3a390(lVar4,iVar3,0);
      }
    } while( true );
  }
LAB_03cd00cc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_03ccffd8:
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03cd000c;
    }
  }
LAB_03ccfff0:
  puVar5 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar1,0);
LAB_03cd000c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_03cd0018:
  if (0 < (int)unaff_x21) {
    uVar10 = 0;
    lVar8 = 0x20;
    do {
      lVar9 = *(long *)(unaff_x20 + 0x18);
      if (lVar9 == 0) goto LAB_03cd00cc;
      if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_03cd00d0:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      if (-1 < *(int *)(lVar9 + lVar8)) {
        if (lVar4 == 0) goto LAB_03cd00cc;
        uVar7 = FUN_05b3a40c(lVar4,uVar10 & 0xffffffff,0);
        if ((uVar7 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_03cd00cc;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar10) goto LAB_03cd00d0;
          FUN_03cccc58();
        }
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x18;
    } while (unaff_x21 != uVar10);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


