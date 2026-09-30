/*
FUNCTION_NAME: FUN_02306a14
ENTRY_POINT: 02306a14
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


/* WARNING: Removing unreachable block (ram,0x02306c54) */

void FUN_02306a14(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  void *unaff_x25;
  int iVar6;
  int iVar7;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  uVar1 = (*(code *)*param_1)();
  if ((uVar1 & 1) == 0) {
    FUN_03971224(0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910();
  }
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44(lVar3);
  }
  lVar4 = *unaff_x24;
  uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar1 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar3) {
        lVar3 = lVar4 + (long)*piVar5 * 0x10 + 0x138;
        goto LAB_02306a88;
      }
      uVar1 = uVar1 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar1 != 0);
  }
  lVar3 = FUN_01ecb238();
LAB_02306a88:
  *(void **)(unaff_x29 + -0x20) = unaff_x21;
  (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
  memcpy(unaff_x25,unaff_x21,unaff_x20);
  lVar3 = *unaff_x24;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar1 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02306b00;
      }
      uVar1 = uVar1 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02306b00:
  uVar1 = (*(code *)*puVar2)();
  if ((uVar1 & 1) == 0) {
    memcpy(unaff_x21,unaff_x25,unaff_x20);
    memcpy(unaff_x23,unaff_x21,unaff_x20);
    iVar7 = 0xf;
    iVar6 = 0xf;
  }
  else {
    iVar7 = 8;
    iVar6 = 8;
  }
  if (unaff_x24 != (long *)0x0) {
    lVar3 = *unaff_x24;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02306ba0;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02306ba0:
    (*(code *)*puVar2)();
    iVar6 = iVar7;
  }
  if (iVar6 == 0xf) {
    memcpy(unaff_x21,unaff_x23,unaff_x20);
    memcpy(unaff_x19,unaff_x21,unaff_x20);
  }
  else if ((iVar6 == 8) || (iVar6 == 0)) {
    FUN_0397114c(0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910();
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


