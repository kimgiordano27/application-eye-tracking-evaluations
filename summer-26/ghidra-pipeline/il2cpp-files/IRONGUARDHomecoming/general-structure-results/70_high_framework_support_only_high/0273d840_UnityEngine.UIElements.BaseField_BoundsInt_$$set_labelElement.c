/*
FUNCTION_NAME: UnityEngine.UIElements.BaseField<BoundsInt>$$set_labelElement
ENTRY_POINT: 0273d840
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0273dcac) */
/* WARNING: Removing unreachable block (ram,0x0273dc98) */
/* WARNING: Removing unreachable block (ram,0x0273dcb4) */

void UnityEngine_UIElements_BaseField<BoundsInt>__set_labelElement(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  size_t unaff_x20;
  long unaff_x21;
  long *plVar10;
  undefined8 *unaff_x22;
  size_t unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  lVar2 = FUN_01ecaf44();
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x90))();
  *(long *)(unaff_x29 + -0x38) = lVar2;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb0))(lVar2);
  lVar7 = **(long **)(unaff_x29 + -0x30);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xb8);
  uVar3 = *puVar5;
  *(void **)(unaff_x29 + -0x28) = unaff_x25;
  (*(code *)puVar5[2])(uVar3,puVar5,lVar7,unaff_x29 + -0x28);
  memcpy(unaff_x26,unaff_x25,unaff_x20);
  while (uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xe0))
                           (), (uVar4 & 1) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 200);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x28) = unaff_x22;
    (*(code *)puVar5[2])(uVar3);
    memcpy(unaff_x28,unaff_x22,unaff_x24);
    memcpy(unaff_x27,unaff_x28,unaff_x24);
    lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar5 = unaff_x27;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x78) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x27;
    }
    puVar6 = *(undefined8 **)(lVar7 + 0xd8);
    uVar3 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x28) = puVar5;
    (*(code *)puVar6[2])(uVar3,puVar6,lVar2,unaff_x29 + -0x28);
  }
  lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  lVar7 = *(long *)(lVar8 + 0xc0);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44();
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  }
  FUN_01f09244(lVar7,*(undefined8 *)(lVar8 + 0xe8),*(undefined8 *)(unaff_x29 + -0x48));
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xf0))(lVar2);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      lVar7 = *(long *)(lVar8 + 0x18);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44();
        lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      }
      puVar5 = *(undefined8 **)(lVar8 + 0xf8);
      lVar7 = **(long **)(lVar7 + 0xb8);
      uVar3 = *puVar5;
      *(int *)(unaff_x29 + -0xc) = iVar1;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
      (*(code *)puVar5[2])(uVar3,puVar5,lVar2,unaff_x29 + -0x20);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      puVar5 = unaff_x22;
      if (-1 < *(int *)(*(long *)(lVar8 + 0x78) + 0x28)) {
        puVar5 = (undefined8 *)*unaff_x22;
      }
      puVar6 = *(undefined8 **)(lVar8 + 0x100);
      uVar3 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
      *(long **)(unaff_x29 + -0x18) = unaff_x19;
      (*(code *)puVar6[2])(uVar3,puVar6,lVar7,unaff_x29 + -0x20);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  plVar10 = *(long **)(unaff_x29 + -0x38);
  if (plVar10 != (long *)0x0) {
    lVar2 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0273dbdc;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0273dbdc:
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar5 = (undefined8 *)(lVar2 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
        goto LAB_0273dc48;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0273dc48:
  (*(code *)*puVar5)();
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


