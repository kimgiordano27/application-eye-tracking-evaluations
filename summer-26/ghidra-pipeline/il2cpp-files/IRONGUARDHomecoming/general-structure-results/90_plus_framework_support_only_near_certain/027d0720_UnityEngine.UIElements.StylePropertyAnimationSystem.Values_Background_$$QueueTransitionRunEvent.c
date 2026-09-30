/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyAnimationSystem.Values<Background>$$QueueTransitionRunEvent
ENTRY_POINT: 027d0720
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x027d0a10) */

int UnityEngine_UIElements_StylePropertyAnimationSystem_Values<Background>__QueueTransitionRunEvent
              (ulong param_1)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long unaff_x20;
  int unaff_w21;
  int iVar10;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  int iVar11;
  long unaff_x26;
  code *pcVar12;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    FUN_01ecaf44();
  }
  puVar4 = (undefined8 *)thunk_FUN_01ee7388();
  plVar9 = (long *)*puVar4;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_027d07c4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_027d07c4:
  plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar11 = 0;
  do {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_027d0830;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_027d0830:
    uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      iVar11 = 0;
      iVar10 = 6;
      iVar3 = 6;
      if (plVar9 == (long *)0x0) goto LAB_027d09c0;
      goto LAB_027d0960;
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x68);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_027d08b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238(plVar9,lVar5,0);
LAB_027d08b4:
    *(void **)(unaff_x29 + -0x10) = unaff_x23;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar9,unaff_x29 + -0x10);
    memcpy(unaff_x24,unaff_x23,unaff_x22);
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44();
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    }
    pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      FUN_01ecaf44();
    }
    iVar3 = (*pcVar12)();
    if (iVar3 == unaff_w21) break;
    iVar11 = iVar11 + 1;
  } while( true );
  iVar10 = 5;
  iVar3 = 5;
  if (plVar9 != (long *)0x0) {
LAB_027d0960:
    iVar10 = iVar3;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_027d09b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_027d09b4:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
LAB_027d09c0:
  if ((iVar10 == 6) || (iVar10 == 0)) {
    iVar11 = -1;
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


