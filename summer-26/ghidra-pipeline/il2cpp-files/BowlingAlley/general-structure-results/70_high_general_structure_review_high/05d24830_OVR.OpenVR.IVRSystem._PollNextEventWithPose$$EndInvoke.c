/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$EndInvoke
ENTRY_POINT: 05d24830
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__EndInvoke(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long unaff_x19;
  long unaff_x20;
  undefined1 uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000014;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x4b0));
  thunk_FUN_032e1da0(PTR_DAT_0727b470);
  thunk_FUN_032e1da0(PTR_DAT_072b0380);
  thunk_FUN_032e1da0(PTR_DAT_07285958);
  thunk_FUN_032e1da0(PTR_DAT_072817a8);
  thunk_FUN_032e1da0(PTR_DAT_07279e90);
  thunk_FUN_032e1da0(PTR_DAT_07283da8);
  *(undefined1 *)(unaff_x20 + 0x3d8) = 1;
  puVar4 = PTR_DAT_072af398;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  uStack0000000000000014 = 0;
  if (*(char *)(unaff_x19 + 0x70) == '\0') {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x68) == 0) ||
     (plVar19 = *(long **)(unaff_x19 + 0x50), plVar19 == (long *)0x0)) goto LAB_05d24cd0;
  lVar9 = *plVar19;
  uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x68) + 0x14);
  uVar2 = *(undefined4 *)(unaff_x19 + 100);
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_072af398) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_05d24908;
      }
      uVar12 = uVar12 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_032937ac(plVar19,*(long *)PTR_DAT_072af398,0);
LAB_05d24908:
  uVar12 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,&stack0x00000028,puVar6[1]);
  if ((uVar12 & 1) == 0) {
    plVar19 = *(long **)(unaff_x19 + 0x48);
    in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar20 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_072b0378,&stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar7 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_072b0370,(long)&stack0x00000008 + 4);
    uVar20 = FUN_057ab61c(*(undefined8 *)PTR_DAT_072b0380,uVar20,uVar7,0);
    if (plVar19 == (long *)0x0) goto LAB_05d24cd0;
    (**(code **)(*plVar19 + 0x558))(plVar19,uVar20,*(undefined8 *)(*plVar19 + 0x560));
    if (*(char *)(unaff_x19 + 0x60) == '\0') {
      return;
    }
    lVar9 = *(long *)(unaff_x19 + 0x58);
LAB_05d24c80:
    uVar18 = 0;
    puVar11 = (undefined4 *)(unaff_x19 + 0x28);
    puVar14 = (undefined4 *)(unaff_x19 + 0x2c);
    puVar16 = (undefined4 *)(unaff_x19 + 0x30);
    puVar17 = (undefined4 *)(unaff_x19 + 0x34);
  }
  else {
    plVar19 = *(long **)(unaff_x19 + 0x50);
    if (plVar19 == (long *)0x0) goto LAB_05d24cd0;
    lVar10 = *plVar19;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    lVar9 = *(long *)puVar4;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_05d24a0c;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_032937ac(plVar19,lVar9,2);
LAB_05d24a0c:
    uVar12 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,puVar6[1]);
    lVar9 = *(long *)(unaff_x19 + 0x68);
    in_stack_00000018 = uVar12;
    if ((lVar9 == 0) || (plVar19 = *(long **)(unaff_x19 + 0x50), plVar19 == (long *)0x0))
    goto LAB_05d24cd0;
    lVar10 = *plVar19;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    uVar3 = *(undefined4 *)(lVar9 + 0x10);
    uVar20 = *(undefined8 *)(lVar9 + 0x18);
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar9 = *(long *)puVar4;
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_05d24a98;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_032937ac(plVar19,lVar9,1);
    uVar12 = in_stack_00000018 & 0xff;
LAB_05d24a98:
    bVar5 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,uVar3,uVar20,puVar6[1]);
    if ((uVar12 & 0xff) == 0) {
      uVar20 = *(undefined8 *)PTR_DAT_07285958;
    }
    else {
      uStack0000000000000014 = FUN_0464e950(&stack0x00000018,*(undefined8 *)PTR_DAT_072861d8);
      uVar20 = FUN_05935f30(&stack0x00000014,*(undefined8 *)PTR_DAT_0727b470,0);
    }
    plVar19 = *(long **)(unaff_x19 + 0x48);
    lVar9 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072794b0,5);
    in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar7 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_072b0378,&stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar8 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_072b0370,(long)&stack0x00000008 + 4);
    uVar7 = FUN_057ab61c(*(undefined8 *)PTR_DAT_072817a8,uVar7,uVar8,0);
    if (lVar9 == 0) goto LAB_05d24cd0;
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_05d24cd4:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    *(undefined8 *)(lVar9 + 0x20) = uVar7;
    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x20),uVar7);
    if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_05d24cd4;
    *(undefined8 *)(lVar9 + 0x28) = in_stack_00000028;
    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x28));
    if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_05d24cd4;
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_07283da8;
    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x30));
    if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_05d24cd4;
    *(undefined8 *)(lVar9 + 0x38) = uVar20;
    thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x38),uVar20);
    if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_05d24cd4;
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_07279e90;
    thunk_FUN_0333a630();
    uVar20 = FUN_057ab314(lVar9,0);
    if (plVar19 == (long *)0x0) goto LAB_05d24cd0;
    (**(code **)(*plVar19 + 0x558))(plVar19,uVar20,*(undefined8 *)(*plVar19 + 0x560));
    if (*(byte *)(unaff_x19 + 0x60) == (bVar5 & 1)) {
      return;
    }
    lVar9 = *(long *)(unaff_x19 + 0x58);
    if ((bVar5 & 1) == 0) goto LAB_05d24c80;
    puVar11 = (undefined4 *)(unaff_x19 + 0x38);
    puVar14 = (undefined4 *)(unaff_x19 + 0x3c);
    puVar16 = (undefined4 *)(unaff_x19 + 0x40);
    puVar17 = (undefined4 *)(unaff_x19 + 0x44);
    uVar18 = 1;
  }
  if (lVar9 != 0) {
    FUN_06bc3794(*puVar11,*puVar14,*puVar16,*puVar17,lVar9,0);
    *(undefined1 *)(unaff_x19 + 0x60) = uVar18;
    return;
  }
LAB_05d24cd0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


