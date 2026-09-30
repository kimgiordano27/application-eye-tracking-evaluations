/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRSpaceUser>
ENTRY_POINT: 023c2134
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023c2228) */

void System_Array__InternalArray__ICollection_Contains<OVRSpaceUser>(long *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar8;
  long unaff_x24;
  long *unaff_x25;
  undefined8 uVar9;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  
  do {
    thunk_FUN_01f51358(param_1,unaff_x23);
    if ((unaff_x21 != 0) && (lVar5 = thunk_FUN_01f116d0(), lVar5 == 0)) {
      uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,0);
    }
    if (*(uint *)(unaff_x25 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    unaff_x25[5] = unaff_x21;
    thunk_FUN_01f51358();
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_034b2bf4(unaff_x24);
    lVar5 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023c1ec0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023c1ec0:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) {
        return;
      }
      lVar5 = *unaff_x22;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_023c21fc;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__)
        {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023c1f24;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023c1f24:
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) {
LAB_023c2234:
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
      uVar9 = thunk_FUN_01f117cc();
      FUN_0356ad6c(uVar9,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,in_stack_00000008);
    }
    lVar5 = *plVar3;
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_Component_TryGetComponent<SplineContainer>__ +
                     0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_Component_TryGetComponent<SplineContainer>__)) {
      bVar1 = *(byte *)(*(long *)
                         Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__
                       + 0x130);
      if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__))
      goto LAB_023c2234;
      in_stack_00000018 = plVar3;
      thunk_FUN_01f51358(&stack0x00000018);
      in_stack_00000010 = in_stack_00000018;
      unaff_x23 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                              Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponents__
                                             ,&stack0x00000010);
    }
    else {
      in_stack_00000018 = (long *)0x0;
      FUN_040c5b80(&stack0x00000018,plVar3,0);
      in_stack_00000010 = in_stack_00000018;
      unaff_x23 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                              Method_UnityEngine_Component_TryGetComponent<Text>__,
                                             &stack0x00000010);
    }
    plVar8 = *(long **)(unaff_x19 + 0x10);
    plVar3 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                  ,2);
    uVar9 = *(undefined8 *)(*unaff_x27 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = FUN_03579868(uVar9,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((lVar5 != 0) &&
       (lVar4 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
      uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,0);
    }
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar3[4] = lVar5;
    thunk_FUN_01f51358(plVar3 + 4,lVar5);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_023c2098;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(unaff_x23,
                          *(long *)
                           Method_UnityEngine_Component_TryGetComponent<PixelPerfectCamera>__,2);
LAB_023c2098:
    lVar5 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    if ((lVar5 != 0) &&
       (lVar4 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
      uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,0);
    }
    if (*(uint *)(plVar3 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar3[5] = lVar5;
    thunk_FUN_01f51358(plVar3 + 5,lVar5);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x24 = (**(code **)(*plVar8 + 0x408))(plVar8,plVar3,*(undefined8 *)(*plVar8 + 0x410));
    unaff_x25 = (long *)FUN_01f08890(*unaff_x20,2);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = thunk_FUN_01f116d0(unaff_x23,*(undefined8 *)(*unaff_x25 + 0x40));
    if (lVar5 == 0) {
      uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,0);
    }
    if ((int)unaff_x25[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    param_1 = unaff_x25 + 4;
    *param_1 = (long)unaff_x23;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_023c2218;
    }
  }
LAB_023c21fc:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_023c2218:
  (*(code *)*puVar2)();
  return;
}


