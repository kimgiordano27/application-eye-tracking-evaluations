/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 033c108c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetMixedRealityCameraInfo(undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long *unaff_x19;
  long unaff_x20;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  
  puVar5 = StringLiteral_8804;
  puVar4 = StringLiteral_2477;
  puVar3 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  lVar12 = unaff_x19[3];
  iVar6 = (int)lVar12;
  if (iVar6 < 1) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uVar14 = 0;
    do {
      if ((uint)lVar12 <= uVar14) goto LAB_033c1378;
                    /* try { // try from 033c10c8 to 034c110f has its CatchHandler @ 033c11fc */
      plVar7 = (long *)unaff_x19[(long)(int)uVar14 + 4];
      if (plVar7 == (long *)0x0) goto LAB_033c13e0;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      lVar12 = *(long *)puVar3;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(lVar12);
      }
      uVar8 = FUN_033aa3b4(plVar7,param_1,0);
      if ((uVar8 & 1) == 0) {
        lVar12 = *(long *)puVar5;
                    /* try { // try from 033c1110 to 034c11a3 has its CatchHandler @ 033c0b38 */
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar12 = *(long *)puVar5;
        }
        if (**(long **)(lVar12 + 0xb8) == unaff_x20) {
          if (plVar7 == (long *)0x0) goto LAB_033c13e0;
          uVar8 = FUN_033ac528(plVar7,0);
          if ((uVar8 & 1) != 0) goto LAB_033c1178;
        }
        uVar15 = *(undefined8 *)puVar4;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar15 = FUN_033a87c8(uVar15,0);
        uVar8 = FUN_033aa3b4(plVar7,uVar15,0);
        if ((uVar8 & 1) != 0) goto LAB_033c1178;
        if (plVar7 == (long *)0x0) {
LAB_033c13e0:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar8 = FUN_033ac7d8(plVar7,0);
        if ((uVar8 & 1) == 0) {
          uVar8 = (**(code **)(*plVar7 + 0x288))(plVar7,param_1,*(undefined8 *)(*plVar7 + 0x290));
        }
        else {
          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(plVar7);
          }
          uVar8 = FUN_033c0b48();
        }
        if ((uVar8 & 1) != 0) goto LAB_033c1178;
      }
      else {
LAB_033c1178:
        uVar11 = *(uint *)(unaff_x19 + 3);
        if (uVar11 <= uVar14) goto LAB_033c1378;
        lVar12 = unaff_x19[(long)(int)uVar14 + 4];
        if (lVar12 != 0) {
          lVar9 = thunk_FUN_01de26bc(lVar12,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar9 == 0) {
            uVar15 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar15,0);
          }
          uVar11 = *(uint *)(unaff_x19 + 3);
        }
                    /* try { // try from 033c11a4 to 034c11a7 has its CatchHandler @ 033c1214 */
                    /* try { // try from 033c11a8 to 034c11ab has its CatchHandler @ 033c1210 */
        if (uVar11 <= uVar16) goto LAB_033c1378;
                    /* try { // try from 033c11ac to 034c11b7 has its CatchHandler @ 033c120c */
        lVar9 = (long)(int)uVar16;
        unaff_x19[lVar9 + 4] = lVar12;
                    /* try { // try from 033c11b8 to 034c11c3 has its CatchHandler @ 033c1200 */
        uVar16 = uVar16 + 1;
        thunk_FUN_01e10808(unaff_x19 + lVar9 + 4,lVar12);
      }
      lVar12 = unaff_x19[3];
      uVar14 = uVar14 + 1;
      iVar6 = (int)lVar12;
    } while ((int)uVar14 < iVar6);
  }
  puVar3 = StringLiteral_8523;
  if (uVar16 == 1) {
    if (iVar6 == 0) {
LAB_033c1378:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
  }
  else {
    if (uVar16 == 0) {
      uVar15 = thunk_FUN_01dd295c(StringLiteral_8806);
      uVar10 = FUN_033d6e4c(uVar15,0);
      thunk_FUN_01dd295c(StringLiteral_8807);
      uVar15 = thunk_FUN_01de27b8();
      FUN_033b3ed4(uVar15,uVar10,0);
LAB_033c1428:
      uVar10 = thunk_FUN_01dd295c(StringLiteral_8805);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar15,uVar10);
    }
    if ((int)uVar16 < 2) {
      uVar14 = 0;
    }
    else {
      lVar12 = 0;
      uVar14 = 0;
      bVar2 = false;
      do {
        if (((uint)unaff_x19[3] <= uVar14) || ((unaff_x19[3] & 0xffffffffU) <= lVar12 + 1U))
        goto LAB_033c1378;
        lVar9 = unaff_x19[(long)(int)uVar14 + 4];
        lVar13 = unaff_x19[lVar12 + 5];
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar6 = FUN_033c1450(lVar9,lVar13);
        if (iVar6 == 0) {
          bVar2 = true;
        }
        else if (iVar6 == 2) {
          bVar2 = false;
          uVar14 = (int)lVar12 + 1;
        }
        lVar12 = lVar12 + 1;
      } while ((ulong)uVar16 - 1 != lVar12);
      if (bVar2) {
        uVar15 = thunk_FUN_01dd295c(StringLiteral_6016);
        uVar10 = FUN_033d6e4c(uVar15,0);
        thunk_FUN_01dd295c(StringLiteral_5868);
        uVar15 = thunk_FUN_01de27b8();
        FUN_033063d0(uVar15,uVar10,0);
        goto LAB_033c1428;
      }
    }
    if (*(uint *)(unaff_x19 + 3) <= uVar14) goto LAB_033c1378;
    unaff_x19 = unaff_x19 + (int)uVar14;
  }
  return unaff_x19[4];
}


