/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.RoomFace>$$ToArray
ENTRY_POINT: 04cd4984
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined4 System_ReadOnlySpan<OVRPlugin_RoomFace>__ToArray(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long unaff_x22;
  long unaff_x29;
  
  uVar7 = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0xfc);
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
  piVar1 = (int *)thunk_FUN_036a1ed0();
  if (*piVar1 == 0) {
    FUN_0315dc8c(*(undefined8 *)(unaff_x29 + -0x10),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar2 = (undefined8 *)
             thunk_FUN_036a1ed0(*(undefined8 *)(unaff_x29 + -0x10),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20)
                                                     + 0xc0) + 0x80) + 0x60);
    plVar8 = (long *)*puVar2;
    if (plVar8 == (long *)0x0) {
      if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04cd4dc8;
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar1 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 04cd4a5c to 04dd4a6f has its CatchHandler @ 04cd4c0c */
        if (*(long *)(piVar1 + -2) == *(long *)PTR_DAT_079f49a0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar1 * 0x10 + 0x138);
          goto System_ReadOnlySpan<OVRPlugin_RoomFace>__get_Length;
        }
        uVar5 = uVar5 - 1;
        piVar1 = piVar1 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)PTR_DAT_079f49a0,0);
System_ReadOnlySpan<OVRPlugin_RoomFace>__get_Length:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    FUN_03159758(*(undefined8 *)(unaff_x29 + -0x10),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80
                          ) + 0xa0,uVar3);
    FUN_0315dc8c(*(undefined8 *)(unaff_x29 + -0x10),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    plVar8 = (long *)PTR_DAT_079f49a8;
LAB_04cd4ad8:
    do {
      puVar2 = (undefined8 *)
               thunk_FUN_036a1ed0(*(undefined8 *)(unaff_x29 + -0x10),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                 0x20) + 0xc0) + 0x80) + 0xa0);
      plVar9 = (long *)*puVar2;
      if (plVar9 == (long *)0x0) {
        if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_04cd4dc8;
      }
      lVar4 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar1 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar1 + -2) == *plVar8) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar1 * 0x10 + 0x138);
            goto FUN_04cd4b48;
          }
          uVar5 = uVar5 - 1;
          piVar1 = piVar1 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar9,*plVar8,0);
FUN_04cd4b48:
      uVar5 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        (*(code *)**(undefined8 **)
                    (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
                  (*(undefined8 *)(unaff_x29 + -0x10));
        FUN_03159758(*(undefined8 *)(unaff_x29 + -0x10),
                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                              0x80) + 0xa0,0);
        goto LAB_04cd4cc4;
      }
      puVar2 = (undefined8 *)
               thunk_FUN_036a1ed0(*(undefined8 *)(unaff_x29 + -0x10),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) +
                                                                 0x20) + 0xc0) + 0x80) + 0xa0);
      plVar9 = (long *)*puVar2;
      if (plVar9 == (long *)0x0) {
        if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_04cd4dc8;
      }
      lVar4 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar1 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar1 + -2) == *plVar8) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar1 + 1) * 0x10 + 0x138);
            goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor;
          }
          uVar5 = uVar5 - 1;
          piVar1 = piVar1 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar9,*plVar8,1);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor:
      uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      lVar4 = thunk_FUN_0367fd24(uVar3,lVar4);
    } while (lVar4 == 0);
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    uVar3 = FUN_03642af0(uVar3,lVar4,(long)&stack0x00000000 - (uVar7 + 0xf & 0x1fffffff0));
    FUN_03642988(*(undefined8 *)(unaff_x29 + -0x10),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80
                          ) + 0x20,uVar3,uVar7);
    uVar6 = 1;
    FUN_0315dc8c(*(undefined8 *)(unaff_x29 + -0x10),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),1);
  }
  else {
                    /* try { // try from 04cd49cc to 04dd4a5b has its CatchHandler @ 04cd49cc
                       catch() { ... } // from try @ 04cd49cc with catch @ 04cd49cc
                       catch() { ... } // from try @ 04cd4aa4 with catch @ 04cd49cc
                       catch() { ... } // from try @ 04cd4c04 with catch @ 04cd49cc
                       catch() { ... } // from try @ 04cd4c40 with catch @ 04cd49cc
                       catch() { ... } // from try @ 04cd4c90 with catch @ 04cd49cc */
    if (*piVar1 == 1) {
      FUN_0315dc8c(*(undefined8 *)(unaff_x29 + -0x10),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),
                   0xfffffffd);
      plVar8 = (long *)PTR_DAT_079f49a8;
      goto LAB_04cd4ad8;
    }
LAB_04cd4cc4:
    uVar6 = 0;
  }
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar6;
  }
LAB_04cd4dc8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


