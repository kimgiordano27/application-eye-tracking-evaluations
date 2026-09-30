/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<bool>$$set_Tween
ENTRY_POINT: 04b86720
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Tweak<bool>__set_Tween(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  byte in_w9;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined4 unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  undefined4 unaff_w25;
  ulong unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  
  do {
    if ((in_w9 & 1) == 0) {
      param_2 = FUN_02feb2c4(param_2);
    }
    lVar6 = *unaff_x24;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == param_2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04b86778;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02feb5b8(unaff_x24,param_2,0);
LAB_04b86778:
    uVar7 = (*(code *)*puVar4)(unaff_x24,unaff_w25,unaff_w19,puVar4[1]);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
    lVar6 = *(long *)(unaff_x21 + 0x18);
    if (lVar6 == 0) {
LAB_04b868b0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    do {
      if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x26) {
LAB_04b868b4:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      uVar5 = *(uint *)(lVar6 + unaff_x28 * unaff_x27 + 0x28);
      unaff_x26 = (ulong)uVar5;
      if ((int)uVar5 < 0) {
        if ((unaff_x23 & 1) == 0) {
          return 0;
        }
        uVar5 = *(uint *)(unaff_x21 + 0x24);
        if ((int)uVar5 < 0) {
          if (*(long *)(unaff_x21 + 0x18) == 0) goto LAB_04b868b0;
          uVar5 = *(uint *)(unaff_x21 + 0x20);
          if (uVar5 == *(uint *)(*(long *)(unaff_x21 + 0x18) + 0x18)) {
            FUN_04b868b8();
            uVar5 = *(uint *)(unaff_x21 + 0x20);
          }
          *(uint *)(unaff_x21 + 0x20) = uVar5 + 1;
        }
        else {
          lVar6 = *(long *)(unaff_x21 + 0x18);
          if (lVar6 == 0) goto LAB_04b868b0;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_04b868b4;
          *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar6 + (ulong)uVar5 * 0xc + 0x28);
        }
        lVar6 = *(long *)(unaff_x21 + 0x10);
        if ((lVar6 != 0) && (lVar8 = *(long *)(unaff_x21 + 0x18), lVar8 != 0)) {
          if (uVar5 < *(uint *)(lVar8 + 0x18)) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            lVar10 = lVar8 + (long)(int)uVar5 * 0xc;
            *(int *)(lVar10 + 0x20) = unaff_w20;
            *(undefined4 *)(lVar10 + 0x24) = unaff_w19;
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w20 / (int)uVar1;
            }
            uVar2 = unaff_w20 - iVar3 * uVar1;
            if (uVar2 < uVar1) {
              lVar6 = lVar6 + (long)(int)uVar2 * 4;
              *(int *)(lVar8 + (long)(int)uVar5 * 0xc + 0x28) = *(int *)(lVar6 + 0x20) + -1;
              *(uint *)(lVar6 + 0x20) = uVar5 + 1;
              return 0;
            }
          }
          goto LAB_04b868b4;
        }
        goto LAB_04b868b0;
      }
      if (lVar6 == 0) goto LAB_04b868b0;
      if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_04b868b4;
      unaff_x28 = unaff_x26;
    } while (*(int *)(lVar6 + unaff_x26 * unaff_x27 + 0x20) != unaff_w20);
    unaff_x24 = *(long **)(unaff_x21 + 0x28);
    if (unaff_x24 == (long *)0x0) goto LAB_04b868b0;
    unaff_w25 = *(undefined4 *)(lVar6 + unaff_x26 * unaff_x27 + 0x24);
    param_2 = **(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    in_w9 = *(byte *)(param_2 + 0x135);
  } while( true );
}


