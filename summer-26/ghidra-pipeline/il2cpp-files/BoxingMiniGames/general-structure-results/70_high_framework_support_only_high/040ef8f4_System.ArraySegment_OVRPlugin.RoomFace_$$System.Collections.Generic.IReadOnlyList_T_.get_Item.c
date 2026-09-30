/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.RoomFace>$$System.Collections.Generic.IReadOnlyList<T>.get_Item
ENTRY_POINT: 040ef8f4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x040efb7c) */
/* WARNING: Removing unreachable block (ram,0x040efa70) */
/* WARNING: Removing unreachable block (ram,0x040efa7c) */
/* WARNING: Removing unreachable block (ram,0x040efcc8) */
/* WARNING: Removing unreachable block (ram,0x040efcd8) */
/* WARNING: Removing unreachable block (ram,0x040efac0) */
/* WARNING: Removing unreachable block (ram,0x040efadc) */
/* WARNING: Removing unreachable block (ram,0x040efae8) */
/* WARNING: Removing unreachable block (ram,0x040efaf4) */
/* WARNING: Removing unreachable block (ram,0x040efafc) */
/* WARNING: Removing unreachable block (ram,0x040efb24) */
/* WARNING: Removing unreachable block (ram,0x040efb08) */
/* WARNING: Removing unreachable block (ram,0x040efb14) */
/* WARNING: Removing unreachable block (ram,0x040efb34) */
/* WARNING: Removing unreachable block (ram,0x040efb58) */
/* WARNING: Removing unreachable block (ram,0x040efb78) */
/* WARNING: Removing unreachable block (ram,0x040efb80) */
/* WARNING: Removing unreachable block (ram,0x040efcb4) */
/* WARNING: Removing unreachable block (ram,0x040efcc4) */
/* WARNING: Removing unreachable block (ram,0x040efb9c) */
/* WARNING: Removing unreachable block (ram,0x040efbb8) */
/* WARNING: Removing unreachable block (ram,0x040efbc4) */
/* WARNING: Removing unreachable block (ram,0x040efbd0) */
/* WARNING: Removing unreachable block (ram,0x040efbd8) */
/* WARNING: Removing unreachable block (ram,0x040efc00) */
/* WARNING: Removing unreachable block (ram,0x040efbe4) */
/* WARNING: Removing unreachable block (ram,0x040efbf0) */
/* WARNING: Removing unreachable block (ram,0x040efc10) */
/* WARNING: Removing unreachable block (ram,0x040efc2c) */
/* WARNING: Removing unreachable block (ram,0x040efc88) */
/* WARNING: Removing unreachable block (ram,0x040efc98) */

void System_ArraySegment<OVRPlugin_RoomFace>__System_Collections_Generic_IReadOnlyList<T>_get_Item
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x29;
  
  if (unaff_x20 != (long *)0x0) {
    plVar3 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    lVar2 = *plVar3;
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
      plVar3 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    }
    if (-1 < *(int *)(plVar3[6] + 0x28)) {
      unaff_x19 = (undefined8 *)*unaff_x19;
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          lVar2 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_040ef97c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar2 = FUN_0367cd30();
LAB_040ef97c:
    lVar2 = *(long *)(lVar2 + 8);
    *(undefined8 **)(unaff_x29 + -0x30) = unaff_x19;
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8));
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x18;
    plVar3 = *(long **)(*(long *)(unaff_x29 + -0x10) + 0x10);
    *(undefined8 *)(unaff_x29 + -0x30) = 0;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x10;
    thunk_FUN_03650fbc();
    if (plVar3 == (long *)0x0) {
      if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_040efda4;
    }
    lVar2 = **(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_040efa2c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar3,lVar2,2);
LAB_040efa2c:
    (*(code *)*puVar1)(plVar3,puVar1[1]);
    if (*(long *)(unaff_x29 + -0x10) != 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(**(long **)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x58))();
      if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_040efda4;
    }
  }
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_040efda4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


