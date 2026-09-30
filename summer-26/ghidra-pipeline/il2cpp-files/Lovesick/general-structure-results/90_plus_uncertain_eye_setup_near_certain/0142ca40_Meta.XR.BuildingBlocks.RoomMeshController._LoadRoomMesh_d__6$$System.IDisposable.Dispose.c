/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 0142ca40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6__System_IDisposable_Dispose
               (long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  int iVar7;
  uint uVar8;
  long unaff_x24;
  undefined8 *puVar9;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long in_stack_00000008;
  
  puVar9 = *(undefined8 **)(unaff_x24 + 0xe50);
  iVar7 = 0;
  uVar8 = 1;
  while (iVar7 < *(int *)(param_1 + 0x18)) {
    FUN_0132138c(param_1,iVar7,&stack0x00000008,*unaff_x26);
    if (in_stack_00000008 == 0) goto LAB_0142cbcc;
    if (*(char *)(in_stack_00000008 + 0x40) != '\0') {
      if (((*(long *)(unaff_x19 + 0x98) == 0) ||
          (FUN_0132138c(*(long *)(unaff_x19 + 0x98),iVar7,&stack0x00000008,*unaff_x26),
          in_stack_00000008 == 0)) || (*(long **)(in_stack_00000008 + 0x10) == (long *)0x0))
      goto LAB_0142cbcc;
      uVar1 = (**(code **)(**(long **)(in_stack_00000008 + 0x10) + 0x868))();
      if ((*(long *)(unaff_x19 + 0x98) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x98),iVar7,&stack0x00000008,*unaff_x26),
         in_stack_00000008 == 0)) goto LAB_0142cbcc;
      uVar8 = uVar8 & uVar1;
      *(undefined1 *)(in_stack_00000008 + 0x40) = 0;
    }
    param_1 = *(long *)(unaff_x19 + 0x98);
    iVar7 = iVar7 + 1;
    if (param_1 == 0) goto LAB_0142cbcc;
  }
  plVar2 = (long *)FUN_013eae18();
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 == 0) goto LAB_0142cb6c;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    goto LAB_0142cb54;
  }
LAB_0142cbcc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_0142cb54:
    if (*(long *)(piVar6 + -2) == *unaff_x25) {
      puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x22) * 0x10 + 0x138);
      goto LAB_0142cb8c;
    }
  }
LAB_0142cb6c:
  puVar3 = (undefined8 *)FUN_00d59724(plVar2,*unaff_x25,0x22);
LAB_0142cb8c:
  uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0142cbcc;
    FUN_0129a9f4(*(long *)(unaff_x19 + 0x90),*puVar9);
  }
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  return uVar8;
}


