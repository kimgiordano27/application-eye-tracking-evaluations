/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03ccff2c
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cd00dc) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_Reset
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  do {
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 03ccfdb8 with catch @ 03ccff2c
                        */
    if (in_x9 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03ccff6c;
        }
        in_x9 = in_x9 - 1;
        piVar7 = piVar7 + 4;
      } while (in_x9 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_03ccff6c:
    (*(code *)*puVar2)();
    iVar1 = FUN_03cd0198();
    if (-1 < iVar1) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_05b3a390();
    }
    lVar4 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03ccfef4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_03ccfef4:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) break;
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_02eea768(param_3);
    }
    param_1 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  if (unaff_x23 != (long *)0x0) {
    lVar4 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cd000c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_03cd000c:
    (*(code *)*puVar2)();
  }
  if (0 < (int)unaff_x21) {
    uVar6 = 0;
    lVar4 = 0x20;
    do {
      lVar5 = *(long *)(unaff_x20 + 0x18);
      if (lVar5 == 0) goto LAB_03cd00cc;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_03cd00d0:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      if (-1 < *(int *)(lVar5 + lVar4)) {
        if (unaff_x22 == 0) {
LAB_03cd00cc:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar3 = FUN_05b3a40c();
        if ((uVar3 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_03cd00cc;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar6) goto LAB_03cd00d0;
          FUN_03cccc58();
        }
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x18;
    } while (unaff_x21 != uVar6);
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


