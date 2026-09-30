/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyAnimationSystem.ValuesDiscrete<FontDefinition>$$Lerp
ENTRY_POINT: 027cfa10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x027cfc98) */

void UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesDiscrete<FontDefinition>__Lerp
               (undefined8 param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  do {
    param_2 = FUN_01ecaf44(param_2);
    do {
      lVar4 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == param_2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_027cfa64;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_027cfa64:
      (*(code *)*puVar3)(&stack0x00000040);
      iVar2 = iStack0000000000000040;
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      if ((uVar1 & 1) == 0) {
        FUN_01ecaf44();
        uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      }
      if ((uVar1 & 1) == 0) {
        FUN_01ecaf44();
      }
      if (iVar2 == *unaff_x21) {
        plVar9 = *(long **)(unaff_x22 + 0x10);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44(lVar4);
        }
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 == 0) goto LAB_027cfb14;
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_027cfafc;
      }
      unaff_w23 = unaff_w23 + 1;
      lVar4 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_027cf9e0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_027cf9e0:
      uVar7 = (*(code *)*puVar3)();
      if ((uVar7 & 1) == 0) goto LAB_027cfc0c;
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      param_2 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x68);
    } while ((*(byte *)(param_2 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_027cfafc:
    if (*(long *)(piVar8 + -2) == lVar4) {
      puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
      goto LAB_027cfb34;
    }
  }
LAB_027cfb14:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,4);
LAB_027cfb34:
  (*(code *)*puVar3)(plVar9,unaff_w23,puVar3[1]);
  plVar9 = *(long **)(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x21 + 4);
  uVar11 = *(undefined8 *)(unaff_x21 + 2);
  uVar10 = *(undefined8 *)unaff_x21;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_027cfbe4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar4,3);
LAB_027cfbe4:
  _iStack0000000000000040 = uVar10;
  in_stack_00000048 = uVar11;
  in_stack_00000050 = uVar6;
  (*(code *)*puVar3)(plVar9,unaff_w23,&stack0x00000040,puVar3[1]);
LAB_027cfc0c:
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_027cfc68;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_027cfc68:
    (*(code *)*puVar3)();
  }
  return;
}


