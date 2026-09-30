/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03dda75c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 158
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_05afde1c();
  uVar2 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
  uVar2 = FUN_05af18ac(uVar2,0);
  uVar3 = FUN_05b0716c(uVar1,uVar2,0);
  if ((uVar3 & 1) == 0) {
    lVar6 = *(long *)(*unaff_x23 + 0x48);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar7 = *(long *)(*unaff_x23 + 0x68);
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xf) != '\0') {
      uVar1 = *unaff_x20;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar3 = FUN_03e10c98(uVar1);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
    lVar6 = *(long *)(*unaff_x23 + 0x48);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar7 = *(long *)(*unaff_x23 + 0x78);
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4();
    }
    if (*(char *)(*(long *)(lVar6 + 0xb8) + 6) != '\0') {
      uVar1 = *(undefined8 *)*unaff_x23;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar1 = FUN_05afde1c(uVar1,0);
      uVar2 = FUN_05afde1c(*(undefined8 *)PTR_DAT_06f80908,0);
      uVar3 = FUN_05b0716c(uVar1,uVar2,0);
      if ((uVar3 & 1) != 0) {
        uVar1 = ((undefined8 *)*unaff_x23)[1];
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar1 = FUN_05afde1c(uVar1,0);
        in_stack_00000008 = *unaff_x20;
        plVar4 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
        if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)PTR_DAT_06f6df20)) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar4);
        }
        plVar4 = (long *)FUN_05b22e6c(uVar1,plVar4,0);
        lVar6 = *(long *)(*unaff_x23 + 0x30);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02feb2c4(lVar6);
        }
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(long *)(*plVar4 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(plVar4);
        }
        puVar5 = (undefined1 *)thunk_FUN_03010960(plVar4);
        goto LAB_03ddab68;
      }
      uVar1 = *(undefined8 *)*unaff_x23;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar1 = FUN_05afde1c(uVar1,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*unaff_x25);
      }
      uVar3 = FUN_0697e274(uVar1,0);
      if ((uVar3 & 1) != 0) {
        puVar5 = (undefined1 *)
                 Pathfinding_Collections_CircularBuffer_<GetEnumerator>d__39<byte>___ctor();
        goto LAB_03ddab68;
      }
    }
    uVar2 = *unaff_x20;
    in_stack_00000008 = uVar2;
    uVar1 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
    lVar6 = *(long *)(*unaff_x23 + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4(lVar6);
    }
    lVar6 = thunk_FUN_03010710(uVar1,lVar6);
    if (lVar6 == 0) {
      uVar1 = *(undefined8 *)(*unaff_x23 + 8);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      plVar4 = (long *)FUN_05afde1c(uVar1,0);
      uVar1 = FUN_05afde1c(*(undefined8 *)*unaff_x23,0);
      if (plVar4 == (long *)0x0) goto LAB_03ddabf0;
      uVar3 = (**(code **)(*plVar4 + 0x2b8))(plVar4,uVar1,*(undefined8 *)(*plVar4 + 0x2c0));
      if ((uVar3 & 1) == 0) {
        *unaff_x19 = 0;
        return 0;
      }
      goto LAB_03dda794;
    }
    in_stack_00000008 = uVar2;
    uVar1 = thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
    lVar6 = *(long *)(*unaff_x23 + 0x30);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02feb2c4(lVar6);
    }
    plVar4 = (long *)thunk_FUN_03010710(uVar1,lVar6);
  }
  else {
LAB_03dda794:
    in_stack_00000008 = *unaff_x20;
                    /* try { // try from 03dda79c to 03eda7a3 has its CatchHandler @ 03dda86c */
    plVar4 = (long *)thunk_FUN_0301043c(*(undefined8 *)(*unaff_x23 + 0x60),&stack0x00000008);
  }
  lVar6 = *(long *)(*unaff_x23 + 0x30);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02feb2c4(lVar6);
  }
  if (plVar4 != (long *)0x0) {
    if (*(long *)(*plVar4 + 0x40) != *(long *)(lVar6 + 0x40)) {
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


