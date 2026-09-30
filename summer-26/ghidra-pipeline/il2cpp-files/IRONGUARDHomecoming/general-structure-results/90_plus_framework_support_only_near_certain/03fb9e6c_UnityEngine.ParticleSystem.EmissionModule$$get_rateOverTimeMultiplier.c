/*
FUNCTION_NAME: UnityEngine.ParticleSystem.EmissionModule$$get_rateOverTimeMultiplier
ENTRY_POINT: 03fb9e6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 146
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


long UnityEngine_ParticleSystem_EmissionModule__get_rateOverTimeMultiplier(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  thunk_FUN_01efb3a4(PTR_DAT_045833f0);
  thunk_FUN_01efb3a4(Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(PTR_DAT_04583448);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_2__)
  ;
  *(undefined1 *)(unaff_x21 + 0x883) = 1;
  lVar7 = thunk_FUN_01f117cc(*unaff_x22);
  FUN_03ec8b04(lVar7,0);
  iVar5 = (**(code **)(*unaff_x20 + 0x618))();
  puVar4 = Method_UnityEngine_Mesh_SetUvsImpl<Vector3>__;
  puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_2__;
  puVar2 = Method_UnityEngine_Component_GetComponents<BaseRaycaster>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      if (((unaff_x20[0x13] == 0) ||
          (FUN_0265d74c(unaff_x20[0x13],iVar5,*(undefined8 *)puVar3), unaff_x19 == 0)) ||
         (plVar8 = (long *)FUN_023351b4(), plVar8 == (long *)0x0)) {
LAB_03fba188:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 9) * 0x10 + 0x138);
            goto LAB_03fb9f98;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,9);
LAB_03fb9f98:
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar8 == (long *)0x0) goto LAB_03fba188;
LAB_03fb9fac:
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_03fb9ff8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03fb9ff8:
      uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar13 & 1) != 0) {
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03fba054;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03fba054:
        uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (lVar7 == 0) goto LAB_03fba188;
        uVar13 = FUN_03aafa44(lVar7,uVar10,0);
        if ((uVar13 & 1) == 0) {
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03fba0c4;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03fba0c4:
          uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_03fba124;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,1);
LAB_03fba124:
          uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          FUN_03aaf810(lVar7,uVar10,uVar11,0);
        }
        goto LAB_03fb9fac;
      }
      iVar5 = iVar5 + 1;
      iVar6 = (**(code **)(*unaff_x20 + 0x618))();
    } while (iVar5 < iVar6);
  }
  return lVar7;
}


