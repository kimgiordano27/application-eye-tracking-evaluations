/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03f1ec1c
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


long * System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  uint unaff_w25;
  long unaff_x26;
  
  do {
    if ((in_x9 == unaff_x22) && (unaff_x20[0x1c] == unaff_x23)) {
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc(lVar5);
      }
      if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(unaff_x20);
      }
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_03804dc8(unaff_x20,0);
      lVar5 = *(long *)(*(long *)(*unaff_x24 + 0xb8) + 0x50);
      if (lVar5 == 0) {
LAB_03f1f004:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (unaff_w25 < *(uint *)(lVar5 + 0x18)) {
        puVar1 = (undefined8 *)(lVar5 + unaff_x26 * 8 + 0x20);
        *puVar1 = 0;
        thunk_FUN_036b7ad0(puVar1,0);
        lVar5 = *unaff_x24;
        lVar3 = *(long *)(lVar5 + 0xb8);
        uVar4 = *(uint *)(lVar3 + 0x84);
        if (uVar4 != *(uint *)(lVar3 + 0x80)) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar5 = *unaff_x24;
            lVar3 = *(long *)(lVar5 + 0xb8);
            uVar4 = *(uint *)(lVar3 + 0x84);
          }
          if (uVar4 == unaff_w25) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              lVar5 = *unaff_x24;
              lVar3 = *(long *)(lVar5 + 0xb8);
              unaff_w25 = *(uint *)(lVar3 + 0x84);
            }
            *(uint *)(lVar3 + 0x84) = unaff_w25 - 1;
          }
          else {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              lVar5 = *unaff_x24;
              lVar3 = *(long *)(lVar5 + 0xb8);
            }
            if (*(uint *)(lVar3 + 0x80) == unaff_w25) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_036a1978();
                lVar5 = *unaff_x24;
                lVar3 = *(long *)(lVar5 + 0xb8);
                unaff_w25 = *(uint *)(lVar3 + 0x80);
              }
              *(uint *)(lVar3 + 0x80) = unaff_w25 + 1;
            }
          }
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar5 = *unaff_x24;
        }
        *(int *)(*(long *)(lVar5 + 0xb8) + 0x34) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x34) + -1;
        return unaff_x20;
      }
LAB_03f1f008:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    do {
      unaff_w25 = unaff_w25 - 1;
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_036a1978(param_1);
        param_1 = *unaff_x24;
      }
      lVar5 = *(long *)(param_1 + 0xb8);
      if ((int)unaff_w25 <= *(int *)(lVar5 + 0x80) + -1) {
        if (*(int *)(param_1 + 0xe4) == 0) {
          thunk_FUN_036a1978(param_1);
          param_1 = *unaff_x24;
          lVar5 = *(long *)(param_1 + 0xb8);
        }
        if (*(int *)(lVar5 + 8) <= *(int *)(lVar5 + 0x3c)) {
          if (*(int *)(param_1 + 0xe4) == 0) {
            thunk_FUN_036a1978(param_1);
            lVar5 = *(long *)(*unaff_x24 + 0xb8);
          }
          lVar3 = *(long *)(lVar5 + 0x50);
          if (lVar3 == 0) goto LAB_03f1f004;
          if (*(uint *)(lVar3 + 0x18) <= *(uint *)(lVar5 + 0x84)) goto LAB_03f1f008;
          puVar1 = (undefined8 *)(lVar3 + (long)(int)*(uint *)(lVar5 + 0x84) * 8 + 0x20);
          *puVar1 = 0;
          thunk_FUN_036b7ad0(puVar1,0);
          lVar5 = *(long *)(*unaff_x24 + 0xb8);
          *(int *)(lVar5 + 0x84) = *(int *)(lVar5 + 0x84) + -1;
          *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + -1;
          *(int *)(lVar5 + 0x3c) = *(int *)(lVar5 + 0x3c) + -1;
        }
        if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x18) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        plVar2 = (long *)thunk_FUN_0367fe20();
        FUN_0502fbac(plVar2,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
        lVar5 = *unaff_x24;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar5 = *unaff_x24;
        }
        *(int *)(*(long *)(lVar5 + 0xb8) + 0x3c) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x3c) + 1;
        FUN_03804dc8(plVar2,0);
        return plVar2;
      }
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_036a1978(param_1);
        param_1 = *unaff_x24;
        lVar5 = *(long *)(param_1 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x50);
      if (lVar5 == 0) goto LAB_03f1f004;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w25) goto LAB_03f1f008;
      unaff_x26 = (long)(int)unaff_w25;
      unaff_x20 = *(long **)(lVar5 + unaff_x26 * 8 + 0x20);
    } while ((unaff_x20 == (long *)0x0) || (unaff_x20[0x1a] != unaff_x21));
    in_x9 = unaff_x20[0x1b];
  } while( true );
}


