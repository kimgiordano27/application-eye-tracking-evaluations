/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Quatf>
ENTRY_POINT: 03709a98
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array__InternalArray__ICollection_Contains<OVRPlugin_Quatf>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 uVar13;
  ulong unaff_x21;
  long *plVar14;
  long unaff_x23;
  long unaff_x24;
  long *plVar15;
  uint unaff_w28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  lVar4 = thunk_FUN_015d056c();
  if (lVar4 == 0) goto LAB_0370a138;
  FUN_03776e90();
  plVar5 = (long *)(**(code **)(unaff_x24 + 0x18))
                             (*(undefined8 *)(unaff_x24 + 0x40),lVar4,
                              *(undefined8 *)(unaff_x24 + 0x28));
  uVar6 = System_Collections_Generic_EqualityComparer<JobHandle>__System_Collections_IEqualityComparer_Equals
                    (plVar5,0,0);
  puVar1 = PTR_DAT_06ddb6d0;
  if ((uVar6 & 1) != 0) {
    if ((unaff_x21 & 1) == 0) {
      return (long *)0x0;
    }
    uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar7 = thunk_FUN_0159f088(PTR_DAT_06e357b8);
    uVar8 = thunk_FUN_0159f088(PTR_DAT_06e24bf8);
    uVar7 = FUN_02526be4(uVar7,uVar13,uVar8,0);
    thunk_FUN_0159f088(PTR_DAT_06e511c8);
    uVar8 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    FUN_036185b8(uVar8,uVar7,0);
LAB_0370a060:
    uVar7 = thunk_FUN_0159f088(PTR_DAT_06da13c8);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar8,uVar7);
  }
  plVar15 = *(long **)(unaff_x19 + 0x10);
  if (plVar15 == (long *)0x0) goto LAB_0370a138;
  lVar4 = *plVar15;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar6 != 0) {
    piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06ddb6d0) {
        puVar9 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03709bac;
      }
      uVar6 = uVar6 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar6 != 0);
  }
  puVar9 = (undefined8 *)FUN_015c2a80(plVar15,*(long *)PTR_DAT_06ddb6d0,0);
