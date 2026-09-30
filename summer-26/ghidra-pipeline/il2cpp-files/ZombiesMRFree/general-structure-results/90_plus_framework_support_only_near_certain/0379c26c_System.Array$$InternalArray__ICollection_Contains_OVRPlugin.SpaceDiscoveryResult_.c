/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0379c26c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceDiscoveryResult>
          (long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 uVar7;
  int unaff_w22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_000000b0;
  long in_stack_000000b8;
  
  do {
    lVar3 = FUN_068f5db8(param_1,param_2);
    uVar8 = FUN_0379c600();
    if (lVar3 == 0) {
LAB_0379c3d0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar4 = FUN_03c746a0(lVar3,&stack0x000000b8,*unaff_x20);
    uVar9 = 0;
    if ((uVar4 & 1) != 0) {
      if (*(char *)(unaff_x29 + 0x40) == '\0') {
        if (in_stack_000000b8 == 0) goto LAB_0379c3d0;
        uVar9 = FUN_0697470c(in_stack_000000b8,0);
      }
      else {
        uVar9 = FUN_0379c96c(lVar3);
        if (in_stack_000000b8 == 0) goto LAB_0379c3d0;
        FUN_06974748(in_stack_000000b8,0);
      }
    }
    uVar4 = FUN_03c746a0(lVar3,&stack0x000000b0,*unaff_x24);
    if ((uVar4 & 1) == 0) {
      in_stack_000000b0 = FUN_03c732ac(lVar3,*unaff_x25);
    }
    if (in_stack_000000b0 == 0) goto LAB_0379c3d0;
    unaff_w22 = unaff_w22 + 1;
    *(undefined4 *)(in_stack_000000b0 + 0x20) = unaff_s8;
    *(undefined4 *)(in_stack_000000b0 + 0x24) = unaff_s9;
    *(undefined4 *)(in_stack_000000b0 + 0x28) = uVar9;
    *(undefined4 *)(in_stack_000000b0 + 0x2c) = uVar8;
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0379c234;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_0379c234:
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 <= unaff_w22) {
      if (*(int *)(*(long *)PTR_DAT_06f6ddb8 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_069715b0(0);
      if (*(long *)(unaff_x29 + 0x48) == 0) goto LAB_0379c3d0;
      uVar7 = *(undefined8 *)(unaff_x29 + 0x30);
      lVar3 = FUN_037ced4c(*(long *)(unaff_x29 + 0x48),0);
      if (lVar3 == 0) goto LAB_0379c3d0;
      in_stack_00000030 = *(undefined8 *)(lVar3 + 0x30);
      in_stack_00000028 = *(undefined8 *)(lVar3 + 0x28);
      in_stack_00000020 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f96648);
      FUN_03796e74(uVar5,uVar7,&stack0x00000020);
      if (*(long *)(unaff_x29 + 0x28) == 0) goto LAB_0379c3d0;
      FUN_03799c84(*(long *)(unaff_x29 + 0x28),uVar5);
      if (*(char *)(unaff_x29 + 0x41) != '\0') {
        if ((*(long *)(unaff_x29 + 0x30) == 0) ||
           (lVar3 = FUN_068f5db8(*(long *)(unaff_x29 + 0x30),0), lVar3 == 0)) goto LAB_0379c3d0;
        FUN_068f8b44(lVar3,0,0);
      }
      return 0;
    }
    lVar3 = FUN_068f8a88();
    if ((lVar3 == 0) || (param_1 = FUN_06906070(lVar3,unaff_w22,0), param_1 == 0))
    goto LAB_0379c3d0;
    param_2 = 0;
  } while( true );
}


