/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Bone>
ENTRY_POINT: 03f1eab4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array__InternalArray__ICollection_Add<OVRPlugin_Bone>(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long unaff_x19;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  undefined8 in_stack_00000008;
  
  FUN_03642964();
  FUN_03642964(&DAT_07bc5358);
  FUN_03642964(&DAT_07bc7188);
  FUN_03642964(&DAT_07bc5340);
  FUN_03642964(&DAT_07bd8248);
  if (*(long *)(unaff_x19 + 0x38) == 0) {
    FUN_0367ca58();
  }
  in_stack_00000008 = 0;
  if (*(int *)(DAT_07b6f440 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar6 = *(long *)(DAT_07b6f440 + 0xb8);
  if (*(int *)(lVar6 + 0x34) < 1) {
    if (*(int *)(DAT_07b6f440 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar6 = *(long *)(DAT_07b6f440 + 0xb8);
    }
    iVar8 = *(int *)(lVar6 + 8);
    if (iVar8 + -1 <= *(int *)(lVar6 + 0x3c)) {
      if (*(int *)(DAT_07b6f440 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar6 = *(long *)(DAT_07b6f440 + 0xb8);
        iVar8 = *(int *)(lVar6 + 8);
      }
      in_stack_00000008 = CONCAT44(iVar8,*(undefined4 *)(lVar6 + 0xc));
      FUN_0380509c(1,0);
      if (DAT_07ed7b6f == '\0') {
        FUN_03642964(&DAT_07b67068);
        DAT_07ed7b6f = '\x01';
      }
      if (0 < **(int **)(DAT_07b67068 + 0xb8)) {
        uVar11 = FUN_05e14f10((long)&stack0x00000008 + 4,0);
        uVar4 = FUN_05e14f10(&stack0x00000008,0);
        puVar1 = PTR_DAT_079f85d0;
        uVar11 = FUN_05c981c8(uVar11,*(undefined8 *)PTR_DAT_079f85d0,uVar4,0);
        if (DAT_07bd8248 == 0) {
LAB_03f1f004:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar6 = FUN_05c9a0b4(DAT_07bd8248,*(undefined8 *)PTR_DAT_079fa858,uVar11,0);
        if (*(int *)(DAT_07b6f440 + 0xe4) == 0) {
          thunk_FUN_036a1978(DAT_07b6f440);
        }
        uVar11 = FUN_05e14f10(*(long *)(DAT_07b6f440 + 0xb8) + 8,0);
        uVar4 = FUN_05e14f10(*(long *)(DAT_07b6f440 + 0xb8) + 0xc,0);
        uVar11 = FUN_05c981c8(uVar11,*(undefined8 *)puVar1,uVar4,0);
        if (lVar6 == 0) goto LAB_03f1f004;
        uVar11 = FUN_05c9a0b4(lVar6,*(undefined8 *)PTR_DAT_079fa850,uVar11,0);
        FUN_038019e8(uVar11,0,0);
      }
    }
LAB_03f1ee44:
    if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    plVar12 = (long *)thunk_FUN_0367fe20();
    FUN_0502fbac(plVar12,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
    if (*(int *)(DAT_07b6f440 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    *(int *)(*(long *)(DAT_07b6f440 + 0xb8) + 0x3c) =
         *(int *)(*(long *)(DAT_07b6f440 + 0xb8) + 0x3c) + 1;
    FUN_03804dc8(plVar12,0);
  }
  else {
    uVar11 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(DAT_07ef5fb8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar6 = FUN_05e26f18(uVar11,0);
    lVar2 = FUN_05e26f18(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),0);
    lVar3 = FUN_05e26f18(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10),0);
    if (*(int *)(DAT_07b6f440 + 0xe4) == 0) {
      thunk_FUN_036a1978(DAT_07b6f440);
    }
    uVar13 = *(uint *)(*(long *)(DAT_07b6f440 + 0xb8) + 0x84);
    lVar7 = DAT_07b6f440;
    while( true ) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978(lVar7);
        lVar7 = DAT_07b6f440;
      }
      lVar10 = *(long *)(lVar7 + 0xb8);
      if ((int)uVar13 <= *(int *)(lVar10 + 0x80) + -1) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978(lVar7);
          lVar10 = *(long *)(DAT_07b6f440 + 0xb8);
          lVar7 = DAT_07b6f440;
        }
        if (*(int *)(lVar10 + 0x3c) < *(int *)(lVar10 + 8)) goto LAB_03f1ee44;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_036a1978(lVar7);
          lVar10 = *(long *)(DAT_07b6f440 + 0xb8);
        }
        lVar6 = *(long *)(lVar10 + 0x50);
        if (lVar6 == 0) goto LAB_03f1f004;
        if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar10 + 0x84)) goto LAB_03f1f008;
        puVar5 = (undefined8 *)(lVar6 + (long)(int)*(uint *)(lVar10 + 0x84) * 8 + 0x20);
        *puVar5 = 0;
        thunk_FUN_036b7ad0(puVar5,0);
        lVar6 = *(long *)(DAT_07b6f440 + 0xb8);
        *(int *)(lVar6 + 0x84) = *(int *)(lVar6 + 0x84) + -1;
        *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + -1;
        *(int *)(lVar6 + 0x3c) = *(int *)(lVar6 + 0x3c) + -1;
        goto LAB_03f1ee44;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978(lVar7);
        lVar10 = *(long *)(DAT_07b6f440 + 0xb8);
        lVar7 = DAT_07b6f440;
      }
      lVar10 = *(long *)(lVar10 + 0x50);
      if (lVar10 == 0) goto LAB_03f1f004;
      if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_03f1f008;
      plVar12 = *(long **)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
      if ((((plVar12 != (long *)0x0) && (plVar12[0x1a] == lVar6)) && (plVar12[0x1b] == lVar2)) &&
         (plVar12[0x1c] == lVar3)) break;
      uVar13 = uVar13 - 1;
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar12);
    }
    if (*(int *)(DAT_07b6f440 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_03804dc8(plVar12,0);
    lVar6 = *(long *)(*(long *)(DAT_07b6f440 + 0xb8) + 0x50);
    if (lVar6 == 0) goto LAB_03f1f004;
    if (*(uint *)(lVar6 + 0x18) <= uVar13) {
LAB_03f1f008:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar13 * 8 + 0x20);
    *puVar5 = 0;
    thunk_FUN_036b7ad0(puVar5,0);
    lVar2 = *(long *)(DAT_07b6f440 + 0xb8);
    uVar9 = *(uint *)(lVar2 + 0x84);
    lVar6 = DAT_07b6f440;
    if (uVar9 != *(uint *)(lVar2 + 0x80)) {
      if (*(int *)(DAT_07b6f440 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar2 = *(long *)(DAT_07b6f440 + 0xb8);
        uVar9 = *(uint *)(lVar2 + 0x84);
      }
      if (uVar9 == uVar13) {
        if (*(int *)(DAT_07b6f440 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar2 = *(long *)(DAT_07b6f440 + 0xb8);
          uVar13 = *(uint *)(lVar2 + 0x84);
        }
        lVar6 = DAT_07b6f440;
        *(uint *)(lVar2 + 0x84) = uVar13 - 1;
      }
      else {
        if (*(int *)(DAT_07b6f440 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar2 = *(long *)(DAT_07b6f440 + 0xb8);
        }
        lVar6 = DAT_07b6f440;
        if (*(uint *)(lVar2 + 0x80) == uVar13) {
          if (*(int *)(DAT_07b6f440 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar2 = *(long *)(DAT_07b6f440 + 0xb8);
            uVar13 = *(uint *)(lVar2 + 0x80);
          }
          lVar6 = DAT_07b6f440;
          *(uint *)(lVar2 + 0x80) = uVar13 + 1;
        }
      }
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar6 = DAT_07b6f440;
    }
    *(int *)(*(long *)(lVar6 + 0xb8) + 0x34) = *(int *)(*(long *)(lVar6 + 0xb8) + 0x34) + -1;
  }
  return plVar12;
}


