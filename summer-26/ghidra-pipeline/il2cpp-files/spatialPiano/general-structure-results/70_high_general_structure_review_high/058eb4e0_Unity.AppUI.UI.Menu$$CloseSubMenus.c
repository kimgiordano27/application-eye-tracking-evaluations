/*
FUNCTION_NAME: Unity.AppUI.UI.Menu$$CloseSubMenus
ENTRY_POINT: 058eb4e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void Unity_AppUI_UI_Menu__CloseSubMenus(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long *plVar10;
  ulong uVar11;
  long unaff_x21;
  long *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  undefined8 in_stack_00000000;
  
  do {
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar11 = 0;
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar11) goto LAB_058eb738;
        if (unaff_x19 == (long *)0x0) goto LAB_058eb73c;
        lVar6 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_058eb55c;
            }
            uVar5 = uVar5 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02f421d0();
LAB_058eb55c:
        (*(code *)*puVar3)();
        uVar5 = (ulong)*(uint *)(param_1 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(param_1 + 0x18));
    }
LAB_058eb57c:
    do {
      do {
        do {
          do {
            uVar11 = (ulong)*(uint *)(unaff_x25 + 0x18);
            unaff_x26 = unaff_x26 + 1;
            if ((long)(int)*(uint *)(unaff_x25 + 0x18) <= (long)unaff_x26) {
              do {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                uVar11 = (ulong)uVar1;
                unaff_x29 = unaff_x29 + 1;
                if ((long)(int)uVar1 <= (long)unaff_x29) {
                  if ((int)uVar1 < 1) goto LAB_058eb668;
                  uVar5 = 0;
                  goto LAB_058eb5ac;
                }
                if (uVar11 <= unaff_x29) goto LAB_058eb738;
                unaff_x25 = *(long *)(unaff_x21 + unaff_x29 * 8 + 0x20);
              } while ((unaff_x25 == 0) || ((int)*(ulong *)(unaff_x25 + 0x18) < 1));
              unaff_x26 = 0;
              uVar11 = *(ulong *)(unaff_x25 + 0x18) & 0xffffffff;
            }
            if (uVar11 <= unaff_x26) goto LAB_058eb738;
            plVar10 = *(long **)(unaff_x25 + unaff_x26 * 8 + 0x20);
          } while (plVar10 == (long *)0x0);
          bVar2 = *(byte *)(*unaff_x24 + 0x130);
        } while ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
                (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x24));
        lVar6 = plVar10[2];
        if (*(int *)(*(long *)(unaff_x28 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar6 = FUN_02f08bb0(lVar6,*(undefined8 *)PTR_DAT_067cf8d0,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<IEventBinding>_Remove__);
        uVar11 = FUN_050edfb8(lVar6,0,0);
      } while ((uVar11 & 1) == 0);
      uVar11 = FUN_04f6ebb4(plVar10[3],0);
      if ((uVar11 & 1) == 0) {
        if ((lVar6 == 0) || (lVar6 = FUN_050ef628(lVar6,plVar10[3],0), lVar6 == 0))
        goto LAB_058eb73c;
        if (*(long *)(lVar6 + 0x18) == 0) goto LAB_058eb57c;
        if ((int)*(long *)(lVar6 + 0x18) == 0) goto LAB_058eb738;
        uVar11 = FUN_0500186c(*(undefined8 *)(lVar6 + 0x20),0,0);
        if ((uVar11 & 1) == 0) goto LAB_058eb57c;
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_058eb738;
        lVar6 = *(long *)(lVar6 + 0x20);
      }
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<GraphicsBuffer>_get_Item__ + 0xe4
                  ) == 0) {
        thunk_FUN_02f6670c();
      }
      param_1 = FUN_058eb910(lVar6);
    } while (param_1 == 0);
  } while( true );
LAB_058eb5ac:
  do {
    if (uVar11 <= uVar5) {
LAB_058eb738:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar6 = *(long *)(unaff_x21 + uVar5 * 8 + 0x20);
    if ((lVar6 != 0) && (0 < (int)*(ulong *)(lVar6 + 0x18))) {
      uVar11 = 0;
      uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar11) goto LAB_058eb738;
        if (unaff_x19 == (long *)0x0) goto LAB_058eb73c;
        lVar8 = *unaff_x19;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_058eb638;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02f421d0();
LAB_058eb638:
        (*(code *)*puVar3)();
        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar6 + 0x18));
      uVar11 = (ulong)*(uint *)(unaff_x21 + 0x18);
    }
    uVar5 = uVar5 + 1;
  } while ((long)uVar5 < (long)(int)uVar11);
LAB_058eb668:
  FUN_058dcb78(in_stack_00000000);
  uVar4 = FUN_058e91ec(in_stack_00000000);
  uVar11 = FUN_05016ec0(uVar4,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<ARRaycastHit>_get_Count__ + 0xe4)
        == 0) {
      thunk_FUN_02f6670c();
    }
    if (unaff_x19 == (long *)0x0) {
LAB_058eb73c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_058eb708;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0();
LAB_058eb708:
    (*(code *)*puVar3)();
  }
  return;
}


