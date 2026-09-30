/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 033c0fb8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__UpdateExternalCamera(undefined8 param_1,uint param_2,long param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  
  if ((DAT_044a6992 & 1) == 0) {
    FUN_01d7d918(StringLiteral_8523);
    FUN_01d7d918(StringLiteral_8804);
    FUN_01d7d918(StringLiteral_5446);
                    /* try { // try from 033c1004 to 034c102f has its CatchHandler @ 033c1218 */
    FUN_01d7d918(StringLiteral_2477);
    FUN_01d7d918(StringLiteral_1157);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044a6992 = 1;
  }
  if (param_3 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar15 = thunk_FUN_01de27b8();
    uVar16 = thunk_FUN_01dd295c(StringLiteral_1240);
    FUN_032870b8(uVar15,uVar16,0);
    uVar16 = thunk_FUN_01dd295c(StringLiteral_8805);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar15,uVar16);
  }
  lVar7 = FUN_033b5440(param_3,0);
  if (lVar7 == 0) {
    if (((param_2 >> 0xb & 1) != 0) && (param_4 != 0)) {
      thunk_FUN_01dfff04(param_4,0);
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
LAB_033c13e0:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
                    /* try { // try from 033c103c to 034c1047 has its CatchHandler @ 033c1204 */
  uVar15 = *(undefined8 *)StringLiteral_5446;
                    /* try { // try from 033c1050 to 034c10c3 has its CatchHandler @ 033c122c */
  plVar8 = (long *)thunk_FUN_01de26bc(lVar7,uVar15);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7df0c(lVar7,uVar15);
  }
  if ((param_2 >> 0xb & 1) == 0) {
LAB_033c1060:
    uVar14 = 0;
  }
  else {
    if (param_4 == 0) goto LAB_033c13e0;
    uVar15 = thunk_FUN_01dfff04(param_4,0);
    puVar5 = StringLiteral_8804;
    puVar4 = StringLiteral_2477;
    puVar3 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    lVar7 = plVar8[3];
    iVar6 = (int)lVar7;
    if (iVar6 < 1) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      uVar14 = 0;
      do {
        if ((uint)lVar7 <= uVar14) goto LAB_033c1378;
        plVar9 = (long *)plVar8[(long)(int)uVar14 + 4];
        if (plVar9 == (long *)0x0) goto LAB_033c13e0;
        plVar9 = (long *)(**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(lVar7);
        }
        uVar10 = FUN_033aa3b4(plVar9,uVar15,0);
        if ((uVar10 & 1) == 0) {
          lVar7 = *(long *)puVar5;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar7 = *(long *)puVar5;
          }
          if (**(long **)(lVar7 + 0xb8) == param_4) {
            if (plVar9 == (long *)0x0) goto LAB_033c13e0;
            uVar10 = FUN_033ac528(plVar9,0);
            if ((uVar10 & 1) != 0) goto LAB_033c1178;
          }
          uVar16 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar16 = FUN_033a87c8(uVar16,0);
          uVar10 = FUN_033aa3b4(plVar9,uVar16,0);
          if ((uVar10 & 1) != 0) goto LAB_033c1178;
          if (plVar9 == (long *)0x0) goto LAB_033c13e0;
          uVar10 = FUN_033ac7d8(plVar9,0);
          if ((uVar10 & 1) == 0) {
            uVar10 = (**(code **)(*plVar9 + 0x288))(plVar9,uVar15,*(undefined8 *)(*plVar9 + 0x290));
          }
          else {
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7df0c(plVar9);
            }
            uVar10 = FUN_033c0b48(param_4,plVar9);
          }
          if ((uVar10 & 1) != 0) goto LAB_033c1178;
        }
        else {
LAB_033c1178:
          uVar12 = *(uint *)(plVar8 + 3);
          if (uVar12 <= uVar14) goto LAB_033c1378;
          lVar7 = plVar8[(long)(int)uVar14 + 4];
          if (lVar7 != 0) {
            lVar11 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar11 == 0) {
              uVar15 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar15,0);
            }
            uVar12 = *(uint *)(plVar8 + 3);
          }
          if (uVar12 <= uVar17) goto LAB_033c1378;
          lVar11 = (long)(int)uVar17;
          plVar8[lVar11 + 4] = lVar7;
          uVar17 = uVar17 + 1;
          thunk_FUN_01e10808(plVar8 + lVar11 + 4,lVar7);
        }
        lVar7 = plVar8[3];
        uVar14 = uVar14 + 1;
        iVar6 = (int)lVar7;
      } while ((int)uVar14 < iVar6);
    }
    puVar3 = StringLiteral_8523;
    if (uVar17 == 1) {
      if (iVar6 == 0) goto LAB_033c1378;
      goto LAB_033c1358;
    }
    if (uVar17 == 0) {
      uVar15 = thunk_FUN_01dd295c(StringLiteral_8806);
      uVar16 = FUN_033d6e4c(uVar15,0);
      thunk_FUN_01dd295c(StringLiteral_8807);
      uVar15 = thunk_FUN_01de27b8();
      FUN_033b3ed4(uVar15,uVar16,0);
LAB_033c1428:
      uVar16 = thunk_FUN_01dd295c(StringLiteral_8805);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar15,uVar16);
    }
    if ((int)uVar17 < 2) goto LAB_033c1060;
    lVar7 = 0;
    uVar14 = 0;
    bVar2 = false;
    do {
      if (((uint)plVar8[3] <= uVar14) || ((plVar8[3] & 0xffffffffU) <= lVar7 + 1U))
      goto LAB_033c1378;
      lVar11 = plVar8[(long)(int)uVar14 + 4];
      lVar13 = plVar8[lVar7 + 5];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar6 = FUN_033c1450(lVar11,lVar13);
      if (iVar6 == 0) {
        bVar2 = true;
      }
      else if (iVar6 == 2) {
        bVar2 = false;
        uVar14 = (int)lVar7 + 1;
      }
      lVar7 = lVar7 + 1;
    } while ((ulong)uVar17 - 1 != lVar7);
    if (bVar2) {
      uVar15 = thunk_FUN_01dd295c(StringLiteral_6016);
      uVar16 = FUN_033d6e4c(uVar15,0);
      thunk_FUN_01dd295c(StringLiteral_5868);
      uVar15 = thunk_FUN_01de27b8();
      FUN_033063d0(uVar15,uVar16,0);
      goto LAB_033c1428;
    }
  }
  if (*(uint *)(plVar8 + 3) <= uVar14) {
LAB_033c1378:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  plVar8 = plVar8 + (int)uVar14;
LAB_033c1358:
  return plVar8[4];
}


