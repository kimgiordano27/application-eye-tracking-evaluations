/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.RoomFace>
ENTRY_POINT: 03f1ebd4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array__InternalArray__ICollection_Add<OVRPlugin_RoomFace>(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long in_x9;
  long lVar4;
  int in_w10;
  long unaff_x19;
  long *plVar5;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  uint unaff_w25;
  
  do {
    if (in_w10 == 0) {
      thunk_FUN_036a1978(param_1);
      param_1 = *unaff_x24;
      in_x9 = *(long *)(param_1 + 0xb8);
    }
    lVar4 = *(long *)(in_x9 + 0x50);
    if (lVar4 == 0) goto LAB_03f1f004;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w25) goto LAB_03f1f008;
    plVar5 = *(long **)(lVar4 + (long)(int)unaff_w25 * 8 + 0x20);
    if ((((plVar5 != (long *)0x0) && (plVar5[0x1a] == unaff_x21)) && (plVar5[0x1b] == unaff_x22)) &&
       (plVar5[0x1c] == unaff_x23)) {
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar5);
      }
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_03804dc8(plVar5,0);
      lVar4 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x50);
      if (lVar4 == 0) goto LAB_03f1f004;
      if (unaff_w25 < *(uint *)(lVar4 + 0x18)) {
        puVar1 = (undefined8 *)(lVar4 + (long)(int)unaff_w25 * 8 + 0x20);
        *puVar1 = 0;
        thunk_FUN_036b7ad0(puVar1,0);
        lVar4 = *unaff_x24;
        lVar2 = *(long *)(lVar4 + 0xb8);
        uVar3 = *(uint *)(lVar2 + 0x84);
        if (uVar3 != *(uint *)(lVar2 + 0x80)) {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar4 = *unaff_x24;
            lVar2 = *(long *)(lVar4 + 0xb8);
            uVar3 = *(uint *)(lVar2 + 0x84);
          }
          if (uVar3 == unaff_w25) {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              lVar4 = *unaff_x24;
              lVar2 = *(long *)(lVar4 + 0xb8);
              unaff_w25 = *(uint *)(lVar2 + 0x84);
            }
            *(uint *)(lVar2 + 0x84) = unaff_w25 - 1;
          }
          else {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              lVar4 = *unaff_x24;
              lVar2 = *(long *)(lVar4 + 0xb8);
            }
            if (*(uint *)(lVar2 + 0x80) == unaff_w25) {
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_036a1978();
                lVar4 = *unaff_x24;
                lVar2 = *(long *)(lVar4 + 0xb8);
                unaff_w25 = *(uint *)(lVar2 + 0x80);
              }
              *(uint *)(lVar2 + 0x80) = unaff_w25 + 1;
            }
          }
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar4 = *unaff_x24;
        }
        *(int *)(*(long *)(lVar4 + 0xb8) + 0x34) = *(int *)(*(long *)(lVar4 + 0xb8) + 0x34) + -1;
        return plVar5;
      }
      goto LAB_03f1f008;
    }
    unaff_w25 = unaff_w25 - 1;
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_036a1978(param_1);
      param_1 = *unaff_x24;
    }
    in_x9 = *(long *)(param_1 + 0xb8);
    in_w10 = *(int *)(param_1 + 0xe4);
  } while (*(int *)(in_x9 + 0x80) + -1 < (int)unaff_w25);
  if (in_w10 == 0) {
    thunk_FUN_036a1978(param_1);
    param_1 = *unaff_x24;
    in_x9 = *(long *)(param_1 + 0xb8);
  }
  if (*(int *)(in_x9 + 8) <= *(int *)(in_x9 + 0x3c)) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_036a1978(param_1);
      in_x9 = *(long *)(*unaff_x24 + 0xb8);
    }
    lVar4 = *(long *)(in_x9 + 0x50);
    if (lVar4 == 0) {
LAB_03f1f004:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(in_x9 + 0x84)) {
LAB_03f1f008:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    puVar1 = (undefined8 *)(lVar4 + (long)(int)*(uint *)(in_x9 + 0x84) * 8 + 0x20);
    *puVar1 = 0;
    thunk_FUN_036b7ad0(puVar1,0);
    lVar4 = *(long *)(*unaff_x24 + 0xb8);
    *(int *)(lVar4 + 0x84) = *(int *)(lVar4 + 0x84) + -1;
    *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + -1;
    *(int *)(lVar4 + 0x3c) = *(int *)(lVar4 + 0x3c) + -1;
  }
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  plVar5 = (long *)thunk_FUN_0367fe20();
  FUN_0502fbac(plVar5,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar4 = *unaff_x24;
  }
  *(int *)(*(long *)(lVar4 + 0xb8) + 0x3c) = *(int *)(*(long *)(lVar4 + 0xb8) + 0x3c) + 1;
  FUN_03804dc8(plVar5,0);
  return plVar5;
}


