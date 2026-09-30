/*
FUNCTION_NAME: OVRPlugin$$get_hmdPresent
ENTRY_POINT: 0314e410
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0314e71c) */

long OVRPlugin__get_hmdPresent(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  long unaff_x20;
  long lVar15;
  uint uVar16;
  ulong uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  FUN_02c403b8();
  puVar6 = PTR_DAT_03d800d8;
  puVar5 = PTR_DAT_03d800d0;
  puVar4 = PTR_DAT_03d800c8;
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
  lVar12 = *(long *)(unaff_x20 + 0x40);
  if (lVar12 == 0) {
LAB_0314e718:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar16 = *(uint *)(lVar12 + 0x18);
  if (0 < (int)uVar16) {
    uVar14 = 0;
    do {
      if (uVar16 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar15 = *(long *)(lVar12 + (long)(int)uVar14 * 8 + 0x20);
      uVar16 = 0;
      do {
        if ((lVar15 == 0) || (plVar7 = (long *)FUN_0314d63c(lVar15,uVar16), plVar7 == (long *)0x0))
        goto LAB_0314e718;
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0314e4e0;
            }
            uVar10 = uVar10 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar4,0);
LAB_0314e4e0:
        plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_0314e4f4:
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0314e540;
            }
            uVar10 = uVar10 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar3,0);
LAB_0314e540:
        uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar10 & 1) != 0) {
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0314e59c;
              }
              uVar10 = uVar10 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar5,0);
LAB_0314e59c:
          in_stack_00000018 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          uStack0000000000000010 = (ulong)uVar16;
          thunk_FUN_01b4f09c(&stack0x00000018);
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar9 = *(long *)(param_1 + 0x10);
          lVar11 = *(long *)puVar6;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar1 = *(uint *)(param_1 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
            *(uint *)(param_1 + 0x18) = uVar1 + 1;
            puVar8 = (undefined8 *)(lVar9 + 0x28);
            *puVar8 = in_stack_00000018;
            *(ulong *)(lVar9 + 0x20) = uStack0000000000000010;
            thunk_FUN_01b4f09c(puVar8,0);
          }
          else {
            FUN_02c40c38(param_1,uStack0000000000000010,in_stack_00000018,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0314e4f4;
        }
        if (plVar7 != (long *)0x0) {
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0314e678;
              }
              uVar10 = uVar10 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)puVar2,0);
LAB_0314e678:
          (*(code *)*puVar8)(plVar7,puVar8[1]);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 5);
      uVar16 = *(uint *)(lVar12 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar16);
  }
  return param_1;
}


