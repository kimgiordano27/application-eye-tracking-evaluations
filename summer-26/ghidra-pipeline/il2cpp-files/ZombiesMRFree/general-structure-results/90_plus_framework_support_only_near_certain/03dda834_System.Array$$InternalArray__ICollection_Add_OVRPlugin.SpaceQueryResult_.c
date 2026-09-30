/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03dda834
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceQueryResult>(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  int in_w8;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar6;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  
  if (in_w8 != 0) {
    uVar7 = *unaff_x20;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
                    /* try { // try from 03dda858 to 03eda85b has its CatchHandler @ 03dda868 */
                    /* try { // try from 03dda85c to 03eda887 has its CatchHandler @ 03dda680 */
    uVar1 = FUN_03e10c98(uVar7);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 03dda858 with catch @ 03dda868
                        */
  lVar2 = *(long *)(*unaff_x23 + 0x48);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 03dda79c with catch @ 03dda86c
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 03dda7c0 with catch @ 03dda870
                        */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar6 = *(long *)(*unaff_x23 + 0x78);
  lVar2 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar2 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 6) != '\0') {
    uVar7 = *(undefined8 *)*unaff_x23;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar7 = FUN_05afde1c(uVar7,0);
    uVar3 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f80908,0);
    uVar1 = FUN_05b0716c(uVar7,uVar3,0);
    if ((uVar1 & 1) != 0) {
      uVar7 = ((undefined8 *)*unaff_x23)[1];
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar7 = FUN_05afde1c(uVar7,0);
      in_stack_00000008 = *unaff_x20;
      plVar4 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
      if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)PTR_DAT_06f6df20)) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar4);
      }
      plVar4 = (long *)FUN_05b22e6c(uVar7,plVar4,0);
      lVar2 = *(long *)(*unaff_x23 + 0x30);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4(lVar2);
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(long *)(*plVar4 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(plVar4);
      }
      puVar5 = (undefined1 *)thunk_FUN_03010960(plVar4);
      goto LAB_03ddab68;
    }
    uVar7 = *(undefined8 *)*unaff_x23;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar7 = FUN_05afde1c(uVar7,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*unaff_x25);
    }
    uVar1 = FUN_0697e274(uVar7,0);
    if ((uVar1 & 1) != 0) {
      puVar5 = (undefined1 *)
               Pathfinding_Collections_CircularBuffer_<GetEnumerator>d__39<byte>___ctor();
      goto LAB_03ddab68;
    }
  }
  uVar3 = *unaff_x20;
  in_stack_00000008 = uVar3;
  uVar7 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
  lVar2 = *(long *)(*unaff_x23 + 0x30);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4(lVar2);
  }
  lVar2 = thunk_FUN_03010710(uVar7,lVar2);
  if (lVar2 == 0) {
    uVar7 = *(undefined8 *)(*unaff_x23 + 8);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    plVar4 = (long *)FUN_05afde1c(uVar7,0);
    uVar7 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
    if (plVar4 == (long *)0x0) goto LAB_03ddabf0;
    uVar1 = (**(code **)(*plVar4 + 0x2b8))(plVar4,uVar7,*(undefined8 *)(*plVar4 + 0x2c0));
    if ((uVar1 & 1) == 0) {
      *unaff_x19 = 0;
      return 0;
    }
    in_stack_00000008 = *unaff_x20;
    plVar4 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
  }
  else {
    in_stack_00000008 = uVar3;
    uVar7 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
    lVar2 = *(long *)(*unaff_x23 + 0x30);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4(lVar2);
    }
    plVar4 = (long *)thunk_FUN_03010710(uVar7,lVar2);
  }
  lVar2 = *(long *)(*unaff_x23 + 0x30);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4(lVar2);
  }
  if (plVar4 != (long *)0x0) {
    if (*(long *)(*plVar4 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar4);
    }
    puVar5 = (undefined1 *)thunk_FUN_03010960();
LAB_03ddab68:
    *unaff_x19 = *puVar5;
    return 1;
  }
LAB_03ddabf0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


