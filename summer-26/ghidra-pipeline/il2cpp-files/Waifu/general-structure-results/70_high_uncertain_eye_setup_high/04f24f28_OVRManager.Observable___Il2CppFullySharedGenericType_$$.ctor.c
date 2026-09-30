/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 04f24f28
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long lVar8;
  long unaff_x21;
  undefined1 unaff_w22;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0xe8a) = unaff_w22;
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    return 1;
  }
  plVar1 = (long *)FUN_0339898c(lVar8,DAT_083cc5a0);
  if (plVar1 == (long *)0x0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0338f618();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x40);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0338f618(lVar4);
    }
    plVar1 = (long *)FUN_0339898c(lVar8,lVar4);
    if (plVar1 == (long *)0x0) {
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0338f618();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0338f618(lVar4);
      }
      plVar1 = (long *)FUN_0339898c(lVar8,lVar4);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0338f618();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x48);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0338f618(lVar8);
      }
      lVar4 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar8) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04f25130;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar1,lVar8,0);
LAB_04f25130:
      pcVar5 = (code *)*puVar2;
      uVar3 = puVar2[1];
      goto LAB_04f25104;
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0338f618(lVar8);
    }
    lVar4 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar8) {
          lVar4 = lVar4 + (long)*piVar7 * 0x10;
          goto LAB_04f250f8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    uVar3 = 0;
  }
  else {
    lVar4 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
LAB_04f24f6c:
      if (*(long *)(piVar7 + -2) != DAT_083cc5a0) goto code_r0x04f24f78;
      lVar4 = lVar4 + (long)(*piVar7 + 1) * 0x10;
LAB_04f250f8:
      puVar2 = (undefined8 *)(lVar4 + 0x138);
      goto LAB_04f250fc;
    }
LAB_04f24f84:
    uVar3 = 1;
    lVar8 = DAT_083cc5a0;
  }
  puVar2 = (undefined8 *)FUN_0338f71c(plVar1,lVar8,uVar3);
LAB_04f250fc:
  pcVar5 = (code *)*puVar2;
  uVar3 = puVar2[1];
LAB_04f25104:
  lVar8 = (*pcVar5)(plVar1,uVar3);
  return lVar8 << 0x20 | 1;
code_r0x04f24f78:
  uVar6 = uVar6 - 1;
  piVar7 = piVar7 + 4;
  if (uVar6 == 0) goto LAB_04f24f84;
  goto LAB_04f24f6c;
}


