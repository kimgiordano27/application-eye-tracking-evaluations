/*
FUNCTION_NAME: Unity.Mathematics.math$$exp10
ENTRY_POINT: 03b2847c
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

void Unity_Mathematics_math__exp10(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
code_r0x03b2847c:
  if (!(bool)in_ZR) goto LAB_03b28468;
LAB_03b28480:
  puVar2 = (undefined8 *)FUN_01ecb238();
  do {
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_03b2860c;
      lVar5 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 == 0) goto LAB_03b285e4;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03b284f8;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03b284f8:
    lVar5 = (*(code *)*puVar2)();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(lVar5 + 200);
    if (lVar7 == 0) {
      FUN_03b1da04(lVar5);
      lVar7 = *(long *)(lVar5 + 200);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    lVar8 = *(long *)(lVar7 + 0x30);
    uVar1 = FUN_02293fcc(lVar8,*unaff_x28);
    if (0 < (int)uVar1) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = 0;
      lVar9 = lVar8 + 0x20;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar4 = FUN_03b3137c(lVar9,lVar5,0);
        if ((uVar4 & 1) != 0) {
          FUN_03b3c014(lVar9,0);
        }
        uVar3 = uVar3 + 1;
        lVar9 = lVar9 + 0x58;
      } while (uVar1 != uVar3);
    }
    FUN_03b23a04(lVar7,0);
    FUN_03b1c6fc(lVar7,1);
    param_1 = *unaff_x20;
    param_3 = *unaff_x26;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_03b28480;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_03b28468:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x03b2847c;
    }
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03b28600;
    }
  }
LAB_03b285e4:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03b28600:
  (*(code *)*puVar2)();
LAB_03b2860c:
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03b2866c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03b2866c:
    (*(code *)*puVar2)();
  }
  return;
}


