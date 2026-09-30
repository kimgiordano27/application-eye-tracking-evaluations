/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.RoomFace>$$.ctor
ENTRY_POINT: 040eef28
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x040eed30) */

void System_ArraySegment<OVRPlugin_RoomFace>___ctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long unaff_x19;
  long lVar7;
  long unaff_x23;
  long unaff_x29;
  
  if (**(long **)(unaff_x29 + -0x28) == 0) {
LAB_040eee28:
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(**(long **)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x50))();
    if (unaff_x19 != 0) {
      if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00(unaff_x19);
      }
      goto LAB_040eef58;
    }
    lVar7 = *(long *)(unaff_x29 + -0x10);
    if (*(char *)(lVar7 + 0x28) == '\0') {
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x18;
      plVar6 = *(long **)(lVar7 + 0x10);
      *(undefined8 *)(unaff_x29 + -0x30) = 0;
      *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x10;
      thunk_FUN_03650fbc();
      if (plVar6 == (long *)0x0) {
        if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_040eef58;
      }
      lVar7 = **(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc(lVar7);
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar7) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto System_ArraySegment<OVRLocatable_TrackingSpacePose>___cctor;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar6,lVar7,2);
System_ArraySegment<OVRLocatable_TrackingSpacePose>___cctor:
      (*(code *)*puVar2)(plVar6,puVar2[1]);
      if (*(long *)(unaff_x29 + -0x10) == 0) goto LAB_040eee28;
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(**(long **)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x50))();
    }
    else {
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x18;
      plVar6 = *(long **)(lVar7 + 0x10);
      *(undefined8 *)(unaff_x29 + -0x30) = 0;
      *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x10;
      thunk_FUN_03650fbc();
      uVar1 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f7680);
      FUN_05e177c8(uVar1,*(undefined8 *)PTR_DAT_079ffd10,0);
      if (plVar6 == (long *)0x0) {
        if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_040eef58;
      }
      lVar7 = **(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc(lVar7);
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar7) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_040eece8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar6,lVar7,1);
LAB_040eece8:
      (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
      if (*(long *)(unaff_x29 + -0x10) == 0) goto LAB_040eee28;
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(**(long **)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x50))();
    }
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
LAB_040eef58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


