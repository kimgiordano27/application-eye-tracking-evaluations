/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 04cfce0c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_IDisposable_Dispose
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  
  FUN_063063e4(param_2,*(undefined4 *)(param_1 + 8),0);
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    plVar2 = (long *)FUN_061c5b10(*(long *)(unaff_x20 + 0x18),0);
    if (plVar2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0676a278 + 0x130);
      if (((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
          (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0676a278)
          ) && (plVar2 = (long *)FUN_06307338(plVar2,0), plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x178))(plVar2,0,*(undefined8 *)(*plVar2 + 0x180));
      }
    }
    plVar2 = *(long **)(unaff_x20 + 0x10);
    if (plVar2 != (long *)0x0) {
      lVar4 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02d9a2e0(lVar4);
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_04cfcf04;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar2,lVar4,4);
LAB_04cfcf04:
                    /* WARNING: Could not recover jumptable at 0x04cfcf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


