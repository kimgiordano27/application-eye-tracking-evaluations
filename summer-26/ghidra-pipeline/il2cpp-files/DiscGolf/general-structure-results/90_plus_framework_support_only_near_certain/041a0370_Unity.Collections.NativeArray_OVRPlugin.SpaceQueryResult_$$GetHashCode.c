/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetHashCode
ENTRY_POINT: 041a0370
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041a05c4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetHashCode(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x24;
  long *plVar10;
  undefined1 auVar11 [16];
  
  puVar1 = PTR_DAT_069fbff0;
  plVar10 = *(long **)(unaff_x24 + 0xff8);
  plVar2 = (long *)(*(code *)*param_1)();
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *plVar10) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041a03e8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar2,*plVar10,0);
LAB_041a03e8:
    uVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_041a057c;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18(lVar5);
    }
    lVar6 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041a046c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar2,lVar5,0);
LAB_041a046c:
    auVar11 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar5 = *(long *)(unaff_x20 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = *(uint *)(unaff_x20 + 0x18);
    if (uVar7 == *(uint *)(lVar5 + 0x18)) {
      FUN_0419ed24();
      uVar7 = *(uint *)(unaff_x20 + 0x18);
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar7 + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar7 + 1;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    pauVar4 = (undefined1 (*) [16])(lVar5 + (long)(int)uVar7 * 0x10 + 0x20);
    *pauVar4 = auVar11;
    LeanTween__value(pauVar4,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_041a0598;
    }
  }
LAB_041a057c:
  puVar3 = (undefined8 *)FUN_02dd004c(plVar2,*(long *)puVar1,0);
LAB_041a0598:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


