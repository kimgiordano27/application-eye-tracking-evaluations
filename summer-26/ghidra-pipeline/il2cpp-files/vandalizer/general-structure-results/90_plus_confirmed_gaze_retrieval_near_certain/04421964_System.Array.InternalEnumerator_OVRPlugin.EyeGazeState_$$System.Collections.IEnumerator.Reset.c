/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04421964
PROGRAM: vandalizer-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x04421bdc) */

void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar11;
  undefined1 auVar12 [16];
  
  uVar3 = FUN_0322bef4();
  uVar3 = FUN_031f21dc(uVar3,unaff_w22 + -1);
  *(undefined8 *)(unaff_x21 + 0x18) = uVar3;
  thunk_FUN_0329bf60();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4(lVar4);
  }
  lVar7 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar4) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_044219f8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_0322c1e8();
LAB_044219f8:
  puVar1 = PTR_DAT_0759b580;
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_0759e2a8;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  iVar11 = 0;
  do {
    lVar4 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04421a70;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar2,0);
LAB_04421a70:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 == 0) goto LAB_04421b8c;
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4(lVar4);
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04421af4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0322c1e8(plVar6,lVar4,0);
LAB_04421af4:
    auVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (iVar11 == 0) {
      *(undefined1 (*) [16])(unaff_x21 + 8) = auVar12;
      thunk_FUN_0329bf60(unaff_x21 + 8,0);
    }
    else {
      lVar4 = *(long *)(unaff_x21 + 0x18);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar4 + 0x18) <= iVar11 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      pauVar8 = (undefined1 (*) [16])(lVar4 + (long)(int)(iVar11 - 1U) * 0x10 + 0x20);
      *pauVar8 = auVar12;
      thunk_FUN_0329bf60(pauVar8,0);
    }
    iVar11 = iVar11 + 1;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04421ba8;
    }
  }
LAB_04421b8c:
  puVar5 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar1,0);
LAB_04421ba8:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


