/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionNetworkData$$AddAnchorRpc
ENTRY_POINT: 052fbd2c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionNetworkData__AddAnchorRpc
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long in_x9;
  long in_x10;
  int *piVar6;
  long unaff_x19;
  int iVar7;
  long *plVar8;
  int unaff_w21;
  long lVar9;
  long *unaff_x22;
  undefined8 *unaff_x23;
  int iVar10;
  float fVar11;
  float fVar12;
  
  piVar6 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar6 + 3) * 0x10 + 0x138);
      goto LAB_052fbd68;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_02eea86c();
LAB_052fbd68:
                    /* try { // try from 052fbd68 to 053fbe87 has its CatchHandler @ 052fbd68
                       catch() { ... } // from try @ 052fbd68 with catch @ 052fbd68
                       catch() { ... } // from try @ 052fbf40 with catch @ 052fbd68
                       catch() { ... } // from try @ 052fc000 with catch @ 052fbd68
                       catch() { ... } // from try @ 052fc0a4 with catch @ 052fbd68 */
  iVar10 = unaff_w21 >> 10;
  uVar4 = (*(code *)*puVar3)();
  if ((uVar4 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_052fbf68;
    FUN_0446d0c0(*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_06d3e0f0);
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x40);
    if (lVar5 != 0) {
      iVar7 = 0;
      do {
        if (*(int *)(lVar5 + 0x18) <= iVar7) goto LAB_052fbdfc;
        lVar9 = *(long *)(unaff_x19 + 0x38);
        fVar11 = (float)FUN_052fc478(lVar5,iVar7);
        if (lVar9 == 0) break;
        fVar12 = 1.0;
        if (*(char *)(unaff_x19 + 0x30) != '\0') {
          fVar12 = 0.0;
        }
        FUN_0446d3b0(fVar11 * *(float *)(unaff_x19 + 0x34) * fVar12,lVar9,*unaff_x23);
        lVar5 = *(long *)(unaff_x19 + 0x40);
        iVar7 = iVar7 + 1;
      } while (lVar5 != 0);
      goto LAB_052fbf68;
    }
LAB_052fbdfc:
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_052fbf68;
    iVar1 = *(int *)(*(long *)(unaff_x19 + 0x38) + 0x20);
    iVar7 = iVar1 + 0x3ff;
    if (-1 < iVar1) {
      iVar7 = iVar1;
    }
    if (iVar7 >> 10 <= iVar10) {
      iVar10 = iVar7 >> 10;
    }
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    *(undefined4 *)(*(long *)(unaff_x19 + 0x60) + 0x18) = 0;
    plVar8 = *(long **)(unaff_x19 + 0x28);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_052fbe84;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02eea86c(plVar8,*unaff_x22,3);
LAB_052fbe84:
                    /* try { // try from 052fbe88 to 053fbeaf has its CatchHandler @ 052fc010 */
      iVar7 = iVar10 * 0x400;
      uVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      puVar2 = PTR_DAT_06d3e0f8;
      if ((uVar4 & 1) == 0) {
        if (0 < iVar10) {
          if (iVar7 < 2) {
            iVar7 = 1;
          }
          do {
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_052fbf68;
            lVar5 = *(long *)(unaff_x19 + 0x60);
            FUN_0446d528(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar2);
            if (lVar5 == 0) goto LAB_052fbf68;
            uVar4 = FUN_052fc4a8(lVar5);
            if ((uVar4 & 1) == 0) goto LAB_052fbf3c;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else if (0 < iVar10) {
        if (iVar7 < 2) {
          iVar7 = 1;
        }
        do {
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_052fbf68;
          lVar5 = *(long *)(unaff_x19 + 0x60);
          fVar11 = (float)FUN_0446d528(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2);
                    /* try { // try from 052fbec8 to 053fbf27 has its CatchHandler @ 052fc014 */
          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
             (fVar12 = (float)FUN_0446d528(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar2),
             lVar5 == 0)) goto LAB_052fbf68;
          uVar4 = FUN_052fc4a8(fVar11 + fVar12,lVar5);
          if ((uVar4 & 1) == 0) goto LAB_052fbf3c;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      goto LAB_052fbf4c;
    }
  }
LAB_052fbf68:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
LAB_052fbf3c:
  FUN_052fafc8(*(undefined8 *)PTR_DAT_06d3e110);
LAB_052fbf4c:
  return *(undefined8 *)(unaff_x19 + 0x60);
}


