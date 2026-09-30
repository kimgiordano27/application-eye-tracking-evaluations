/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<GradientSettings>
ENTRY_POINT: 02386088
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

void System_Array__InternalArray__ICollection_Add<GradientSettings>
               (long param_1,undefined8 param_2,long param_3)

{
  void *__src;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong in_x9;
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
    if (in_x9 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023860c8;
        }
        in_x9 = in_x9 - 1;
        piVar7 = piVar7 + 4;
      } while (in_x9 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023860c8:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x40);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar6 = *unaff_x26;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_0238613c;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    lVar4 = FUN_01ecb238();
LAB_0238613c:
    *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
    (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
    puVar1 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 8) + 0x28)) {
      puVar1 = (undefined8 *)*unaff_x21;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58);
    uVar3 = *puVar5;
    *(undefined1 *)(unaff_x29 + -0xc) = unaff_w27;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar1;
    *(undefined8 *)(unaff_x29 + -0x30) = unaff_x25;
    *(long *)(unaff_x29 + -0x28) = unaff_x19;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x24;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x22;
    (*(code *)puVar5[2])(uVar3,puVar5,0,unaff_x29 + -0x38,unaff_x29 + -0xc);
    param_1 = *unaff_x26;
    param_3 = *unaff_x28;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  lVar4 = *(long *)(unaff_x29 + -0x58);
  if (unaff_x26 != (long *)0x0) {
    lVar6 = *unaff_x26;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02386204;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02386204:
    (*(code *)*puVar1)();
  }
  lVar6 = *(long *)(unaff_x20 + 0x38);
  __src = *(void **)(unaff_x29 + -0x50);
  if (-1 < *(int *)(*(long *)(lVar6 + 8) + 0x28)) {
    __src = (void *)(unaff_x29 + -0x48);
  }
  memcpy(unaff_x21,__src,unaff_x23);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar1 = *(undefined8 **)(lVar6 + 0x60);
  uVar3 = *puVar1;
  if (-1 < *(int *)(*(long *)(lVar6 + 8) + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
  (*(code *)puVar1[2])(uVar3);
  if (*(long *)(lVar4 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


