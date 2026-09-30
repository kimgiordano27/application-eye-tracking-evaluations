/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$.ctor
ENTRY_POINT: 044219f4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04421bdc) */

void System_Array_InternalEnumerator<OVRPlugin_Quatf>___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  int iVar10;
  undefined1 auVar11 [16];
  
  puVar1 = PTR_DAT_0759b580;
  plVar3 = (long *)(**(code **)(param_1 + 0x138))();
  puVar2 = PTR_DAT_0759e2a8;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  iVar10 = 0;
  do {
    lVar5 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04421a70;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0322c1e8(plVar3,*(long *)puVar2,0);
LAB_04421a70:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_04421b8c;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4(lVar5);
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04421af4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0322c1e8(plVar3,lVar5,0);
LAB_04421af4:
    auVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (iVar10 == 0) {
      *(undefined1 (*) [16])(unaff_x21 + 8) = auVar11;
      thunk_FUN_0329bf60(unaff_x21 + 8,0);
    }
    else {
      lVar5 = *(long *)(unaff_x21 + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar5 + 0x18) <= iVar10 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      pauVar7 = (undefined1 (*) [16])(lVar5 + (long)(int)(iVar10 - 1U) * 0x10 + 0x20);
      *pauVar7 = auVar11;
      thunk_FUN_0329bf60(pauVar7,0);
    }
    iVar10 = iVar10 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04421ba8;
    }
  }
LAB_04421b8c:
  puVar4 = (undefined8 *)FUN_0322c1e8(plVar3,*(long *)puVar1,0);
LAB_04421ba8:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


