/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PointAndLocate$$get_RaycastOrigin
ENTRY_POINT: 06e0fdbc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 143
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


undefined8 Meta_XR_MRUtilityKit_BuildingBlocks_PointAndLocate__get_RaycastOrigin(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 uVar10;
  long lVar11;
  long unaff_x25;
  long *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000008;
  
code_r0x06e0fdbc:
  *(undefined8 *)(unaff_x28 + 0x38) = unaff_x27;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x28 + 0x38),unaff_x27);
  if (4 < *(uint *)(unaff_x28 + 0x18)) {
    *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)PTR_DAT_08e92d08;
    thunk_FUN_03d233cc();
    bVar1 = *(byte *)(*(long *)PTR_DAT_08e92ce8 + 0x130);
    if (*(byte *)(*unaff_x26 + 0x130) < bVar1) {
      unaff_x26 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_08e92ce8) {
      unaff_x26 = (long *)0x0;
    }
    puVar8 = (undefined8 *)PTR_DAT_08e92d10;
    if (unaff_x26 != (long *)0x0) {
      puVar8 = (undefined8 *)PTR_DAT_08e79288;
    }
    if (5 < *(uint *)(unaff_x28 + 0x18)) {
      *(undefined8 *)(unaff_x28 + 0x48) = *puVar8;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x28 + 0x48));
      if (6 < *(uint *)(unaff_x28 + 0x18)) {
        *(undefined8 *)(unaff_x28 + 0x50) = *(undefined8 *)PTR_DAT_08e71968;
        thunk_FUN_03d233cc();
        while (FUN_06f74f38(unaff_x28,0), unaff_x20 != 0) {
          FUN_06f84868();
          while( true ) {
            unaff_x23 = unaff_x23 + 1;
            if ((long)(int)*(uint *)(unaff_x25 + 0x18) <= (long)unaff_x23) {
              if (unaff_x21 == (long *)0x0) goto LAB_06e101c0;
              uVar4 = (**(code **)(*unaff_x21 + 0x908))();
              uVar10 = *(undefined8 *)PTR_DAT_08e92cd0;
              if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e695f0);
              }
              uVar10 = FUN_0710fcf0(uVar10,0);
              uVar5 = FUN_04611b74(uVar4,uVar10,*(undefined8 *)PTR_DAT_08e92418);
              puVar2 = PTR_DAT_08e92cd8;
              if ((uVar5 & 1) == 0) {
                return in_stack_00000008;
              }
              lVar6 = thunk_FUN_03cf5138(in_stack_00000008,*(undefined8 *)PTR_DAT_08e92cd8);
              if (lVar6 == 0) goto LAB_06e101c0;
              lVar11 = *(long *)puVar2;
              plVar7 = (long *)thunk_FUN_03cf5138(in_stack_00000008,lVar11);
              lVar6 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar5 == 0) goto LAB_06e10138;
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              goto LAB_06e10120;
            }
            if (*(uint *)(unaff_x25 + 0x18) <= unaff_x23) goto LAB_06e101bc;
            if (unaff_x24 == 0) goto LAB_06e101c0;
            unaff_x27 = *(undefined8 *)(unaff_x25 + unaff_x23 * 8 + 0x20);
            uVar5 = FUN_06a4e574();
            if ((uVar5 & 1) == 0) break;
            unaff_x26 = (long *)FUN_06a4e300();
            if (unaff_x26 == (long *)0x0) goto LAB_06e101c0;
            lVar6 = *unaff_x26;
            uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x19) {
                  puVar8 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                  goto LAB_06e0fcc4;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x19,2);
LAB_06e0fcc4:
            uVar5 = (*(code *)*puVar8)(unaff_x26,puVar8[1]);
            if ((uVar5 & 1) == 0) {
              unaff_x28 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,7);
              if (unaff_x28 == 0) goto LAB_06e101c0;
              if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_06e101bc;
              *(undefined8 *)(unaff_x28 + 0x20) = *(undefined8 *)PTR_DAT_08e90898;
              thunk_FUN_03d233cc();
              if (unaff_x21 == (long *)0x0) goto LAB_06e101c0;
              uVar4 = (**(code **)(*unaff_x21 + 0x308))();
              if (*(uint *)(unaff_x28 + 0x18) < 2) goto LAB_06e101bc;
              *(undefined8 *)(unaff_x28 + 0x28) = uVar4;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x28 + 0x28),uVar4);
              if (*(uint *)(unaff_x28 + 0x18) < 3) goto LAB_06e101bc;
              *(undefined8 *)(unaff_x28 + 0x30) = *(undefined8 *)PTR_DAT_08e92d18;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x28 + 0x30));
              if (3 < *(uint *)(unaff_x28 + 0x18)) goto code_r0x06e0fdbc;
              goto LAB_06e101bc;
            }
            lVar6 = *unaff_x26;
            uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x19) {
                  puVar8 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_06e0fec8;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x19,1);
