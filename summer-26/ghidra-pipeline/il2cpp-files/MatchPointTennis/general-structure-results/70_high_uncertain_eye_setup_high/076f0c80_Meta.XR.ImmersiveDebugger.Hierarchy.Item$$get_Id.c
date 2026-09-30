/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item$$get_Id
ENTRY_POINT: 076f0c80
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Hierarchy_Item__get_Id(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  int iVar7;
  long *unaff_x20;
  long *plVar8;
  int unaff_w21;
  long lVar9;
  long *unaff_x22;
  undefined8 *unaff_x23;
  int iVar10;
  float fVar11;
  float fVar12;
  
  if (unaff_x20 == (long *)0x0) goto LAB_076f0ed4;
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_076f0cd4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_076f0cd4:
  iVar10 = unaff_w21 >> 10;
  uVar5 = (*(code *)*puVar3)();
  if ((uVar5 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_076f0ed4;
    FUN_063928ec(*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_09f2f720);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0x40);
    if (lVar4 != 0) {
      iVar7 = 0;
      do {
        if (*(int *)(lVar4 + 0x18) <= iVar7) goto LAB_076f0d68;
        lVar9 = *(long *)(unaff_x19 + 0x38);
        fVar11 = (float)FUN_076f11b0(lVar4,iVar7);
        if (lVar9 == 0) break;
        fVar12 = 1.0;
        if (*(char *)(unaff_x19 + 0x30) != '\0') {
          fVar12 = 0.0;
        }
        FUN_06392bdc(fVar11 * *(float *)(unaff_x19 + 0x34) * fVar12,lVar9,*unaff_x23);
        lVar4 = *(long *)(unaff_x19 + 0x40);
        iVar7 = iVar7 + 1;
      } while (lVar4 != 0);
      goto LAB_076f0ed4;
    }
LAB_076f0d68:
    if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_076f0ed4;
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
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_076f0df0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar8,*unaff_x22,3);
LAB_076f0df0:
      iVar7 = iVar10 * 0x400;
      uVar5 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      puVar2 = PTR_DAT_09f2f728;
      if ((uVar5 & 1) == 0) {
        if (0 < iVar10) {
          if (iVar7 < 2) {
            iVar7 = 1;
          }
          do {
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_076f0ed4;
            FUN_06392d54(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar2);
            FUN_076f11e0();
            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_076f0ed4;
            uVar5 = FUN_076f1228();
            if ((uVar5 & 1) == 0) goto LAB_076f0ea8;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else if (0 < iVar10) {
        if (iVar7 < 2) {
          iVar7 = 1;
        }
        do {
          if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_076f0ed4;
          fVar11 = (float)FUN_06392d54(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2);
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_076f0ed4;
          fVar12 = (float)FUN_06392d54(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar2);
          FUN_076f11e0(fVar11 + fVar12);
          if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_076f0ed4;
          uVar5 = FUN_076f1228();
          if ((uVar5 & 1) == 0) goto LAB_076f0ea8;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      goto LAB_076f0eb8;
    }
  }
LAB_076f0ed4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_076f0ea8:
  FUN_076efc9c(*(undefined8 *)PTR_DAT_09f2f740);
LAB_076f0eb8:
  return *(undefined8 *)(unaff_x19 + 0x60);
}


