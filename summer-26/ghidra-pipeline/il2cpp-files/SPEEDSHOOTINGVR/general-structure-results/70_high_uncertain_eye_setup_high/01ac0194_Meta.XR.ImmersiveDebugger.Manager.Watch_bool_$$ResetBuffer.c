/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<bool>$$ResetBuffer
ENTRY_POINT: 01ac0194
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<bool>__ResetBuffer(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar8;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  puVar1 = PTR_DAT_0234d630;
  lVar4 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0234d630) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_01ac01f0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0103c348();
LAB_01ac01f0:
  uVar6 = (*(code *)*puVar2)();
  if ((uVar6 & 1) != 0) {
    *(undefined4 *)(unaff_x20 + 0x3d8) = uStack000000000000001c;
  }
  plVar3 = (long *)FUN_0216a4d8();
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar4);
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x58);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01ac02c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0103c348(plVar3,*(long *)puVar1,0);
LAB_01ac02c0:
    uVar6 = (*(code *)*puVar2)(plVar3,uVar8,&stack0x00000018,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(unaff_x20 + 0x3dc) = uStack0000000000000018;
    }
    plVar3 = (long *)FUN_0216a4d8();
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01022c14(lVar4);
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x60);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01ac0390;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0103c348(plVar3,*(long *)puVar1,0);
LAB_01ac0390:
      uVar6 = (*(code *)*puVar2)(plVar3,uVar8,(long)&stack0x00000008 + 4,puVar2[1]);
      if ((uVar6 & 1) != 0) {
        *(undefined4 *)(unaff_x20 + 0x3e0) = uStack000000000000000c;
      }
      plVar3 = (long *)FUN_0216a4d8();
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244(lVar4);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01022c14(lVar4);
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x68);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_01ac0460;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_0103c348(plVar3,*(long *)puVar1,0);
LAB_01ac0460:
        uVar6 = (*(code *)*puVar2)(plVar3,uVar8,&stack0x00000008,puVar2[1]);
        if ((uVar6 & 1) != 0) {
          *(undefined4 *)(unaff_x20 + 0x3e4) = uStack0000000000000008;
        }
        FUN_01ac04c0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


