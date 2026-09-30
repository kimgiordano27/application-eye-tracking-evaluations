/*
FUNCTION_NAME: OVRPlugin$$GetControllerState5
ENTRY_POINT: 060d0d70
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState5(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  undefined4 *unaff_x20;
  undefined8 uVar10;
  long *plVar11;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  long *plStack0000000000000028;
  long *plStack0000000000000030;
  long lStack0000000000000038;
  long lStack0000000000000048;
  
  uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
  lStack0000000000000048 = 0;
  plStack0000000000000030 = (long *)0x0;
  lStack0000000000000038 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  plStack0000000000000028 = (long *)0x0;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar5 = FUN_071c24dc(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_07179a54(*(undefined8 *)PTR_DAT_07a243f8);
    return;
  }
  plVar11 = *(long **)(unaff_x20 + 2);
  if (plVar11 == (long *)0x0) {
    uVar3 = unaff_x20[6];
  }
  else {
    lVar8 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07a00128) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_060d0e4c;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)PTR_DAT_07a00128,0);
LAB_060d0e4c:
    uVar3 = (*(code *)*puVar6)(plVar11,puVar6[1]);
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 4);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar5 = FUN_071c0684(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x20 + 4) == 0) goto LAB_060d10dc;
    uVar5 = FUN_03d193e4(*(long *)(unaff_x20 + 4),&stack0x00000048,*(undefined8 *)PTR_DAT_07a243d0);
    if ((uVar5 & 1) != 0) {
      if (lStack0000000000000048 == 0) goto LAB_060d10dc;
      if (*(int *)(lStack0000000000000048 + 0x20) == 1) {
        return;
      }
      if (*(int *)(lStack0000000000000048 + 0x20) == 2) {
        uVar5 = FUN_060d118c(lStack0000000000000048,*unaff_x20,&stack0x00000038);
        if ((uVar5 & 1) == 0) {
          return;
        }
        if (lStack0000000000000038 == 0) {
          return;
        }
        iVar4 = FUN_03156cec(0,*(undefined8 *)PTR_DAT_07a243e8);
        if (iVar4 < 1) {
          return;
        }
        if (lStack0000000000000038 != 0) {
          plVar11 = (long *)FUN_03156cec(0,*(undefined8 *)PTR_DAT_07a243d8);
          puVar2 = PTR_DAT_07a243e0;
          puVar1 = PTR_DAT_079f49a8;
          in_stack_00000010 = (undefined1 *)&stack0x00000030;
          in_stack_00000008 = 0;
          do {
            plStack0000000000000030 = plVar11;
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar8 = *plVar11;
            uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_060d0f80;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_0367cd30(plVar11,*(long *)puVar1,0);
LAB_060d0f80:
            uVar5 = (*(code *)*puVar6)(plVar11,puVar6[1]);
            plVar11 = plStack0000000000000030;
            if ((uVar5 & 1) == 0) {
              FUN_03154064(&stack0x00000008);
              return;
            }
            if (plStack0000000000000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar8 = *plStack0000000000000030;
            uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_060d0fe4;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_0367cd30(plStack0000000000000030,*(long *)puVar2,0);
LAB_060d0fe4:
            plVar7 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
            plVar11 = plStack0000000000000030;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x178))(plVar7,uVar3,*(undefined8 *)(unaff_x20 + 4));
              plVar11 = plStack0000000000000030;
            }
          } while( true );
        }
        goto LAB_060d10dc;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar8 = FUN_060cfde8(*(long *)(unaff_x19 + 0x20),*unaff_x20,*(undefined8 *)(unaff_x20 + 4),
                         *(undefined8 *)(unaff_x20 + 2),unaff_x20[6]);
    if (lVar8 != 0) {
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_060d10dc;
      FUN_0459fb44(&stack0x00000018,*(long *)(lVar8 + 0x28),*(undefined8 *)PTR_DAT_07a243f0);
      puVar1 = PTR_DAT_07a243c0;
      in_stack_00000008 = 0;
      in_stack_00000010 = (undefined1 *)&stack0x00000018;
      while (uVar5 = FUN_05897b28(&stack0x00000018,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
        if (plStack0000000000000028 != (long *)0x0) {
          (**(code **)(*plStack0000000000000028 + 0x178))
                    (plStack0000000000000028,uVar3,*(undefined8 *)(unaff_x20 + 4));
        }
      }
      FUN_05897b24(&stack0x00000018,*(undefined8 *)PTR_DAT_07a243b8);
      if (*(char *)(lVar8 + 0x30) != '\0') {
        FUN_060d130c();
      }
    }
    return;
  }
LAB_060d10dc:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


