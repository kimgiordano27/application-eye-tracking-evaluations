/*
FUNCTION_NAME: OVRPassthroughLayer.<>c__DisplayClass9_0$$<RemoveSurfaceGeometry>b__0
ENTRY_POINT: 0367b6dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0367b910) */

byte OVRPassthroughLayer_<>c__DisplayClass9_0__<RemoveSurfaceGeometry>b__0
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar7;
  undefined8 *unaff_x24;
  byte unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  ulong in_stack_00000010;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  float fStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  
  do {
    lVar4 = *unaff_x22;
    uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_0367b730;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
                    /* try { // try from 0367b70c to 0377b70f has its CatchHandler @ 0367b7b8 */
      } while (uVar6 != 0);
    }
                    /* try { // try from 0367b710 to 0377b7af has its CatchHandler @ 0367b658 */
    puVar3 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x28,9);
LAB_0367b730:
    uVar6 = (*(code *)*puVar3)(unaff_x22,uVar1,&stack0x00000050,puVar3[1]);
    bVar2 = 0;
    if ((uVar6 & 1) != 0) {
      plVar7 = *(long **)(unaff_x20 + 0x38);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar7;
      uVar1 = *(undefined4 *)(unaff_x21 + 0x14);
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0367b7a4;
          }
          uVar6 = uVar6 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x29,0);
LAB_0367b7a4:
      uVar6 = (*(code *)*puVar3)(plVar7,uVar1,&stack0x00000040,puVar3[1]);
      bVar2 = 0;
      if ((uVar6 & 1) != 0) {
        in_stack_00000028 = uStack0000000000000078;
        in_stack_00000020 = in_stack_00000070;
        uStack0000000000000034 = uStack0000000000000084;
        uStack0000000000000030 = uStack0000000000000080;
        fVar9 = fStack000000000000007c;
        fVar8 = (float)FUN_0367b9f8();
        fVar8 = fVar8 * fStack0000000000000040;
        fVar9 = fVar9 * fStack0000000000000044;
        fVar10 = param_3 * in_stack_00000048;
        lVar4 = *(long *)(unaff_x20 + 0x68);
        in_stack_00000010 = 0;
        _fStack0000000000000018 = 0;
        FUN_0367c924(&stack0x00000010,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        param_3 = fStack0000000000000018;
        FUN_02ba874c(in_stack_00000010 & 0xffffffff,in_stack_00000010._4_4_,fStack0000000000000018,
                     uStack000000000000001c,lVar4,unaff_x21,*unaff_x24);
        bVar2 = unaff_w25 & unaff_s8 < fVar10 + fVar8 + fVar9;
      }
    }
    do {
      unaff_w25 = bVar2;
      lVar4 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0367b5f4;
          }
          uVar6 = uVar6 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0367b5f4:
      uVar6 = (*(code *)*puVar3)();
      if ((uVar6 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return unaff_w25;
        }
        lVar4 = *unaff_x19;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0) goto LAB_0367b89c;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_0367b884;
      }
      lVar4 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0367b650;
          }
          uVar6 = uVar6 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0367b650:
      unaff_x21 = (*(code *)*puVar3)();
      plVar7 = *(long **)(unaff_x20 + 0x28);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x28) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
            goto LAB_0367b6b8;
          }
          uVar6 = uVar6 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x28,0x12);
LAB_0367b6b8:
      uVar6 = (*(code *)*puVar3)(plVar7,&stack0x00000070,puVar3[1]);
      bVar2 = 0;
    } while ((uVar6 & 1) == 0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x22 = *(long **)(unaff_x20 + 0x28);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar5 = piVar5 + 4;
    if (uVar6 == 0) break;
LAB_0367b884:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0367b8b8;
    }
  }
LAB_0367b89c:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0367b8b8:
  (*(code *)*puVar3)();
  return unaff_w25;
}


