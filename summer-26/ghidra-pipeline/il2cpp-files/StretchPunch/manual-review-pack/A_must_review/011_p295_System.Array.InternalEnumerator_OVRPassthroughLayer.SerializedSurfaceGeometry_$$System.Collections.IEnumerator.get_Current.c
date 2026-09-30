/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02f155f4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 178
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f15754) */

void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
               (code *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
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
    (*param_1)();
    iVar1 = FUN_02f15810();
    if (-1 < iVar1) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_03604b48();
    }
    lVar4 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02f15578;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_02f15578:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    lVar5 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02f155f0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc();
LAB_02f155f0:
    param_1 = (code *)*puVar2;
  } while( true );
  if (unaff_x23 != (long *)0x0) {
    lVar4 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc();
System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose:
    (*(code *)*puVar2)();
  }
  if (0 < (int)unaff_x21) {
    uVar6 = 0;
    lVar4 = 0x20;
    do {
      lVar5 = *(long *)(unaff_x20 + 0x18);
      if (lVar5 == 0) goto LAB_02f15744;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_02f15748:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (-1 < *(int *)(lVar5 + lVar4)) {
        if (unaff_x22 == 0) {
LAB_02f15744:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar3 = FUN_03604bc4();
        if ((uVar3 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02f15744;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar6) goto LAB_02f15748;
          FUN_02f123d0();
        }
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x10;
    } while (unaff_x21 != uVar6);
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


