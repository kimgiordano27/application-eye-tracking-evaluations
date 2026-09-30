/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03709c04
PROGRAM: vrfs-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceDiscoveryResult>
                 (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  ulong unaff_x21;
  long *plVar14;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  if (*(int *)(**(long **)(param_1 + 0x6f0) + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar4 = FUN_031d212c(param_2,0,0);
  puVar1 = PTR_DAT_06e4f188;
  if ((uVar4 & 1) != 0) {
    if ((unaff_x21 & 1) == 0) {
      return (long *)0x0;
    }
    plVar13 = *(long **)(unaff_x19 + 0x10);
LAB_03709c38:
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06de45d0);
    if (plVar13 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar5 = thunk_FUN_0159f088(PTR_DAT_06de45d0);
      uVar10 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    }
    uVar9 = thunk_FUN_0159f088(PTR_DAT_06e24bf8);
    uVar5 = FUN_02526be4(uVar5,uVar10,uVar9,0);
    thunk_FUN_0159f088(PTR_DAT_06e58c68);
    uVar10 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    FUN_02d77560(uVar10,uVar5,0);
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06da13c8);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar10,uVar5);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_043c2e98(&stack0x00000008,*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_06dafa18);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar4 = FUN_03e1bcc4(&stack0x00000040,*(undefined8 *)puVar1), plVar13 = in_stack_00000050
          , (uVar4 & 1) != 0) {
      if (in_stack_00000050 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar11 = *in_stack_00000050;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x29) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03709cf4;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_015c2a80(in_stack_00000050,*unaff_x29,0);
LAB_03709cf4:
      uVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4(uVar5,uVar5);
      }
      param_2 = (long *)(**(code **)(*param_2 + 0x7b8))
                                  (param_2,uVar5,0x30,*(undefined8 *)(*param_2 + 0x7c0));
      if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar4 = FUN_031d212c(param_2,0,0);
      if ((uVar4 & 1) != 0) {
        if ((unaff_x21 & 1) == 0) {
                    /* try { // try from 03709d60 to 03809e1f has its CatchHandler @ 03709d60
                       catch() { ... } // from try @ 03709d60 with catch @ 03709d60
                       catch() { ... } // from try @ 03709f00 with catch @ 03709d60
                       catch() { ... } // from try @ 03709f94 with catch @ 03709d60
                       catch() { ... } // from try @ 03709f9c with catch @ 03709d60
                       catch() { ... } // from try @ 0370a040 with catch @ 03709d60 */
          FUN_03e1bcc0(&stack0x00000040,*(undefined8 *)PTR_DAT_06e024d0);
          return (long *)0x0;
        }
        thunk_FUN_0159f088(PTR_DAT_06de45d0);
        uVar5 = thunk_FUN_0159f088(PTR_DAT_06de45d0);
        uVar10 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        uVar9 = thunk_FUN_0159f088(PTR_DAT_06e24bf8);
        uVar5 = FUN_02526be4(uVar5,uVar10,uVar9,0);
        thunk_FUN_0159f088(PTR_DAT_06e58c68);
        lVar11 = thunk_FUN_015d056c();
        if (lVar11 != 0) {
          FUN_02d77560(lVar11,uVar5,0);
          uVar5 = thunk_FUN_0159f088(PTR_DAT_06da13c8);
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(lVar11,uVar5);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
    }
    FUN_03e1bcc0(&stack0x00000040,*(undefined8 *)PTR_DAT_06e024d0);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar13 = (long *)FUN_0160edfc(*(undefined8 *)PTR_DAT_06dba180,
                                   *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    if (plVar13 == (long *)0x0) goto LAB_0370a138;
    if (0 < (int)plVar13[3]) {
      uVar4 = 0;
      plVar14 = plVar13 + 4;
      do {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar11 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                               (*(long *)(unaff_x19 + 0x28),uVar4 & 0xffffffff,
                                *(undefined8 *)PTR_DAT_06d9a5a0), lVar11 == 0)) goto LAB_0370a138;
        lVar11 = FUN_03709914();
        if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
          thunk_FUN_016466fc(*(long *)PTR_DAT_06dc26f0);
        }
        uVar7 = FUN_031d212c(lVar11,0,0);
        if ((uVar7 & 1) != 0) {
          if ((unaff_x21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar11 = *(long *)(unaff_x19 + 0x28);
          if (lVar11 == 0) goto LAB_0370a138;
          uVar5 = thunk_FUN_0159f088(PTR_DAT_06d9a5a0);
          lVar11 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                             (lVar11,uVar4 & 0xffffffff,uVar5);
          if (lVar11 == 0) goto LAB_0370a138;
          plVar13 = *(long **)(lVar11 + 0x10);
          goto LAB_03709c38;
        }
        if ((lVar11 != 0) &&
           (lVar8 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0)) {
          uVar5 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar5,0);
        }
        if (*(uint *)(plVar13 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        *plVar14 = lVar11;
        thunk_FUN_01656ef8(plVar14,lVar11);
        uVar4 = uVar4 + 1;
        plVar14 = plVar14 + 1;
      } while ((long)uVar4 < (long)(int)plVar13[3]);
    }
    if (param_2 == (long *)0x0) goto LAB_0370a138;
    param_2 = (long *)(**(code **)(*param_2 + 0x938))
                                (param_2,plVar13,*(undefined8 *)(*param_2 + 0x940));
  }
  puVar3 = PTR_DAT_06e35f88;
  puVar2 = PTR_DAT_06dea920;
  puVar1 = PTR_DAT_06dac478;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_043c2e98(&stack0x00000008,*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_06dc3e98);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar4 = FUN_03e1bcc4(&stack0x00000020,*(undefined8 *)puVar2), plVar13 = in_stack_00000030
          , (uVar4 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar11 = *in_stack_00000030;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03709f58;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_015c2a80(in_stack_00000030,*(long *)puVar3,0);
LAB_03709f58:
      param_2 = (long *)(*(code *)*puVar6)(plVar13,param_2,puVar6[1]);
    }
    FUN_03e1bcc0(&stack0x00000020,*(undefined8 *)puVar1);
  }
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    return param_2;
  }
  if (param_2 != (long *)0x0) {
    plVar13 = (long *)(**(code **)(*param_2 + 0x928))(param_2,*(undefined8 *)(*param_2 + 0x930));
    return plVar13;
  }
LAB_0370a138:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


