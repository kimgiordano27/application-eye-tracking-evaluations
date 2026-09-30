/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionNetworkData$$AddFusionAnchor
ENTRY_POINT: 052fbc24
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionNetworkData__AddFusionAnchor
          (float param_1,float param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  uint in_w8;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  int unaff_w20;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *unaff_x22;
  undefined8 *unaff_x23;
  int iVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  
  while( true ) {
    fVar11 = unaff_s9;
    if (in_w8 != 0) {
      fVar11 = unaff_s8;
    }
    FUN_0446d3b0(param_1 * param_2 * fVar11,param_3,param_4);
    lVar3 = *(long *)(unaff_x19 + 0x50);
    unaff_w20 = unaff_w20 + 1;
    if (lVar3 == 0) goto LAB_052fbf68;
    if (*(int *)(lVar3 + 0x18) <= unaff_w20) break;
    param_3 = *(long *)(unaff_x19 + 0x20);
    param_1 = (float)FUN_052fc478(lVar3,unaff_w20);
    if (param_3 == 0) goto LAB_052fbf68;
    in_w8 = (uint)*(byte *)(unaff_x19 + 0x18);
    param_2 = *(float *)(unaff_x19 + 0x1c);
    param_4 = *unaff_x23;
  }
  iVar10 = *(int *)(unaff_x19 + 0x68);
  if (-1 < iVar10) goto LAB_052fbcf8;
  if (DAT_071c03d0 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071c03d0 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar2 = PTR_DAT_06d3e0f8;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  iVar7 = -iVar10;
  if (-1 < iVar10) {
    iVar7 = iVar10;
  }
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x20) <= iVar7) {
      iVar7 = *(int *)(lVar3 + 0x20);
    }
    iVar10 = iVar7;
    if (0 < iVar7) goto LAB_052fbcb8;
    goto LAB_052fbcec;
  }
  goto LAB_052fbf68;
LAB_052fbcec:
  *(int *)(unaff_x19 + 0x68) = *(int *)(unaff_x19 + 0x68) + iVar7;
LAB_052fbcf8:
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    iVar7 = *(int *)(*(long *)(unaff_x19 + 0x20) + 0x20);
    plVar8 = *(long **)(unaff_x19 + 0x28);
    iVar10 = iVar7 + 0x3ff;
    if (-1 < iVar7) {
      iVar10 = iVar7;
    }
    if (plVar8 != (long *)0x0) {
      lVar3 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_052fbd68;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar8,*unaff_x22,3);
LAB_052fbd68:
      iVar10 = iVar10 >> 10;
      uVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_052fbf68;
        FUN_0446d0c0(*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_06d3e0f0);
      }
      else {
        lVar3 = *(long *)(unaff_x19 + 0x40);
        if (lVar3 != 0) {
          iVar7 = 0;
          do {
            if (*(int *)(lVar3 + 0x18) <= iVar7) goto LAB_052fbdfc;
            lVar9 = *(long *)(unaff_x19 + 0x38);
            fVar11 = (float)FUN_052fc478(lVar3,iVar7);
            if (lVar9 == 0) break;
            fVar12 = 1.0;
            if (*(char *)(unaff_x19 + 0x30) != '\0') {
              fVar12 = 0.0;
            }
            FUN_0446d3b0(fVar11 * *(float *)(unaff_x19 + 0x34) * fVar12,lVar9,*unaff_x23);
            lVar3 = *(long *)(unaff_x19 + 0x40);
            iVar7 = iVar7 + 1;
          } while (lVar3 != 0);
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
          lVar3 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x22) {
                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                goto LAB_052fbe84;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_02eea86c(plVar8,*unaff_x22,3);
LAB_052fbe84:
          iVar7 = iVar10 * 0x400;
          uVar5 = (*(code *)*puVar4)(plVar8,puVar4[1]);
          puVar2 = PTR_DAT_06d3e0f8;
          if ((uVar5 & 1) == 0) {
            if (0 < iVar10) {
              if (iVar7 < 2) {
                iVar7 = 1;
              }
              do {
                if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_052fbf68;
                lVar3 = *(long *)(unaff_x19 + 0x60);
                FUN_0446d528(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar2);
                if (lVar3 == 0) goto LAB_052fbf68;
                uVar5 = FUN_052fc4a8(lVar3);
                if ((uVar5 & 1) == 0) goto LAB_052fbf3c;
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
              lVar3 = *(long *)(unaff_x19 + 0x60);
              fVar11 = (float)FUN_0446d528(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2);
              if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                 (fVar12 = (float)FUN_0446d528(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar2),
                 lVar3 == 0)) goto LAB_052fbf68;
              uVar5 = FUN_052fc4a8(fVar11 + fVar12,lVar3);
              if ((uVar5 & 1) == 0) goto LAB_052fbf3c;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          goto LAB_052fbf4c;
        }
      }
    }
  }
  goto LAB_052fbf68;
LAB_052fbf3c:
  FUN_052fafc8(*(undefined8 *)PTR_DAT_06d3e110);
LAB_052fbf4c:
  return *(undefined8 *)(unaff_x19 + 0x60);
  while (lVar3 = *(long *)(unaff_x19 + 0x20), iVar10 = iVar10 + -1, lVar3 != 0) {
LAB_052fbcb8:
    FUN_0446d528(lVar3,*(undefined8 *)puVar2);
    if (iVar10 + -1 == 0) goto LAB_052fbcec;
  }
LAB_052fbf68:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


