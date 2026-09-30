/*
FUNCTION_NAME: OVRTelemetry$$GetPlayModeOrigin
ENTRY_POINT: 025221cc
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetry__GetPlayModeOrigin(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long *unaff_x19;
  long lVar7;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  
code_r0x025221cc:
  lVar2 = FUN_02520b3c(param_1,unaff_x26);
  param_1 = unaff_x26;
  if (unaff_x22 == (long *)0x0) {
LAB_025224d4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
LAB_025222e4:
  uVar6 = (uint)unaff_x22[3];
  if (1 < uVar6) {
    lVar7 = *in_stack_00000010;
    if (lVar7 != 0) {
      lVar4 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*unaff_x22 + 0x40));
      if (lVar4 == 0) goto LAB_025224c8;
      uVar6 = (uint)unaff_x22[3];
    }
    if (uVar6 == 0) goto LAB_025224c4;
    *unaff_x19 = lVar7;
    thunk_FUN_01656ef8(unaff_x19,lVar7);
    if (lVar2 == 0) goto LAB_025224d4;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_025224c4;
    lVar7 = *(long *)(lVar2 + 0x20);
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0)) {
LAB_025224c8:
      uVar3 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar3,0);
    }
    if (*(uint *)(unaff_x22 + 3) < 2) goto LAB_025224c4;
    *in_stack_00000010 = lVar7;
    thunk_FUN_01656ef8(in_stack_00000010,lVar7);
    uVar6 = (uint)unaff_x23[3];
    if (uVar6 < 2) goto LAB_025224c4;
    lVar7 = *unaff_x28;
    if (lVar7 != 0) {
      lVar4 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*unaff_x23 + 0x40));
      if (lVar4 == 0) goto LAB_025224c8;
      uVar6 = (uint)unaff_x23[3];
    }
    if (uVar6 == 0) goto LAB_025224c4;
    *in_stack_00000018 = lVar7;
    thunk_FUN_01656ef8(in_stack_00000018,lVar7);
    if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_025224c4;
    lVar7 = *(long *)(lVar2 + 0x28);
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0))
    goto LAB_025224c8;
    if (*(uint *)(unaff_x23 + 3) < 2) goto LAB_025224c4;
    *unaff_x28 = lVar7;
    thunk_FUN_01656ef8();
    if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_025224c4;
    unaff_x26 = *(undefined8 *)(lVar2 + 0x28);
    unaff_w29 = unaff_w29 + 1;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar1 = FUN_0251f2a4(unaff_x26,0);
    if ((uVar1 & 1) != 0) {
      if (unaff_w29 < 2) goto code_r0x025221cc;
      if (((int)in_stack_00000028[3] == 0) || ((int)in_stack_00000028[3] == 1)) goto LAB_025224c4;
      if (unaff_x22 == (long *)0x0) goto LAB_025224d4;
      if ((int)unaff_x22[3] == 0) goto LAB_025224c4;
      lVar7 = *unaff_x24;
      lVar2 = *unaff_x19;
      lVar4 = *in_stack_00000020;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar3 = FUN_0251a30c(lVar4,lVar2);
      lVar2 = FUN_02523024(in_stack_00000008,lVar7,uVar3);
      uVar6 = (uint)in_stack_00000028[3];
      if (uVar6 < 2) goto LAB_025224c4;
      lVar7 = *in_stack_00000020;
      if (lVar7 != 0) {
        lVar4 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*in_stack_00000028 + 0x40));
        if (lVar4 == 0) goto LAB_025224c8;
        uVar6 = (uint)in_stack_00000028[3];
      }
      if (uVar6 == 0) goto LAB_025224c4;
      *unaff_x24 = lVar7;
      thunk_FUN_01656ef8(unaff_x24,lVar7);
      unaff_x25 = (long *)PTR_DAT_06e09148;
      if ((lVar2 != 0) &&
         (lVar7 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*in_stack_00000028 + 0x40)), lVar7 == 0))
      goto LAB_025224c8;
      if (*(uint *)(in_stack_00000028 + 3) < 2) goto LAB_025224c4;
      *in_stack_00000020 = lVar2;
      thunk_FUN_01656ef8(in_stack_00000020,lVar2);
      lVar2 = FUN_02520b3c(param_1,unaff_x26);
      param_1 = unaff_x26;
      goto LAB_025222e4;
    }
    if ((int)unaff_x23[3] == 0) goto LAB_025224c4;
    lVar2 = *in_stack_00000018;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar1 = FUN_0251f2a4(lVar2,1);
    if ((uVar1 & 1) != 0) {
      thunk_FUN_0159f088(PTR_DAT_06dcae38);
      uVar3 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar5 = thunk_FUN_0159f088(PTR_DAT_06dcc698);
      FUN_028faa04(uVar3,uVar5,0);
      uVar5 = thunk_FUN_0159f088(PTR_DAT_06dcc440);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar3,uVar5);
    }
    if (((int)in_stack_00000028[3] != 0) && ((int)in_stack_00000028[3] != 1)) {
      if (unaff_x22 == (long *)0x0) goto LAB_025224d4;
      if ((int)unaff_x22[3] != 0) {
        lVar2 = *unaff_x24;
        lVar4 = *unaff_x19;
        lVar7 = *in_stack_00000020;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar3 = FUN_0251a30c(lVar7,lVar4);
        FUN_02523024(in_stack_00000008,lVar2,uVar3);
        return;
      }
    }
  }
LAB_025224c4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


