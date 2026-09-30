/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__717_106
ENTRY_POINT: 02914ac4
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__717_106(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int iVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  
  plVar3 = (long *)thunk_FUN_0164ba04();
  puVar1 = PTR_DAT_06dc26f0;
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x418))(plVar3,*(undefined8 *)(*plVar3 + 0x420));
    uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar1);
    }
    plVar4 = (long *)FUN_031c8668(uVar11,0);
    if (plVar3 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar3 + 0x298))(plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x2a0));
      if ((uVar5 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_02914d78;
        uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar3,*(undefined8 *)(*plVar4 + 0x2a0));
        if ((uVar5 & 1) == 0) {
          FUN_031dbd4c(0);
        }
      }
      plVar3 = (long *)thunk_FUN_015d0480();
      if (plVar3 == (long *)0x0) {
        FUN_031dbd4c();
      }
      plVar4 = *(long **)(unaff_x21 + 0x10);
      if (plVar4 != (long *)0x0) {
        lVar7 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_015c2790(lVar7);
        }
        lVar8 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02914c30;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_015c2a80(plVar4,lVar7,0);
LAB_02914c30:
        iVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
        if (0 < iVar2) {
          iVar10 = 0;
          do {
            plVar4 = *(long **)(unaff_x21 + 0x10);
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_015c2790(lVar7);
            }
            lVar8 = *plVar4;
            uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
            if (uVar5 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar7) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_02914cbc;
                }
                uVar5 = uVar5 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)FUN_015c2a80(plVar4,lVar7,0);
LAB_02914cbc:
            in_stack_00000008._4_4_ = (*(code *)*puVar6)(plVar4,iVar10,puVar6[1]);
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              lVar7 = FUN_015c2790();
            }
            lVar7 = thunk_FUN_015d01b0(lVar7,(long)&stack0x00000008 + 4);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            if ((lVar7 != 0) &&
               (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar8 == 0)) {
              uVar11 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
              FUN_0160ee7c(uVar11,0);
            }
            if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            plVar3[(long)(int)unaff_w19 + 4] = lVar7;
            thunk_FUN_01656ef8(plVar3 + (long)(int)unaff_w19 + 4,lVar7);
            iVar10 = iVar10 + 1;
            unaff_w19 = unaff_w19 + 1;
          } while (iVar10 != iVar2);
        }
        return;
      }
    }
  }
LAB_02914d78:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


