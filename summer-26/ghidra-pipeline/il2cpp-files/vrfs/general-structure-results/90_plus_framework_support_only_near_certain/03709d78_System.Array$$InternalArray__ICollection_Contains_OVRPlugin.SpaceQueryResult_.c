/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03709d78
PROGRAM: vrfs-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  long unaff_x19;
  uint unaff_w21;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_03e1bcc0(&stack0x00000040,**(undefined8 **)(param_1 + 0x4d0));
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar4 = (long *)FUN_0160edfc(*(undefined8 *)PTR_DAT_06dba180,
                                  *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18));
    if (plVar4 == (long *)0x0) goto LAB_0370a138;
    if (0 < (int)plVar4[3]) {
      uVar14 = 0;
      plVar13 = plVar4 + 4;
      do {
        if ((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar5 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                              (*(long *)(unaff_x19 + 0x28),uVar14 & 0xffffffff,
                               *(undefined8 *)PTR_DAT_06d9a5a0), lVar5 == 0)) goto LAB_0370a138;
        lVar5 = FUN_03709914();
        if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
          thunk_FUN_016466fc(*(long *)PTR_DAT_06dc26f0);
        }
                    /* try { // try from 03709e20 to 03809e47 has its CatchHandler @ 03709fb0 */
        uVar6 = FUN_031d212c(lVar5,0,0);
        if ((uVar6 & 1) != 0) {
          if ((unaff_w21 & 1) == 0) {
            return (long *)0x0;
          }
          lVar5 = *(long *)(unaff_x19 + 0x28);
          if (lVar5 != 0) {
            uVar9 = thunk_FUN_0159f088(PTR_DAT_06d9a5a0);
            lVar5 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                              (lVar5,uVar14 & 0xffffffff,uVar9);
            if (lVar5 != 0) {
              plVar4 = *(long **)(lVar5 + 0x10);
              uVar9 = thunk_FUN_0159f088(PTR_DAT_06de45d0);
              if (plVar4 == (long *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar9 = thunk_FUN_0159f088(PTR_DAT_06de45d0);
                uVar11 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
              }
              uVar10 = thunk_FUN_0159f088(PTR_DAT_06e24bf8);
              uVar9 = FUN_02526be4(uVar9,uVar11,uVar10,0);
              thunk_FUN_0159f088(PTR_DAT_06e58c68);
              uVar11 = thunk_FUN_015d056c();
              FUN_011a9bc8();
              FUN_02d77560(uVar11,uVar9,0);
              uVar9 = thunk_FUN_0159f088(PTR_DAT_06da13c8);
                    /* WARNING: Subroutine does not return */
              FUN_0160ee7c(uVar11,uVar9);
            }
          }
          goto LAB_0370a138;
        }
        if ((lVar5 != 0) &&
           (lVar7 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
          uVar9 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar9,0);
        }
        if (*(uint *)(plVar4 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        *plVar13 = lVar5;
        thunk_FUN_01656ef8(plVar13,lVar5);
                    /* try { // try from 03709e7c to 03809ea7 has its CatchHandler @ 03709fac */
        uVar14 = uVar14 + 1;
        unaff_x19 = in_stack_00000000;
        plVar13 = plVar13 + 1;
      } while ((long)uVar14 < (long)(int)plVar4[3]);
    }
    if (unaff_x25 == (long *)0x0) goto LAB_0370a138;
    unaff_x25 = (long *)(**(code **)(*unaff_x25 + 0x938))();
  }
  puVar3 = PTR_DAT_06e35f88;
  puVar2 = PTR_DAT_06dea920;
  puVar1 = PTR_DAT_06dac478;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 03709ed8 to 03809eff has its CatchHandler @ 03709fb4 */
    FUN_043c2e98(&stack0x00000008,*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_06dc3e98);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar14 = FUN_03e1bcc4(&stack0x00000020,*(undefined8 *)puVar2), plVar4 = in_stack_00000030
          , (uVar14 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar5 = *in_stack_00000030;
      uVar14 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar14 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_03709f58;
          }
          uVar14 = uVar14 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)FUN_015c2a80(in_stack_00000030,*(long *)puVar3,0);
LAB_03709f58:
      unaff_x25 = (long *)(*(code *)*puVar8)(plVar4,unaff_x25,puVar8[1]);
    }
    FUN_03e1bcc0(&stack0x00000020,*(undefined8 *)puVar1);
  }
  if (*(char *)(unaff_x19 + 0x38) != '\0') {
    if (unaff_x25 == (long *)0x0) {
LAB_0370a138:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    unaff_x25 = (long *)(**(code **)(*unaff_x25 + 0x928))
                                  (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x930));
  }
  return unaff_x25;
}


