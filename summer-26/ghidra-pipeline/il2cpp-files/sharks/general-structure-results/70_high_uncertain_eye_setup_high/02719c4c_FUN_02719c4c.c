/*
FUNCTION_NAME: FUN_02719c4c
ENTRY_POINT: 02719c4c
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02719c4c(long param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  FUN_02c108e4(param_1,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02be0698(6,0);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
  }
  plVar2 = (long *)thunk_FUN_01861ac0(param_2,lVar5);
  if (plVar2 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    thunk_FUN_0188fd20();
    FUN_0271bec0(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x40)
                );
    return;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02719d8c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0185dba8(plVar2,lVar5,0);
LAB_02719d8c:
  iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  if (iVar1 == 0) {
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
    thunk_FUN_0188fd20((undefined8 *)(param_1 + 0x10));
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  uVar4 = FUN_017fc3f4(lVar5,iVar1);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  *puVar3 = uVar4;
  thunk_FUN_0188fd20(puVar3,uVar4);
  uVar4 = *puVar3;
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__RemoveAll;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0185dba8(plVar2,lVar5,5);
System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__RemoveAll:
  (*(code *)*puVar3)(plVar2,uVar4,0,puVar3[1]);
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}


