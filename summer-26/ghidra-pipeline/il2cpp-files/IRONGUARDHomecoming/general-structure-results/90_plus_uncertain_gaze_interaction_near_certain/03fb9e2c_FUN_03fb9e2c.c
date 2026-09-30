/*
FUNCTION_NAME: FUN_03fb9e2c
ENTRY_POINT: 03fb9e2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 166
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


long FUN_03fb9e2c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  
  puVar1 = PTR_DAT_0457be38;
  if ((DAT_0483b883 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0457be38);
    thunk_FUN_01efb3a4(PTR_DAT_045833f0);
    thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04583448);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_2__
                      );
    DAT_0483b883 = 1;
  }
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_03ec8b04(lVar8,0);
  iVar6 = (**(code **)(*param_1 + 0x618))(param_1,*(undefined8 *)(*param_1 + 0x620));
  puVar5 = PTR_DAT_045833f0;
  puVar4 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_2__;
  puVar2 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (0 < iVar6) {
    iVar6 = 0;
    do {
      if (((param_1[0x13] == 0) ||
          (uVar9 = FUN_0265d74c(param_1[0x13],iVar6,*(undefined8 *)puVar3), param_2 == 0)) ||
         (plVar10 = (long *)FUN_023351b4(param_2,uVar9,*(undefined8 *)puVar5),
         plVar10 == (long *)0x0)) {
LAB_03fba188:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 9) * 0x10 + 0x138);
            goto LAB_03fb9f98;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,9);
LAB_03fb9f98:
      plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if (plVar10 == (long *)0x0) goto LAB_03fba188;
LAB_03fb9fac:
      lVar13 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03fb9ff8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_03fb9ff8:
      uVar14 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar14 & 1) != 0) {
        lVar13 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03fba054;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_03fba054:
        uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (lVar8 == 0) goto LAB_03fba188;
        uVar14 = FUN_03aafa44(lVar8,uVar9,0);
        if ((uVar14 & 1) == 0) {
          lVar13 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_03fba0c4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_03fba0c4:
          uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          lVar13 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_03fba124;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,1);
LAB_03fba124:
          uVar12 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          FUN_03aaf810(lVar8,uVar9,uVar12,0);
        }
        goto LAB_03fb9fac;
      }
      iVar6 = iVar6 + 1;
      iVar7 = (**(code **)(*param_1 + 0x618))(param_1,*(undefined8 *)(*param_1 + 0x620));
    } while (iVar6 < iVar7);
  }
  return lVar8;
}


