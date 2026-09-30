/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 03dda5f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array__InternalArray__ICollection_Add<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  int in_w8;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  if (unaff_w21 == 0) {
    if (in_w8 == 0) {
LAB_03dda7b0:
      lVar5 = *(long *)(*unaff_x23 + 0x48);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar7 = *(long *)(*unaff_x23 + 0x68);
      lVar5 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar5 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      if (*(char *)(*(long *)(lVar5 + 0xb8) + 0xf) != '\0') {
        uVar6 = *unaff_x20;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar2 = FUN_03e10c98(uVar6);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
      lVar5 = *(long *)(*unaff_x23 + 0x48);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar7 = *(long *)(*unaff_x23 + 0x78);
      lVar5 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      lVar5 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
      }
      if (*(char *)(*(long *)(lVar5 + 0xb8) + 6) != '\0') {
        uVar6 = *(undefined8 *)*unaff_x23;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar6 = FUN_05afde1c(uVar6,0);
        uVar1 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f80908,0);
        uVar2 = FUN_05b0716c(uVar6,uVar1,0);
        if ((uVar2 & 1) != 0) {
          uVar6 = ((undefined8 *)*unaff_x23)[1];
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar6 = FUN_05afde1c(uVar6,0);
          in_stack_00000008 = *unaff_x20;
          plVar3 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
          if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)PTR_DAT_06f6df20)) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe9884(plVar3);
          }
          plVar3 = (long *)FUN_05b22e6c(uVar6,plVar3,0);
          lVar5 = *(long *)(*unaff_x23 + 0x30);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02feb2c4(lVar5);
          }
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          if (*(long *)(*plVar3 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe9884(plVar3);
          }
          puVar4 = (undefined1 *)thunk_FUN_03010960(plVar3);
          goto LAB_03ddab68;
        }
        uVar6 = *(undefined8 *)*unaff_x23;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar6 = FUN_05afde1c(uVar6,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*unaff_x25);
        }
        uVar2 = FUN_0697e274(uVar6,0);
        if ((uVar2 & 1) != 0) {
          puVar4 = (undefined1 *)
                   Pathfinding_Collections_CircularBuffer_<GetEnumerator>d__39<byte>___ctor();
          goto LAB_03ddab68;
        }
      }
      uVar1 = *unaff_x20;
      in_stack_00000008 = uVar1;
      uVar6 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
      lVar5 = *(long *)(*unaff_x23 + 0x30);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4(lVar5);
      }
      lVar5 = thunk_FUN_03010710(uVar6,lVar5);
      if (lVar5 != 0) {
        in_stack_00000008 = uVar1;
        uVar6 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
        lVar5 = *(long *)(*unaff_x23 + 0x30);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02feb2c4(lVar5);
        }
        plVar3 = (long *)thunk_FUN_03010710(uVar6,lVar5);
        goto LAB_03ddab28;
      }
      uVar6 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      plVar3 = (long *)FUN_05afde1c(uVar6,0);
      uVar6 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
      if (plVar3 == (long *)0x0) goto LAB_03ddabf0;
      uVar2 = (**(code **)(*plVar3 + 0x2b8))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x2c0));
      if ((uVar2 & 1) == 0) {
LAB_03dda65c:
        *unaff_x19 = 0;
        return 0;
      }
    }
    else {
      uVar6 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar6 = FUN_05afde1c(uVar6,0);
      uVar1 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
      uVar1 = FUN_05af18ac(uVar1,0);
      uVar2 = FUN_05b0716c(uVar6,uVar1,0);
      if ((uVar2 & 1) == 0) goto LAB_03dda7b0;
    }
    in_stack_00000008 = *unaff_x20;
    plVar3 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
  }
  else {
    if (in_w8 != 0) {
      uVar6 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
                    /* try { // try from 03dda614 to 03eda617 has its CatchHandler @ 03dda624 */
                    /* try { // try from 03dda618 to 03eda643 has its CatchHandler @ 03dda438 */
      uVar6 = FUN_05afde1c(uVar6,0);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 03dda614 with catch @ 03dda624
                        */
      uVar6 = FUN_05af18ac(uVar6,0);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 03dda558 with catch @ 03dda628
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 03dda57c with catch @ 03dda62c
                        */
      uVar1 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
      uVar1 = FUN_05af18ac(uVar1,0);
      uVar2 = FUN_05b07f44(uVar6,uVar1,0);
      if ((uVar2 & 1) != 0) goto LAB_03dda65c;
    }
    uVar6 = *(undefined8 *)(*unaff_x23 + 8);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar6 = FUN_05afde1c(uVar6,0);
    plVar3 = (long *)FUN_05af18ac(uVar6,0);
    if (plVar3 == (long *)0x0) goto LAB_03ddabf0;
    uVar2 = (**(code **)(*plVar3 + 0x5a8))(plVar3,*(undefined8 *)(*plVar3 + 0x5b0));
    if ((uVar2 & 1) == 0) {
      in_stack_00000008 = *unaff_x20;
      uVar6 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
      if (*(int *)(*(long *)PTR_DAT_06f7a4f8 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f7a4f8);
      }
      plVar3 = (long *)FUN_05a6d944(uVar6,plVar3,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar6 = FUN_05b238cc(plVar3,0);
      in_stack_00000008 = *unaff_x20;
      uVar1 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
      if (*(int *)(*(long *)PTR_DAT_06f7a4f8 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f7a4f8);
      }
      uVar6 = FUN_05a6d944(uVar1,uVar6,0);
      plVar3 = (long *)FUN_05b23990(plVar3,uVar6,0);
    }
  }
LAB_03ddab28:
  lVar5 = *(long *)(*unaff_x23 + 0x30);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02feb2c4(lVar5);
  }
  if (plVar3 != (long *)0x0) {
    if (*(long *)(*plVar3 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar3);
    }
    puVar4 = (undefined1 *)thunk_FUN_03010960();
LAB_03ddab68:
    *unaff_x19 = *puVar4;
    return 1;
  }
LAB_03ddabf0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


