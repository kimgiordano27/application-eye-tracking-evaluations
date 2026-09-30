/*
FUNCTION_NAME: OVRPlugin.Sizef$$.cctor
ENTRY_POINT: 026cb97c
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Sizef___cctor(long param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint in_w9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  
  param_2 = param_2 & 0x7fffffff;
  iVar3 = 0;
  if (in_w9 != 0) {
    iVar3 = (int)param_2 / (int)in_w9;
  }
  uVar2 = param_2 - iVar3 * in_w9;
  if (in_w9 <= uVar2) {
LAB_026cbbb8:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  uVar4 = *(int *)(param_1 + (ulong)uVar2 * 4 + 0x20) - 1;
  if (-1 < (int)uVar4) {
    uVar14 = 0xffffffff;
    do {
      uVar13 = uVar4;
      lVar15 = *(long *)(unaff_x19 + 0x18);
      if (lVar15 == 0) goto LAB_026cbbb4;
      if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_026cbbb8;
      puVar16 = (uint *)(lVar15 + (long)(int)uVar13 * 0x18 + 0x20);
      lVar11 = (long)(int)uVar13;
      if (*puVar16 == param_2) {
        plVar7 = *(long **)(unaff_x19 + 0x30);
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) +
                                                           0xc0) + 0x10) + 8))();
          if (plVar7 == (long *)0x0) goto LAB_026cbbb4;
          uVar9 = (**(code **)(*plVar7 + 0x1b8))
                            (plVar7,*(undefined8 *)(lVar15 + lVar11 * 0x18 + 0x28));
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_026cbbb4;
          lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000018 + 0x20) + 0xc0) + 0x148);
          uVar12 = *(undefined8 *)(lVar15 + lVar11 * 0x18 + 0x28);
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_015c2790(lVar6);
          }
          lVar8 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_026cbab0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_015c2a80(plVar7,lVar6,0);
LAB_026cbab0:
          uVar9 = (*(code *)*puVar5)(plVar7,uVar12);
        }
        if ((uVar9 & 1) != 0) {
          if ((int)uVar14 < 0) {
            lVar6 = *(long *)(unaff_x19 + 0x10);
            if (lVar6 == 0) goto LAB_026cbbb4;
            if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_026cbbb8;
            *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar15 + lVar11 * 0x18 + 0x24) + 1;
          }
          else {
            lVar6 = *(long *)(unaff_x19 + 0x18);
            if (lVar6 == 0) {
LAB_026cbbb4:
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_026cbbb8;
            *(undefined4 *)(lVar6 + (long)(int)uVar14 * 0x18 + 0x24) =
                 *(undefined4 *)(lVar15 + lVar11 * 0x18 + 0x24);
          }
          lVar15 = lVar15 + lVar11 * 0x18;
          *in_stack_00000010 = *(undefined8 *)(lVar15 + 0x30);
          *puVar16 = 0xffffffff;
          uVar1 = *(undefined4 *)(unaff_x19 + 0x24);
          *(undefined8 *)(lVar15 + 0x28) = 0;
          *(undefined4 *)(lVar15 + 0x24) = uVar1;
          *(uint *)(unaff_x19 + 0x24) = uVar13;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
      uVar4 = *(uint *)(lVar15 + lVar11 * 0x18 + 0x24);
      uVar14 = uVar13;
    } while (-1 < (int)uVar4);
  }
  *in_stack_00000010 = 0;
  return 0;
}


