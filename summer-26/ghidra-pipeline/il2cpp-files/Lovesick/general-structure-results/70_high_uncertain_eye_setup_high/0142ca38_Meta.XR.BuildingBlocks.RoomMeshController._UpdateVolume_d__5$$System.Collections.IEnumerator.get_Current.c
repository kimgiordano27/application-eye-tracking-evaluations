/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<UpdateVolume>d__5$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0142ca38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int iVar6;
  uint uVar7;
  long unaff_x24;
  undefined8 *puVar8;
  long unaff_x25;
  long *plVar9;
  long unaff_x26;
  undefined8 *puVar10;
  long in_stack_00000008;
  
  puVar10 = *(undefined8 **)(unaff_x26 + 0xea8);
  plVar9 = *(long **)(unaff_x25 + 0x940);
  puVar8 = *(undefined8 **)(unaff_x24 + 0xe50);
  iVar6 = 0;
  uVar7 = 1;
  while (iVar6 < *(int *)(param_1 + 0x18)) {
    FUN_0132138c(param_1,iVar6,&stack0x00000008,*puVar10);
    if (in_stack_00000008 == 0) goto LAB_0142cbcc;
    if (*(char *)(in_stack_00000008 + 0x40) != '\0') {
      if (((*(long *)(unaff_x19 + 0x98) == 0) ||
          (FUN_0132138c(*(long *)(unaff_x19 + 0x98),iVar6,&stack0x00000008,*puVar10),
          in_stack_00000008 == 0)) || (*(long **)(in_stack_00000008 + 0x10) == (long *)0x0))
      goto LAB_0142cbcc;
      uVar1 = (**(code **)(**(long **)(in_stack_00000008 + 0x10) + 0x868))();
      if ((*(long *)(unaff_x19 + 0x98) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x98),iVar6,&stack0x00000008,*puVar10),
         in_stack_00000008 == 0)) goto LAB_0142cbcc;
      uVar7 = uVar7 & uVar1;
      *(undefined1 *)(in_stack_00000008 + 0x40) = 0;
    }
    param_1 = *(long *)(unaff_x19 + 0x98);
    iVar6 = iVar6 + 1;
    if (param_1 == 0) goto LAB_0142cbcc;
  }
  plVar2 = (long *)FUN_013eae18();
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 == 0) goto LAB_0142cb6c;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    goto LAB_0142cb54;
  }
LAB_0142cbcc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_0142cb54:
    if (*(long *)(piVar5 + -2) == *plVar9) {
      puVar10 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x22) * 0x10 + 0x138);
      goto LAB_0142cb8c;
    }
  }
LAB_0142cb6c:
  puVar10 = (undefined8 *)FUN_00d59724(plVar2,*plVar9,0x22);
LAB_0142cb8c:
  uVar4 = (*(code *)*puVar10)(plVar2,puVar10[1]);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_0142cbcc;
    FUN_0129a9f4(*(long *)(unaff_x19 + 0x90),*puVar8);
  }
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  return uVar7;
}


