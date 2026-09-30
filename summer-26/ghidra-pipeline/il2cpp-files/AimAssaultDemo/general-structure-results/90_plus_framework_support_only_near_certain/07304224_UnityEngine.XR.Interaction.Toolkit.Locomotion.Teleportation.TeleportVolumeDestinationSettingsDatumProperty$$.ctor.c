/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatumProperty$$.ctor
ENTRY_POINT: 07304224
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 126
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x073044c4) */

void UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportVolumeDestinationSettingsDatumProperty___ctor
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar5 = Meta_XR_ImmersiveDebugger_Hierarchy_ComponentItem_TypeInfo;
  puVar4 = Unity_Netcode_ComponentFactory_TypeInfo;
  puVar3 = System_CompatibilitySwitches_TypeInfo;
  puVar2 = System_Collections_Comparer_TypeInfo;
  puVar1 = PTR_DAT_07d97400;
  if ((DAT_08268d09 & 1) == 0) {
    FUN_0373b518(System_Collections_Comparer_TypeInfo);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d99048);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(Unity_Netcode_ComponentFactory_TypeInfo);
    FUN_0373b518(Meta_XR_ImmersiveDebugger_Hierarchy_ComponentItem_TypeInfo);
    FUN_0373b518(UnityEngine_CompositeCollider2D_TypeInfo);
    FUN_0373b518(PTR_DAT_07d99050);
    FUN_0373b518(System_CompatibilitySwitches_TypeInfo);
    FUN_0373b518(PTR_DAT_07d97400);
    DAT_08268d09 = 1;
  }
  uVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_044a4918(uVar6,param_1,*(undefined8 *)puVar4,0);
  uVar6 = FUN_0426e774(param_1,*(undefined8 *)puVar1,uVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  thunk_FUN_037aeb94();
  Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(param_1,*(undefined8 *)puVar5);
  puVar1 = PTR_DAT_07d896f8;
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar7 = (long *)FUN_051395a8(*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_07d99050);
  puVar3 = PTR_DAT_07d99048;
  puVar2 = PTR_DAT_07d89700;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_073043c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar2,0);
LAB_073043c0:
    uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar10 & 1) == 0) break;
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0730441c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar3,0);
LAB_0730441c:
    uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    thunk_FUN_07331220(param_1,uVar6,*(undefined8 *)(param_1 + 0xa0),0);
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07304494;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar1,0);
LAB_07304494:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  return;
}


