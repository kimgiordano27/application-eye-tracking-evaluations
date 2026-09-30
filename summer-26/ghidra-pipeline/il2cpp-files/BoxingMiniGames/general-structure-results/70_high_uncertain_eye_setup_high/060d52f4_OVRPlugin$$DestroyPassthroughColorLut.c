/*
FUNCTION_NAME: OVRPlugin$$DestroyPassthroughColorLut
ENTRY_POINT: 060d52f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyPassthroughColorLut(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  
  *(undefined1 *)(unaff_x21 + 0xaaf) = 1;
  puVar1 = PTR_DAT_07a23d20;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a23d20) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_060d5370;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060d5370:
    lVar4 = (*(code *)*puVar2)();
    if (lVar4 == 0) {
      FUN_060d5524();
      FUN_060d5568();
      return;
    }
    lVar3 = FUN_060b90dc(lVar4,0);
    if (lVar3 == 0) {
      FUN_060d5524();
    }
    else {
      FUN_060b90dc(lVar4,0);
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto FUN_060d541c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30();
FUN_060d541c:
      (*(code *)*puVar2)();
      FUN_060d55b0();
      *(undefined1 *)(unaff_x19 + 0x60) = 0;
    }
    FUN_060b91e8(&stack0x00000040);
    plVar7 = *(long **)(unaff_x19 + 0x70);
    if (plVar7 == (long *)0x0) {
      uStack0000000000000028 = uStack0000000000000048;
      uStack0000000000000020 = uStack0000000000000040;
      uStack0000000000000034 = uStack0000000000000054;
      uStack0000000000000038 = uStack0000000000000058;
      uStack000000000000002c = uStack000000000000004c;
      uStack0000000000000030 = uStack0000000000000050;
    }
    else {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07a21038) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_060d54c0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_07a21038,2);
LAB_060d54c0:
      (*(code *)*puVar2)(&stack0x00000020,plVar7,&stack0x00000040,puVar2[1]);
    }
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      uStack0000000000000014 = CONCAT44(uStack0000000000000038,uStack0000000000000034);
      uStack000000000000000c = uStack000000000000002c;
      FUN_060ef240(0x3f800000);
      *(undefined1 *)(unaff_x19 + 0x61) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