LAB_03709bac:
  uVar7 = (*(code *)*puVar9)(plVar15,puVar9[1]);
  if (unaff_x23 == 0) {
    if (plVar5 == (long *)0x0) goto LAB_0370a138;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x318))
                               (plVar5,uVar7,0,unaff_w28 & 1,*(undefined8 *)(*plVar5 + 800));
  }
  else {
    plVar5 = (long *)(**(code **)(unaff_x23 + 0x18))
                               (*(undefined8 *)(unaff_x23 + 0x40),plVar5,uVar7,unaff_w28 & 1,
                                *(undefined8 *)(unaff_x23 + 0x28));
  }
  if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar6 = FUN_031d212c(plVar5,0,0);
  puVar2 = PTR_DAT_06e4f188;
  if ((uVar6 & 1) != 0) {
    if ((unaff_x21 & 1) == 0) {
      return (long *)0x0;
    }
    plVar5 = *(long **)(unaff_x19 + 0x10);
LAB_03709c38:
    uVar7 = thunk_FUN_0159f088(PTR_DAT_06de45d0);
    if (plVar5 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar7 = thunk_FUN_0159f088(PTR_DAT_06de45d0);
      uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    }
    uVar13 = thunk_FUN_0159f088(PTR_DAT_06e24bf8);
    uVar7 = FUN_02526be4(uVar7,uVar8,uVar13,0);
    thunk_FUN_0159f088(PTR_DAT_06e58c68);
    uVar8 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    FUN_02d77560(uVar8,uVar7,0);
    goto LAB_0370a060;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_043c2e98(&stack0x00000008,*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_06dafa18);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar6 = FUN_03e1bcc4(&stack0x00000040,*(undefined8 *)puVar2), plVar15 = in_stack_00000050
          , (uVar6 & 1) != 0) {
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar4 = *in_stack_00000050;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03709cf4;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_015c2a80(in_stack_00000050,*(long *)puVar1,0);
LAB_03709cf4:
      uVar7 = (*(code *)*puVar9)(plVar15,puVar9[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4(uVar7,uVar7);
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x7b8))
                                 (plVar5,uVar7,0x30,*(undefined8 *)(*plVar5 + 0x7c0));
      if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar6 = FUN_031d212c(plVar5,0,0);
      if ((uVar6 & 1) != 0) {
        if ((unaff_x21 & 1) == 0) {
          FUN_03e1bcc0(&stack0x00000040,*(undefined8 *)PTR_DAT_06e024d0);
          return (long *)0x0;
        }
        thunk_FUN_0159f088(PTR_DAT_06de45d0);
        uVar7 = thunk_FUN_0159f088(PTR_DAT_06de45d0);
        uVar8 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        uVar13 = thunk_FUN_0159f088(PTR_DAT_06e24bf8);
        uVar7 = FUN_02526be4(uVar7,uVar8,uVar13,0);
        thunk_FUN_0159f088(PTR_DAT_06e58c68);
        lVar4 = thunk_FUN_015d056c();
        if (lVar4 != 0) {
          FUN_02d77560(lVar4,uVar7,0);
          uVar7 = thunk_FUN_0159f088(PTR_DAT_06da13c8);
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(lVar4,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
    }
    FUN_03e1bcc0(&stack0x00000040,*(undefined8 *)PTR_DAT_06e024d0);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar15 = (long *)FUN_0160edfc(*(undefined8 *)PTR_DAT_06dba180,
                                   *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    if (plVar15 == (long *)0x0) goto LAB_0370a138;
    if (0 < (int)plVar15[3]) {
      uVar6 = 0;
      plVar14 = plVar15 + 4;
      do {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar4 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                              (*(long *)(unaff_x19 + 0x28),uVar6 & 0xffffffff,
                               *(undefined8 *)PTR_DAT_06d9a5a0), lVar4 == 0)) goto LAB_0370a138;
        lVar4 = FUN_03709914();
        if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
          thunk_FUN_016466fc(*(long *)PTR_DAT_06dc26f0);
        }
        uVar10 = FUN_031d212c(lVar4,0,0);
        if ((uVar10 & 1) != 0) {
          if ((unaff_x21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar4 = *(long *)(unaff_x19 + 0x28);
          if (lVar4 == 0) goto LAB_0370a138;
          uVar7 = thunk_FUN_0159f088(PTR_DAT_06d9a5a0);
          lVar4 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                            (lVar4,uVar6 & 0xffffffff,uVar7);
          if (lVar4 == 0) goto LAB_0370a138;
          plVar5 = *(long **)(lVar4 + 0x10);
          goto LAB_03709c38;
        }
        if ((lVar4 != 0) &&
           (lVar11 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar15 + 0x40)), lVar11 == 0)) {
          uVar7 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar7,0);
        }
        if (*(uint *)(plVar15 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        *plVar14 = lVar4;
        thunk_FUN_01656ef8(plVar14,lVar4);
        uVar6 = uVar6 + 1;
        plVar14 = plVar14 + 1;
      } while ((long)uVar6 < (long)(int)plVar15[3]);
    }
    if (plVar5 == (long *)0x0) goto LAB_0370a138;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x938))(plVar5,plVar15,*(undefined8 *)(*plVar5 + 0x940))
    ;
  }
  puVar3 = PTR_DAT_06e35f88;
  puVar2 = PTR_DAT_06dea920;
  puVar1 = PTR_DAT_06dac478;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_043c2e98(&stack0x00000008,*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_06dc3e98);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar6 = FUN_03e1bcc4(&stack0x00000020,*(undefined8 *)puVar2), plVar15 = in_stack_00000030
          , (uVar6 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar4 = *in_stack_00000030;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03709f58;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_015c2a80(in_stack_00000030,*(long *)puVar3,0);
LAB_03709f58:
      plVar5 = (long *)(*(code *)*puVar9)(plVar15,plVar5,puVar9[1]);
    }
    FUN_03e1bcc0(&stack0x00000020,*(undefined8 *)puVar1);
  }
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
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


