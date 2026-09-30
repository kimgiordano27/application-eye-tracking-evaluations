/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex<object,-object>$$ComputeHeight
ENTRY_POINT: 03ecf880
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>__ComputeHeight(void)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  int iVar7;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  int iStack0000000000000018;
  int iStack0000000000000020;
  int iStack0000000000000024;
  undefined8 in_stack_00000028;
  
  do {
    FUN_02f41e9c();
    do {
      uVar3 = thunk_FUN_02f45270();
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      FUN_04d8cf5c(uVar3,unaff_x24,*(undefined8 *)(lVar4 + 0xa8),*(undefined8 *)(lVar4 + 0xb8));
      FUN_034367bc(unaff_x25,uVar3,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0));
      lVar4 = *(long *)(unaff_x20 + 0x360);
      if (lVar4 == 0) goto LAB_03ecfb04;
      uVar3 = *(undefined8 *)(unaff_x24 + 0x30);
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_03ecfb04;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
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
        uVar3 = FUN_0624b7dc(&stack0x00000028,*(undefined8 *)(unaff_x24 + 0x30),0);
      }
      else {
        FUN_03abf904(lVar4,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        if (unaff_w28 == 0) goto LAB_03ecf90c;
LAB_03ecf97c:
        if (unaff_x23 == 0) goto LAB_03ecfb04;
        uVar3 = FUN_06247510(unaff_x23,*(undefined8 *)(unaff_x24 + 0x30),0);
      }
      unaff_w27 = unaff_w27 + 1;
      bVar2 = false;
      unaff_x21 = unaff_x21 + 4;
      if (iStack0000000000000024 == unaff_w27) {
        do {
          iVar7 = in_stack_00000008._4_4_;
          if ((_iStack0000000000000018 & 0x100000000) == 0) {
            do {
              lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
              if (unaff_w28 == 0) {
                lVar4 = *(long *)(lVar4 + 0x10);
                if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_02f41e9c();
                }
                if (*(int *)(lVar4 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                lVar4 = FUN_041411ac();
                if (lVar4 == 0) goto LAB_03ecfb04;
                in_stack_00000028 = *(undefined8 *)(lVar4 + 0x260);
                uVar3 = FUN_03ecf238(lVar4,*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8));
                uVar3 = FUN_0624b7dc(&stack0x00000028,uVar3,0);
              }
              else {
                uVar3 = FUN_03ecf238(uVar3,*(undefined8 *)(lVar4 + 0xd8));
                if (unaff_x23 == 0) goto LAB_03ecfb04;
                uVar3 = FUN_06247510(unaff_x23,uVar3,0);
              }
              bVar2 = iVar7 != -1;
              iVar7 = iVar7 + 1;
            } while (bVar2);
          }
          if (unaff_w28 != 0) {
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
            uVar3 = FUN_0624b7dc(&stack0x00000028,unaff_x23,0);
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
            if (unaff_x23 == 0) goto LAB_03ecfb04;
            uVar3 = FUN_0624193c(unaff_x23,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28),0);
          }
        } while (iStack0000000000000020 * iStack0000000000000024 + iStack0000000000000024 <=
                 iStack0000000000000020 * iStack0000000000000024);
        unaff_w27 = 0;
        bVar2 = true;
        unaff_x21 = (undefined8 *)(in_stack_00000010 + (long)unaff_w29 * 0x20);
      }
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50) + 0x135) & 1)
          == 0) {
        FUN_02f41e9c();
      }
      unaff_x24 = thunk_FUN_02f45270();
      FUN_036bee54(unaff_x24,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58));
      if ((unaff_x24 == 0) || (*(long *)(unaff_x24 + 0x38) = unaff_x20, unaff_x22 == 0)) {
LAB_03ecfb04:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(unaff_x22 + 0x18) <= (uint)(unaff_w29 + unaff_w27)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      uVar9 = *unaff_x21;
      uVar8 = unaff_x21[3];
      uVar3 = unaff_x21[2];
      *(undefined8 *)(unaff_x24 + 0x18) = unaff_x21[1];
      *(undefined8 *)(unaff_x24 + 0x10) = uVar9;
      *(undefined8 *)(unaff_x24 + 0x28) = uVar8;
      *(undefined8 *)(unaff_x24 + 0x20) = uVar3;
      lVar4 = FUN_0318d488(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68));
      if (lVar4 == 0) goto LAB_03ecfb04;
      FUN_0623f514(lVar4,*(undefined8 *)(unaff_x24 + 0x18),0);
      *(long *)(unaff_x24 + 0x30) = lVar4;
      FUN_0636f1e4(lVar4,1,0);
      lVar5 = *(long *)(unaff_x24 + 0x30);
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
      if (lVar5 == 0) goto LAB_03ecfb04;
      FUN_0624193c(lVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30),0);
      if (bVar2) {
        lVar5 = *(long *)(unaff_x24 + 0x30);
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
        if (lVar5 == 0) goto LAB_03ecfb04;
        FUN_0624193c(lVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38),0);
      }
      if (*(long *)(unaff_x24 + 0x30) == 0) goto LAB_03ecfb04;
      FUN_03fdf1ec(*(long *)(unaff_x24 + 0x30),*(undefined8 *)(unaff_x24 + 0x10),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
      lVar4 = *(long *)(unaff_x24 + 0x30);
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90) + 0x135) & 1)
          == 0) {
        FUN_02f41e9c();
      }
      uVar3 = thunk_FUN_02f45270();
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      FUN_04dff44c(uVar3,unaff_x24,*(undefined8 *)(lVar5 + 0x88),*(undefined8 *)(lVar5 + 0x98));
      if (lVar4 == 0) goto LAB_03ecfb04;
      FUN_03fdedec(lVar4,uVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0)
                  );
      unaff_x25 = *(undefined8 *)(unaff_x24 + 0x30);
    } while ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0) + 0x135) &
             1) != 0);
  } while( true );
}


