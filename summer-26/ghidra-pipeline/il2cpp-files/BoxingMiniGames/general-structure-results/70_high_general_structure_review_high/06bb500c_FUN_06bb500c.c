/*
FUNCTION_NAME: FUN_06bb500c
ENTRY_POINT: 06bb500c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06bb5380) */
/* WARNING: Removing unreachable block (ram,0x06bb5404) */
/* WARNING: Removing unreachable block (ram,0x06bb551c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_06bb500c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  
  puVar4 = System_Collections_Generic_KeyValuePair<string,_JToken>_TypeInfo;
  puVar3 = System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo;
  puVar2 = PTR_DAT_07a051b0;
  puVar1 = PTR_DAT_07a051a8;
  if ((DAT_07ee9fa1 & 1) == 0) {
    FUN_03642964(UnityEngine_UI_Collections_IndexedSet<IClipper>_TypeInfo);
    FUN_03642964(System_Collections_Generic_KeyValuePair<string,_object>_TypeInfo);
    FUN_03642964(PTR_DAT_07a051b8);
    FUN_03642964(System_Collections_Generic_KeyValuePair<string,_JToken>_TypeInfo);
    FUN_03642964(PTR_DAT_07a051b0);
    FUN_03642964(System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo);
    FUN_03642964(PTR_DAT_07a051a8);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo);
    FUN_03642964(PTR_DAT_079f49a8);
    DAT_07ee9fa1 = 1;
  }
  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_0422a220(lVar5,*(undefined8 *)puVar2);
  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
  FUN_0422a220(lVar6,*(undefined8 *)puVar4);
  lVar7 = FUN_06bb42fc(param_1);
  puVar4 = UnityEngine_InputSystem_Utilities_InlinedArray<InputDevice>_TypeInfo;
  puVar3 = UnityEngine_UI_Collections_IndexedSet<IClipper>_TypeInfo;
  puVar2 = PTR_DAT_07a051b8;
  puVar1 = PTR_DAT_079f49a8;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  plVar8 = (long *)FUN_06bdd2e0(lVar7,0);
UnityEngine_InputSystem_InputAction__RequestInitialStateCheckOnEnabledAction:
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar11 = *plVar8;
  lVar7 = *(long *)puVar1;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar7) {
        puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06bb519c;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)FUN_0367cd30(plVar8,lVar7,0);
LAB_06bb519c:
  uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  if ((uVar13 & 1) != 0) {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar11 = *plVar8;
    lVar7 = *(long *)puVar4;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar7) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06bb5200;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_0367cd30(plVar8,lVar7,0);
LAB_06bb5200:
    lVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(long *)(lVar7 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar10 = (long *)FUN_053a404c(*(long *)(lVar7 + 0x50),*(undefined8 *)puVar3);
    do {
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar12 = *plVar10;
      lVar11 = *(long *)puVar1;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06bb5280;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_0367cd30(plVar10,lVar11,0);
LAB_06bb5280:
      uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar13 & 1) == 0) goto LAB_06bb5300;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar12 = *plVar10;
      lVar11 = *(long *)puVar4;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06bb52e4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_0367cd30(plVar10,lVar11,0);
LAB_06bb52e4:
      (*(code *)*puVar9)(plVar10,puVar9[1]);
    } while( true );
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar8;
  uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar13 == 0) goto LAB_06bb54cc;
  piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
  goto LAB_06bb54b4;
LAB_06bb5300:
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_079f4598) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06bb5368;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_0367cd30(plVar10,*(long *)PTR_DAT_079f4598,0);
LAB_06bb5368:
    (*(code *)*puVar9)(plVar10,puVar9[1]);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_0422b414(lVar6,lVar7,
               *(undefined8 *)System_Collections_Generic_KeyValuePair<string,_object>_TypeInfo);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_0422b414(lVar5,*(undefined8 *)(lVar7 + 0x38),*(undefined8 *)puVar2);
  goto UnityEngine_InputSystem_InputAction__RequestInitialStateCheckOnEnabledAction;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_06bb54b4:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar9 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_06bb54e8;
    }
  }
LAB_06bb54cc:
  puVar9 = (undefined8 *)FUN_0367cd30(plVar8,*(long *)PTR_DAT_079f4598,0);
LAB_06bb54e8:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


