/*
FUNCTION_NAME: UnityEngine.ParticleSystem.EmissionModule$$set_rateOverTimeMultiplier
ENTRY_POINT: 03fb9ee4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 130
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_ParticleSystem_EmissionModule__set_rateOverTimeMultiplier(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar11;
  
  puVar4 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_2__;
  puVar2 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (0 < param_1) {
    iVar11 = 0;
    do {
      if (((unaff_x20[0x13] == 0) ||
          (FUN_0265d74c(unaff_x20[0x13],iVar11,*(undefined8 *)puVar3), unaff_x19 == 0)) ||
         (plVar6 = (long *)FUN_023351b4(), plVar6 == (long *)0x0)) {
LAB_03fba188:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_03fb9f98;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,9);
LAB_03fb9f98:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar6 == (long *)0x0) goto LAB_03fba188;
LAB_03fb9fac:
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03fb9ff8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_03fb9ff8:
      uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar9 & 1) != 0) {
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03fba054;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_03fba054:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (unaff_x21 == 0) goto LAB_03fba188;
        uVar9 = FUN_03aafa44();
        if ((uVar9 & 1) == 0) {
          lVar8 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03fba0c4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_03fba0c4:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
          lVar8 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_03fba124;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,1);
LAB_03fba124:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
          FUN_03aaf810();
        }
        goto LAB_03fb9fac;
      }
      iVar11 = iVar11 + 1;
      iVar5 = (**(code **)(*unaff_x20 + 0x618))();
    } while (iVar11 < iVar5);
  }
  return;
}


