/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex<object,-object>$$ComputeTotalHeight
ENTRY_POINT: 03ecf690
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>__ComputeTotalHeight
               (long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_x9;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  undefined8 *puVar9;
  long unaff_x22;
  long unaff_x23;
  long lVar10;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  int iStack0000000000000018;
  int iStack0000000000000020;
  int iStack0000000000000024;
  undefined8 in_stack_00000028;
  
  do {
    bVar2 = true;
    puVar9 = (undefined8 *)(in_x9 + param_1 * 0x20);
    do {
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50) + 0x135) & 1)
          == 0) {
        FUN_02f41e9c();
      }
      lVar3 = thunk_FUN_02f45270();
      FUN_036bee54(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58));
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) = unaff_x20, unaff_x22 == 0)) goto LAB_03ecfb04;
      if (*(uint *)(unaff_x22 + 0x18) <= (uint)(unaff_w29 + unaff_w27)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar11 = *puVar9;
      uVar6 = puVar9[3];
      uVar5 = puVar9[2];
      *(undefined8 *)(lVar3 + 0x18) = puVar9[1];
      *(undefined8 *)(lVar3 + 0x10) = uVar11;
      *(undefined8 *)(lVar3 + 0x28) = uVar6;
      *(undefined8 *)(lVar3 + 0x20) = uVar5;
      lVar4 = FUN_0318d488(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68));
      if (lVar4 == 0) goto LAB_03ecfb04;
      FUN_0623f514(lVar4,*(undefined8 *)(lVar3 + 0x18),0);
      *(long *)(lVar3 + 0x30) = lVar4;
      FUN_0636f1e4(lVar4,1,0);
      lVar10 = *(long *)(lVar3 + 0x30);
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      if (lVar10 == 0) goto LAB_03ecfb04;
      FUN_0624193c(lVar10,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30),0);
      if (bVar2) {
        lVar10 = *(long *)(lVar3 + 0x30);
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02f41e9c();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02f41e9c();
        }
        if (lVar10 == 0) goto LAB_03ecfb04;
        FUN_0624193c(lVar10,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38),0);
      }
      if (*(long *)(lVar3 + 0x30) == 0) goto LAB_03ecfb04;
      FUN_03fdf1ec(*(long *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x10),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
      lVar4 = *(long *)(lVar3 + 0x30);
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90) + 0x135) & 1)
          == 0) {
        FUN_02f41e9c();
      }
      uVar5 = thunk_FUN_02f45270();
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      FUN_04dff44c(uVar5,lVar3,*(undefined8 *)(lVar10 + 0x88),*(undefined8 *)(lVar10 + 0x98));
      if (lVar4 == 0) goto LAB_03ecfb04;
      FUN_03fdedec(lVar4,uVar5,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0)
                  );
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0) + 0x135) & 1)
          == 0) {
        FUN_02f41e9c();
      }
      uVar6 = thunk_FUN_02f45270();
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      FUN_04d8cf5c(uVar6,lVar3,*(undefined8 *)(lVar4 + 0xa8),*(undefined8 *)(lVar4 + 0xb8));
      FUN_034367bc(uVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0)
                  );
      lVar4 = *(long *)(unaff_x20 + 0x360);
      if (lVar4 == 0) goto LAB_03ecfb04;
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      lVar10 = *(long *)(lVar4 + 0x10);
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_03ecfb04;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        if (unaff_w28 != 0) goto LAB_03ecf97c;
LAB_03ecf90c:
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02f41e9c();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar4 = FUN_041411ac();
        if (lVar4 == 0) goto LAB_03ecfb04;
        in_stack_00000028 = *(undefined8 *)(lVar4 + 0x260);
        uVar5 = FUN_0624b7dc(&stack0x00000028,*(undefined8 *)(lVar3 + 0x30),0);
      }
      else {
        FUN_03abf904(lVar4,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        if (unaff_w28 == 0) goto LAB_03ecf90c;
LAB_03ecf97c:
        if (unaff_x23 == 0) goto LAB_03ecfb04;
        uVar5 = FUN_06247510(unaff_x23,*(undefined8 *)(lVar3 + 0x30),0);
      }
      unaff_w27 = unaff_w27 + 1;
      bVar2 = false;
      puVar9 = puVar9 + 4;
    } while (iStack0000000000000024 != unaff_w27);
    do {
      iVar8 = in_stack_00000008._4_4_;
      if ((_iStack0000000000000018 & 0x100000000) == 0) {
        do {
          lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
          if (unaff_w28 == 0) {
            lVar3 = *(long *)(lVar3 + 0x10);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_02f41e9c();
            }
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            lVar3 = FUN_041411ac();
            if (lVar3 == 0) goto LAB_03ecfb04;
            in_stack_00000028 = *(undefined8 *)(lVar3 + 0x260);
            uVar5 = FUN_03ecf238(lVar3,*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8));
            uVar5 = FUN_0624b7dc(&stack0x00000028,uVar5,0);
          }
          else {
            uVar5 = FUN_03ecf238(uVar5,*(undefined8 *)(lVar3 + 0xd8));
            if (unaff_x23 == 0) goto LAB_03ecfb04;
            uVar5 = FUN_06247510(unaff_x23,uVar5,0);
          }
          bVar2 = iVar8 != -1;
          iVar8 = iVar8 + 1;
        } while (bVar2);
      }
      if (unaff_w28 != 0) {
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02f41e9c();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar3 = FUN_041411ac();
        if (lVar3 == 0) {
LAB_03ecfb04:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        in_stack_00000028 = *(undefined8 *)(lVar3 + 0x260);
        uVar5 = FUN_0624b7dc(&stack0x00000028,unaff_x23,0);
      }
      iStack0000000000000020 = iStack0000000000000020 + 1;
      unaff_w29 = unaff_w29 + iStack0000000000000024;
      if (iStack0000000000000020 == iStack0000000000000018) {
        FUN_03ecfb0c();
        return;
      }
      if (unaff_w28 == 0) {
        unaff_x23 = 0;
      }
      else {
        unaff_x23 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9cb8);
        FUN_0623f858(unaff_x23,0);
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02f41e9c();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02f41e9c();
        }
        if (unaff_x23 == 0) goto LAB_03ecfb04;
        uVar5 = FUN_0624193c(unaff_x23,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28),0);
      }
    } while (iStack0000000000000020 * iStack0000000000000024 + iStack0000000000000024 <=
             iStack0000000000000020 * iStack0000000000000024);
    param_1 = (long)unaff_w29;
    unaff_w27 = 0;
    in_x9 = in_stack_00000010;
  } while( true );
}


