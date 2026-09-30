/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03ce1be4
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ce1e18) */
/* WARNING: Removing unreachable block (ram,0x03ce1e6c) */

long System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x22;
  
  FUN_03fd0468(param_1,*(undefined8 *)PTR_DAT_06d02340);
  plVar4 = (long *)FUN_03ce5fa0();
  puVar3 = PTR_DAT_06d02330;
  puVar2 = PTR_DAT_06d02048;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  do {
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03ce1c70;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)puVar2,0);
LAB_03ce1c70:
    uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_03ce1e0c;
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_03ce1da8;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02eea768(lVar8);
    }
    lVar9 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03ce1ce8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02eea86c(plVar4,lVar8,0);
LAB_03ce1ce8:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar9 = *(long *)puVar3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
      thunk_FUN_02f411dc();
    }
    else {
      FUN_03fd0c9c(param_1,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06d01f60) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03ce1e00;
    }
  }
LAB_03ce1da8:
  puVar5 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)PTR_DAT_06d01f60,0);
LAB_03ce1e00:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_03ce1e0c:
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_03fd0ea8(param_1,*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_06d10420);
  }
  return param_1;
}


