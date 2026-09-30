/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$MoveNext
ENTRY_POINT: 04421a18
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

void System_Array_InternalEnumerator<OVRPlugin_Quatf>__MoveNext(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int iVar7;
  long unaff_x25;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar8 = *(long **)(unaff_x25 + 0x2a8);
  iVar7 = 0;
  do {
    lVar2 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar8) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04421a70;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_04421a70:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 == 0) goto LAB_04421b8c;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4(lVar2);
    }
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04421af4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_04421af4:
    auVar9 = (*(code *)*puVar1)();
    if (iVar7 == 0) {
      *(undefined1 (*) [16])(unaff_x21 + 8) = auVar9;
      thunk_FUN_0329bf60(unaff_x21 + 8,0);
    }
    else {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar2 + 0x18) <= iVar7 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      pauVar4 = (undefined1 (*) [16])(lVar2 + (long)(int)(iVar7 - 1U) * 0x10 + 0x20);
      *pauVar4 = auVar9;
      thunk_FUN_0329bf60(pauVar4,0);
    }
    iVar7 = iVar7 + 1;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04421ba8;
    }
  }
LAB_04421b8c:
  puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_04421ba8:
  (*(code *)*puVar1)();
  return;
}


