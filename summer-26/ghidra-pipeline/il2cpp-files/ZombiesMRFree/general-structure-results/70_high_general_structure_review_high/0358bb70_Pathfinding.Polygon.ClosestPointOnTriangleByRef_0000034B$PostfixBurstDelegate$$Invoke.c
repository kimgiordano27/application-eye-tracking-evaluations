/*
FUNCTION_NAME: Pathfinding.Polygon.ClosestPointOnTriangleByRef_0000034B$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0358bb70
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Pathfinding_Polygon_ClosestPointOnTriangleByRef_0000034B_PostfixBurstDelegate__Invoke
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w20;
  int iVar6;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  while( true ) {
    if (*(char *)(param_1 + 0x60) == '\0') {
      if (*(long *)(unaff_x19 + 0xf0) == 0) goto LAB_0358bc4c;
      uVar4 = FUN_04430018(*(long *)(unaff_x19 + 0xf0),unaff_w20,*unaff_x23);
      FUN_0358bc64(uVar4,uVar4);
      FUN_068fa22c();
      if (*(long *)(unaff_x19 + 0xf0) == 0) goto LAB_0358bc4c;
      FUN_044319c0(*(long *)(unaff_x19 + 0xf0),unaff_w20,*unaff_x24);
    }
    puVar2 = PTR_DAT_06f8a268;
    puVar1 = PTR_DAT_06f8a250;
    unaff_w20 = unaff_w20 + -1;
    if (unaff_w20 < 0) break;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar3 = FUN_068f8810();
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0xf0) == 0) ||
         (lVar5 = FUN_04430018(*(long *)(unaff_x19 + 0xf0),unaff_w20,*unaff_x23), lVar5 == 0))
      goto LAB_0358bc4c;
      *(undefined8 *)(lVar5 + 0x58) = unaff_x21;
      thunk_FUN_03048534();
    }
    if ((*(long *)(unaff_x19 + 0xf0) == 0) ||
       (param_1 = FUN_04430018(*(long *)(unaff_x19 + 0xf0),unaff_w20,*unaff_x23), param_1 == 0))
    goto LAB_0358bc4c;
  }
  lVar5 = *(long *)(unaff_x19 + 0xf8);
  if (lVar5 != 0) {
    iVar6 = *(int *)(lVar5 + 0x18) + -1;
    if (iVar6 < 0) {
      return;
    }
    goto LAB_0358bbe4;
  }
  goto LAB_0358bc4c;
  while( true ) {
    if (*(char *)(lVar5 + 0x59) != '\0') {
      if (*(long *)(unaff_x19 + 0xf8) == 0) break;
      uVar4 = FUN_04430018(*(long *)(unaff_x19 + 0xf8),iVar6,*(undefined8 *)puVar2);
      FUN_0358bcd0(uVar4,uVar4);
      FUN_068fa22c();
      if (*(long *)(unaff_x19 + 0xf8) == 0) break;
      FUN_044319c0(*(long *)(unaff_x19 + 0xf8),iVar6,*(undefined8 *)puVar1);
    }
    iVar6 = iVar6 + -1;
    if (iVar6 < 0) {
      return;
    }
    lVar5 = *(long *)(unaff_x19 + 0xf8);
    if (lVar5 == 0) break;
LAB_0358bbe4:
    lVar5 = FUN_04430018(lVar5,iVar6,*(undefined8 *)puVar2);
    if (lVar5 == 0) break;
  }
LAB_0358bc4c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


