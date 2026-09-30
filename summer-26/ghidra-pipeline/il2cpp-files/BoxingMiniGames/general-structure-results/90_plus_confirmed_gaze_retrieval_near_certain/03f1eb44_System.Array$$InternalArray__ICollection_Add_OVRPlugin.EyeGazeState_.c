/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03f1eb44
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


long * System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x24;
  uint uVar9;
  
  thunk_FUN_036a1978();
  lVar1 = FUN_05e26f18();
  lVar2 = FUN_05e26f18(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),0);
  lVar3 = FUN_05e26f18(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10),0);
  lVar5 = *unaff_x24;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978(lVar5);
    lVar5 = *unaff_x24;
  }
  uVar9 = *(uint *)(*(long *)(lVar5 + 0xb8) + 0x84);
  while( true ) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar5);
      lVar5 = *unaff_x24;
    }
    lVar7 = *(long *)(lVar5 + 0xb8);
    if ((int)uVar9 <= *(int *)(lVar7 + 0x80) + -1) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978(lVar5);
        lVar5 = *unaff_x24;
        lVar7 = *(long *)(lVar5 + 0xb8);
      }
      if (*(int *)(lVar7 + 8) <= *(int *)(lVar7 + 0x3c)) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_036a1978(lVar5);
          lVar7 = *(long *)(*unaff_x24 + 0xb8);
        }
        lVar1 = *(long *)(lVar7 + 0x50);
        if (lVar1 == 0) goto LAB_03f1f004;
        if (*(uint *)(lVar1 + 0x18) <= *(uint *)(lVar7 + 0x84)) goto LAB_03f1f008;
        puVar4 = (undefined8 *)(lVar1 + (long)(int)*(uint *)(lVar7 + 0x84) * 8 + 0x20);
        *puVar4 = 0;
        thunk_FUN_036b7ad0(puVar4,0);
        lVar1 = *(long *)(*unaff_x24 + 0xb8);
        *(int *)(lVar1 + 0x84) = *(int *)(lVar1 + 0x84) + -1;
        *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
        *(int *)(lVar1 + 0x3c) = *(int *)(lVar1 + 0x3c) + -1;
      }
      if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      plVar8 = (long *)thunk_FUN_0367fe20();
      FUN_0502fbac(plVar8,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
      lVar1 = *unaff_x24;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar1 = *unaff_x24;
      }
      *(int *)(*(long *)(lVar1 + 0xb8) + 0x3c) = *(int *)(*(long *)(lVar1 + 0xb8) + 0x3c) + 1;
      FUN_03804dc8(plVar8,0);
      return plVar8;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar5);
      lVar5 = *unaff_x24;
      lVar7 = *(long *)(lVar5 + 0xb8);
    }
    lVar7 = *(long *)(lVar7 + 0x50);
    if (lVar7 == 0) goto LAB_03f1f004;
    if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_03f1f008;
    plVar8 = *(long **)(lVar7 + (long)(int)uVar9 * 8 + 0x20);
    if ((((plVar8 != (long *)0x0) && (plVar8[0x1a] == lVar1)) && (plVar8[0x1b] == lVar2)) &&
       (plVar8[0x1c] == lVar3)) break;
    uVar9 = uVar9 - 1;
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc(lVar1);
  }
  if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
     (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_03643084(plVar8);
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_03804dc8(plVar8,0);
  lVar1 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x50);
  if (lVar1 == 0) {
LAB_03f1f004:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (uVar9 < *(uint *)(lVar1 + 0x18)) {
    puVar4 = (undefined8 *)(lVar1 + (long)(int)uVar9 * 8 + 0x20);
    *puVar4 = 0;
    thunk_FUN_036b7ad0(puVar4,0);
    lVar1 = *unaff_x24;
    lVar2 = *(long *)(lVar1 + 0xb8);
    uVar6 = *(uint *)(lVar2 + 0x84);
    if (uVar6 != *(uint *)(lVar2 + 0x80)) {
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar1 = *unaff_x24;
        lVar2 = *(long *)(lVar1 + 0xb8);
        uVar6 = *(uint *)(lVar2 + 0x84);
      }
      if (uVar6 == uVar9) {
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar1 = *unaff_x24;
          lVar2 = *(long *)(lVar1 + 0xb8);
          uVar9 = *(uint *)(lVar2 + 0x84);
        }
        *(uint *)(lVar2 + 0x84) = uVar9 - 1;
      }
      else {
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar1 = *unaff_x24;
          lVar2 = *(long *)(lVar1 + 0xb8);
        }
        if (*(uint *)(lVar2 + 0x80) == uVar9) {
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar1 = *unaff_x24;
            lVar2 = *(long *)(lVar1 + 0xb8);
            uVar9 = *(uint *)(lVar2 + 0x80);
          }
          *(uint *)(lVar2 + 0x80) = uVar9 + 1;
        }
      }
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar1 = *unaff_x24;
    }
    *(int *)(*(long *)(lVar1 + 0xb8) + 0x34) = *(int *)(*(long *)(lVar1 + 0xb8) + 0x34) + -1;
    return plVar8;
  }
LAB_03f1f008:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


