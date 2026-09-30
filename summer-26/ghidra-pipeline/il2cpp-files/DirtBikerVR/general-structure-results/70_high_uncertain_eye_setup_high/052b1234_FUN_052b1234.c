/*
FUNCTION_NAME: FUN_052b1234
ENTRY_POINT: 052b1234
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x052b1504) */

int FUN_052b1234(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  int iVar8;
  int local_24;
  
  if ((DAT_08976d5f & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08488550);
    FUN_03a8a718(PTR_DAT_08488568);
    DAT_08976d5f = 1;
  }
  lVar2 = *(long *)(param_2 + 0x20);
  local_24 = 0;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  uVar3 = FUN_052b0f30(param_1,&local_24,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x60));
  if ((uVar3 & 1) != 0) {
    return local_24;
  }
  plVar7 = (long *)*param_1;
  local_24 = 0;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar2 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090(lVar2);
  }
  lVar5 = *plVar7;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar3 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto 
        System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__Equals
        ;
      }
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar7,lVar2,0);
System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__Equals:
  plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
  puVar1 = PTR_DAT_08488568;
  if (plVar7 == (long *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    do {
      lVar2 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_052b13ac;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)puVar1,0);
LAB_052b13ac:
      uVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
      if ((uVar3 & 1) == 0) {
        if (plVar7 == (long *)0x0) {
          return iVar8;
        }
        lVar2 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_052b14ac;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_052b1494;
      }
      if (plVar7 == (long *)0x0) {
        local_24 = iVar8;
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar2 = *(long *)(param_2 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x30);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03ac4090(lVar2);
      }
      lVar5 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_052b1440;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03ac43c4(plVar7,lVar2,0);
LAB_052b1440:
      (*(code *)*puVar4)(plVar7,puVar4[1]);
      iVar8 = iVar8 + 1;
    } while (plVar7 != (long *)0x0);
  }
  local_24 = iVar8;
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_052b1494:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08488550) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
      local_24 = iVar8;
      goto LAB_052b14c8;
    }
  }
LAB_052b14ac:
  local_24 = iVar8;
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar7,*(long *)PTR_DAT_08488550,0);
LAB_052b14c8:
  (*(code *)*puVar4)(plVar7,puVar4[1]);
  return local_24;
}


