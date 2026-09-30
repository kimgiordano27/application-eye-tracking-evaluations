/*
FUNCTION_NAME: FUN_01ce4618
ENTRY_POINT: 01ce4618
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x01ce48e0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_01ce4618(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int local_5c;
  int local_58 [2];
  
  if ((DAT_0377f0bd & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_Matrix4x4_TypeInfo);
    thunk_FUN_00d48444(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__2__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectsOfType<ARSession>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    DAT_0377f0bd = 1;
  }
  local_5c = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar9 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_UnityEngine_Object_FindObjectsOfType<ARSession>__) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_01ce46f0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_00d59724(param_2,*(long *)Method_UnityEngine_Object_FindObjectsOfType<ARSession>__,0)
  ;
LAB_01ce46f0:
  puVar5 = StringLiteral_10310;
  plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
  puVar4 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__2__;
  puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar2 = Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__;
  puVar1 = UnityEngine_Matrix4x4_TypeInfo;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01ce477c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar3,0);
LAB_01ce477c:
    uVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 == 0) goto LAB_01ce4884;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01ce47d8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar2,0);
LAB_01ce47d8:
    uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar10 = FUN_0129eff4(*(long *)(param_1 + 0x10),uVar8,&local_5c,*(undefined8 *)puVar1);
    lVar9 = *(long *)(param_1 + 0x10);
    if ((uVar10 & 1) == 0) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_58[1] = 1;
      FUN_01299e64(lVar9,uVar8,local_58 + 1,*(undefined8 *)puVar4);
    }
    else {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_58[0] = local_5c + 1;
      FUN_01299e64(lVar9,uVar8,local_58,*(undefined8 *)puVar4);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_01ce48a0;
    }
  }
LAB_01ce4884:
  puVar6 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar5,0);
LAB_01ce48a0:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


