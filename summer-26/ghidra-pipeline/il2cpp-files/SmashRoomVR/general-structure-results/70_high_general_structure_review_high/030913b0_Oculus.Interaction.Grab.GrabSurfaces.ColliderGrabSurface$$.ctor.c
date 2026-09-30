/*
FUNCTION_NAME: Oculus.Interaction.Grab.GrabSurfaces.ColliderGrabSurface$$.ctor
ENTRY_POINT: 030913b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x030919ac) */

void Oculus_Interaction_Grab_GrabSurfaces_ColliderGrabSurface___ctor(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 uVar9;
  long unaff_x20;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  char cStack000000000000000c;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(StringLiteral_12625);
  thunk_FUN_01ad9084(StringLiteral_12626);
  thunk_FUN_01ad9084(StringLiteral_12627);
  thunk_FUN_01ad9084(StringLiteral_12524);
  thunk_FUN_01ad9084(StringLiteral_8869);
  thunk_FUN_01ad9084(StringLiteral_12628);
  thunk_FUN_01ad9084(StringLiteral_12629);
  *(undefined1 *)(unaff_x19 + 0x797) = 1;
  if (*(char *)(unaff_x20 + 0xa0) != '\0') {
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0xa8);
  cStack000000000000000c = '\0';
  FUN_030a2d7c(uVar9,&stack0x0000000c,0);
  puVar2 = StringLiteral_9944;
  if (*(char *)(unaff_x20 + 0xa0) != '\0') goto LAB_0309190c;
  if (*(int *)(*(long *)StringLiteral_9944 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_030874b4();
  if ((uVar5 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_5615);
    uVar9 = thunk_FUN_01afaadc();
    uVar7 = thunk_FUN_01ad9084(StringLiteral_12630);
    FUN_02f9dadc(uVar9,uVar7,0);
    uVar7 = thunk_FUN_01ad9084(StringLiteral_12631);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar9,uVar7);
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_01b05a88(0);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar6 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x59);
  plVar10 = (long *)(unaff_x20 + 0x90);
  *plVar10 = lVar6;
  thunk_FUN_01b4f09c(plVar10);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar6 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x58);
  plVar11 = (long *)(unaff_x20 + 0x98);
  *plVar11 = lVar6;
  thunk_FUN_01b4f09c(plVar11);
  if (*plVar10 == 0) {
LAB_030914ec:
    uVar7 = 0;
  }
  else {
    FUN_03090f8c();
    if (*plVar11 == 0) goto LAB_030914ec;
    uVar7 = FUN_02edd6e8(0,*plVar11,0);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar8 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x129);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar8;
  thunk_FUN_01b4f09c();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar8 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x12a);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar8;
  thunk_FUN_01b4f09c();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar8 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x167);
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar8;
  thunk_FUN_01b4f09c();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar8 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x168);
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar8;
  thunk_FUN_01b4f09c();
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar4 = FUN_03091c5c(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar4;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_030415cc(uVar4,0x10,0);
  uVar4 = FUN_03041568(uVar8,1,0);
  *(undefined4 *)(unaff_x20 + 0xe8) = uVar4;
  lVar6 = 0xb8;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    lVar6 = 0xc0;
  }
  if (*(long *)(unaff_x20 + lVar6) != 0) {
    uVar7 = FUN_02edd6e8(uVar7,*(long *)(unaff_x20 + lVar6),0);
  }
  puVar3 = StringLiteral_9945;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x90);
  if (*(int *)(*(long *)StringLiteral_9945 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar1 = (undefined8 *)(unaff_x20 + 0x108);
  uVar5 = FUN_01b05948(uVar8,uVar7,puVar1,*(undefined8 *)(*(long *)puVar3 + 0xb8));
  if ((uVar5 & 1) == 0) {
    uVar7 = FUN_01b47fd0(*(undefined8 *)
                          Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                         ,0x11);
    *puVar1 = uVar7;
    thunk_FUN_01b4f09c(puVar1);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar3;
    }
    **(undefined8 **)(lVar6 + 0xb8) = 0;
  }
  puVar2 = StringLiteral_3414;
  if (*(int *)(*(long *)StringLiteral_3414 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar7 = FUN_030875f4(0);
  if (DAT_03ff17d3 == '\0') {
    thunk_FUN_01ad9084(StringLiteral_3414);
    DAT_03ff17d3 = '\x01';
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)puVar2;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20);
  uVar8 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_5617);
  FUN_02fa26b0(uVar8,uVar7,uVar12,0);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar8;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x20 + 0x60),uVar8);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar6 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),5);
  plVar10 = (long *)(unaff_x20 + 0x48);
  *plVar10 = lVar6;
  thunk_FUN_01b4f09c(plVar10);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar7 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),1);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar7;
  thunk_FUN_01b4f09c();
  if (*plVar10 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0xc);
    *plVar10 = lVar6;
    thunk_FUN_01b4f09c(plVar10);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar7 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),7);
    lVar6 = FUN_02edd6e8(uVar8,uVar7,0);
    *plVar10 = lVar6;
    thunk_FUN_01b4f09c(plVar10);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar6 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x10);
  plVar10 = (long *)(unaff_x20 + 0x38);
  *plVar10 = lVar6;
  thunk_FUN_01b4f09c(plVar10);
  if (*plVar10 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar6 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0x14);
    *plVar10 = lVar6;
    thunk_FUN_01b4f09c(plVar10);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar7 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),0xd);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar7;
  thunk_FUN_01b4f09c();
  uVar5 = thunk_FUN_02ee6388(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)StringLiteral_12629,0)
  ;
  if (((uVar5 & 1) == 0) &&
     (uVar5 = thunk_FUN_02ee6388(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)StringLiteral_8869
                                 ,0), (uVar5 & 1) == 0)) {
    uVar7 = 0;
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar5 = FUN_02ee66dc(*(long *)(unaff_x20 + 0x58),*(undefined8 *)StringLiteral_12524,0);
      if ((uVar5 & 1) != 0) goto LAB_030918a8;
      uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
    }
    uVar5 = thunk_FUN_02ee6388(uVar7,*(undefined8 *)StringLiteral_12628,0);
    if (((uVar5 & 1) != 0) ||
       (uVar5 = thunk_FUN_02ee6388(*(undefined8 *)(unaff_x20 + 0x58),
                                   *(undefined8 *)StringLiteral_12625,0), (uVar5 & 1) != 0))
    goto LAB_030918a8;
    uVar5 = thunk_FUN_02ee6388(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)StringLiteral_12627,
                               0);
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
  }
  else {
LAB_030918a8:
    *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)StringLiteral_12622;
    thunk_FUN_01b4f09c();
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar7 = FUN_03091bcc(*(long *)(unaff_x20 + 0x10),10);
  *(undefined8 *)(unaff_x20 + 200) = uVar7;
  thunk_FUN_01b4f09c();
  FUN_03091cbc();
  if (*(char *)(unaff_x20 + 0xec) != '\0') {
    FUN_03090f8c();
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
  }
  *(undefined1 *)(unaff_x20 + 0xa0) = 1;
LAB_0309190c:
  if (cStack000000000000000c != '\0') {
    thunk_FUN_01b18c7c(uVar9,0);
  }
  return;
}


