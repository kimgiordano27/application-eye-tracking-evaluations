/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.RoomFace>$$ToArray
ENTRY_POINT: 040ef378
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x040ef53c) */
/* WARNING: Removing unreachable block (ram,0x040ef54c) */

void System_ArraySegment<OVRPlugin_RoomFace>__ToArray(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *plVar6;
  long *unaff_x20;
  long unaff_x23;
  long unaff_x29;
  
  if (-1 < *(int *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x30) + 0x28)) {
    unaff_x19 = (undefined8 *)*unaff_x19;
  }
  lVar2 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        lVar2 = lVar2 + (long)*piVar5 * 0x10 + 0x138;
        goto LAB_040ef3d4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar2 = FUN_0367cd30();
LAB_040ef3d4:
  lVar2 = *(long *)(lVar2 + 8);
  *(undefined8 **)(unaff_x29 + -0x58) = unaff_x19;
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8));
  *(long *)(unaff_x29 + -0x48) = unaff_x29 + -0x30;
  plVar6 = *(long **)(*(long *)(unaff_x29 + -0x20) + 0x10);
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x20;
  thunk_FUN_03650fbc();
  if (plVar6 == (long *)0x0) {
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    lVar2 = **(long **)(*(long *)(*(long *)(unaff_x29 + -0x30) + 0x20) + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_040ef484;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar6,lVar2,2);
LAB_040ef484:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
    if (*(long *)(unaff_x29 + -0x20) == 0) {
      if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
    else {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(**(long **)(unaff_x29 + -0x48) + 0x20) + 0xc0) + 0x58))();
      if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


