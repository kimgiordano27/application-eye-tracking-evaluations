/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 0426cbc0
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


bool System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current(void)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  int unaff_w24;
  
                    /* catch() { ... } // from try @ 0426c98c with catch @ 0426cbc4
                       catch() { ... } // from try @ 0426cb68 with catch @ 0426cbc4
                       catch() { ... } // from try @ 0426cb9c with catch @ 0426cbc4 */
                    /* try { // try from 0426cbc8 to 0436cd27 has its CatchHandler @ 0426cbc8
                       catch() { ... } // from try @ 0426cbc8 with catch @ 0426cbc8
                       catch() { ... } // from try @ 0426cf0c with catch @ 0426cbc8
                       catch() { ... } // from try @ 0426cf60 with catch @ 0426cbc8
                       catch() { ... } // from try @ 0426d048 with catch @ 0426cbc8
                       catch() { ... } // from try @ 0426d120 with catch @ 0426cbc8
                       catch() { ... } // from try @ 0426d18c with catch @ 0426cbc8
                       catch() { ... } // from try @ 0426d214 with catch @ 0426cbc8
                       catch() { ... } // from try @ 0426d240 with catch @ 0426cbc8 */
  puVar3 = (undefined8 *)thunk_FUN_036a1ed0();
  plVar12 = (long *)*puVar3;
  if (plVar12 == (long *)0x0) {
LAB_0426ce7c:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  uVar5 = thunk_FUN_036a1ed0();
  lVar8 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0426cc8c;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30(plVar12,lVar4,0);
LAB_0426cc8c:
  iVar2 = (*(code *)*puVar3)(plVar12,uVar5,puVar3[1]);
  uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
  if (unaff_w24 < iVar2) {
    if ((uVar1 & 1) == 0) {
      FUN_0367c9fc();
    }
    puVar3 = (undefined8 *)thunk_FUN_036a1ed0();
    plVar12 = (long *)*puVar3;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    puVar6 = (uint *)thunk_FUN_036a1ed0();
    if (plVar12 == (long *)0x0) goto LAB_0426ce7c;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar9 = (ulong)*puVar6;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar4) goto LAB_0426ce40;
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
  }
  else {
    if ((uVar1 & 1) == 0) {
      FUN_0367c9fc();
    }
    puVar3 = (undefined8 *)thunk_FUN_036a1ed0();
    plVar12 = (long *)*puVar3;
    if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    puVar7 = (ulong *)thunk_FUN_036a1ed0();
    if (plVar12 == (long *)0x0) goto LAB_0426ce7c;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar9 = *puVar7;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar4) goto LAB_0426ce40;
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_0367cd30(plVar12,lVar4,3);
  goto LAB_0426ce50;
LAB_0426ce40:
  puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
LAB_0426ce50:
  (*(code *)*puVar3)(plVar12,uVar9,puVar3[1]);
  return unaff_w24 < iVar2;
}


