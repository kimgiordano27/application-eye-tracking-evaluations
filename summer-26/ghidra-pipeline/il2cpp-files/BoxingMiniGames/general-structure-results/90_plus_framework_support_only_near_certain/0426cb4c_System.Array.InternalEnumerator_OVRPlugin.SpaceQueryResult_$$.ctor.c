/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 0426cb4c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>___ctor(long param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x19;
  long *plVar13;
  
                    /* catch() { ... } // from try @ 0426ca54 with catch @ 0426cb4c */
                    /* catch() { ... } // from try @ 0426ca98 with catch @ 0426cb50
                       catch() { ... } // from try @ 0426cb40 with catch @ 0426cb50 */
                    /* catch() { ... } // from try @ 0426ca80 with catch @ 0426cb54
                       catch() { ... } // from try @ 0426cb28 with catch @ 0426cb54 */
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 0426ca60 with catch @ 0426cb58
                       catch() { ... } // from try @ 0426cb10 with catch @ 0426cb58 */
    FUN_0367c9fc();
  }
                    /* catch() { ... } // from try @ 0426ca20 with catch @ 0426cb60
                       catch() { ... } // from try @ 0426cad4 with catch @ 0426cb60 */
                    /* try { // try from 0426cb68 to 0436cb6b has its CatchHandler @ 0426cbc4 */
  FUN_0315dc8c();
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  piVar4 = (int *)thunk_FUN_036a1ed0();
  iVar1 = *piVar4;
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  puVar5 = (undefined8 *)thunk_FUN_036a1ed0();
  plVar13 = (long *)*puVar5;
  if (plVar13 == (long *)0x0) {
LAB_0426ce7c:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  uVar7 = thunk_FUN_036a1ed0();
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar4 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == lVar6) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0426cc8c;
      }
      uVar11 = uVar11 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_0367cd30(plVar13,lVar6,0);
LAB_0426cc8c:
  iVar3 = (*(code *)*puVar5)(plVar13,uVar7,puVar5[1]);
  uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
  if (iVar1 < iVar3) {
    if ((uVar2 & 1) == 0) {
      FUN_0367c9fc();
    }
    puVar5 = (undefined8 *)thunk_FUN_036a1ed0();
    plVar13 = (long *)*puVar5;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    puVar8 = (uint *)thunk_FUN_036a1ed0();
    if (plVar13 == (long *)0x0) goto LAB_0426ce7c;
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar11 = (ulong)*puVar8;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    lVar6 = **(long **)(lVar6 + 0xc0);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    lVar10 = *plVar13;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar4 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar6) goto LAB_0426ce40;
        uVar12 = uVar12 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar12 != 0);
    }
  }
  else {
    if ((uVar2 & 1) == 0) {
      FUN_0367c9fc();
    }
    puVar5 = (undefined8 *)thunk_FUN_036a1ed0();
    plVar13 = (long *)*puVar5;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    puVar9 = (ulong *)thunk_FUN_036a1ed0();
    if (plVar13 == (long *)0x0) goto LAB_0426ce7c;
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar11 = *puVar9;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    lVar6 = **(long **)(lVar6 + 0xc0);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    lVar10 = *plVar13;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar4 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar6) goto LAB_0426ce40;
        uVar12 = uVar12 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar12 != 0);
    }
  }
  puVar5 = (undefined8 *)FUN_0367cd30(plVar13,lVar6,3);
LAB_0426ce50:
  (*(code *)*puVar5)(plVar13,uVar11,puVar5[1]);
  return iVar1 < iVar3;
LAB_0426ce40:
  puVar5 = (undefined8 *)(lVar10 + (long)(*piVar4 + 3) * 0x10 + 0x138);
  goto LAB_0426ce50;
}


