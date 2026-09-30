/*
FUNCTION_NAME: FUN_039158bc
ENTRY_POINT: 039158bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03915db4) */

long FUN_039158bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__;
  if ((DAT_0483823f & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_3470);
    thunk_FUN_01efb3a4(StringLiteral_3471);
    thunk_FUN_01efb3a4(StringLiteral_3472);
    thunk_FUN_01efb3a4(StringLiteral_3473);
    thunk_FUN_01efb3a4(StringLiteral_3474);
    thunk_FUN_01efb3a4(StringLiteral_3475);
    thunk_FUN_01efb3a4(StringLiteral_3476);
    thunk_FUN_01efb3a4(StringLiteral_3477);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3478);
    thunk_FUN_01efb3a4(StringLiteral_3479);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_3480);
    thunk_FUN_01efb3a4(StringLiteral_3481);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_3482);
    thunk_FUN_01efb3a4(StringLiteral_3483);
    thunk_FUN_01efb3a4(StringLiteral_3484);
    thunk_FUN_01efb3a4(StringLiteral_3485);
    thunk_FUN_01efb3a4(StringLiteral_3486);
    DAT_0483823f = 1;
  }
  puVar2 = StringLiteral_3486;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_0390c440(param_1,param_2);
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar11);
    lVar11 = *(long *)puVar2;
  }
  lVar13 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar13 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar11);
      lVar11 = *(long *)puVar2;
    }
    uVar14 = **(undefined8 **)(lVar11 + 0xb8);
    lVar13 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3478);
    FUN_02e6c748(lVar13,uVar14,*(undefined8 *)StringLiteral_3484,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar8 = lVar13;
    thunk_FUN_01f51358(plVar8,lVar13);
    lVar11 = *(long *)puVar2;
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar11);
    lVar11 = *(long *)puVar2;
  }
  puVar1 = StringLiteral_3473;
  lVar15 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if (lVar15 == 0) {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar11);
      lVar11 = *(long *)puVar2;
    }
    uVar14 = **(undefined8 **)(lVar11 + 0xb8);
    lVar15 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3479);
    FUN_02e6c748(lVar15,uVar14,*(undefined8 *)StringLiteral_3485,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar8 = lVar15;
    thunk_FUN_01f51358(plVar8,lVar15);
  }
  lVar11 = FUN_02308f34(uVar7,lVar13,lVar15,*(undefined8 *)puVar1);
  puVar1 = StringLiteral_3474;
  if (lVar11 != 0) {
    uVar7 = FUN_02b6b184(lVar11,*(undefined8 *)StringLiteral_3472);
    lVar13 = FUN_0230ab8c(uVar7,*(undefined8 *)puVar1);
    puVar6 = StringLiteral_3481;
    puVar5 = StringLiteral_3480;
    puVar4 = StringLiteral_3476;
    puVar3 = StringLiteral_3471;
    puVar2 = StringLiteral_3470;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (lVar13 != 0) {
      FUN_030f35d0(&local_98,lVar13,*(undefined8 *)StringLiteral_3482);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      do {
        do {
          uVar9 = FUN_02c7ab6c(&local_80,*(undefined8 *)puVar4);
          uVar7 = local_70;
          if ((uVar9 & 1) == 0) {
            FUN_02c7ab68(&local_80,*(undefined8 *)StringLiteral_3475);
            return lVar11;
          }
          plVar8 = (long *)FUN_0238ac20(local_70,*(undefined8 *)StringLiteral_3483);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar13 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03915c34;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar5,0);
LAB_03915c34:
          plVar8 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
LAB_03915c48:
          lVar13 = *plVar8;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03915c94;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03915c94:
          uVar9 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          if ((uVar9 & 1) != 0) {
            lVar13 = *plVar8;
            uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar9 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_03915cf0;
                }
                uVar9 = uVar9 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar6,0);
LAB_03915cf0:
            lVar13 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar14 = FUN_04083dcc(lVar13,0);
            uVar9 = FUN_02b6b4d8(lVar11,uVar14,*(undefined8 *)puVar3);
            if ((uVar9 & 1) == 0) {
              uVar14 = FUN_04083dcc(lVar13,0);
              FUN_02b6b2e4(lVar11,uVar14,uVar7,*(undefined8 *)puVar2);
            }
            goto LAB_03915c48;
          }
        } while (plVar8 == (long *)0x0);
        lVar13 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03915da4;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01ecb238(plVar8,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_03915da4:
        (*(code *)*puVar10)(plVar8,puVar10[1]);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


