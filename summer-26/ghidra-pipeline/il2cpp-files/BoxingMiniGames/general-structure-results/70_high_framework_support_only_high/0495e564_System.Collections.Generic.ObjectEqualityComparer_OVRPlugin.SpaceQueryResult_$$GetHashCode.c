/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.SpaceQueryResult>$$GetHashCode
ENTRY_POINT: 0495e564
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0495e7d0) */

int System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_SpaceQueryResult>__GetHashCode(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar7;
  int iVar8;
  undefined8 in_stack_00000028;
  
  uVar2 = FUN_0495e1fc();
  if ((uVar2 & 1) != 0) {
    return in_stack_00000028._4_4_;
  }
  plVar7 = (long *)*unaff_x20;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
  }
  lVar5 = *plVar7;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0495e600;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30(plVar7,lVar3,0);
LAB_0495e600:
  plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
  puVar1 = PTR_DAT_079f49a8;
  if (plVar7 != (long *)0x0) {
    iVar8 = 0;
    do {
      lVar3 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0495e678;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)puVar1,0);
LAB_0495e678:
      uVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      if ((uVar2 & 1) == 0) {
        if (plVar7 == (long *)0x0) {
          return iVar8;
        }
        lVar3 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 == 0) goto LAB_0495e778;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_0495e760;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc(lVar3);
      }
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0495e70c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_0367cd30(plVar7,lVar3,0);
LAB_0495e70c:
      (*(code *)*puVar4)(plVar7,puVar4[1]);
      iVar8 = iVar8 + 1;
    } while (plVar7 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
LAB_0495e760:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0495e794;
    }
  }
LAB_0495e778:
  puVar4 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_0495e794:
  (*(code *)*puVar4)(plVar7,puVar4[1]);
  return iVar8;
}


