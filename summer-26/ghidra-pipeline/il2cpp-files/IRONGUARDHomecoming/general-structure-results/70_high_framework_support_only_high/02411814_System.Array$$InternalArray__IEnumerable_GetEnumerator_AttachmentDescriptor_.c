/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<AttachmentDescriptor>
ENTRY_POINT: 02411814
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


/* WARNING: Removing unreachable block (ram,0x02411af4) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<AttachmentDescriptor>(long param_1)

{
  void *__src;
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *plVar10;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
code_r0x02411814:
  puVar3 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar2 = (*(code *)*puVar3)(), (uVar2 & 1) != 0) {
    lVar6 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
           ) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02411880;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02411880:
    uVar2 = (*(code *)*puVar3)();
    plVar10 = *(long **)(unaff_x20 + 0x38);
    __src = *(void **)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*plVar10 + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x23,__src,unaff_x21);
    puVar3 = unaff_x23;
    if (-1 < *(int *)(*plVar10 + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x23;
    }
    puVar5 = (undefined8 *)plVar10[3];
    uVar4 = *puVar5;
    *(undefined8 **)(unaff_x19 + 0x80) = puVar3;
    *(ulong *)(unaff_x19 + 0x48) = uVar2;
    *(long *)(unaff_x19 + 0x88) = unaff_x19 + 0x48;
    (*(code *)puVar5[2])(uVar4,puVar5,0,unaff_x19 + 0x80,unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) == '\0') break;
    lVar6 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0241194c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0241194c:
    lVar6 = (*(code *)*puVar3)();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03e1f400(unaff_x19 + 0x80,lVar6,uVar2 >> 0x20,0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x80);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x98);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x90);
    uVar1 = *(undefined4 *)(unaff_x19 + 0xb0);
    *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x19 + 0x88);
    *(undefined8 *)(unaff_x29 + -0x70) = uVar4;
    *(undefined8 *)(unaff_x29 + -0x58) = uVar12;
    *(undefined8 *)(unaff_x29 + -0x60) = uVar11;
    uVar11 = *(undefined8 *)(unaff_x19 + 0xa8);
    uVar4 = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined4 *)(unaff_x29 + -0x40) = uVar1;
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x30);
    *(undefined8 *)(unaff_x29 + -0x48) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x50) = uVar4;
    lVar6 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_024119e8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_024119e8:
    lVar6 = (*(code *)*puVar3)();
    uVar4 = *(undefined8 *)(unaff_x29 + -0x70);
    uVar12 = *(undefined8 *)(unaff_x29 + -0x58);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x60);
    uVar14 = *(undefined8 *)(unaff_x29 + -0x48);
    uVar13 = *(undefined8 *)(unaff_x29 + -0x50);
    uVar1 = *(undefined4 *)(unaff_x29 + -0x40);
    *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x19 + 0x80) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x98) = uVar12;
    *(undefined8 *)(unaff_x19 + 0x90) = uVar11;
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar14;
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar13;
    *(undefined4 *)(unaff_x19 + 0xb0) = uVar1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x88);
    *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x19 + 0x80);
    *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x98);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x90);
    *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x19 + 0xa8);
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined4 *)(unaff_x19 + 0x40) = *(undefined4 *)(unaff_x19 + 0xb0);
    FUN_03e1f16c(lVar6,uVar2 >> 0x20,unaff_x19 + 0x10,1,0);
    param_1 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          in_x9 = (long)*piVar9;
          goto code_r0x02411814;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
  }
  lVar6 = *(long *)(unaff_x19 + 8);
  if (unaff_x22 != (long *)0x0) {
    lVar7 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02411aa4;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02411aa4:
    (*(code *)*puVar3)();
  }
  if (*(long *)(lVar6 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


