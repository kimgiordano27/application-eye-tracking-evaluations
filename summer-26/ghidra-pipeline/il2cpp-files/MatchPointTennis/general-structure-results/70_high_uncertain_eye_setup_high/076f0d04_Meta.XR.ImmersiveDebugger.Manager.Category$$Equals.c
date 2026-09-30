/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Category$$Equals
ENTRY_POINT: 076f0d04
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Category__Equals(long param_1)

{
  int iVar1;
  undefined *puVar2;
  char in_NG;
  char in_OV;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  
  while (in_NG != in_OV) {
    lVar8 = *(long *)(unaff_x19 + 0x38);
    fVar9 = (float)FUN_076f11b0(param_1,unaff_w20);
    if (lVar8 == 0) goto LAB_076f0ed4;
    fVar10 = unaff_s9;
    if (*(char *)(unaff_x19 + 0x30) != '\0') {
      fVar10 = unaff_s8;
    }
    FUN_06392bdc(fVar9 * *(float *)(unaff_x19 + 0x34) * fVar10,lVar8,*unaff_x23);
    param_1 = *(long *)(unaff_x19 + 0x40);
    unaff_w20 = unaff_w20 + 1;
    if (param_1 == 0) goto LAB_076f0ed4;
    in_OV = SBORROW4(unaff_w20,*(int *)(param_1 + 0x18));
    in_NG = unaff_w20 - *(int *)(param_1 + 0x18) < 0;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    iVar1 = *(int *)(*(long *)(unaff_x19 + 0x38) + 0x20);
    iVar6 = iVar1 + 0x3ff;
    if (-1 < iVar1) {
      iVar6 = iVar1;
    }
    if (iVar6 >> 10 <= unaff_w24) {
      unaff_w24 = iVar6 >> 10;
    }
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      *(undefined4 *)(*(long *)(unaff_x19 + 0x60) + 0x18) = 0;
      plVar7 = *(long **)(unaff_x19 + 0x28);
      if (plVar7 != (long *)0x0) {
        lVar8 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x22) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar5 + 3) * 0x10 + 0x138);
              goto LAB_076f0df0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_044822ac(plVar7,*unaff_x22,3);
LAB_076f0df0:
        iVar6 = unaff_w24 * 0x400;
        uVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
        puVar2 = PTR_DAT_09f2f728;
        if ((uVar4 & 1) == 0) {
          if (0 < unaff_w24) {
            if (iVar6 < 2) {
              iVar6 = 1;
            }
            do {
              if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_076f0ed4;
              FUN_06392d54(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar2);
              FUN_076f11e0();
              if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_076f0ed4;
              uVar4 = FUN_076f1228();
              if ((uVar4 & 1) == 0) goto LAB_076f0ea8;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        else if (0 < unaff_w24) {
          if (iVar6 < 2) {
            iVar6 = 1;
          }
          do {
            if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_076f0ed4;
            fVar9 = (float)FUN_06392d54(*(long *)(unaff_x19 + 0x38),*(undefined8 *)puVar2);
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_076f0ed4;
            fVar10 = (float)FUN_06392d54(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar2);
            FUN_076f11e0(fVar9 + fVar10);
            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_076f0ed4;
            uVar4 = FUN_076f1228();
            if ((uVar4 & 1) == 0) goto LAB_076f0ea8;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        goto LAB_076f0eb8;
      }
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


