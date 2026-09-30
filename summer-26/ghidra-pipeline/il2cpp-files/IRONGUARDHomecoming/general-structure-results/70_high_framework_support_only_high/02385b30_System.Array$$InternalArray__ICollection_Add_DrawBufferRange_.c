/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<DrawBufferRange>
ENTRY_POINT: 02385b30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02385cd4) */

void System_Array__InternalArray__ICollection_Add<DrawBufferRange>(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  undefined1 unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  long unaff_x29;
  
  do {
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar4 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          lVar2 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02385b94;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar2 = FUN_01ecb238();
LAB_02385b94:
    *(undefined8 **)(unaff_x29 + -0x38) = unaff_x24;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    puVar5 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x48) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x24;
    }
    puVar3 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x58);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_x29 + -0xc) = unaff_w25;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar5;
    *(undefined8 *)(unaff_x29 + -0x30) = unaff_x21;
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x20;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x23;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x28;
    (*(code *)puVar3[2])(uVar1,puVar3,0,unaff_x29 + -0x38,unaff_x29 + -0xc);
    lVar2 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02385b20;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02385b20:
    uVar6 = (*(code *)*puVar5)();
  } while ((uVar6 & 1) != 0);
  if (unaff_x22 != (long *)0x0) {
    lVar2 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02385c54;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_02385c54:
    (*(code *)*puVar5)();
  }
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x60))();
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


