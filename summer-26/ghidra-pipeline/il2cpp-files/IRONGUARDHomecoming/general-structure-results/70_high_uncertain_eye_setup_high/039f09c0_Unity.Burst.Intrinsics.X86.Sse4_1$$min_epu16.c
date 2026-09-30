/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Sse4_1$$min_epu16
ENTRY_POINT: 039f09c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039f0b58) */

long Unity_Burst_Intrinsics_X86_Sse4_1__min_epu16(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined8 *unaff_x22;
  long lVar10;
  long unaff_x23;
  long lVar11;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar12 [16];
  long in_stack_00000008;
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_039f0a04;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_039f0a04:
    auVar12 = (*(code *)*puVar1)();
    lVar3 = auVar12._8_8_;
    uVar2 = auVar12._0_8_;
    uVar5 = thunk_FUN_0340e318(uVar2,*unaff_x29,0);
    lVar10 = unaff_x23;
    lVar11 = unaff_x24;
    if ((uVar5 & 1) != 0) {
      iVar9 = 9;
      iVar8 = 9;
      lVar7 = unaff_x25;
      goto joined_r0x039f0a9c;
    }
    uVar5 = thunk_FUN_0340e318(uVar2,*unaff_x26,0);
    lVar7 = lVar3;
    lVar4 = in_stack_00000008;
    if (((((uVar5 & 1) == 0) &&
         (uVar5 = thunk_FUN_0340e318(uVar2,*unaff_x22,0), lVar7 = unaff_x25, lVar11 = lVar3,
         (uVar5 & 1) == 0)) &&
        (uVar5 = thunk_FUN_0340e318(uVar2,*(undefined8 *)StringLiteral_6127,0), lVar10 = lVar3,
        lVar11 = unaff_x24, (uVar5 & 1) == 0)) &&
       (lVar10 = unaff_x23, lVar4 = lVar3, in_stack_00000008 != 0)) {
      lVar4 = in_stack_00000008;
    }
    in_stack_00000008 = lVar4;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_039f09a8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_039f09a8:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) break;
    param_1 = *unaff_x19;
    param_3 = *unaff_x28;
    unaff_x23 = lVar10;
    unaff_x24 = lVar11;
    unaff_x25 = lVar7;
  } while( true );
  lVar3 = 0;
  iVar9 = 10;
  iVar8 = 10;
joined_r0x039f0a9c:
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_039f0af4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_039f0af4:
    (*(code *)*puVar1)();
    iVar8 = iVar9;
  }
  if (((iVar8 == 10) || (iVar8 == 0)) &&
     ((lVar3 = lVar7, lVar7 == 0 &&
      ((lVar3 = lVar11, lVar11 == 0 && (lVar3 = in_stack_00000008, lVar10 != 0)))))) {
    lVar3 = lVar10;
  }
  return lVar3;
}


