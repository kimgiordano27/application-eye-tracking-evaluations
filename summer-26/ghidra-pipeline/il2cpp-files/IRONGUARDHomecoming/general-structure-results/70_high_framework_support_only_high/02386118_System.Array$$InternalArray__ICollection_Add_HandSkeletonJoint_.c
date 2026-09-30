/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<HandSkeletonJoint>
ENTRY_POINT: 02386118
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0238621c) */
/* WARNING: Removing unreachable block (ram,0x023862b4) */

void System_Array__InternalArray__ICollection_Add<HandSkeletonJoint>
               (long param_1,undefined8 param_2,long param_3)

{
  void *__src;
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  int *in_x10;
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
  
code_r0x02386118:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_02386108;
LAB_02386120:
  lVar1 = FUN_01ecb238();
  do {
    *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
    (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    puVar4 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 8) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x21;
    }
    puVar3 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_x29 + -0xc) = unaff_w27;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar4;
    *(undefined8 *)(unaff_x29 + -0x30) = unaff_x25;
    *(long *)(unaff_x29 + -0x28) = unaff_x19;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x24;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x22;
    (*(code *)puVar3[2])(uVar2,puVar3,0,unaff_x29 + -0x38,unaff_x29 + -0xc);
    lVar1 = *unaff_x26;
    uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023860c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_023860c8:
    uVar6 = (*(code *)*puVar4)();
    if ((uVar6 & 1) == 0) {
      lVar1 = *(long *)(unaff_x29 + -0x58);
      if (unaff_x26 == (long *)0x0) goto LAB_02386210;
      lVar5 = *unaff_x26;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_023861e8;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    param_3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x40);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01ecaf44(param_3);
    }
    param_1 = *unaff_x26;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_02386120;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02386108:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x02386118;
    }
    lVar1 = param_1 + (long)*in_x10 * 0x10 + 0x138;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02386204;
    }
  }
LAB_023861e8:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02386204:
  (*(code *)*puVar4)();
LAB_02386210:
  lVar5 = *(long *)(unaff_x20 + 0x38);
  __src = *(void **)(unaff_x29 + -0x50);
  if (-1 < *(int *)(*(long *)(lVar5 + 8) + 0x28)) {
    __src = (void *)(unaff_x29 + -0x48);
  }
  memcpy(unaff_x21,__src,unaff_x23);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar4 = *(undefined8 **)(lVar5 + 0x60);
  uVar2 = *puVar4;
  if (-1 < *(int *)(*(long *)(lVar5 + 8) + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  *(undefined8 **)(unaff_x29 + -0x40) = unaff_x21;
  (*(code *)puVar4[2])(uVar2);
  if (*(long *)(lVar1 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


