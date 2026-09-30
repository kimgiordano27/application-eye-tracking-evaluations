/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnAfterSerialize
ENTRY_POINT: 064638cc
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnAfterSerialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x23;
  long *unaff_x24;
  
  FUN_02f07e70(System_Collections_Generic_HashSet<Text>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_HashSet<TrackableId>_TypeInfo);
  FUN_02f07e70(System_Collections_Generic_HashSet<Transform>_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0xaac) = 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_05639f14();
  *(long **)(unaff_x19 + 0x90) = unaff_x20;
  thunk_FUN_02f411dc();
  puVar1 = System_Collections_Generic_HashSet<Text>_TypeInfo;
  puVar2 = System_Collections_Generic_HashSet<StyleSheet>_TypeInfo;
  if (unaff_x20 == (long *)0x0) goto LAB_06463d00;
  lVar7 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)System_Collections_Generic_HashSet<StyleSheet>_TypeInfo) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto FUN_06463990;
      }
      uVar9 = uVar9 - 1;
                    /* try { // try from 06463968 to 065639fb has its CatchHandler @ 06463968
                       catch() { ... } // from try @ 06463968 with catch @ 06463968
                       catch() { ... } // from try @ 06463a3c with catch @ 06463968
                       catch() { ... } // from try @ 06463a7c with catch @ 06463968
                       catch() { ... } // from try @ 06463aac with catch @ 06463968 */
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02eea86c();
FUN_06463990:
  uVar3 = (*(code *)*puVar4)();
  *(undefined4 *)(unaff_x19 + 0x98) = uVar3;
  lVar7 = thunk_FUN_02ef170c();
  if (lVar7 != 0) {
    lVar7 = thunk_FUN_02ef170c();
    if (lVar7 == 0) goto LAB_06463d04;
    lVar7 = *(long *)puVar1;
    plVar5 = (long *)thunk_FUN_02ef170c();
    if (plVar5 == (long *)0x0) goto LAB_06463d10;
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06463a28;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar5,lVar7,0);
LAB_06463a28:
    uVar6 = (*(code *)*puVar4)(plVar5,1,puVar4[1]);
    puVar4 = (undefined8 *)(unaff_x19 + 0xa0);
    *puVar4 = uVar6;
    thunk_FUN_02f411dc(puVar4,uVar6);
    puVar1 = System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
    plVar5 = (long *)*puVar4;
    if (plVar5 == (long *)0x0) {
LAB_06463d00:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_06463aac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02eea86c(plVar5,*(long *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo,2
                         );
LAB_06463aac:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    plVar5 = *(long **)(unaff_x19 + 0xa0);
    *(undefined4 *)(unaff_x19 + 0xb4) = uVar3;
    if (plVar5 == (long *)0x0) goto LAB_06463d00;
    lVar7 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_06463b14;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar1,4);
LAB_06463b14:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    *(undefined4 *)(unaff_x19 + 0xb8) = uVar3;
  }
  lVar7 = thunk_FUN_02ef170c();
  puVar1 = System_Collections_Generic_HashSet<StylePropertyId>_TypeInfo;
  if (lVar7 != 0) {
    FUN_06463d4c();
    return;
  }
  lVar7 = thunk_FUN_02ef170c();
  lVar8 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_06463bc0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02eea86c();
LAB_06463bc0:
  uVar3 = (*(code *)*puVar4)();
  *(undefined4 *)(unaff_x19 + 0xb0) = uVar3;
  if (lVar7 == 0) {
    return;
  }
  lVar7 = thunk_FUN_02ef170c();
  if (lVar7 == 0) {
LAB_06463d04:
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  lVar7 = *(long *)puVar1;
  plVar5 = (long *)thunk_FUN_02ef170c();
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06463c50;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar5,lVar7,0);
LAB_06463c50:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    *(undefined4 *)(unaff_x19 + 0xb4) = uVar3;
    lVar7 = thunk_FUN_02ef170c();
    if (lVar7 == 0) goto LAB_06463d04;
    lVar7 = *(long *)puVar1;
    plVar5 = (long *)thunk_FUN_02ef170c();
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_06463cdc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar5,lVar7,2);
LAB_06463cdc:
      uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      *(undefined4 *)(unaff_x19 + 0xb8) = uVar3;
      return;
    }
  }
LAB_06463d10:
                    /* WARNING: Subroutine does not return */
  FUN_02f08440();
}


