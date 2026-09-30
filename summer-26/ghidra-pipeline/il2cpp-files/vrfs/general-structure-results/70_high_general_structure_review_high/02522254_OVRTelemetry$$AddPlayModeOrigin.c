/*
FUNCTION_NAME: OVRTelemetry$$AddPlayModeOrigin
ENTRY_POINT: 02522254
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetry__AddPlayModeOrigin(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  long *in_x9;
  long *in_x10;
  long unaff_x20;
  long lVar9;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  
  while( true ) {
    iVar7 = (int)param_1;
    lVar9 = *in_x10;
    if (lVar9 != 0) {
      lVar4 = thunk_FUN_015d0480(lVar9,*(undefined8 *)(*in_x9 + 0x40));
      if (lVar4 == 0) goto LAB_025224c8;
      iVar7 = (int)in_x9[3];
    }
    if (iVar7 == 0) break;
    *unaff_x24 = lVar9;
    thunk_FUN_01656ef8(unaff_x24,lVar9);
    puVar1 = PTR_DAT_06e09148;
    if ((unaff_x20 != 0) &&
       (lVar9 = thunk_FUN_015d0480(unaff_x20,*(undefined8 *)(*in_stack_00000028 + 0x40)), lVar9 == 0
       )) {
LAB_025224c8:
      uVar3 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar3,0);
    }
    if (*(uint *)(in_stack_00000028 + 3) < 2) break;
    *in_stack_00000020 = unaff_x20;
    thunk_FUN_01656ef8(in_stack_00000020,unaff_x20);
    lVar9 = FUN_02520b3c(unaff_x27,unaff_x26);
    unaff_x27 = unaff_x26;
    while( true ) {
      uVar8 = (uint)unaff_x22[3];
      if (uVar8 < 2) goto LAB_025224c4;
      lVar4 = *in_stack_00000010;
      if (lVar4 != 0) {
        lVar5 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x22 + 0x40));
        if (lVar5 == 0) goto LAB_025224c8;
        uVar8 = (uint)unaff_x22[3];
      }
      if (uVar8 == 0) goto LAB_025224c4;
      *unaff_x25 = lVar4;
      thunk_FUN_01656ef8(unaff_x25,lVar4);
      if (lVar9 == 0) goto LAB_025224d4;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_025224c4;
      lVar4 = *(long *)(lVar9 + 0x20);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0))
      goto LAB_025224c8;
      if (*(uint *)(unaff_x22 + 3) < 2) goto LAB_025224c4;
      *in_stack_00000010 = lVar4;
      thunk_FUN_01656ef8(in_stack_00000010,lVar4);
      uVar8 = (uint)unaff_x23[3];
      if (uVar8 < 2) goto LAB_025224c4;
      lVar4 = *unaff_x28;
      if (lVar4 != 0) {
        lVar5 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x23 + 0x40));
        if (lVar5 == 0) goto LAB_025224c8;
        uVar8 = (uint)unaff_x23[3];
      }
      if (uVar8 == 0) goto LAB_025224c4;
      *in_stack_00000018 = lVar4;
      thunk_FUN_01656ef8(in_stack_00000018,lVar4);
      if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_025224c4;
      lVar4 = *(long *)(lVar9 + 0x28);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0))
      goto LAB_025224c8;
      if (*(uint *)(unaff_x23 + 3) < 2) goto LAB_025224c4;
      *unaff_x28 = lVar4;
      thunk_FUN_01656ef8();
      if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_025224c4;
      unaff_x26 = *(undefined8 *)(lVar9 + 0x28);
      unaff_w29 = unaff_w29 + 1;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar2 = FUN_0251f2a4(unaff_x26,0);
      if ((uVar2 & 1) == 0) {
        if ((int)unaff_x23[3] == 0) goto LAB_025224c4;
        lVar9 = *in_stack_00000018;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar2 = FUN_0251f2a4(lVar9,1);
        if ((uVar2 & 1) != 0) {
          thunk_FUN_0159f088(PTR_DAT_06dcae38);
          uVar3 = thunk_FUN_015d056c();
          FUN_011a9bc8();
          uVar6 = thunk_FUN_0159f088(PTR_DAT_06dcc698);
          FUN_028faa04(uVar3,uVar6,0);
          uVar6 = thunk_FUN_0159f088(PTR_DAT_06dcc440);
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar3,uVar6);
        }
        if (((int)in_stack_00000028[3] == 0) || ((int)in_stack_00000028[3] == 1)) goto LAB_025224c4;
        if (unaff_x22 == (long *)0x0) goto LAB_025224d4;
        if ((int)unaff_x22[3] != 0) {
          lVar9 = *unaff_x24;
          lVar5 = *unaff_x25;
          lVar4 = *in_stack_00000020;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar3 = FUN_0251a30c(lVar4,lVar5);
          FUN_02523024(in_stack_00000008,lVar9,uVar3);
          return;
        }
        goto LAB_025224c4;
      }
      if (1 < unaff_w29) break;
      lVar9 = FUN_02520b3c(unaff_x27,unaff_x26);
      unaff_x27 = unaff_x26;
      if (unaff_x22 == (long *)0x0) goto LAB_025224d4;
    }
    if (((int)in_stack_00000028[3] == 0) || ((int)in_stack_00000028[3] == 1)) break;
    if (unaff_x22 == (long *)0x0) {
LAB_025224d4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if ((int)unaff_x22[3] == 0) break;
    lVar4 = *unaff_x24;
    lVar9 = *unaff_x25;
    lVar5 = *in_stack_00000020;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar3 = FUN_0251a30c(lVar5,lVar9);
    unaff_x20 = FUN_02523024(in_stack_00000008,lVar4,uVar3);
    param_1 = in_stack_00000028[3];
    in_x9 = in_stack_00000028;
    in_x10 = in_stack_00000020;
    if ((uint)param_1 < 2) break;
  }
LAB_025224c4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


