/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.BoneCapsule>
ENTRY_POINT: 03f1eafc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array__InternalArray__ICollection_Add<OVRPlugin_BoneCapsule>(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long unaff_x19;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x24;
  uint uVar14;
  undefined8 uStack0000000000000008;
  
  plVar1 = (long *)(unaff_x24 + 0x440);
  uStack0000000000000008 = 0;
  lVar3 = *plVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar3 = *plVar1;
  }
  lVar7 = *(long *)(lVar3 + 0xb8);
  if (*(int *)(lVar7 + 0x34) < 1) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *plVar1;
      lVar7 = *(long *)(lVar3 + 0xb8);
    }
    iVar9 = *(int *)(lVar7 + 8);
    if (iVar9 + -1 <= *(int *)(lVar7 + 0x3c)) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar7 = *(long *)(*plVar1 + 0xb8);
        iVar9 = *(int *)(lVar7 + 8);
      }
      uStack0000000000000008 = CONCAT44(iVar9,*(undefined4 *)(lVar7 + 0xc));
      FUN_0380509c(1,0);
      if (DAT_07ed7b6f == '\0') {
        FUN_03642964(&DAT_07b67068);
        DAT_07ed7b6f = '\x01';
      }
      if (0 < **(int **)(DAT_07b67068 + 0xb8)) {
        uVar12 = FUN_05e14f10((undefined1 *)((long)register0x00000008 + 0xc),0);
        uVar5 = FUN_05e14f10(&stack0x00000008,0);
        puVar2 = PTR_DAT_079f85d0;
        uVar12 = FUN_05c981c8(uVar12,*(undefined8 *)PTR_DAT_079f85d0,uVar5,0);
        if (DAT_07bd8248 == 0) {
LAB_03f1f004:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar3 = FUN_05c9a0b4(DAT_07bd8248,*(undefined8 *)PTR_DAT_079fa858,uVar12,0);
        lVar7 = *plVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978(lVar7);
          lVar7 = *plVar1;
        }
        uVar12 = FUN_05e14f10(*(long *)(lVar7 + 0xb8) + 8,0);
        uVar5 = FUN_05e14f10(*(long *)(*plVar1 + 0xb8) + 0xc,0);
        uVar12 = FUN_05c981c8(uVar12,*(undefined8 *)puVar2,uVar5,0);
        if (lVar3 == 0) goto LAB_03f1f004;
        uVar12 = FUN_05c9a0b4(lVar3,*(undefined8 *)PTR_DAT_079fa850,uVar12,0);
        FUN_038019e8(uVar12,0,0);
      }
    }
LAB_03f1ee44:
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    plVar13 = (long *)thunk_FUN_0367fe20();
    FUN_0502fbac(plVar13,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
    lVar3 = *plVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *plVar1;
    }
    *(int *)(*(long *)(lVar3 + 0xb8) + 0x3c) = *(int *)(*(long *)(lVar3 + 0xb8) + 0x3c) + 1;
    FUN_03804dc8(plVar13,0);
  }
  else {
    uVar12 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_07ef5fb8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar3 = FUN_05e26f18(uVar12,0);
    lVar7 = FUN_05e26f18(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),0);
    lVar4 = FUN_05e26f18(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10),0);
    lVar8 = *plVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar8);
      lVar8 = *plVar1;
    }
    uVar14 = *(uint *)(*(long *)(lVar8 + 0xb8) + 0x84);
    while( true ) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_036a1978(lVar8);
        lVar8 = *plVar1;
      }
      lVar11 = *(long *)(lVar8 + 0xb8);
      if ((int)uVar14 <= *(int *)(lVar11 + 0x80) + -1) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_036a1978(lVar8);
          lVar8 = *plVar1;
          lVar11 = *(long *)(lVar8 + 0xb8);
        }
        if (*(int *)(lVar11 + 0x3c) < *(int *)(lVar11 + 8)) goto LAB_03f1ee44;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_036a1978(lVar8);
          lVar11 = *(long *)(*plVar1 + 0xb8);
        }
        lVar3 = *(long *)(lVar11 + 0x50);
        if (lVar3 == 0) goto LAB_03f1f004;
        if (*(uint *)(lVar3 + 0x18) <= *(uint *)(lVar11 + 0x84)) goto LAB_03f1f008;
        puVar6 = (undefined8 *)(lVar3 + (long)(int)*(uint *)(lVar11 + 0x84) * 8 + 0x20);
        *puVar6 = 0;
        thunk_FUN_036b7ad0(puVar6,0);
        lVar3 = *(long *)(*plVar1 + 0xb8);
        *(int *)(lVar3 + 0x84) = *(int *)(lVar3 + 0x84) + -1;
        *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
        *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + -1;
        goto LAB_03f1ee44;
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_036a1978(lVar8);
        lVar8 = *plVar1;
        lVar11 = *(long *)(lVar8 + 0xb8);
      }
      lVar11 = *(long *)(lVar11 + 0x50);
      if (lVar11 == 0) goto LAB_03f1f004;
      if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_03f1f008;
      plVar13 = *(long **)(lVar11 + (long)(int)uVar14 * 8 + 0x20);
      if ((((plVar13 != (long *)0x0) && (plVar13[0x1a] == lVar3)) && (plVar13[0x1b] == lVar7)) &&
         (plVar13[0x1c] == lVar4)) break;
      uVar14 = uVar14 - 1;
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar13);
    }
    if (*(int *)(*plVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_03804dc8(plVar13,0);
    lVar3 = *(long *)(*(long *)(*plVar1 + 0xb8) + 0x50);
    if (lVar3 == 0) goto LAB_03f1f004;
    if (*(uint *)(lVar3 + 0x18) <= uVar14) {
LAB_03f1f008:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    puVar6 = (undefined8 *)(lVar3 + (long)(int)uVar14 * 8 + 0x20);
    *puVar6 = 0;
    thunk_FUN_036b7ad0(puVar6,0);
    lVar3 = *plVar1;
    lVar7 = *(long *)(lVar3 + 0xb8);
    uVar10 = *(uint *)(lVar7 + 0x84);
    if (uVar10 != *(uint *)(lVar7 + 0x80)) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar3 = *plVar1;
        lVar7 = *(long *)(lVar3 + 0xb8);
        uVar10 = *(uint *)(lVar7 + 0x84);
      }
      if (uVar10 == uVar14) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar3 = *plVar1;
          lVar7 = *(long *)(lVar3 + 0xb8);
          uVar14 = *(uint *)(lVar7 + 0x84);
        }
        *(uint *)(lVar7 + 0x84) = uVar14 - 1;
      }
      else {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar3 = *plVar1;
          lVar7 = *(long *)(lVar3 + 0xb8);
        }
        if (*(uint *)(lVar7 + 0x80) == uVar14) {
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar3 = *plVar1;
            lVar7 = *(long *)(lVar3 + 0xb8);
            uVar14 = *(uint *)(lVar7 + 0x80);
          }
          *(uint *)(lVar7 + 0x80) = uVar14 + 1;
        }
      }
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *plVar1;
    }
    *(int *)(*(long *)(lVar3 + 0xb8) + 0x34) = *(int *)(*(long *)(lVar3 + 0xb8) + 0x34) + -1;
  }
  return plVar13;
}


