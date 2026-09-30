/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<uint,-MarkToMarkAdjustmentRecord>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02f0be68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f0c144) */

void System_Collections_Generic_Dictionary_KeyCollection<uint,_MarkToMarkAdjustmentRecord>__System_Collections_IEnumerable_GetEnumerator
               (undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  int *unaff_x21;
  undefined1 auVar12 [16];
  
  *(long *)(unaff_x21 + 2) = param_1._8_8_;
  *(long *)unaff_x21 = param_1._0_8_;
  *(long *)(unaff_x21 + 6) = param_1._8_8_;
  *(long *)(unaff_x21 + 4) = param_1._0_8_;
                    /* try { // try from 02f0be6c to 0300be93 has its CatchHandler @ 02f0bea8 */
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  iVar3 = FUN_022f1484();
  *unaff_x21 = iVar3;
                    /* try { // try from 02f0be94 to 0300be9f has its CatchHandler @ 02f0b6bc */
  if (iVar3 < 2) {
    unaff_x21[6] = 0;
    unaff_x21[7] = 0;
                    /* try { // try from 02f0bea0 to 0300bea7 has its CatchHandler @ 02f0bea8 */
    uVar7 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 02f0be6c with catch @ 02f0bea8
                       catch() { ... } // from try @ 02f0bea0 with catch @ 02f0bea8 */
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    uVar7 = FUN_01f08890(lVar4,iVar3 + -1);
    *(undefined8 *)(unaff_x21 + 6) = uVar7;
  }
  thunk_FUN_01f51358(unaff_x21 + 6,uVar7);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar8 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar4) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_02f0bf60;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02f0bf60:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar3 = 0;
  do {
    lVar4 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02f0bfd8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02f0bfd8:
    uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 == 0) goto LAB_02f0c0f4;
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02f0c05c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar4,0);
LAB_02f0c05c:
    auVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (iVar3 == 0) {
      *(undefined1 (*) [16])(unaff_x21 + 2) = auVar12;
      thunk_FUN_01f51358(unaff_x21 + 2,0);
    }
    else {
      lVar4 = *(long *)(unaff_x21 + 6);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar4 + 0x18) <= iVar3 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      pauVar9 = (undefined1 (*) [16])(lVar4 + (long)(int)(iVar3 - 1U) * 0x10 + 0x20);
      *pauVar9 = auVar12;
      thunk_FUN_01f51358(pauVar9,0);
    }
    iVar3 = iVar3 + 1;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02f0c110;
    }
  }
LAB_02f0c0f4:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_02f0c110:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


