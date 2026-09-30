/*
FUNCTION_NAME: OVRPlugin$$GetPerfMetricsInt
ENTRY_POINT: 056740ec
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetPerfMetricsInt(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x20;
  long *plVar7;
  int iVar8;
  
  plVar7 = *(long **)(unaff_x20 + 0xdd0);
  lVar3 = *(long *)(*plVar7 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0xb0) != -1) {
      FUN_05672868();
    }
    lVar3 = *(long *)(*plVar7 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if ((lVar3 != 0) && (plVar7 = *(long **)(lVar3 + 0xb8), plVar7 != (long *)0x0)) {
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)System_Collections_Generic_List<MemberAssignment>_TypeInfo) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_056741d8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_02dd004c(plVar7,*(long *)
                                    System_Collections_Generic_List<MemberAssignment>_TypeInfo,0);
LAB_056741d8:
      iVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      puVar1 = System_Collections_Generic_List<MemberInfo>_TypeInfo;
      if (0 < iVar2) {
        iVar8 = 0;
        do {
          lVar3 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_05674248;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)puVar1,0);
LAB_05674248:
          (*(code *)*puVar4)(plVar7,iVar8,puVar4[1]);
          FUN_05672868();
          iVar8 = iVar8 + 1;
        } while (iVar8 != iVar2);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