LAB_06e0fec8:
            uVar5 = (*(code *)*puVar8)(unaff_x26,puVar8[1]);
            if ((uVar5 & 1) == 0) {
              uVar4 = 0;
            }
            else {
              lVar6 = *unaff_x26;
              uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar5 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x19) {
                    puVar8 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
                    goto LAB_06e0ff30;
                  }
                  uVar5 = uVar5 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar5 != 0);
              }
              puVar8 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x19,4);
LAB_06e0ff30:
              uVar4 = (*(code *)*puVar8)(unaff_x26,in_stack_00000008,puVar8[1]);
            }
            lVar6 = *unaff_x26;
            uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x19) {
                  puVar8 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                  goto LAB_06e0ff94;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x19,3);
LAB_06e0ff94:
            uVar10 = (*(code *)*puVar8)(unaff_x26,puVar8[1]);
            uVar3 = (**(code **)(*unaff_x22 + 0x1a8))();
            if (*(int *)(*(long *)PTR_DAT_08e76e18 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e76e18);
            }
            uVar4 = FUN_06e0e58c(uVar10,uVar4,uVar3);
            lVar6 = *unaff_x26;
            uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x19) {
                  puVar8 = (undefined8 *)(lVar6 + (long)(*piVar9 + 5) * 0x10 + 0x138);
                  goto LAB_06e1004c;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar8 = (undefined8 *)FUN_03cf1348(unaff_x26,*unaff_x19,5);
LAB_06e1004c:
            (*(code *)*puVar8)(unaff_x26,in_stack_00000008,uVar4,puVar8[1]);
          }
          unaff_x28 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,5);
          if (unaff_x28 == 0) break;
          if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_06e101bc;
          *(undefined8 *)(unaff_x28 + 0x20) = *(undefined8 *)PTR_DAT_08e90898;
          thunk_FUN_03d233cc();
          if (unaff_x21 == (long *)0x0) break;
          uVar4 = (**(code **)(*unaff_x21 + 0x308))();
          if (*(uint *)(unaff_x28 + 0x18) < 2) goto LAB_06e101bc;
          *(undefined8 *)(unaff_x28 + 0x28) = uVar4;
          thunk_FUN_03d233cc((undefined8 *)(unaff_x28 + 0x28),uVar4);
          if (*(uint *)(unaff_x28 + 0x18) < 3) goto LAB_06e101bc;
          *(undefined8 *)(unaff_x28 + 0x30) = *(undefined8 *)PTR_DAT_08e92d00;
          thunk_FUN_03d233cc((undefined8 *)(unaff_x28 + 0x30));
          if (*(uint *)(unaff_x28 + 0x18) < 4) goto LAB_06e101bc;
          *(undefined8 *)(unaff_x28 + 0x38) = unaff_x27;
          thunk_FUN_03d233cc((undefined8 *)(unaff_x28 + 0x38),unaff_x27);
          if (*(uint *)(unaff_x28 + 0x18) < 5) goto LAB_06e101bc;
          *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)PTR_DAT_08e92cf0;
          thunk_FUN_03d233cc();
        }
        goto LAB_06e101c0;
      }
    }
  }
LAB_06e101bc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 4;
    if (uVar5 == 0) break;
LAB_06e10120:
    if (*(long *)(piVar9 + -2) == lVar11) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06e10158;
    }
  }
LAB_06e10138:
  puVar8 = (undefined8 *)FUN_03cf1348(plVar7,lVar11,0);
LAB_06e10158:
  uVar5 = (*(code *)*puVar8)(plVar7);
  if ((uVar5 & 1) == 0) {
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


