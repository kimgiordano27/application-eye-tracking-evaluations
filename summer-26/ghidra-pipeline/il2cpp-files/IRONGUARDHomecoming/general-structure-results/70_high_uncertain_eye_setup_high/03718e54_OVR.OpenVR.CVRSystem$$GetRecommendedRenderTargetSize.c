/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetRecommendedRenderTargetSize
ENTRY_POINT: 03718e54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03718ecc) */
/* WARNING: Removing unreachable block (ram,0x03718ef4) */
/* WARNING: Removing unreachable block (ram,0x03718f74) */
/* WARNING: Removing unreachable block (ram,0x03718f7c) */

void OVR_OpenVR_CVRSystem__GetRecommendedRenderTargetSize(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  do {
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03718cbc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03718cbc:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_03718e9c;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03718d18;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03718d18:
    lVar4 = (*(code *)*puVar1)();
    lVar2 = FUN_01f08890(*unaff_x26,7);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = FUN_035683d0(lVar4 + 0x28,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar2 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x28) = *unaff_x27;
    thunk_FUN_01f51358();
    if (*(long *)(lVar4 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar2 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(lVar4 + 0x50) + 0x28);
    thunk_FUN_01f51358();
    if (*(uint *)(lVar2 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x38) = *unaff_x28;
    thunk_FUN_01f51358();
    uVar3 = FUN_0356965c(lVar4 + 0x30,0);
    if (*(uint *)(lVar2 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x40) = uVar3;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar2 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x48) = *unaff_x28;
    thunk_FUN_01f51358();
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_0354f308(lVar4 + 0x48,0);
    if (*(uint *)(lVar2 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar2 + 0x50) = uVar3;
    thunk_FUN_01f51358();
    FUN_0340efe8(lVar2,0);
    FUN_037184fc();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03718eb8;
    }
  }
LAB_03718e9c:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03718eb8:
  (*(code *)*puVar1)();
  return;
}


