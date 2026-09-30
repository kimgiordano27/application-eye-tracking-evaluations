/*
FUNCTION_NAME: OVRPlugin$$get_powerSaving
ENTRY_POINT: 0314e380
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

long OVRPlugin__get_powerSaving(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uStack0000000000000010;
  undefined8 in_stack_00000018;
  
  puVar3 = PTR_DAT_03d800c0;
  puVar2 = PTR_DAT_03d800b8;
  if ((DAT_03ff1fbe & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(PTR_DAT_03d800c8);
    thunk_FUN_01ad9084(PTR_DAT_03d800d0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(PTR_DAT_03d800d8);
    thunk_FUN_01ad9084(PTR_DAT_03d800c0);
    thunk_FUN_01ad9084(PTR_DAT_03d800b8);
    DAT_03ff1fbe = 1;
  }
  in_stack_00000018 = 0;
  lVar7 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
  FUN_02c403b8(lVar7,*(undefined8 *)puVar3);
  puVar6 = PTR_DAT_03d800d8;
  puVar5 = PTR_DAT_03d800d0;
  puVar4 = PTR_DAT_03d800c8;
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
  lVar13 = *(long *)(param_1 + 0x40);
  if (lVar13 == 0) {
LAB_0314e718:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar17 = *(uint *)(lVar13 + 0x18);
  if (0 < (int)uVar17) {
    uVar15 = 0;
    do {
      if (uVar17 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar16 = *(long *)(lVar13 + (long)(int)uVar15 * 8 + 0x20);
      uVar17 = 0;
      do {
        if ((lVar16 == 0) || (plVar8 = (long *)FUN_0314d63c(lVar16,uVar17), plVar8 == (long *)0x0))
        goto LAB_0314e718;
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0314e4e0;
            }
            uVar11 = uVar11 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar4,0);
LAB_0314e4e0:
        plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
LAB_0314e4f4:
        lVar10 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0314e540;
            }
            uVar11 = uVar11 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar11 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar3,0);
LAB_0314e540:
        uVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar11 & 1) != 0) {
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0314e59c;
              }
              uVar11 = uVar11 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar5,0);
LAB_0314e59c:
          in_stack_00000018 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          uStack0000000000000010 = (ulong)uVar17;
          thunk_FUN_01b4f09c(&stack0x00000018);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar10 = *(long *)(lVar7 + 0x10);
          lVar12 = *(long *)puVar6;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar10 + 0x28);
            *puVar9 = in_stack_00000018;
            *(ulong *)(lVar10 + 0x20) = uStack0000000000000010;
            thunk_FUN_01b4f09c(puVar9,0);
          }
          else {
            FUN_02c40c38(lVar7,uStack0000000000000010,in_stack_00000018,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_0314e4f4;
        }
        if (plVar8 != (long *)0x0) {
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_0314e678;
              }
              uVar11 = uVar11 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar2,0);
LAB_0314e678:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != 5);
      uVar17 = *(uint *)(lVar13 + 0x18);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar17);
  }
  return lVar7;
}


