/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPoint
ENTRY_POINT: 063ae8cc
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

int OVRPlugin_Qpl__MarkerPoint(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long lVar11;
  int iVar12;
  
  bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f70 + 0x130);
  if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6f70))
  {
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  }
  plVar6 = (long *)FUN_063afdb0();
  puVar3 = PTR_DAT_07db6fa0;
  puVar2 = PTR_DAT_07d89700;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar11 = 0;
  iVar12 = 4;
  do {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_063ae974;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar2,0);
LAB_063ae974:
    uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar9 & 1) == 0) break;
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_063ae9d0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar3,0);
LAB_063ae9d0:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    iVar4 = FUN_0632e3c8(lVar11,0);
    iVar5 = FUN_063ae52c();
    iVar12 = iVar5 + iVar12 + iVar4 + 2;
    lVar11 = lVar11 + 1;
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar11 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_063aeb08;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07d896f8,0);
LAB_063aeb08:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  *(int *)(unaff_x19 + 3) = iVar12 + 1;
  return iVar12 + 1;
}


