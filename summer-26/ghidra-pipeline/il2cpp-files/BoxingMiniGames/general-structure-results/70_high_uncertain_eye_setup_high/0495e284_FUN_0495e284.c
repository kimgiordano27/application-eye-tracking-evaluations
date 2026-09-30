/*
FUNCTION_NAME: FUN_0495e284
ENTRY_POINT: 0495e284
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0495e284(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 local_28;
  
  if ((DAT_07ed9b8f & 1) == 0) {
    FUN_03642964(PTR_DAT_079fdd50);
    FUN_03642964(PTR_DAT_079f5e18);
    DAT_07ed9b8f = 1;
  }
  puVar1 = PTR_DAT_079fdd50;
  lVar10 = *param_1;
  if (lVar10 == 0) {
    uVar2 = 0;
    goto LAB_0495e4c4;
  }
  plVar3 = (long *)thunk_FUN_0367fd24(lVar10,*(undefined8 *)PTR_DAT_079fdd50);
  if (plVar3 == (long *)0x0) {
    lVar6 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x40);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    plVar3 = (long *)thunk_FUN_0367fd24(lVar10,lVar6);
    lVar6 = *(long *)(param_2 + 0x20);
    if (plVar3 != (long *)0x0) {
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      lVar10 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x40);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0367c9fc(lVar10);
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar10) {
            lVar6 = lVar6 + (long)*piVar9 * 0x10;
            goto LAB_0495e4a8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      uVar5 = 0;
      goto LAB_0495e3e0;
    }
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    plVar3 = (long *)thunk_FUN_0367fd24(lVar10,lVar6);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    lVar10 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0367c9fc();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x48);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0367c9fc(lVar10);
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar10) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0495e4f4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0367cd30(plVar3,lVar10,0);
LAB_0495e4f4:
    pcVar7 = (code *)*puVar4;
    uVar5 = puVar4[1];
  }
  else {
    lVar6 = *plVar3;
    lVar10 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_SpaceDiscoveryResult>__LastIndexOf:
      if (*(long *)(piVar9 + -2) != lVar10) goto code_r0x0495e30c;
      lVar6 = lVar6 + (long)(*piVar9 + 1) * 0x10;
LAB_0495e4a8:
      puVar4 = (undefined8 *)(lVar6 + 0x138);
      goto LAB_0495e4ac;
    }
LAB_0495e318:
    uVar5 = 1;
LAB_0495e3e0:
    puVar4 = (undefined8 *)FUN_0367cd30(plVar3,lVar10,uVar5);
LAB_0495e4ac:
    pcVar7 = (code *)*puVar4;
    uVar5 = puVar4[1];
  }
  uVar2 = (*pcVar7)(plVar3,uVar5);
LAB_0495e4c4:
  local_28 = 0;
  FUN_0493bdd8(&local_28,uVar2,*(undefined8 *)PTR_DAT_079f5e18);
  return local_28;
code_r0x0495e30c:
  uVar8 = uVar8 - 1;
  piVar9 = piVar9 + 4;
  if (uVar8 == 0) goto LAB_0495e318;
  goto 
  System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_SpaceDiscoveryResult>__LastIndexOf;
}


