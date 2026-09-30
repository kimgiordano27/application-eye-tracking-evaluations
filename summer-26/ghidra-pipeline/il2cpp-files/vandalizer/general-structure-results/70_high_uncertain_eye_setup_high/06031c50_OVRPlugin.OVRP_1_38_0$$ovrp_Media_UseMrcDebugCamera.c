/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_UseMrcDebugCamera
ENTRY_POINT: 06031c50
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_UseMrcDebugCamera(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  ulong unaff_x21;
  long *plVar11;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 unaff_s10;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  do {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *unaff_x27;
    do {
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_06031f80;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x21) {
LAB_06031f84:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      uVar1 = *(uint *)(lVar3 + unaff_x21 * 4 + 0x20);
      if ((uVar1 != 0xffffffff) &&
         ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) != 0)) {
        plVar11 = *(long **)(unaff_x19 + 0x38);
        if (plVar11 == (long *)0x0) goto LAB_06031f80;
        lVar3 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar3 + (long)(*piVar10 + 9) * 0x10 + 0x138);
              goto LAB_06031ce4;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_0322c1e8(plVar11,*unaff_x26,9);
LAB_06031ce4:
        (*(code *)*puVar4)(plVar11,uVar1,&stack0x00000050,puVar4[1]);
        uVar8 = FUN_06031f94();
        if ((uVar8 & 1) == 0) {
          in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
          in_stack_00000018 = in_stack_00000058;
          uStack0000000000000024 = uStack0000000000000064;
          uStack0000000000000020 = uStack0000000000000060;
          lVar3 = FUN_0603205c();
          plVar11 = *(long **)(unaff_x19 + 0x78);
          in_stack_00000078 = lVar3;
          if (plVar11 == (long *)0x0) goto LAB_06031f80;
          if ((lVar3 != 0) &&
             (lVar5 = thunk_FUN_0322f04c(lVar3,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
            uVar6 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
            FUN_031f225c(uVar6,0);
          }
          if (*(uint *)(plVar11 + 3) <= uVar1) goto LAB_06031f84;
          plVar11[(long)(int)uVar1 + 4] = lVar3;
          thunk_FUN_0329bf60(plVar11 + (long)(int)uVar1 + 4,lVar3);
        }
        uStack000000000000000c = uVar1;
        uVar6 = thunk_FUN_0322ed78(*unaff_x28,(long)&stack0x00000008 + 4);
        uStack0000000000000008 = (uint)unaff_x21;
        uVar7 = thunk_FUN_0322ed78(*unaff_x28,&stack0x00000008);
        FUN_05c89614(*(undefined8 *)PTR_DAT_075f7900,uVar6,uVar7,0);
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06031f80;
        uVar6 = FUN_06033f9c(*(long *)(unaff_x19 + 0x40),uVar1,0);
        plVar11 = *(long **)(unaff_x19 + 0x38);
        uVar2 = (int)uVar6;
        if (uVar1 != 0) {
          uVar2 = unaff_s10;
        }
        if (plVar11 == (long *)0x0) goto LAB_06031f80;
        lVar3 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x26) {
              puVar4 = (undefined8 *)(lVar3 + (long)(*piVar10 + 9) * 0x10 + 0x138);
              goto LAB_06031e3c;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_0322c1e8(plVar11,*unaff_x26,9);
LAB_06031e3c:
        (*(code *)*puVar4)(plVar11,unaff_x21 & 0xffffffff,&stack0x00000030,puVar4[1]);
        if (in_stack_00000078 == 0) goto LAB_06031f80;
        FUN_06e5502c(in_stack_00000078,0);
        uVar6 = FUN_0603221c(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                             uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar6,
                             uVar2);
        lVar3 = in_stack_00000078;
        uVar7 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f78c0);
        FUN_06032bd8(uVar7,uVar1,unaff_x21 & 0xffffffff,lVar3,uVar6,0);
        lVar3 = *(long *)(unaff_x19 + 0x68);
        if (lVar3 == 0) goto LAB_06031f80;
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar9 = *unaff_x29;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_06031f80;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar4 = uVar7;
          thunk_FUN_0329bf60(puVar4,uVar7);
        }
        else {
          FUN_047af440(lVar3,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x1a) {
        FUN_06032484();
        lVar3 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
          return;
        }
LAB_06031f80:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar3 = *unaff_x27;
    } while (*(int *)(lVar3 + 0xe4) != 0);
  } while( true );
}


