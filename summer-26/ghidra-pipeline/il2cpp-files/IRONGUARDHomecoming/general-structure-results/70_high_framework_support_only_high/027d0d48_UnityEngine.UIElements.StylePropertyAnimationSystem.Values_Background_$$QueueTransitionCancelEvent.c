/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyAnimationSystem.Values<Background>$$QueueTransitionCancelEvent
ENTRY_POINT: 027d0d48
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


/* WARNING: Removing unreachable block (ram,0x027d10c4) */

void UnityEngine_UIElements_StylePropertyAnimationSystem_Values<Background>__QueueTransitionCancelEvent
               (long param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  void *unaff_x22;
  undefined8 uVar9;
  size_t unaff_x24;
  int unaff_w25;
  void *unaff_x26;
  long *plVar10;
  code *pcVar11;
  long lVar12;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == param_3) {
          lVar5 = param_1 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_027d0d8c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238();
LAB_027d0d8c:
    *(void **)(unaff_x29 + -0x20) = unaff_x20;
    (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
    memcpy(unaff_x26,unaff_x20,unaff_x24);
    lVar5 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44();
      uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    }
    pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      FUN_01ecaf44();
    }
    iVar2 = (*pcVar11)();
    lVar5 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44();
      uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    }
    pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      FUN_01ecaf44();
    }
    iVar3 = (*pcVar11)();
    if (iVar2 == iVar3) {
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar12 = *(long *)(unaff_x29 + -0x28);
        lVar5 = FUN_01ecaf44();
        uVar9 = *(undefined8 *)(unaff_x29 + -0x30);
      }
      else {
        uVar9 = *(undefined8 *)(unaff_x29 + -0x30);
        lVar12 = *(long *)(unaff_x29 + -0x28);
      }
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(uVar9,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x40);
      plVar10 = (long *)*puVar4;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_027d0f14;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_027d0efc;
    }
    unaff_w25 = unaff_w25 + 1;
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_027d0d08;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_027d0d08:
    uVar7 = (*(code *)*puVar4)();
    if ((uVar7 & 1) == 0) break;
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    param_3 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x68);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01ecaf44(param_3);
    }
    param_1 = *unaff_x19;
  } while( true );
  lVar12 = *(long *)(unaff_x29 + -0x28);
  goto joined_r0x027d1024;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_027d0efc:
    if (*(long *)(piVar8 + -2) == lVar5) {
      puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
      goto LAB_027d0f34;
    }
  }
LAB_027d0f14:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar10,lVar5,4);
LAB_027d0f34:
  (*(code *)*puVar4)(plVar10,unaff_w25,puVar4[1]);
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  puVar4 = (undefined8 *)
           thunk_FUN_01ee7388(uVar9,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x40);
  plVar10 = (long *)*puVar4;
  memcpy(unaff_x20,unaff_x22,unaff_x24);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  *(int *)(unaff_x29 + -0xc) = unaff_w25;
  lVar6 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        lVar5 = lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138;
        goto LAB_027d1000;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar5 = FUN_01ecb238(plVar10,lVar5,3);
LAB_027d1000:
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(void **)(unaff_x29 + -0x18) = unaff_x20;
  lVar5 = *(long *)(lVar5 + 8);
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar10,unaff_x29 + -0x20);
joined_r0x027d1024:
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_027d107c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_027d107c:
    (*(code *)*puVar4)();
  }
  if (*(long *)(lVar12 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


