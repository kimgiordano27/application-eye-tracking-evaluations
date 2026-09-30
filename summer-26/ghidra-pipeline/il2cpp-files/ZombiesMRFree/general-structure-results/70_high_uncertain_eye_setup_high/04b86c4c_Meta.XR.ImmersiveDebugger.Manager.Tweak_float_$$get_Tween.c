/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<float>$$get_Tween
ENTRY_POINT: 04b86c4c
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


undefined8 Meta_XR_ImmersiveDebugger_Manager_Tweak<float>__get_Tween(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long *plVar7;
  undefined8 uVar8;
  uint unaff_w25;
  uint uVar9;
  ulong unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  
  do {
    uVar9 = unaff_w25;
    if ((bool)in_ZR) {
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_04b86df8;
      uVar8 = *(undefined8 *)(param_1 + unaff_x26 * unaff_x29 + 0x28);
      lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4(lVar2);
      }
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
                    /* try { // try from 04b86ca0 to 04c86fb3 has its CatchHandler @ 04b86ca0
                       catch() { ... } // from try @ 04b86ca0 with catch @ 04b86ca0
                       catch() { ... } // from try @ 04b870ac with catch @ 04b86ca0
                       catch() { ... } // from try @ 04b870f8 with catch @ 04b86ca0
                       catch() { ... } // from try @ 04b87134 with catch @ 04b86ca0 */
          if (*(long *)(piVar6 + -2) == lVar2) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04b86ccc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_02feb5b8(plVar7,lVar2,0);
LAB_04b86ccc:
      uVar5 = (*(code *)*puVar1)(plVar7,uVar8);
      if ((uVar5 & 1) != 0) {
        if ((int)unaff_w28 < 0) {
          lVar2 = *(long *)(unaff_x19 + 0x18);
          if (lVar2 == 0) goto LAB_04b86df8;
          uVar4 = (uint)*(undefined8 *)(lVar2 + 0x18);
          if (uVar4 <= uVar9) goto LAB_04b86dfc;
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 == 0) goto LAB_04b86df8;
          if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x27) goto LAB_04b86dfc;
          *(int *)(lVar3 + unaff_x27 * 4 + 0x20) = *(int *)(lVar2 + unaff_x26 * 0x18 + 0x30) + 1;
        }
        else {
          lVar2 = *(long *)(unaff_x19 + 0x18);
          if (lVar2 == 0) goto LAB_04b86df8;
          uVar4 = (uint)*(undefined8 *)(lVar2 + 0x18);
          if ((uVar4 <= uVar9) || (uVar4 <= unaff_w28)) goto LAB_04b86dfc;
          *(undefined4 *)(lVar2 + 0x20 + (ulong)unaff_w28 * 0x18 + 0x10) =
               *(undefined4 *)(lVar2 + 0x20 + unaff_x26 * 0x18 + 0x10);
        }
        if (uVar9 < uVar4) {
          lVar2 = lVar2 + unaff_x26 * 0x18;
          *(undefined4 *)(lVar2 + 0x20) = 0xffffffff;
          *(undefined8 *)(lVar2 + 0x28) = 0;
          lVar2 = *(long *)(unaff_x19 + 0x18);
          if (lVar2 == 0) goto LAB_04b86df8;
          if (uVar9 < *(uint *)(lVar2 + 0x18)) {
            *(undefined4 *)(lVar2 + unaff_x26 * 0x18 + 0x30) = *(undefined4 *)(unaff_x19 + 0x24);
            *(uint *)(unaff_x19 + 0x24) = uVar9;
            return 1;
          }
        }
LAB_04b86dfc:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      param_1 = *(long *)(unaff_x19 + 0x18);
      if (param_1 == 0) goto LAB_04b86df8;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_04b86dfc;
    unaff_w25 = *(uint *)(param_1 + unaff_x26 * unaff_x29 + 0x30);
    unaff_x26 = (ulong)unaff_w25;
    if ((int)unaff_w25 < 0) {
      return 0;
    }
    if (param_1 == 0) {
LAB_04b86df8:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_w25) goto LAB_04b86dfc;
    in_ZR = *(int *)(param_1 + unaff_x26 * unaff_x29 + 0x20) == unaff_w22;
    unaff_w28 = uVar9;
  } while( true );
}


