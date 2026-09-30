/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<BezierCurve>
ENTRY_POINT: 02385080
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02385290) */

undefined8
System_Array__InternalArray__ICollection_Add<BezierCurve>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong in_x9;
  int *piVar7;
  long *unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    if (in_x9 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023850c0;
        }
        in_x9 = in_x9 - 1;
        piVar7 = piVar7 + 4;
      } while (in_x9 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023850c0:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_02385248;
      lVar4 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_02385220;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar6 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02385134;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    lVar4 = FUN_01ecb238();
LAB_02385134:
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
    memcpy(unaff_x27,unaff_x25,unaff_x24);
    memcpy(unaff_x26,unaff_x27,unaff_x24);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar1 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x22 + 0x38) + 0x20) + 0x28)) {
      puVar1 = (undefined8 *)*unaff_x26;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x30);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
    (*(code *)puVar5[2])(uVar3);
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x38))
                      (*(undefined8 *)(unaff_x29 + -0x10));
    unaff_x21 = (*(code *)**(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x40))(unaff_x21,uVar3);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *unaff_x19;
    param_3 = *unaff_x28;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0238523c;
    }
  }
LAB_02385220:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0238523c:
  (*(code *)*puVar1)();
LAB_02385248:
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x21;
}


