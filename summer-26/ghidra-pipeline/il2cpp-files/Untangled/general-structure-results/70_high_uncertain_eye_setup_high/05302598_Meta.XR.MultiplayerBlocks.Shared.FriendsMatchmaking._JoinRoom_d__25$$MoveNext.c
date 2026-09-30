/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.FriendsMatchmaking.<JoinRoom>d__25$$MoveNext
ENTRY_POINT: 05302598
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_FriendsMatchmaking_<JoinRoom>d__25__MoveNext(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 in_stack_00000018;
  
  if ((*(byte *)(unaff_x20 + 0x290) & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3e1e0);
    FUN_02f07e70(PTR_DAT_06d0bc68);
    FUN_02f07e70(PTR_DAT_06d028f0);
    *(undefined1 *)(unaff_x20 + 0x290) = 1;
  }
  in_stack_00000018 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d0bc68);
    FUN_05fa2fa8(lVar2,0);
    plVar8 = (long *)(param_1 + 0x30);
    *plVar8 = lVar2;
    thunk_FUN_02f411dc(plVar8,lVar2);
    if (*plVar8 == 0) goto LAB_053028c8;
    FUN_05fa2fb0(*plVar8,0);
  }
  if (lVar7 == 0) goto LAB_053028c8;
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_05302850;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_053028c8;
  dVar10 = (double)NEON_ucvtf((ulong)*(uint *)(lVar7 + 0x54));
  dVar10 = 1.0 / dVar10;
  in_stack_00000018 = FUN_05fa3018(*(long *)(param_1 + 0x30),0);
  puVar1 = PTR_DAT_06d028f0;
  if (*(int *)(*(long *)PTR_DAT_06d028f0 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d028f0);
  }
  dVar11 = (double)FUN_056189d0(&stack0x00000018,0);
  dVar12 = *(double *)(param_1 + 0x28);
  if (dVar10 <= dVar11 + dVar12) {
    if (*(long *)(param_1 + 0x30) == 0) {
LAB_053028c8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    in_stack_00000018 = FUN_05fa3018(*(long *)(param_1 + 0x30),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*(long *)puVar1);
    }
    dVar11 = (double)FUN_056189d0(&stack0x00000018,0);
    dVar10 = fmod((dVar12 + dVar11) - dVar10,dVar10);
    *(double *)(param_1 + 0x28) = dVar10;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_053028c8;
    FUN_05fa3350(*(long *)(param_1 + 0x30),0);
    if ((*(int *)(lVar7 + 0xa0) != 0) || (*(char *)(lVar7 + 0xa4) != '\0')) {
      plVar8 = *(long **)(lVar7 + 0x10);
      *(undefined1 *)(lVar7 + 0x68) = 1;
      if (plVar8 != (long *)0x0) {
        lVar2 = *plVar8;
        uVar9 = *(undefined8 *)(lVar7 + 0x40);
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06d3e1e0) {
              puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_053027d8;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02eea86c(plVar8,*(long *)PTR_DAT_06d3e1e0,1);
LAB_053027d8:
        (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
        goto LAB_05302850;
      }
      goto LAB_053028c8;
    }
    plVar8 = *(long **)(lVar7 + 0x10);
    *(undefined1 *)(lVar7 + 0x68) = 0;
    if (plVar8 == (long *)0x0) goto LAB_053028c8;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    lVar2 = *(long *)PTR_DAT_06d3e1e0;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) goto LAB_05302834;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    plVar8 = *(long **)(lVar7 + 0x10);
    *(undefined1 *)(lVar7 + 0x68) = 0;
    if (plVar8 == (long *)0x0) goto LAB_053028c8;
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    lVar2 = *(long *)PTR_DAT_06d3e1e0;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) goto LAB_05302834;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar8,lVar2,2);
LAB_05302844:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
LAB_05302850:
  if (*(int *)(lVar7 + 0xa0) == 2) {
    if (*(char *)(lVar7 + 0x38) != '\0') {
      *(undefined1 *)(lVar7 + 0x38) = 0;
      *(undefined4 *)(lVar7 + 0xa0) = 3;
      FUN_05301348(lVar7);
    }
  }
  else if ((*(int *)(lVar7 + 0xa0) == 0) && (*(char *)(lVar7 + 0x31) != '\0')) {
    *(undefined1 *)(lVar7 + 0x31) = 0;
    *(undefined4 *)(lVar7 + 0xa0) = 1;
    FUN_0530083c(lVar7);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
LAB_05302834:
  puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
  goto LAB_05302844;
}


