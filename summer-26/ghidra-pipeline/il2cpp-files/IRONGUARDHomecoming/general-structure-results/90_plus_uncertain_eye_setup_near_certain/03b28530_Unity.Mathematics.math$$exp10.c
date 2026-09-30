/*
FUNCTION_NAME: Unity.Mathematics.math$$exp10
ENTRY_POINT: 03b28530
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b286f0) */
/* WARNING: Removing unreachable block (ram,0x03b286fc) */

void Unity_Mathematics_math__exp10(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  ulong uVar6;
  
  do {
    uVar1 = FUN_02293fcc(param_1,param_2);
    if (0 < (int)uVar1) {
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar6 = 0;
      lVar4 = unaff_x23 + 0x20;
      do {
        if (*(uint *)(unaff_x23 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar3 = FUN_03b3137c(lVar4,unaff_x21,0);
        if ((uVar3 & 1) != 0) {
          FUN_03b3c014(lVar4,0);
        }
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 0x58;
      } while (uVar1 != uVar6);
    }
    FUN_03b23a04(unaff_x22,0);
    FUN_03b1c6fc(unaff_x22,1);
    lVar4 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03b2849c;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03b2849c:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_03b2860c;
      lVar4 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_03b285e4;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03b284f8;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03b284f8:
    unaff_x21 = (*(code *)*puVar2)();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x22 = *(long *)(unaff_x21 + 200);
    if (unaff_x22 == 0) {
      FUN_03b1da04(unaff_x21);
      unaff_x22 = *(long *)(unaff_x21 + 200);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    param_1 = *(long *)(unaff_x22 + 0x30);
    param_2 = *unaff_x28;
    unaff_x23 = param_1;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar5 = piVar5 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03b28600;
    }
  }
LAB_03b285e4:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03b28600:
  (*(code *)*puVar2)();
LAB_03b2860c:
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03b2866c;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03b2866c:
    (*(code *)*puVar2)();
  }
  return;
}


