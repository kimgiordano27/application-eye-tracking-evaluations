/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 03ccfe54
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

void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x26;
  long unaff_x29;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_02eea86c();
      goto LAB_03ccfe84;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
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
                    /* try { // try from 03ccfef4 to 03dcfef7 has its CatchHandler @ 03ccff18 */
                    /* try { // try from 03ccfef8 to 03dcfefb has its CatchHandler @ 03ccff14 */
                    /* try { // try from 03ccfefc to 03dcfeff has its CatchHandler @ 03ccff0c */
    uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
                    /* try { // try from 03ccff00 to 03dcff43 has its CatchHandler @ 03ccf894 */
    if ((uVar9 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_03cd0018;
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_03ccfff0;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03ccfefc with catch @ 03ccff0c
                        */
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03ccfd70 with catch @ 03ccff10
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03ccfef8 with catch @ 03ccff14
                        */
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03ccfef4 with catch @ 03ccff18
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03ccfd74 with catch @ 03ccff1c
                        */
      lVar7 = FUN_02eea768(lVar7);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03ccfd94 with catch @ 03ccff20
                        */
    }
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03ccfd28 with catch @ 03ccff24
                        */
    lVar8 = *plVar5;
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03ccfccc with catch @ 03ccff28
                        */
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
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_05b3a390();
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
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
        if (unaff_x22 == 0) {
LAB_03cd00cc:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar6 = FUN_05b3a40c();
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


