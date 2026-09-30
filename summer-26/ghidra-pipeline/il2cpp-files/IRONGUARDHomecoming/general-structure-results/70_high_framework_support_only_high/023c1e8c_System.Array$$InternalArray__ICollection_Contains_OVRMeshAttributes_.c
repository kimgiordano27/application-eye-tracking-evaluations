/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRMeshAttributes>
ENTRY_POINT: 023c1e8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023c2228) */

void System_Array__InternalArray__ICollection_Contains<OVRMeshAttributes>
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong in_x9;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_023c1ec0;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023c1ec0:
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) {
          return;
        }
        lVar7 = *unaff_x22;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 == 0) goto LAB_023c21fc;
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_023c21e4;
      }
      lVar7 = *unaff_x22;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)
               Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_023c1f24;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023c1f24:
      plVar4 = (long *)(*(code *)*puVar2)();
      if (plVar4 == (long *)0x0) {
LAB_023c2234:
        thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
        uVar10 = thunk_FUN_01f117cc();
        FUN_0356ad6c(uVar10,0);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar10,in_stack_00000008);
      }
      lVar7 = *plVar4;
      bVar1 = *(byte *)(*(long *)Method_UnityEngine_Component_TryGetComponent<SplineContainer>__ +
                       0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_Component_TryGetComponent<SplineContainer>__)) {
        bVar1 = *(byte *)(*(long *)
                           Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__
                         + 0x130);
        if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__))
        goto LAB_023c2234;
        in_stack_00000018 = plVar4;
        thunk_FUN_01f51358(&stack0x00000018);
        in_stack_00000010 = in_stack_00000018;
        plVar4 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                             Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponents__
                                            ,&stack0x00000010);
      }
      else {
        in_stack_00000018 = (long *)0x0;
        FUN_040c5b80(&stack0x00000018,plVar4,0);
        in_stack_00000010 = in_stack_00000018;
        plVar4 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                             Method_UnityEngine_Component_TryGetComponent<Text>__,
                                            &stack0x00000010);
      }
      plVar9 = *(long **)(unaff_x19 + 0x10);
      plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                    ,2);
      uVar10 = *(undefined8 *)(*unaff_x27 + 0x18);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = FUN_03579868(uVar10,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((lVar7 != 0) &&
         (lVar6 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
        uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar10,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar5[4] = lVar7;
      thunk_FUN_01f51358(plVar5 + 4,lVar7);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_023c2098;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__
                            ,2);
LAB_023c2098:
      lVar7 = (*(code *)*puVar2)(plVar4,puVar2[1]);
      if ((lVar7 != 0) &&
         (lVar6 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
        uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar10,0);
      }
      if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar5[5] = lVar7;
      thunk_FUN_01f51358(plVar5 + 5,lVar7);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = (**(code **)(*plVar9 + 0x408))(plVar9,plVar5,*(undefined8 *)(*plVar9 + 0x410));
      plVar5 = (long *)FUN_01f08890(*unaff_x20,2);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = thunk_FUN_01f116d0(plVar4,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) {
        uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar10,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar5[4] = (long)plVar4;
      thunk_FUN_01f51358(plVar5 + 4,plVar4);
      if ((unaff_x21 != 0) && (lVar6 = thunk_FUN_01f116d0(), lVar6 == 0)) {
        uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar10,0);
      }
      if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar5[5] = unaff_x21;
      thunk_FUN_01f51358();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_034b2bf4(lVar7);
      param_1 = *unaff_x22;
      param_3 = *unaff_x29;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_023c21e4:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_023c2218;
    }
  }
LAB_023c21fc:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023c2218:
  (*(code *)*puVar2)();
  return;
}


