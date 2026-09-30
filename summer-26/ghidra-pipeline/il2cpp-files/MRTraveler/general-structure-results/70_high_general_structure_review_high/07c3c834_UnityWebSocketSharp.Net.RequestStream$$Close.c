/*
FUNCTION_NAME: UnityWebSocketSharp.Net.RequestStream$$Close
ENTRY_POINT: 07c3c834
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c3c8e8) */

undefined8 UnityWebSocketSharp_Net_RequestStream__Close(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_08e6a288;
  if (param_2 != 1) {
    plVar3 = (long *)thunk_FUN_03cf5138();
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar6 * 0x10 + 0x138);
            goto code_r0x07c3c8d0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)puVar1,0);
code_r0x07c3c8d0:
      (*(code *)*puVar2)(plVar3,puVar2[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0(param_1);
  }
  plVar3 = (long *)__cxa_begin_catch(param_1);
  lVar8 = *plVar3;
  __cxa_end_catch();
  puVar1 = PTR_DAT_08e6a288;
  plVar3 = (long *)thunk_FUN_03cf5138();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07c3c634;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)puVar1,0);
LAB_07c3c634:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb28(lVar8);
  }
  uVar7 = *(undefined8 *)PTR_DAT_08ee5528;
  if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0710fcf0(uVar7,0);
  if (unaff_x20 != (long *)0x0) {
    lVar8 = (**(code **)(*unaff_x20 + 0x428))();
    if (lVar8 == 0) {
      lVar4 = 0;
    }
    else {
      uVar7 = *(undefined8 *)PTR_DAT_08eac128;
      lVar4 = thunk_FUN_03cf5138(lVar8,uVar7);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(lVar8,uVar7);
      }
    }
    uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eabf38);
    FUN_07c13870(uVar7,lVar4,1,0);
    *unaff_x19 = uVar7;
    thunk_FUN_03d233cc();
    return *unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


