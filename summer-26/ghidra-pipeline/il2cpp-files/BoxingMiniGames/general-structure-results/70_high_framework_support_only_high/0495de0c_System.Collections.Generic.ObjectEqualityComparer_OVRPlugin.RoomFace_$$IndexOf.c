/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.RoomFace>$$IndexOf
ENTRY_POINT: 0495de0c
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


/* WARNING: Removing unreachable block (ram,0x0495e034) */

int System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_RoomFace>__IndexOf
              (ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  int iVar8;
  int iStack000000000000002c;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_0367c9fc(param_3);
  }
  lVar4 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0495de64;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0367cd30();
LAB_0495de64:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_079f49a8;
  if (plVar3 == (long *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    do {
      lVar4 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0495dedc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)puVar1,0);
LAB_0495dedc:
      uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      iStack000000000000002c = iVar8;
      if ((uVar6 & 1) == 0) {
        if (plVar3 == (long *)0x0) {
          return iVar8;
        }
        lVar4 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0) goto LAB_0495dfdc;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_0495dfc4;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0495df70;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar3,lVar4,0);
LAB_0495df70:
      (*(code *)*puVar2)(plVar3,puVar2[1]);
      iVar8 = iVar8 + 1;
    } while (plVar3 != (long *)0x0);
  }
  iStack000000000000002c = iVar8;
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0495dfc4:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0495dff8;
    }
  }
LAB_0495dfdc:
  puVar2 = (undefined8 *)FUN_0367cd30(plVar3,*(long *)PTR_DAT_079f4598,0);
LAB_0495dff8:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return iStack000000000000002c;
}


