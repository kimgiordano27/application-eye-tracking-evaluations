/*
FUNCTION_NAME: Oculus.Interaction.Grab.GrabSurfaces.CylinderGrabSurface$$get_RelativePose
ENTRY_POINT: 03091520
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x030919ac) */

void Oculus_Interaction_Grab_GrabSurfaces_CylinderGrabSurface__get_RelativePose(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x20 + 0xc0) = param_1;
  thunk_FUN_01b4f09c();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar4 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x167);
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar4;
  thunk_FUN_01b4f09c();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar4 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x168);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar4;
  thunk_FUN_01b4f09c();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar3 = FUN_03091c5c(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar3;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_030415cc(uVar3,0x10,0);
  uVar3 = FUN_03041568(uVar4,1,0);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar3;
  lVar6 = 0xb8;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    lVar6 = 0xc0;
  }
  if (*(long *)(unaff_x20 + lVar6) != 0) {
    unaff_x21 = FUN_02edd6e8();
  }
  puVar2 = StringLiteral_9945;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x90);
  if (*(int *)(*(long *)StringLiteral_9945 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = (undefined8 *)(unaff_x20 + 0x108);
  uVar5 = FUN_01b05948(uVar4,unaff_x21,puVar1,*(undefined8 *)(*(long *)puVar2 + 0xb8));
  if ((uVar5 & 1) == 0) {
    uVar4 = FUN_01b47fd0(*(undefined8 *)
                          Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                         ,0x11);
    *puVar1 = uVar4;
    thunk_FUN_01b4f09c(puVar1);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar2;
    }
    **(undefined8 **)(lVar6 + 0xb8) = 0;
  }
  puVar2 = StringLiteral_3414;
  if (*(int *)(*(long *)StringLiteral_3414 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_030875f4(0);
  if (DAT_03ff17d3 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_3414);
    DAT_03ff17d3 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)puVar2;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20);
  uVar7 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_5617);
  FUN_02fa26b0(uVar7,uVar4,uVar9,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar7;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x20 + 0x60),uVar7);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar6 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),5);
  plVar8 = (long *)(unaff_x20 + 0x48);
  *plVar8 = lVar6;
  thunk_FUN_01b4f09c(plVar8);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar4 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),1);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar4;
  thunk_FUN_01b4f09c();
  if (*plVar8 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0xc);
    *plVar8 = lVar6;
    thunk_FUN_01b4f09c(plVar8);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar4 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),7);
    lVar6 = FUN_02edd6e8(uVar7,uVar4,0);
    *plVar8 = lVar6;
    thunk_FUN_01b4f09c(plVar8);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar6 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x10);
  plVar8 = (long *)(unaff_x20 + 0x38);
  *plVar8 = lVar6;
  thunk_FUN_01b4f09c(plVar8);
  if (*plVar8 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x14);
    *plVar8 = lVar6;
    thunk_FUN_01b4f09c(plVar8);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar4 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
  thunk_FUN_01b4f09c();
  uVar5 = thunk_FUN_02ee6388(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)StringLiteral_12629,0)
  ;
  if (((uVar5 & 1) == 0) &&
     (uVar5 = thunk_FUN_02ee6388(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)StringLiteral_8869
                                 ,0), (uVar5 & 1) == 0)) {
    uVar4 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar5 = FUN_02ee66dc(*(long *)(unaff_x20 + 0x58),*(undefined8 *)StringLiteral_12524,0);
      if ((uVar5 & 1) != 0) goto LAB_030918a8;
      uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar5 = thunk_FUN_02ee6388(uVar4,*(undefined8 *)StringLiteral_12628,0);
    if (((uVar5 & 1) == 0) &&
       (uVar5 = thunk_FUN_02ee6388(*(undefined8 *)(unaff_x20 + 0x58),
                                   *(undefined8 *)StringLiteral_12625,0), (uVar5 & 1) == 0)) {
      uVar5 = thunk_FUN_02ee6388(*(undefined8 *)(unaff_x20 + 0x58),
                                 *(undefined8 *)StringLiteral_12627,0);
      if ((uVar5 & 1) == 0) {
        uVar5 = thunk_FUN_02ee6388(*(undefined8 *)(unaff_x20 + 0x58),
                                   *(undefined8 *)StringLiteral_12623,0);
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)StringLiteral_12624;
          thunk_FUN_01b4f09c();
        }
      }
      else {
        *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)StringLiteral_12626;
        thunk_FUN_01b4f09c();
      }
      goto LAB_030918c0;
    }
  }
LAB_030918a8:
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)StringLiteral_12622;
  thunk_FUN_01b4f09c();
LAB_030918c0:
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    uVar4 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),10);
    *(undefined8 *)(unaff_x20 + 200) = uVar4;
    thunk_FUN_01b4f09c();
    FUN_03091cbc();
    if (*(char *)(unaff_x20 + 0xec) != '\0') {
      FUN_03090f8c();
      *(undefined8 *)(unaff_x20 + 0x18) = 0;
    }
    *(undefined1 *)(unaff_x20 + 0xa0) = 1;
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_01b18c7c();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


