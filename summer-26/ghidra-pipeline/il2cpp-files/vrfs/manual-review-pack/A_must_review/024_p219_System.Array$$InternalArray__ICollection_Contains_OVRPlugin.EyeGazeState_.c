/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03709920
PROGRAM: vrfs-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


long * System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>
                 (long param_1,long param_2,long param_3,uint param_4,uint param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  if ((bRam0000000007239cc3 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dcb058);
    thunk_FUN_0159f088(PTR_DAT_06e024d0);
    thunk_FUN_0159f088(PTR_DAT_06dac478);
    thunk_FUN_0159f088(PTR_DAT_06e4f188);
    thunk_FUN_0159f088(PTR_DAT_06dea920);
    thunk_FUN_0159f088(PTR_DAT_06db40e8);
    thunk_FUN_0159f088(PTR_DAT_06e195a8);
    thunk_FUN_0159f088(PTR_DAT_06dafa18);
    thunk_FUN_0159f088(PTR_DAT_06dc3e98);
    thunk_FUN_0159f088(PTR_DAT_06d89a28);
    thunk_FUN_0159f088(PTR_DAT_06d9a5a0);
    thunk_FUN_0159f088(PTR_DAT_06e35f88);
    thunk_FUN_0159f088(PTR_DAT_06e3ef78);
    thunk_FUN_0159f088(PTR_DAT_06ddb6d0);
    thunk_FUN_0159f088(PTR_DAT_06dba180);
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    bRam0000000007239cc3 = 1;
  }
  puVar1 = PTR_DAT_06e3ef78;
  in_stack_00000048 = 0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  in_stack_00000020 = 0;
  if ((param_3 == 0) && (param_2 == 0)) {
    uVar4 = FUN_03708958(param_1);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar1);
    }
    plVar5 = (long *)FUN_02d469e4(uVar4,param_4 & 1,param_5 & 1,0,param_6,0);
    return plVar5;
  }
  lVar14 = *(long *)(param_1 + 0x18);
  plVar5 = (long *)0x0;
  if (lVar14 != 0) {
    if (param_2 == 0) {
      plVar5 = (long *)FUN_03786944(lVar14,0);
    }
    else {
      lVar6 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dcb058);
      if (lVar6 == 0) goto LAB_0370a138;
      FUN_03776e90(lVar6,lVar14,0);
      plVar5 = (long *)(**(code **)(param_2 + 0x18))
                                 (*(undefined8 *)(param_2 + 0x40),lVar6,
                                  *(undefined8 *)(param_2 + 0x28));
    }
    uVar7 = System_Collections_Generic_EqualityComparer<JobHandle>__System_Collections_IEqualityComparer_Equals
                      (plVar5,0,0);
    if ((uVar7 & 1) != 0) {
      if ((param_4 & 1) == 0) {
        return (long *)0x0;
      }
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = thunk_FUN_0159f088(PTR_DAT_06e357b8);
      uVar8 = thunk_FUN_0159f088(PTR_DAT_06e24bf8);
      uVar4 = FUN_02526be4(uVar4,uVar12,uVar8,0);
      thunk_FUN_0159f088(PTR_DAT_06e511c8);
      uVar8 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      FUN_036185b8(uVar8,uVar4,0);
      goto LAB_0370a060;
    }
  }
  puVar1 = PTR_DAT_06ddb6d0;
  plVar15 = *(long **)(param_1 + 0x10);
  if (plVar15 == (long *)0x0) goto LAB_0370a138;
  lVar14 = *plVar15;
  uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
  if (uVar7 != 0) {
    piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06ddb6d0) {
        puVar9 = (undefined8 *)(lVar14 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03709bac;
      }
      uVar7 = uVar7 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_015c2a80(plVar15,*(long *)PTR_DAT_06ddb6d0,0);
LAB_03709bac:
  uVar4 = (*(code *)*puVar9)(plVar15,puVar9[1]);
  if (param_3 == 0) {
    if (plVar5 == (long *)0x0) goto LAB_0370a138;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x318))
                               (plVar5,uVar4,0,param_5 & 1,*(undefined8 *)(*plVar5 + 800));
  }
  else {
    plVar5 = (long *)(**(code **)(param_3 + 0x18))
                               (*(undefined8 *)(param_3 + 0x40),plVar5,uVar4,param_5 & 1,
                                *(undefined8 *)(param_3 + 0x28));
  }
  if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar7 = FUN_031d212c(plVar5,0,0);
  puVar2 = PTR_DAT_06e4f188;
  if ((uVar7 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      return (long *)0x0;
    }
    plVar5 = *(long **)(param_1 + 0x10);
LAB_03709c38:
    uVar4 = thunk_FUN_0159f088(PTR_DAT_06de45d0);
    if (plVar5 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar4 = thunk_FUN_0159f088(PTR_DAT_06de45d0);
      uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    uVar12 = thunk_FUN_0159f088(PTR_DAT_06e24bf8);
    uVar4 = FUN_02526be4(uVar4,uVar8,uVar12,0);
    thunk_FUN_0159f088(PTR_DAT_06e58c68);
    uVar8 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    FUN_02d77560(uVar8,uVar4,0);
LAB_0370a060:
    uVar4 = thunk_FUN_0159f088(PTR_DAT_06da13c8);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar8,uVar4);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_043c2e98(&stack0x00000008,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_06dafa18);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar7 = FUN_03e1bcc4(&stack0x00000040,*(undefined8 *)puVar2), plVar15 = in_stack_00000050
          , (uVar7 & 1) != 0) {
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar14 = *in_stack_00000050;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03709cf4;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_015c2a80(in_stack_00000050,*(long *)puVar1,0);
LAB_03709cf4:
      uVar4 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4(uVar4,uVar4);
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x7b8))
                                 (plVar5,uVar4,0x30,*(undefined8 *)(*plVar5 + 0x7c0));
      if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar7 = FUN_031d212c(plVar5,0,0);
      if ((uVar7 & 1) != 0) {
        if ((param_4 & 1) == 0) {
          FUN_03e1bcc0(&stack0x00000040,*(undefined8 *)PTR_DAT_06e024d0);
          return (long *)0x0;
        }
        thunk_FUN_0159f088(PTR_DAT_06de45d0);
        uVar4 = thunk_FUN_0159f088(PTR_DAT_06de45d0);
        uVar8 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        uVar12 = thunk_FUN_0159f088(PTR_DAT_06e24bf8);
        uVar4 = FUN_02526be4(uVar4,uVar8,uVar12,0);
        thunk_FUN_0159f088(PTR_DAT_06e58c68);
        lVar14 = thunk_FUN_015d056c();
        if (lVar14 != 0) {
          FUN_02d77560(lVar14,uVar4,0);
          uVar4 = thunk_FUN_0159f088(PTR_DAT_06da13c8);
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(lVar14,uVar4);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
    }
    FUN_03e1bcc0(&stack0x00000040,*(undefined8 *)PTR_DAT_06e024d0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar15 = (long *)FUN_0160edfc(*(undefined8 *)PTR_DAT_06dba180,
                                   *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
    if (plVar15 == (long *)0x0) goto LAB_0370a138;
    if (0 < (int)plVar15[3]) {
      uVar7 = 0;
      plVar13 = plVar15 + 4;
      do {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar14 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                               (*(long *)(param_1 + 0x28),uVar7 & 0xffffffff,
                                *(undefined8 *)PTR_DAT_06d9a5a0), lVar14 == 0)) goto LAB_0370a138;
        lVar14 = FUN_03709914(lVar14,param_2,param_3,param_4 & 1,param_5 & 1,param_6);
        if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
          thunk_FUN_016466fc(*(long *)PTR_DAT_06dc26f0);
        }
        uVar10 = FUN_031d212c(lVar14,0,0);
        if ((uVar10 & 1) != 0) {
          if ((param_4 & 1) == 0) {
            return (long *)0x0;
          }
          lVar14 = *(long *)(param_1 + 0x28);
          if (lVar14 == 0) goto LAB_0370a138;
          uVar4 = thunk_FUN_0159f088(PTR_DAT_06d9a5a0);
          lVar14 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                             (lVar14,uVar7 & 0xffffffff,uVar4);
          if (lVar14 == 0) goto LAB_0370a138;
          plVar5 = *(long **)(lVar14 + 0x10);
          goto LAB_03709c38;
        }
        if ((lVar14 != 0) &&
           (lVar6 = thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0)) {
          uVar4 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar4,0);
        }
        if (*(uint *)(plVar15 + 3) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        *plVar13 = lVar14;
        thunk_FUN_01656ef8(plVar13,lVar14);
        uVar7 = uVar7 + 1;
        plVar13 = plVar13 + 1;
      } while ((long)uVar7 < (long)(int)plVar15[3]);
    }
    if (plVar5 == (long *)0x0) goto LAB_0370a138;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x938))(plVar5,plVar15,*(undefined8 *)(*plVar5 + 0x940))
    ;
  }
  puVar3 = PTR_DAT_06e35f88;
  puVar2 = PTR_DAT_06dea920;
  puVar1 = PTR_DAT_06dac478;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_043c2e98(&stack0x00000008,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_06dc3e98);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar7 = FUN_03e1bcc4(&stack0x00000020,*(undefined8 *)puVar2), plVar15 = in_stack_00000030
          , (uVar7 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar14 = *in_stack_00000030;
      uVar7 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03709f58;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_015c2a80(in_stack_00000030,*(long *)puVar3,0);
LAB_03709f58:
      plVar5 = (long *)(*(code *)*puVar9)(plVar15,plVar5,puVar9[1]);
    }
    FUN_03e1bcc0(&stack0x00000020,*(undefined8 *)puVar1);
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    return plVar5;
  }
  if (plVar5 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*plVar5 + 0x928))(plVar5,*(undefined8 *)(*plVar5 + 0x930));
    return plVar5;
  }
LAB_0370a138:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


