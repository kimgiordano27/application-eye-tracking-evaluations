/*
FUNCTION_NAME: FUN_055c9744
ENTRY_POINT: 055c9744
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x055c9a20) */

undefined8 FUN_055c9744(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  
  puVar1 = 
  UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
  ;
  if ((DAT_06dbb6ec & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(
                UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(
                UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_TypeInfo
                );
    FUN_02d965b8(UnityEngine_Pool_CollectionPool<List<int>,_int>_TypeInfo);
    FUN_02d965b8(
                UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_Pool_CollectionPool<List<CreationContext_SerializedDataOverrideRange>,_CreationContext_SerializedDataOverrideRange>_TypeInfo
                );
    DAT_06dbb6ec = 1;
  }
  uVar4 = FUN_055c6884(param_1);
  plVar5 = (long *)FUN_02d966a4(*(undefined8 *)puVar1,uVar4);
  plVar6 = (long *)FUN_055c94f4(param_1);
  puVar3 = 
  UnityEngine_Pool_CollectionPool<List<FocusController_FocusedElement>,_FocusController_FocusedElement>_TypeInfo
  ;
  puVar2 = 
  UnityEngine_Pool_CollectionPool<List<DataBindingManager_BindingData>,_DataBindingManager_BindingData>_TypeInfo
  ;
  puVar1 = PTR_DAT_069fbff8;
  if (plVar6 != (long *)0x0) {
    uVar13 = 0;
    do {
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_055c9878;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)puVar1,0);
LAB_055c9878:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_055c99c4;
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 == 0) goto LAB_055c999c;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_055c9984;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_055c98dc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)puVar2,0);
LAB_055c98dc:
      uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
      FUN_05ca5f48(lVar10,uVar8,0,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if ((lVar10 != 0) &&
         (lVar9 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
        uVar8 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar8,0);
      }
      if (*(uint *)(plVar5 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar5[(long)(int)uVar13 + 4] = lVar10;
      LeanTween__value(plVar5 + (long)(int)uVar13 + 4,lVar10);
      uVar13 = uVar13 + 1;
    } while (plVar6 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_055c9984:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_055c99b8;
    }
  }
LAB_055c999c:
  puVar7 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)PTR_DAT_069fbff0,0);
LAB_055c99b8:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_055c99c4:
  uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                              UnityEngine_Pool_CollectionPool<List<GenericDropdownMenu_MenuItem>,_GenericDropdownMenu_MenuItem>_TypeInfo
                            );
  FUN_05c98fdc(uVar8,plVar5,0);
  return uVar8;
}


