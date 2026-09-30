/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<HandSphere>
ENTRY_POINT: 02386160
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0238621c) */
/* WARNING: Removing unreachable block (ram,0x023862b4) */

void System_Array__InternalArray__ICollection_Add<HandSphere>(long param_1)

{
  void *__src;
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long in_x9;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  size_t unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    puVar5 = unaff_x21;
    if (-1 < *(int *)(param_1 + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x21;
    }
    puVar2 = *(undefined8 **)(in_x9 + 0x58);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_x29 + -0xc) = unaff_w27;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar5;
    *(undefined8 *)(unaff_x29 + -0x30) = unaff_x25;
    *(long *)(unaff_x29 + -0x28) = unaff_x19;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x24;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x22;
    (*(code *)puVar2[2])(uVar1,puVar2,0,unaff_x29 + -0x38,unaff_x29 + -0xc);
    lVar3 = *unaff_x26;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023860c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_023860c8:
    uVar6 = (*(code *)*puVar5)();
    if ((uVar6 & 1) == 0) break;
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x26;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_0238613c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_0238613c:
    *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    in_x9 = *(long *)(unaff_x20 + 0x38);
    param_1 = *(long *)(in_x9 + 8);
  } while( true );
  lVar3 = *(long *)(unaff_x29 + -0x58);
  if (unaff_x26 != (long *)0x0) {
    lVar4 = *unaff_x26;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02386204;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02386204:
    (*(code *)*puVar5)();
  }
  lVar4 = *(long *)(unaff_x20 + 0x38);
  __src = *(void **)(unaff_x29 + -0x50);
  if (-1 < *(int *)(*(long *)(lVar4 + 8) + 0x28)) {
    __src = (void *)(unaff_x29 + -0x48);
  }
  memcpy(unaff_x21,__src,unaff_x23);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar5 = *(undefined8 **)(lVar4 + 0x60);
  uVar1 = *puVar5;
  if (-1 < *(int *)(*(long *)(lVar4 + 8) + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
  (*(code *)puVar5[2])(uVar1);
  if (*(long *)(lVar3 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


