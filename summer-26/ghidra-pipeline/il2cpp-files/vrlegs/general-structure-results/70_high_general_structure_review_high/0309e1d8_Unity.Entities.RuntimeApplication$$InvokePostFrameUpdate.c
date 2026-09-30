/*
FUNCTION_NAME: Unity.Entities.RuntimeApplication$$InvokePostFrameUpdate
ENTRY_POINT: 0309e1d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0309e3b0) */

long Unity_Entities_RuntimeApplication__InvokePostFrameUpdate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  
  puVar3 = (undefined8 *)FUN_01a472ec();
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = Cysharp_Threading_Tasks_UniTaskLoopRunners_UniTaskLoopRunnerLastYieldInitialization_var;
  puVar1 = PTR_DAT_03cbed20;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0309e264;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)puVar1,0);
LAB_0309e264:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_0309e384;
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0309e35c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0309e2c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)puVar2,0);
LAB_0309e2c0:
    (*(code *)*puVar3)(&stack0x00000070,plVar4,puVar3[1]);
    memcpy(&stack0x000000e8,&stack0x00000070,0x78);
    lVar5 = *unaff_x19;
    memcpy(&stack0x00000070,&stack0x000000f8,0x68);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    memcpy(&stack0x00000008,&stack0x00000070,0x68);
    FUN_039a3e34(lVar5,&stack0x00000008,0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0309e378;
    }
  }
LAB_0309e35c:
  puVar3 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)PTR_DAT_03cbed08,0);
LAB_0309e378:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_0309e384:
  return *unaff_x19;
}


