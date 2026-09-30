/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume.DefaultDestinationFilterCache$$.cctor
ENTRY_POINT: 0730427c
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

void UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationMultiAnchorVolume_DefaultDestinationFilterCache___cctor
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x24;
  undefined8 *unaff_x25;
  
  FUN_0373b518(PTR_DAT_07d896f8);
  FUN_0373b518(PTR_DAT_07d99048);
  FUN_0373b518(PTR_DAT_07d89700);
  FUN_0373b518(Unity_Netcode_ComponentFactory_TypeInfo);
  FUN_0373b518(Meta_XR_ImmersiveDebugger_Hierarchy_ComponentItem_TypeInfo);
  FUN_0373b518(UnityEngine_CompositeCollider2D_TypeInfo);
  FUN_0373b518(PTR_DAT_07d99050);
  FUN_0373b518(System_CompatibilitySwitches_TypeInfo);
  FUN_0373b518(PTR_DAT_07d97400);
  *(undefined1 *)(unaff_x24 + 0xd09) = 1;
  thunk_FUN_037788cc(*unaff_x25);
  FUN_044a4918();
  uVar4 = FUN_0426e774();
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar4;
  thunk_FUN_037aeb94();
  Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy();
  puVar1 = PTR_DAT_07d896f8;
  if (*(long *)(unaff_x20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar5 = (long *)FUN_051395a8(*(long *)(unaff_x20 + 0x98),*(undefined8 *)PTR_DAT_07d99050);
  puVar3 = PTR_DAT_07d99048;
  puVar2 = PTR_DAT_07d89700;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_073043c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,0);
LAB_073043c0:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar8 & 1) == 0) break;
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0730441c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar3,0);
LAB_0730441c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
    thunk_FUN_07331220();
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07304494;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar1,0);
LAB_07304494:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


