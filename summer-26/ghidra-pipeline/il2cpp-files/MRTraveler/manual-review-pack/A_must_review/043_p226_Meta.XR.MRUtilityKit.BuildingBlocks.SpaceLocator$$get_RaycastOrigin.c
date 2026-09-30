/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$get_RaycastOrigin
ENTRY_POINT: 06e0ff3c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 155
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_4
*/


undefined8
Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__get_RaycastOrigin
          (code *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long lVar11;
  long unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  
code_r0x06e0ff3c:
  uVar3 = (*param_1)(param_2,param_3,param_4);
  param_2 = unaff_x26;
Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__set_RaycastOrigin:
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x19) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto LAB_06e0ff94;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(param_2,*unaff_x19,3);
LAB_06e0ff94:
  uVar5 = (*(code *)*puVar4)(param_2,puVar4[1]);
  uVar6 = (**(code **)(*unaff_x22 + 0x1a8))();
  if (*(int *)(*(long *)PTR_DAT_08e76e18 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)PTR_DAT_08e76e18);
  }
  uVar3 = FUN_06e0e58c(uVar5,uVar3,uVar6);
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x19) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
        goto LAB_06e1004c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(param_2,*unaff_x19,5);
LAB_06e1004c:
  (*(code *)*puVar4)(param_2,in_stack_00000008,uVar3,puVar4[1]);
  do {
    unaff_x23 = unaff_x23 + 1;
    if ((long)(int)*(uint *)(unaff_x25 + 0x18) <= (long)unaff_x23) {
      if (unaff_x21 == (long *)0x0) goto LAB_06e101c0;
      uVar3 = (**(code **)(*unaff_x21 + 0x908))();
      uVar5 = *(undefined8 *)PTR_DAT_08e92cd0;
      if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
      }
      uVar5 = FUN_0710fcf0(uVar5,0);
      uVar9 = FUN_04611b74(uVar3,uVar5,*(undefined8 *)PTR_DAT_08e92418);
      puVar2 = PTR_DAT_08e92cd8;
      if ((uVar9 & 1) == 0) {
        return in_stack_00000008;
      }
      lVar8 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)PTR_DAT_08e92cd8);
      if (lVar8 == 0) goto LAB_06e101c0;
      lVar11 = *(long *)puVar2;
      plVar7 = (long *)thunk_FUN_03cf5138(in_stack_00000008,lVar11);
      lVar8 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_06e10138;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_06e10120;
    }
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x23) goto LAB_06e101bc;
    if (unaff_x24 == 0) goto LAB_06e101c0;
    uVar3 = *(undefined8 *)(unaff_x25 + unaff_x23 * 8 + 0x20);
    uVar9 = FUN_06a4e574();
    if ((uVar9 & 1) == 0) {
      lVar8 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
      if (lVar8 == 0) goto LAB_06e101c0;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_06e101bc;
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_08e90898;
      thunk_FUN_03d233cc();
      if (unaff_x21 == (long *)0x0) goto LAB_06e101c0;
      uVar5 = (**(code **)(*unaff_x21 + 0x308))();
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06e101bc;
      *(undefined8 *)(lVar8 + 0x28) = uVar5;
      thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x28),uVar5);
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06e101bc;
      *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_08e92d00;
      thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x30));
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06e101bc;
      *(undefined8 *)(lVar8 + 0x38) = uVar3;
      thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x38),uVar3);
      if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_06e101bc;
      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_08e92cf0;
      thunk_FUN_03d233cc();
    }
    else {
      param_2 = (long *)FUN_06a4e300();
      if (param_2 == (long *)0x0) goto LAB_06e101c0;
      lVar8 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x19) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_06e0fcc4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(param_2,*unaff_x19,2);
LAB_06e0fcc4:
      uVar9 = (*(code *)*puVar4)(param_2,puVar4[1]);
      if ((uVar9 & 1) != 0) break;
      lVar8 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,7);
      if (lVar8 == 0) goto LAB_06e101c0;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_06e101bc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_08e90898;
      thunk_FUN_03d233cc();
      if (unaff_x21 == (long *)0x0) goto LAB_06e101c0;
      uVar5 = (**(code **)(*unaff_x21 + 0x308))();
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_06e101bc;
      *(undefined8 *)(lVar8 + 0x28) = uVar5;
      thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x28),uVar5);
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_06e101bc;
      *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_08e92d18;
      thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x30));
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_06e101bc;
      *(undefined8 *)(lVar8 + 0x38) = uVar3;
      thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x38),uVar3);
      if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_06e101bc;
      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_08e92d08;
      thunk_FUN_03d233cc();
      bVar1 = *(byte *)(*(long *)PTR_DAT_08e92ce8 + 0x130);
      if (*(byte *)(*param_2 + 0x130) < bVar1) {
        param_2 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
               *(long *)PTR_DAT_08e92ce8) {
        param_2 = (long *)0x0;
      }
      puVar4 = (undefined8 *)PTR_DAT_08e92d10;
      if (param_2 != (long *)0x0) {
        puVar4 = (undefined8 *)PTR_DAT_08e79288;
      }
      if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_06e101bc;
      *(undefined8 *)(lVar8 + 0x48) = *puVar4;
      thunk_FUN_03d233cc((undefined8 *)(lVar8 + 0x48));
      if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_06e101bc;
      *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)PTR_DAT_08e71968;
      thunk_FUN_03d233cc();
    }
    FUN_06f74f38(lVar8,0);
    if (unaff_x20 == 0) goto LAB_06e101c0;
    FUN_06f84868();
  } while( true );
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x19) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_06e0fec8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(param_2,*unaff_x19,1);
LAB_06e0fec8:
  uVar9 = (*(code *)*puVar4)(param_2,puVar4[1]);
  if ((uVar9 & 1) != 0) goto code_r0x06e0fed8;
  uVar3 = 0;
  goto Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__set_RaycastOrigin;
code_r0x06e0fed8:
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x19) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_06e0ff30;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(param_2,*unaff_x19,4);
LAB_06e0ff30:
  param_1 = (code *)*puVar4;
  param_4 = puVar4[1];
  param_3 = in_stack_00000008;
  unaff_x26 = param_2;
  goto code_r0x06e0ff3c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_06e10120:
    if (*(long *)(piVar10 + -2) == lVar11) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06e10158;
    }
  }
LAB_06e10138:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar7,lVar11,0);
LAB_06e10158:
  uVar9 = (*(code *)*puVar4)(plVar7);
  if ((uVar9 & 1) == 0) {
    FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e92cf8);
    if (unaff_x20 == 0) {
LAB_06e101c0:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06f84868();
  }
  return in_stack_00000008;
}


