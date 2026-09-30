/*
FUNCTION_NAME: Unity.Entities.StructuralChange.AddComponentQuery_00000F8B$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 030a4e30
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x030a4f68) */

void Unity_Entities_StructuralChange_AddComponentQuery_00000F8B_PostfixBurstDelegate___ctor(void)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x22;
  undefined8 unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
  do {
    lVar3 = thunk_FUN_01a89e68(*unaff_x28);
    FUN_036cf948(lVar3,unaff_x24,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = FUN_036cf428(lVar3,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_036dd6d0();
    lVar4 = FUN_036cf428(lVar3,0);
                    /* catch() { ... } // from try @ 030a4eec with catch @ 030a4e7c
                       catch() { ... } // from try @ 030a4f1c with catch @ 030a4e7c
                       catch() { ... } // from try @ 030a4f3c with catch @ 030a4e7c
                       catch() { ... } // from try @ 030a4f74 with catch @ 030a4e7c
                       catch() { ... } // from try @ 030a4fa8 with catch @ 030a4e7c
                       catch() { ... } // from try @ 030a4fe0 with catch @ 030a4e7c */
    FUN_036dc9e4(unaff_x22,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_036dca84(lVar4,0);
    uVar5 = FUN_036cf428(lVar3,0);
    FUN_030a4c4c(unaff_x22,uVar5);
    do {
      lVar3 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_030a4d64;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec();
LAB_030a4d64:
      uVar7 = (*(code *)*puVar2)();
      if ((uVar7 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01a89d6c();
        if (plVar6 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 == 0)
        goto 
        Unity_Entities_StructuralChange_AddComponentQuery_00000F8B_BurstDirectCall__GetFunctionPointerDiscard
        ;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto Unity_Entities_StructuralChange_AddComponentQuery_00000F8B_PostfixBurstDelegate__Invoke
        ;
      }
      lVar3 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_030a4dc4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec();
LAB_030a4dc4:
      unaff_x22 = (long *)(*(code *)*puVar2)();
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
      if ((*(byte *)(*unaff_x22 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(unaff_x22);
      }
      lVar3 = FUN_036cbbbc(unaff_x22,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = FUN_036cf5a8(lVar3,0);
    } while ((uVar7 & 1) == 0);
    unaff_x24 = FUN_036d3824(unaff_x22,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
Unity_Entities_StructuralChange_AddComponentQuery_00000F8B_PostfixBurstDelegate__Invoke:
    if (*(long *)(piVar8 + -2) == *unaff_x25) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_030a4f18;
    }
  }

  Unity_Entities_StructuralChange_AddComponentQuery_00000F8B_BurstDirectCall__GetFunctionPointerDiscard
  :
  puVar2 = (undefined8 *)FUN_01a472ec(plVar6,*unaff_x25,0);
LAB_030a4f18:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
  return;
}


