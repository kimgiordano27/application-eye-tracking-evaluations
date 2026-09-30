/*
FUNCTION_NAME: Unity.Services.Core.Registration.CorePackageInitializer.<GetSerializedProjectConfigurationAsync>d__63$$SetStateMachine
ENTRY_POINT: 05ad0454
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ad059c) */
/* WARNING: Removing unreachable block (ram,0x05ad089c) */
/* WARNING: Removing unreachable block (ram,0x05ad088c) */

void Unity_Services_Core_Registration_CorePackageInitializer_<GetSerializedProjectConfigurationAsync>d__63__SetStateMachine
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x23;
  undefined8 uVar8;
  long lVar9;
  long unaff_x27;
  long *unaff_x28;
  undefined1 auVar10 [12];
  long in_stack_00000008;
  long in_stack_00000168;
  
  thunk_FUN_02dbd7b4(param_1);
  uVar8 = **(undefined8 **)(*unaff_x28 + 0xb8);
  uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>__ctor__
                            );
  FUN_04180a6c(uVar2,uVar8,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
               ,0);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_02dd37b4(puVar3,uVar2);
  lVar5 = *unaff_x23;
  lVar9 = *(long *)
           Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_set_Item__;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_05ad0504;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_02d9a5d4();
LAB_05ad0504:
  lVar5 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar5 + 8),lVar9);
  (**(code **)(lVar5 + 8))();
  if (unaff_x23 != (long *)0x0) {
    lVar5 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05ad0584;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05ad0584:
    (*(code *)*puVar3)();
  }
  plVar4 = (long *)FUN_03526ed8();
  puVar1 = 
  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
  ;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar5 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
        goto LAB_05ad0630;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02d9a5d4(plVar4,*(long *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                        ,0xc);
LAB_05ad0630:
  (*(code *)*puVar3)(plVar4,1,puVar3[1]);
  auVar10 = FUN_05a70114();
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(undefined1 (*) [12])(in_stack_00000008 + 0x10) = auVar10;
  lVar5 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05ad06b8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02d9a5d4(plVar4,*(long *)
                                Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                        ,0);
LAB_05ad06b8:
  (*(code *)*puVar3)(plVar4);
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar5 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_05ad072c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar1,4);
LAB_05ad072c:
  (*(code *)*puVar3)(plVar4,in_stack_00000008 + 0x10,1,puVar3[1]);
  uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__
                            );
  FUN_04180bc0();
  lVar5 = *plVar4;
  lVar9 = *(long *)Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>__ctor__;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_05ad07c8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_02d9a5d4(plVar4);
LAB_05ad07c8:
  lVar5 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar5 + 8),lVar9);
  (**(code **)(lVar5 + 8))(plVar4,uVar2,lVar5);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05ad0844;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_0675f3d0,0);
LAB_05ad0844:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  if (*(long *)(unaff_x27 + 0x28) != in_stack_00000168) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


