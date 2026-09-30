/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<float>$$set_Tween
ENTRY_POINT: 04b86cc8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Tweak<float>__set_Tween(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long *unaff_x23;
  undefined8 unaff_x24;
  uint unaff_w25;
  ulong unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  
code_r0x04b86cc8:
  puVar1 = (undefined8 *)(param_1 + 0x138);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x23,unaff_x24);
    if ((uVar2 & 1) != 0) {
      if ((int)unaff_w28 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x18);
        if (lVar3 == 0) goto LAB_04b86df8;
        uVar4 = (uint)*(undefined8 *)(lVar3 + 0x18);
        if (uVar4 <= unaff_w25) goto LAB_04b86dfc;
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0) goto LAB_04b86df8;
        if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x27) goto LAB_04b86dfc;
        *(int *)(lVar6 + unaff_x27 * 4 + 0x20) = *(int *)(lVar3 + unaff_x26 * 0x18 + 0x30) + 1;
      }
      else {
        lVar3 = *(long *)(unaff_x19 + 0x18);
        if (lVar3 == 0) goto LAB_04b86df8;
        uVar4 = (uint)*(undefined8 *)(lVar3 + 0x18);
        if ((uVar4 <= unaff_w25) || (uVar4 <= unaff_w28)) goto LAB_04b86dfc;
        *(undefined4 *)(lVar3 + 0x20 + (ulong)unaff_w28 * 0x18 + 0x10) =
             *(undefined4 *)(lVar3 + 0x20 + unaff_x26 * 0x18 + 0x10);
      }
      if (unaff_w25 < uVar4) {
        lVar3 = lVar3 + unaff_x26 * 0x18;
        *(undefined4 *)(lVar3 + 0x20) = 0xffffffff;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        lVar3 = *(long *)(unaff_x19 + 0x18);
        if (lVar3 == 0) goto LAB_04b86df8;
        if (unaff_w25 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + unaff_x26 * 0x18 + 0x30) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = unaff_w25;
          return 1;
        }
      }
LAB_04b86dfc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar3 = *(long *)(unaff_x19 + 0x18);
    if (lVar3 == 0) {
LAB_04b86df8:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    do {
      unaff_w28 = unaff_w25;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w28) goto LAB_04b86dfc;
      unaff_w25 = *(uint *)(lVar3 + unaff_x26 * unaff_x29 + 0x30);
      unaff_x26 = (ulong)unaff_w25;
      if ((int)unaff_w25 < 0) {
        return 0;
      }
      if (lVar3 == 0) goto LAB_04b86df8;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w25) goto LAB_04b86dfc;
    } while (*(int *)(lVar3 + unaff_x26 * unaff_x29 + 0x20) != unaff_w22);
    unaff_x23 = *(long **)(unaff_x19 + 0x28);
    if (unaff_x23 == (long *)0x0) goto LAB_04b86df8;
    unaff_x24 = *(undefined8 *)(lVar3 + unaff_x26 * unaff_x29 + 0x28);
    lVar3 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    param_1 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          param_1 = param_1 + (long)*piVar5 * 0x10;
          goto code_r0x04b86cc8;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8(unaff_x23,lVar3,0);
  } while( true );
}


