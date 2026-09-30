/*
FUNCTION_NAME: FUN_02382780
ENTRY_POINT: 02382780
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023828a4) */

void FUN_02382780(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x02382780:
  do {
    *(void **)(unaff_x29 + -0x10) = unaff_x24;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
    memcpy(unaff_x26,unaff_x24,unaff_x23);
    memcpy(unaff_x25,unaff_x26,unaff_x23);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar3 = unaff_x25;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x20) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x25;
    }
    puVar2 = *(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x30);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar3;
    (*(code *)puVar2[2])(uVar1);
    lVar4 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0238270c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0238270c:
    uVar6 = (*(code *)*puVar3)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_02382860;
      lVar4 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_02382838;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          param_1 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto code_r0x02382780;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    param_1 = FUN_01ecb238();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02382854;
    }
  }
LAB_02382838:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02382854:
  (*(code *)*puVar3)();
LAB_02382860:
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


