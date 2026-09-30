/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<Background>
ENTRY_POINT: 024118c8
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

void System_Array__InternalArray__IEnumerable_GetEnumerator<Background>(void)

{
  void *__src;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  do {
    puVar3 = (undefined8 *)*unaff_x23;
    do {
      puVar4 = (undefined8 *)unaff_x26[3];
      uVar2 = *puVar4;
      *(undefined8 **)(unaff_x19 + 0x80) = puVar3;
      *(ulong *)(unaff_x19 + 0x48) = unaff_x25;
      *(long *)(unaff_x19 + 0x88) = unaff_x19 + 0x48;
      (*(code *)puVar4[2])(uVar2,puVar4,0,unaff_x19 + 0x80,unaff_x29 + -0x14);
      if (*(char *)(unaff_x29 + -0x14) == '\0') {
LAB_02411a44:
        lVar5 = *(long *)(unaff_x19 + 8);
        if (unaff_x22 == (long *)0x0) goto LAB_02411ab0;
        lVar6 = *unaff_x22;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_02411a88;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_02411a70;
      }
      lVar5 = *unaff_x24;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x28) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0241194c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0241194c:
      lVar5 = (*(code *)*puVar3)();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03e1f400(unaff_x19 + 0x80,lVar5,unaff_x25 >> 0x20,0);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x80);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x98);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x90);
      uVar1 = *(undefined4 *)(unaff_x19 + 0xb0);
      *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x19 + 0x88);
      *(undefined8 *)(unaff_x29 + -0x70) = uVar2;
      *(undefined8 *)(unaff_x29 + -0x58) = uVar10;
      *(undefined8 *)(unaff_x29 + -0x60) = uVar9;
      uVar9 = *(undefined8 *)(unaff_x19 + 0xa8);
      uVar2 = *(undefined8 *)(unaff_x19 + 0xa0);
      *(undefined4 *)(unaff_x29 + -0x40) = uVar1;
      *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined4 *)(unaff_x29 + -0x68) = *(undefined4 *)(unaff_x29 + -0x30);
      *(undefined8 *)(unaff_x29 + -0x48) = uVar9;
      *(undefined8 *)(unaff_x29 + -0x50) = uVar2;
      lVar5 = *unaff_x24;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x28) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_024119e8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_024119e8:
      lVar5 = (*(code *)*puVar3)();
      uVar2 = *(undefined8 *)(unaff_x29 + -0x70);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x58);
      uVar9 = *(undefined8 *)(unaff_x29 + -0x60);
      uVar12 = *(undefined8 *)(unaff_x29 + -0x48);
      uVar11 = *(undefined8 *)(unaff_x29 + -0x50);
      uVar1 = *(undefined4 *)(unaff_x29 + -0x40);
      *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x29 + -0x68);
      *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
      *(undefined8 *)(unaff_x19 + 0x98) = uVar10;
      *(undefined8 *)(unaff_x19 + 0x90) = uVar9;
      *(undefined8 *)(unaff_x19 + 0xa8) = uVar12;
      *(undefined8 *)(unaff_x19 + 0xa0) = uVar11;
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
      FUN_03e1f16c(lVar5,unaff_x25 >> 0x20,unaff_x19 + 0x10,1,0);
      lVar5 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0241181c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0241181c:
      uVar7 = (*(code *)*puVar3)();
      if ((uVar7 & 1) == 0) goto LAB_02411a44;
      lVar5 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)
               Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02411880;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02411880:
      unaff_x25 = (*(code *)*puVar3)();
      unaff_x26 = *(long **)(unaff_x20 + 0x38);
      __src = *(void **)(unaff_x29 + -0x20);
      if (-1 < *(int *)(*unaff_x26 + 0x28)) {
        __src = (void *)(unaff_x29 + -0x20);
      }
      memcpy(unaff_x23,__src,unaff_x21);
      puVar3 = unaff_x23;
    } while (*(int *)(*unaff_x26 + 0x28) < 0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_02411a70:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
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


