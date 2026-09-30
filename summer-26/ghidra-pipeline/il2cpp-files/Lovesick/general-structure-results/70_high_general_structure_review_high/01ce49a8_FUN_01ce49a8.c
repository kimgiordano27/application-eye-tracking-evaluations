/*
FUNCTION_NAME: FUN_01ce49a8
ENTRY_POINT: 01ce49a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01ce4c70) */

void FUN_01ce49a8(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int local_58;
  int local_54;
  
  if ((DAT_0377f0be & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    thunk_FUN_00d48444(StringLiteral_11174);
    thunk_FUN_00d48444(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__2__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectsOfType<ARSession>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    DAT_0377f0be = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_UnityEngine_Object_FindObjectsOfType<ARSession>__) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_01ce4a88;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_00d59724(param_2,*(long *)Method_UnityEngine_Object_FindObjectsOfType<ARSession>__,0)
  ;
LAB_01ce4a88:
  puVar5 = StringLiteral_10310;
  plVar8 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
  puVar6 = StringLiteral_11174;
  puVar4 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__2__;
  puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar2 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute__;
  puVar1 = Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01ce4b18;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar3,0);
LAB_01ce4b18:
    uVar11 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 == 0) goto LAB_01ce4c14;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01ce4b74;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar1,0);
LAB_01ce4b74:
    uVar9 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01299bc0(*(long *)(param_1 + 0x10),uVar9,&local_58,*(undefined8 *)puVar6);
    lVar10 = *(long *)(param_1 + 0x10);
    if (local_58 == 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0129de0c(lVar10,uVar9,*(undefined8 *)puVar2);
    }
    else {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_54 = local_58 + -1;
      FUN_01299e64(lVar10,uVar9,&local_54,*(undefined8 *)puVar4);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_01ce4c30;
    }
  }
LAB_01ce4c14:
  puVar7 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar5,0);
LAB_01ce4c30:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return;
}


