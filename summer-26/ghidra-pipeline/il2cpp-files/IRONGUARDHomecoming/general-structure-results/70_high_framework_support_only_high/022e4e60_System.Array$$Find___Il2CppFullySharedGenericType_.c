/*
FUNCTION_NAME: System.Array$$Find<__Il2CppFullySharedGenericType>
ENTRY_POINT: 022e4e60
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


/* WARNING: Removing unreachable block (ram,0x022e4f74) */

uint System_Array__Find<__Il2CppFullySharedGenericType>(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    puVar6 = unaff_x24;
    if (-1 < *(int *)(in_x9 + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x24;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
    (*(code *)puVar3[2])(uVar2);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      uVar1 = unaff_w26;
      if (unaff_x19 == (long *)0x0) goto LAB_022e4f10;
      goto LAB_022e4eb0;
    }
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022e4da4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_022e4da4:
    unaff_w26 = (*(code *)*puVar6)();
    if ((unaff_w26 & 1) == 0) break;
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar4 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar4 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_022e4e1c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_01ecb238();
LAB_022e4e1c:
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    param_1 = *(long *)(unaff_x20 + 0x38);
    in_x9 = *(long *)(param_1 + 0x28);
  } while( true );
  unaff_w26 = 0;
  uVar1 = 0;
  if (unaff_x19 != (long *)0x0) {
LAB_022e4eb0:
    unaff_w26 = uVar1;
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022e4f04;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_022e4f04:
    (*(code *)*puVar6)();
  }
LAB_022e4f10:
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w26 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


