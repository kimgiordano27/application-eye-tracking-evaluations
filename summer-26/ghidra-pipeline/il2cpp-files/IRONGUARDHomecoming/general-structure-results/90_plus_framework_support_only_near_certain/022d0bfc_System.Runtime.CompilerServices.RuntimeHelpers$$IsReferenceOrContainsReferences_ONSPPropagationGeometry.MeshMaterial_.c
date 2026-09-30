/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<ONSPPropagationGeometry.MeshMaterial>
ENTRY_POINT: 022d0bfc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d0e34) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<ONSPPropagationGeometry_MeshMaterial>
               (void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  int in_w8;
  int iVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar6 = FUN_0424f664(0);
  puVar5 = Method_System_Char_ConvertToUtf32__;
  puVar4 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    while( true ) {
      do {
        do {
          iVar1 = iVar1 + -1;
          if (iVar1 < 0) {
            return;
          }
          plVar7 = (long *)FUN_030f28e4(lVar6,iVar1,*(undefined8 *)puVar5);
        } while (plVar7 == (long *)0x0);
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
      } while ((*(byte *)(*plVar7 + 0x130) < bVar2) ||
              (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4));
      if (unaff_x20 == 0) break;
      plVar8 = (long *)(**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
      uVar9 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar9,uVar9);
      }
      FUN_041d4560(plVar8,uVar9,0);
      plVar10 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar10 + 0x198))(plVar10,plVar8,*(undefined8 *)(*plVar10 + 0x1a0));
      lVar11 = (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_041e7f94(lVar11,0);
      if (lVar11 == 0) {
        uVar14 = FUN_041d3f88(plVar8,0);
        iVar13 = 4;
        if ((uVar14 & 1) == 0) {
          iVar13 = 10;
        }
      }
      else {
        FUN_041c5278();
        iVar13 = 4;
      }
      lVar11 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar12 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_022d0d94;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_022d0d94:
      (*(code *)*puVar12)(plVar8,puVar12[1]);
      if ((iVar13 != 10) && (iVar13 != 0)) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


