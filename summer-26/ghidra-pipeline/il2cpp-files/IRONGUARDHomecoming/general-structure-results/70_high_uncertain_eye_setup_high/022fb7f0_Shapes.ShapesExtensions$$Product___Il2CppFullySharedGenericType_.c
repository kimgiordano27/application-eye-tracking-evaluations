/*
FUNCTION_NAME: Shapes.ShapesExtensions$$Product<__Il2CppFullySharedGenericType>
ENTRY_POINT: 022fb7f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022fb898) */
/* WARNING: Removing unreachable block (ram,0x022fb918) */

void Shapes_ShapesExtensions__Product<__Il2CppFullySharedGenericType>
               (code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x26;
  void *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  do {
    (*param_1)(param_2);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      memcpy(unaff_x21,unaff_x27,unaff_x20);
      memcpy(unaff_x22,unaff_x21,unaff_x20);
    }
    lVar3 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x19) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_022fb70c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_022fb70c:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) break;
    lVar3 = *(long *)(*(long *)(unaff_x24 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_022fb780;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_022fb780:
    *(void **)(unaff_x29 + -0x18) = unaff_x21;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    memcpy(unaff_x27,unaff_x21,unaff_x20);
    memcpy(unaff_x26,unaff_x27,unaff_x20);
    puVar1 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x24 + 0x38) + 0x10) + 0x28)) {
      puVar1 = (undefined8 *)*unaff_x26;
    }
    puVar2 = *(undefined8 **)(*(long *)(unaff_x24 + 0x38) + 0x30);
    param_2 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
    param_1 = (code *)puVar2[2];
  } while( true );
  if (unaff_x23 != (long *)0x0) {
    lVar3 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_022fb880;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_022fb880:
    (*(code *)*puVar1)();
  }
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  memcpy(*(void **)(unaff_x29 + -0x20),unaff_x21,unaff_x20);
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


