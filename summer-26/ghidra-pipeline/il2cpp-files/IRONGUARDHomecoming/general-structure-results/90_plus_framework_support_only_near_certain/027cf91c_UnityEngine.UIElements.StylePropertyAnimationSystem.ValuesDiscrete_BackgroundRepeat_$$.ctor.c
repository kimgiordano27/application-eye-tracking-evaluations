/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyAnimationSystem.ValuesDiscrete<BackgroundRepeat>$$.ctor
ENTRY_POINT: 027cf91c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x027cfc98) */

void UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesDiscrete<BackgroundRepeat>___ctor
               (ulong param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_01ecaf44(param_3);
  }
  lVar6 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_027cf974;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_027cf974:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar11 = 0;
  do {
    lVar6 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_027cf9e0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_027cf9e0:
    uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar9 & 1) == 0) goto LAB_027cfc0c;
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x68);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_027cfa64;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar6,0);
LAB_027cfa64:
    (*(code *)*puVar4)(&stack0x00000040,plVar5,puVar4[1]);
    iVar3 = iStack0000000000000040;
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_01ecaf44();
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    }
    if ((uVar1 & 1) == 0) {
      FUN_01ecaf44();
    }
    if (iVar3 == *unaff_x21) break;
    iVar11 = iVar11 + 1;
  } while( true );
  plVar12 = *(long **)(unaff_x22 + 0x10);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
        goto LAB_027cfb34;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar12,lVar6,4);
LAB_027cfb34:
  (*(code *)*puVar4)(plVar12,iVar11,puVar4[1]);
  plVar12 = *(long **)(unaff_x22 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x21 + 4);
  uVar14 = *(undefined8 *)(unaff_x21 + 2);
  uVar13 = *(undefined8 *)unaff_x21;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar6) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto LAB_027cfbe4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar12,lVar6,3);
LAB_027cfbe4:
  _iStack0000000000000040 = uVar13;
  in_stack_00000048 = uVar14;
  in_stack_00000050 = uVar8;
  (*(code *)*puVar4)(plVar12,iVar11,&stack0x00000040,puVar4[1]);
LAB_027cfc0c:
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_027cfc68;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_027cfc68:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  return;
}


