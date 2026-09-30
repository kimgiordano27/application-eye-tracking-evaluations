/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.Enumerator<OVRSpace,-OVRPlugin.SpaceQueryResult>$$System.Collections.IDictionaryEnumerator.get_Entry
ENTRY_POINT: 0295a334
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0295a528) */

void System_Collections_Generic_Dictionary_Enumerator<OVRSpace,_OVRPlugin_SpaceQueryResult>__System_Collections_IDictionaryEnumerator_get_Entry
               (long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *puVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  
  plVar2 = (long *)(**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  puVar1 = PTR_DAT_04230960;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  puVar8 = (undefined8 *)((ulong)&stack0x00000000 | 4);
  do {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0295a3ac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar2,*(long *)puVar1,0);
LAB_0295a3ac:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0295a424;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar2,lVar4,0);
LAB_0295a424:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    uStack0000000000000024 = *(undefined8 *)((long)puVar8 + 0x24);
    in_stack_00000008 = puVar8[1];
    in_stack_00000000 = *puVar8;
    in_stack_00000010 = puVar8[2];
    uStack0000000000000080 = (undefined4)((ulong)*(undefined8 *)((long)puVar8 + 0x1c) >> 0x20);
    uStack0000000000000078 = (undefined4)puVar8[3];
    uStack000000000000007c = (undefined4)((ulong)puVar8[3] >> 0x20);
    uStack000000000000001c = uStack000000000000007c;
    uStack0000000000000020 = uStack0000000000000080;
    uStack0000000000000018 = uStack0000000000000078;
    in_stack_00000060 = in_stack_00000000;
    in_stack_00000068 = in_stack_00000008;
    in_stack_00000070 = in_stack_00000010;
    uStack0000000000000084 = uStack0000000000000024;
    FUN_0295b5c0();
  } while( true );
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0295a4e0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_01c72498(plVar2,*(long *)PTR_DAT_0422fce8,0);
LAB_0295a4e0:
    (*(code *)*puVar8)(plVar2,puVar8[1]);
  }
  return;
}


