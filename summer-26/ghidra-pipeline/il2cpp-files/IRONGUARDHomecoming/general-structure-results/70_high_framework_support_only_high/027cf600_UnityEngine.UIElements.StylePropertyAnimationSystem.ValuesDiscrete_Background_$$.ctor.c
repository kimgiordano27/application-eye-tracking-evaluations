/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyAnimationSystem.ValuesDiscrete<Background>$$.ctor
ENTRY_POINT: 027cf600
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x027cf7c8) */

int UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesDiscrete<Background>___ctor
              (long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  int unaff_w21;
  int iVar8;
  int iVar9;
  long *unaff_x23;
  int in_stack_00000008;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar9 = 0;
  do {
    lVar4 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_027cf660;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar1,0);
LAB_027cf660:
    uVar6 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      iVar9 = 0;
      iVar8 = 6;
      iVar2 = 6;
      if (param_1 == (long *)0x0) goto LAB_027cf790;
      goto LAB_027cf738;
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x68);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_027cf6e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(param_1,lVar4,0);
LAB_027cf6e4:
    (*(code *)*puVar3)(&stack0x00000008,param_1,puVar3[1]);
    iVar2 = in_stack_00000008;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    if (iVar2 == unaff_w21) break;
    iVar9 = iVar9 + 1;
  } while( true );
  iVar8 = 5;
  iVar2 = 5;
  if (param_1 != (long *)0x0) {
LAB_027cf738:
    iVar8 = iVar2;
    lVar4 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_027cf784;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(param_1,*unaff_x23,0);
LAB_027cf784:
    (*(code *)*puVar3)(param_1,puVar3[1]);
  }
LAB_027cf790:
  if ((iVar8 == 6) || (iVar8 == 0)) {
    iVar9 = -1;
  }
  return iVar9;
}


