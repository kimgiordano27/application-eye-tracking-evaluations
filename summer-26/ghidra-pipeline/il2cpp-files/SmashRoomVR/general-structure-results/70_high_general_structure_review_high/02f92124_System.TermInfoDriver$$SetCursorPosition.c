/*
FUNCTION_NAME: System.TermInfoDriver$$SetCursorPosition
ENTRY_POINT: 02f92124
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_TermInfoDriver__SetCursorPosition(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  long unaff_x19;
  long lVar9;
  
  puVar3 = StringLiteral_9274;
  puVar2 = Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__;
  uVar5 = FUN_02f636ec();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
  thunk_FUN_01b4f09c();
  uVar5 = FUN_02f636ec();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
  thunk_FUN_01b4f09c();
  uVar5 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_0304eec0(uVar5,0);
  plVar6 = (long *)FUN_02f611bc();
  if (plVar6 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x60) = 0;
  }
  else {
    lVar8 = *(long *)StringLiteral_9265;
    if ((*plVar6 != lVar8) || (*(long **)(unaff_x19 + 0x60) = plVar6, *plVar6 != lVar8))
    goto LAB_02f923fc;
  }
  puVar3 = StringLiteral_8665;
  puVar2 = Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__;
  thunk_FUN_01b4f09c(unaff_x19 + 0x60,plVar6);
  FUN_0304eec0(*(undefined8 *)puVar3,0);
  plVar6 = (long *)FUN_02f611bc();
  if (plVar6 == (long *)0x0) {
    lVar8 = 0;
    *(undefined8 *)(unaff_x19 + 0x48) = 0;
  }
  else {
    uVar5 = *(undefined8 *)puVar2;
    lVar8 = thunk_FUN_01afa9e0(plVar6,uVar5);
    if (lVar8 == 0) goto LAB_02f92550;
    *(long *)(unaff_x19 + 0x48) = lVar8;
    lVar9 = *(long *)puVar2;
    lVar8 = thunk_FUN_01afa9e0(plVar6,lVar9);
    if (lVar8 == 0) goto System_TermInfoDriver__IsSpecialKey;
  }
  thunk_FUN_01b4f09c(unaff_x19 + 0x48,lVar8);
  FUN_0304eec0(*(undefined8 *)puVar3,0);
  plVar6 = (long *)FUN_02f611bc();
  if (plVar6 == (long *)0x0) {
    lVar8 = 0;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
  else {
    uVar5 = *(undefined8 *)puVar2;
    lVar8 = thunk_FUN_01afa9e0(plVar6,uVar5);
    if (lVar8 == 0) {
LAB_02f92550:
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(plVar6,uVar5);
    }
    *(long *)(unaff_x19 + 0x50) = lVar8;
    lVar9 = *(long *)puVar2;
    lVar8 = thunk_FUN_01afa9e0(plVar6,lVar9);
    if (lVar8 == 0) goto System_TermInfoDriver__IsSpecialKey;
  }
  puVar2 = StringLiteral_9266;
  thunk_FUN_01b4f09c(unaff_x19 + 0x50,lVar8);
  FUN_0304eec0(*(undefined8 *)puVar2,0);
  plVar6 = (long *)FUN_02f611bc();
  puVar2 = StringLiteral_9272;
  if (plVar6 == (long *)0x0) {
LAB_02f9254c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar9 = *(long *)StringLiteral_9267;
  if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar9 + 0x40)) {
    puVar7 = (undefined4 *)thunk_FUN_01afac30();
    *(undefined4 *)(unaff_x19 + 0x3c) = *puVar7;
    FUN_0304eec0(*(undefined8 *)puVar2,0);
    plVar6 = (long *)FUN_02f611bc();
    if (plVar6 == (long *)0x0) {
      *(undefined8 *)(unaff_x19 + 0x40) = 0;
    }
    else {
      lVar8 = *(long *)StringLiteral_9273;
      bVar1 = *(byte *)(lVar8 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8)) {
LAB_02f923fc:
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar6);
      }
      *(long **)(unaff_x19 + 0x40) = plVar6;
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8)) goto LAB_02f923fc;
    }
    puVar2 = StringLiteral_9270;
    thunk_FUN_01b4f09c(unaff_x19 + 0x40,plVar6);
    FUN_0304eec0(*(undefined8 *)puVar2,0);
    plVar6 = (long *)FUN_02f611bc();
    puVar2 = StringLiteral_9268;
    if (plVar6 == (long *)0x0) goto LAB_02f9254c;
    lVar9 = *(long *)StringLiteral_9271;
    if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar9 + 0x40)) {
      puVar7 = (undefined4 *)thunk_FUN_01afac30();
      *(undefined4 *)(unaff_x19 + 0x58) = *puVar7;
      FUN_0304eec0(*(undefined8 *)puVar2,0);
      plVar6 = (long *)FUN_02f611bc();
      if (plVar6 == (long *)0x0) goto LAB_02f9254c;
      lVar9 = *(long *)StringLiteral_9269;
      if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar9 + 0x40)) {
        puVar7 = (undefined4 *)thunk_FUN_01afac30();
        *(undefined4 *)(unaff_x19 + 0x38) = *puVar7;
        iVar4 = FUN_02f63290();
        if (iVar4 == -1) {
          return;
        }
        uVar5 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_739);
        FUN_0300a860(uVar5,iVar4,0);
        *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
        thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x30),uVar5);
        return;
      }
    }
  }
System_TermInfoDriver__IsSpecialKey:
                    /* WARNING: Subroutine does not return */
  FUN_01b4841c(plVar6,lVar9);
}


