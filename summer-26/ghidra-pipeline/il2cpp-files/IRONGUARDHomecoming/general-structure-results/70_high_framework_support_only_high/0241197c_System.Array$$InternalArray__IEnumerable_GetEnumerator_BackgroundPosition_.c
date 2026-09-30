/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<BackgroundPosition>
ENTRY_POINT: 0241197c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02411af4) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<BackgroundPosition>
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  void *__src;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 in_w8;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *plVar10;
  ulong unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar13 = param_2._8_8_;
  uVar12 = param_2._0_8_;
  uVar11 = param_1._8_8_;
  uVar2 = param_1._0_8_;
  do {
    *(undefined8 *)(unaff_x29 + -0x68) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x58) = uVar13;
    *(undefined8 *)(unaff_x29 + -0x60) = uVar12;
    uVar11 = *(undefined8 *)(unaff_x19 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x19 + 0xa0);
    *(undefined4 *)(unaff_x29 + -0x40) = in_w8;
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x30);
    *(undefined8 *)(unaff_x29 + -0x48) = uVar11;
    *(undefined8 *)(unaff_x29 + -0x50) = uVar2;
    lVar5 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_024119e8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_024119e8:
    lVar5 = (*(code *)*puVar3)();
    uVar2 = *(undefined8 *)(unaff_x29 + -0x70);
    uVar12 = *(undefined8 *)(unaff_x29 + -0x58);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x60);
    uVar14 = *(undefined8 *)(unaff_x29 + -0x48);
    uVar13 = *(undefined8 *)(unaff_x29 + -0x50);
    uVar1 = *(undefined4 *)(unaff_x29 + -0x40);
    *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x29 + -0x68);
    *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x98) = uVar12;
    *(undefined8 *)(unaff_x19 + 0x90) = uVar11;
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar14;
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar13;
    *(undefined4 *)(unaff_x19 + 0xb0) = uVar1;
    if (lVar5 == 0) {
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
    FUN_03e1f16c(lVar5,unaff_x26 & 0xffffffff,unaff_x19 + 0x10,1,0);
    lVar5 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0241181c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0241181c:
    uVar8 = (*(code *)*puVar3)();
    if ((uVar8 & 1) == 0) {
LAB_02411a44:
      lVar5 = *(long *)(unaff_x19 + 8);
      if (unaff_x22 == (long *)0x0) goto LAB_02411ab0;
      lVar6 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_02411a88;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
           ) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02411880;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02411880:
    uVar8 = (*(code *)*puVar3)();
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
    puVar4 = (undefined8 *)plVar10[3];
    uVar2 = *puVar4;
    *(undefined8 **)(unaff_x19 + 0x80) = puVar3;
    *(ulong *)(unaff_x19 + 0x48) = uVar8;
    *(long *)(unaff_x19 + 0x88) = unaff_x19 + 0x48;
    (*(code *)puVar4[2])(uVar2,puVar4,0,unaff_x19 + 0x80,unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) == '\0') goto LAB_02411a44;
    lVar5 = *unaff_x24;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0241194c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0241194c:
    lVar5 = (*(code *)*puVar3)();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x26 = uVar8 >> 0x20;
    FUN_03e1f400(unaff_x19 + 0x80,lVar5,unaff_x26,0);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x98);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x90);
    in_w8 = *(undefined4 *)(unaff_x19 + 0xb0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02411aa4;
    }
  }
LAB_02411a88:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02411aa4:
  (*(code *)*puVar3)();
LAB_02411ab0:
  if (*(long *)(lVar5 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


