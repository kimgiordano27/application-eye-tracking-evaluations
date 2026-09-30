/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPoint
ENTRY_POINT: 063ae814
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063aeb20) */
/* WARNING: Removing unreachable block (ram,0x063aeb58) */

int OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPoint(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  
code_r0x063ae814:
  puVar3 = (undefined8 *)FUN_0377596c();
  do {
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_063aeaec;
      lVar5 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 == 0) goto LAB_063aeaa4;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_063ae884;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063ae884:
    lVar5 = (*(code *)*puVar3)();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    iVar1 = FUN_063ae52c();
    iVar2 = FUN_063ae52c();
    unaff_w24 = unaff_w24 + iVar1 + iVar2 + 1;
    lVar5 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 == 0) goto code_r0x063ae814;
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != *unaff_x25) {
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
      if (uVar4 == 0) goto code_r0x063ae814;
    }
    puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar6 = piVar6 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_063aeae0;
    }
  }
LAB_063aeaa4:
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_063aeae0:
  (*(code *)*puVar3)();
LAB_063aeaec:
  *(int *)(unaff_x19 + 0x18) = unaff_w24 + 1;
  return unaff_w24 + 1;
}


