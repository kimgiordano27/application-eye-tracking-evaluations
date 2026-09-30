/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$ovrp_QplMarkerPointData
ENTRY_POINT: 063ae9dc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063aeb20) */
/* WARNING: Removing unreachable block (ram,0x063aeb58) */

int OVRPlugin_OVRP_1_96_0__ovrp_QplMarkerPointData(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  
  do {
    iVar1 = FUN_0632e3c8(unaff_x22,0);
    iVar2 = FUN_063ae52c();
    unaff_w24 = iVar2 + unaff_w24 + iVar1 + 2;
    unaff_x22 = unaff_x22 + 1;
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_063ae974;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063ae974:
    uVar5 = (*(code *)*puVar3)();
    if ((uVar5 & 1) == 0) break;
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_063ae9d0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063ae9d0:
    (*(code *)*puVar3)();
  } while( true );
  if (unaff_x21 != (long *)0x0) {
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_063aeb08;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063aeb08:
    (*(code *)*puVar3)();
  }
  *(int *)(unaff_x19 + 0x18) = unaff_w24 + 1;
  return unaff_w24 + 1;
}


