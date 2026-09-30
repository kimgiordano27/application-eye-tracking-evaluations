/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.Enumerator<OVRSpace,-OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0295a2f0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0295a528) */

void System_Collections_Generic_Dictionary_Enumerator<OVRSpace,_OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
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
  
  lVar5 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_1) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0295a33c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_01c72498();
LAB_0295a33c:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_04230960;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  puVar2 = (undefined8 *)((ulong)&stack0x00000000 | 4);
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0295a3ac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)puVar1,0);
LAB_0295a3ac:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) break;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394(lVar5);
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0295a424;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar3,lVar5,0);
LAB_0295a424:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
    uStack0000000000000024 = *(undefined8 *)((long)puVar2 + 0x24);
    in_stack_00000008 = puVar2[1];
    in_stack_00000000 = *puVar2;
    in_stack_00000010 = puVar2[2];
    uStack0000000000000080 = (undefined4)((ulong)*(undefined8 *)((long)puVar2 + 0x1c) >> 0x20);
    uStack0000000000000078 = (undefined4)puVar2[3];
    uStack000000000000007c = (undefined4)((ulong)puVar2[3] >> 0x20);
    uStack000000000000001c = uStack000000000000007c;
    uStack0000000000000020 = uStack0000000000000080;
    uStack0000000000000018 = uStack0000000000000078;
    in_stack_00000060 = in_stack_00000000;
    in_stack_00000068 = in_stack_00000008;
    in_stack_00000070 = in_stack_00000010;
    uStack0000000000000084 = uStack0000000000000024;
    FUN_0295b5c0();
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0295a4e0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_0422fce8,0);
LAB_0295a4e0:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  return;
}


