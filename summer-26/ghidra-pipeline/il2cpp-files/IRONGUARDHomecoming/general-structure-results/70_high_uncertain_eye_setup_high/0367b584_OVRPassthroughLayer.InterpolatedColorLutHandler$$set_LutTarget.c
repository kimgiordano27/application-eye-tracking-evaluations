/*
FUNCTION_NAME: OVRPassthroughLayer.InterpolatedColorLutHandler$$set_LutTarget
ENTRY_POINT: 0367b584
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

byte OVRPassthroughLayer_InterpolatedColorLutHandler__set_LutTarget
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  int *piVar8;
  ulong uVar9;
  long *unaff_x19;
  long unaff_x20;
  long *plVar10;
  long unaff_x24;
  undefined8 *puVar11;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long *plVar12;
  long unaff_x29;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
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
  
  plVar12 = *(long **)(unaff_x28 + 0x270);
  plVar13 = *(long **)(unaff_x29 + 0xdc0);
  puVar11 = *(undefined8 **)(unaff_x24 + 0x890);
  bVar2 = 1;
  do {
    bVar7 = bVar2;
    lVar5 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0367b5f4;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0367b5f4:
    uVar9 = (*(code *)*puVar3)();
    if ((uVar9 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return bVar7;
      }
      lVar5 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 == 0) goto LAB_0367b89c;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0367b650;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0367b650:
    lVar5 = (*(code *)*puVar3)();
    plVar10 = *(long **)(unaff_x20 + 0x28);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar10;
    lVar4 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x12) * 0x10 + 0x138);
          goto LAB_0367b6b8;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar10,lVar4,0x12);
LAB_0367b6b8:
    uVar9 = (*(code *)*puVar3)(plVar10,&stack0x00000070,puVar3[1]);
    bVar2 = 0;
    if ((uVar9 & 1) != 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar10 = *(long **)(unaff_x20 + 0x28);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *plVar10;
      uVar1 = *(undefined4 *)(lVar5 + 0x14);
      lVar4 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
            goto LAB_0367b730;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar10,lVar4,9);
LAB_0367b730:
      uVar9 = (*(code *)*puVar3)(plVar10,uVar1,&stack0x00000050,puVar3[1]);
      bVar2 = 0;
      if ((uVar9 & 1) != 0) {
        plVar10 = *(long **)(unaff_x20 + 0x38);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *plVar10;
        uVar1 = *(undefined4 *)(lVar5 + 0x14);
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *plVar13) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0367b7a4;
            }
            uVar9 = uVar9 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*plVar13,0);
LAB_0367b7a4:
        uVar9 = (*(code *)*puVar3)(plVar10,uVar1,&stack0x00000040,puVar3[1]);
        bVar2 = 0;
        if ((uVar9 & 1) != 0) {
          in_stack_00000028 = uStack0000000000000078;
          in_stack_00000020 = in_stack_00000070;
          uStack0000000000000034 = uStack0000000000000084;
          uStack0000000000000030 = uStack0000000000000080;
          fVar15 = fStack000000000000007c;
          fVar14 = (float)FUN_0367b9f8();
          fVar14 = fVar14 * fStack0000000000000040;
          fVar15 = fVar15 * fStack0000000000000044;
          fVar16 = param_3 * in_stack_00000048;
          lVar4 = *(long *)(unaff_x20 + 0x68);
          in_stack_00000010 = 0;
          _fStack0000000000000018 = 0;
          FUN_0367c924(&stack0x00000010,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          param_3 = fStack0000000000000018;
          FUN_02ba874c(in_stack_00000010 & 0xffffffff,in_stack_00000010._4_4_,fStack0000000000000018
                       ,uStack000000000000001c,lVar4,lVar5,*puVar11);
          bVar2 = bVar7 & (unaff_s8 - unaff_s11) * (unaff_s10 + unaff_s9) < fVar16 + fVar14 + fVar15
          ;
        }
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar8 = piVar8 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0367b8b8;
    }
  }
LAB_0367b89c:
  puVar11 = (undefined8 *)FUN_01ecb238();
LAB_0367b8b8:
  (*(code *)*puVar11)();
  return bVar7;
}


