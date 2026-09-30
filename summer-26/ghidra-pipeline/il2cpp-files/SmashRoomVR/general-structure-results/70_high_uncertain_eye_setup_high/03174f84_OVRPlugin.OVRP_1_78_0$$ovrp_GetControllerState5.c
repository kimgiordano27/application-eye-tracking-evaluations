/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetControllerState5
ENTRY_POINT: 03174f84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetControllerState5(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong in_x9;
  long lVar10;
  int *piVar11;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar12;
  long *unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float unaff_s13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  uint in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  uint in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  do {
    if (in_x11 == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
      goto LAB_03174fb8;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_01ae9f78(unaff_x23,param_3,4);
LAB_03174fb8:
        (*(code *)*puVar4)(&stack0x00000030,unaff_x23,unaff_w22,0,puVar4[1]);
        in_stack_00000010 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
        uStack0000000000000064 = uStack0000000000000044;
        uStack0000000000000060 = uStack0000000000000040;
        in_stack_00000058 = in_stack_00000038;
        in_stack_00000018 = in_stack_00000038;
        uStack0000000000000024 = uStack0000000000000044;
        uStack0000000000000020 = uStack0000000000000040;
        in_stack_00000050 = in_stack_00000010;
        in_stack_00000078 = FUN_03175250();
        do {
          uStack0000000000000030 = unaff_w22;
          uVar5 = thunk_FUN_01afa70c(*unaff_x28,&stack0x00000030);
          in_stack_00000008._4_4_ = (undefined4)unaff_x21;
          uVar6 = thunk_FUN_01afa70c(*unaff_x28,(long)&stack0x00000008 + 4);
          FUN_02ee7120(*(undefined8 *)PTR_DAT_03d80b70,uVar5,uVar6,0);
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_031751a8;
          uVar5 = FUN_0317544c(*(long *)(unaff_x19 + 0x30),unaff_w22);
          if (in_stack_00000078 == 0) goto LAB_031751a8;
          fVar3 = (float)uVar5;
          if (unaff_w22 != 0) {
            fVar3 = unaff_s13;
          }
          fVar2 = -(float)uVar5;
          if (unaff_x21 < 0x13) {
            fVar2 = fVar3;
          }
          FUN_0391c27c(in_stack_00000078,0);
          uVar5 = FUN_031754c4(unaff_d8,unaff_d9,unaff_d10,uVar5,fVar2);
          lVar7 = in_stack_00000078;
          uVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d80b40);
          FUN_03175740(uVar6,unaff_w22,unaff_x21 & 0xffffffff,lVar7,uVar5);
          lVar7 = *(long *)(unaff_x19 + 0x58);
          if (lVar7 == 0) goto LAB_031751a8;
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar10 = *unaff_x29;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_031751a8;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar4 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *puVar4 = uVar6;
            thunk_FUN_01b4f09c(puVar4,uVar6);
          }
          else {
            FUN_02b599e4(lVar7,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          do {
            unaff_x21 = unaff_x21 + 1;
            if (unaff_x21 == 0x18) {
              FUN_03175798();
              lVar7 = *(long *)(unaff_x19 + 0x48);
              *(undefined2 *)(unaff_x19 + 0x70) = 0x100;
              if (lVar7 != 0) {
                (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
                return;
              }
              goto LAB_031751a8;
            }
            lVar7 = *unaff_x26;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar7 = *unaff_x26;
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
            if (lVar7 == 0) goto LAB_031751a8;
            if (*(uint *)(lVar7 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            unaff_w22 = *(uint *)(lVar7 + unaff_x21 * 4 + 0x20);
          } while ((unaff_w22 == 0xffffffff) ||
                  ((*(uint *)(unaff_x19 + 0x40) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
          plVar12 = *(long **)(unaff_x19 + 0x28);
          if (plVar12 == (long *)0x0) goto LAB_031751a8;
          lVar7 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x27) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                goto LAB_03174f2c;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ae9f78(plVar12,*unaff_x27,4);
LAB_03174f2c:
          (*(code *)*puVar4)(&stack0x00000030,plVar12,unaff_x21 & 0xffffffff,0,puVar4[1]);
          unaff_d8 = (ulong)uStack0000000000000030;
          unaff_d9 = (ulong)uStack0000000000000034;
          unaff_d10 = (ulong)in_stack_00000038;
          uVar9 = FUN_031751b0();
        } while ((uVar9 & 1) != 0);
        unaff_x23 = *(long **)(unaff_x19 + 0x28);
        if (unaff_x23 == (long *)0x0) {
LAB_031751a8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        param_1 = *unaff_x23;
        param_3 = *unaff_x27;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


