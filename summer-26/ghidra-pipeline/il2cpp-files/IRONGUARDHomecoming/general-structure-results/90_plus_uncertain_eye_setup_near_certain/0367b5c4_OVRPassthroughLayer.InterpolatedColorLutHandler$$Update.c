/*
FUNCTION_NAME: OVRPassthroughLayer.InterpolatedColorLutHandler$$Update
ENTRY_POINT: 0367b5c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0367b910) */

byte OVRPassthroughLayer_InterpolatedColorLutHandler__Update
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               undefined8 param_5,long param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *in_x9;
  ulong in_x10;
  int *piVar6;
  long in_x11;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 *unaff_x24;
  byte unaff_w25;
  byte bVar8;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar9;
  float fVar10;
  float fVar11;
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
    if (in_x11 == param_6) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x9 * 0x10 + 0x138);
      bVar8 = unaff_w25;
      goto LAB_0367b5f4;
    }
    in_x10 = in_x10 - 1;
    in_x9 = in_x9 + 4;
    if (in_x10 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_01ecb238();
        bVar8 = unaff_w25;
LAB_0367b5f4:
        uVar3 = (*(code *)*puVar2)();
        if ((uVar3 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) goto LAB_0367b8c4;
          lVar4 = *unaff_x19;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 == 0) goto LAB_0367b89c;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_0367b884;
        }
        lVar4 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x27) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0367b650;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0367b650:
        lVar4 = (*(code *)*puVar2)();
        plVar7 = *(long **)(unaff_x20 + 0x28);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x28) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x12) * 0x10 + 0x138);
              goto LAB_0367b6b8;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x28,0x12);
LAB_0367b6b8:
        uVar3 = (*(code *)*puVar2)(plVar7,&stack0x00000070,puVar2[1]);
        unaff_w25 = 0;
        if ((uVar3 & 1) != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar7 = *(long **)(unaff_x20 + 0x28);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *plVar7;
          uVar1 = *(undefined4 *)(lVar4 + 0x14);
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x28) {
                puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
                goto LAB_0367b730;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x28,9);
LAB_0367b730:
          uVar3 = (*(code *)*puVar2)(plVar7,uVar1,&stack0x00000050,puVar2[1]);
          unaff_w25 = 0;
          if ((uVar3 & 1) != 0) {
            plVar7 = *(long **)(unaff_x20 + 0x38);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar5 = *plVar7;
            uVar1 = *(undefined4 *)(lVar4 + 0x14);
            uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar3 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x29) {
                  puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_0367b7a4;
                }
                uVar3 = uVar3 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x29,0);
LAB_0367b7a4:
            uVar3 = (*(code *)*puVar2)(plVar7,uVar1,&stack0x00000040,puVar2[1]);
            unaff_w25 = 0;
            if ((uVar3 & 1) != 0) {
              in_stack_00000028 = uStack0000000000000078;
              in_stack_00000020 = in_stack_00000070;
              uStack0000000000000034 = uStack0000000000000084;
              uStack0000000000000030 = uStack0000000000000080;
              fVar10 = fStack000000000000007c;
              fVar9 = (float)FUN_0367b9f8();
              fVar9 = fVar9 * fStack0000000000000040;
              fVar10 = fVar10 * fStack0000000000000044;
              fVar11 = param_4 * in_stack_00000048;
              lVar5 = *(long *)(unaff_x20 + 0x68);
              in_stack_00000010 = 0;
              _fStack0000000000000018 = 0;
              FUN_0367c924(&stack0x00000010,0);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              param_4 = fStack0000000000000018;
              FUN_02ba874c(in_stack_00000010 & 0xffffffff,in_stack_00000010._4_4_,
                           fStack0000000000000018,uStack000000000000001c,lVar5,lVar4,*unaff_x24);
              unaff_w25 = bVar8 & unaff_s8 < fVar11 + fVar9 + fVar10;
            }
          }
        }
        param_1 = *unaff_x19;
        param_6 = *unaff_x26;
        in_x10 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x10 == 0);
      in_x9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x9 + -2);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_0367b884:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0367b8b8;
    }
  }
LAB_0367b89c:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0367b8b8:
  (*(code *)*puVar2)();
LAB_0367b8c4:
  return bVar8 & 1;
}


