/*
FUNCTION_NAME: OVRPlugin$$GetBodyState4
ENTRY_POINT: 0747ec00
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBodyState4(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  
  *(undefined4 *)(unaff_x21 + 0x24) = param_1;
  *(undefined1 *)(unaff_x21 + 0x28) = *(undefined1 *)(unaff_x19 + 0x38);
  *(undefined1 *)(unaff_x21 + 0x29) = *(undefined1 *)(unaff_x19 + 0x39);
  *(undefined4 *)(unaff_x21 + 0x38) = *(undefined4 *)(unaff_x19 + 0x48);
  lVar5 = *(long *)(unaff_x19 + 0x40);
  if (lVar5 != 0) {
    uVar3 = 0;
    lVar4 = 0x20;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar3) {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
LAB_0747ecb0:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      puVar1 = (undefined8 *)(lVar5 + lVar4);
      lVar5 = *(long *)(unaff_x20 + 0x40);
      uVar7 = puVar1[1];
      uVar6 = *puVar1;
      uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)((long)puVar1 + 0xc) >> 0x20);
      uStack000000000000002c = (undefined4)((ulong)uVar7 >> 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_0747ecb0;
      puVar2 = (undefined8 *)(lVar5 + lVar4);
      lVar4 = lVar4 + 0x1c;
      *(undefined8 *)((long)puVar2 + 0x14) = *(undefined8 *)((long)puVar1 + 0x14);
      *(ulong *)((long)puVar2 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      puVar2[1] = uVar7;
      *puVar2 = uVar6;
      lVar5 = *(long *)(unaff_x19 + 0x40);
      uVar3 = uVar3 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


