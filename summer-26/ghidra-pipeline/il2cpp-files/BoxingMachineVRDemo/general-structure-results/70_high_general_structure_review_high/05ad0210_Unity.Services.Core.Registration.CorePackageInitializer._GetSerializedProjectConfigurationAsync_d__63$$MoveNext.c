/*
FUNCTION_NAME: Unity.Services.Core.Registration.CorePackageInitializer.<GetSerializedProjectConfigurationAsync>d__63$$MoveNext
ENTRY_POINT: 05ad0210
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05ad059c) */
/* WARNING: Removing unreachable block (ram,0x05ad089c) */
/* WARNING: Removing unreachable block (ram,0x05ad088c) */

void Unity_Services_Core_Registration_CorePackageInitializer_<GetSerializedProjectConfigurationAsync>d__63__MoveNext
               (long param_1,long param_2,long param_3,undefined4 param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [12];
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000020;
  long lStack0000000000000168;
  
  lVar1 = tpidr_el0;
  lStack0000000000000168 = *(long *)(lVar1 + 0x28);
  if ((DAT_06b817de & 1) == 0) {
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>__ctor__)
    ;
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__
                );
    FUN_02d6084c(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_set_Item__
                );
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>__ctor__);
    FUN_02d6084c(Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>_TryGetValue__
                );
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
                );
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_TryGetValue__
                );
    DAT_06b817de = 1;
  }
  memset(&stack0x000000c8,0,0xa0);
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  if ((param_3 != 0) && (uVar4 = FUN_05aa8ed0(param_3,0), (uVar4 & 1) != 0)) {
    FUN_05ad0a28(&stack0x00000018,param_1,param_4);
    lVar9 = in_stack_00000020;
    memcpy(&stack0x000000c8,&stack0x00000028,0xa0);
    puVar2 = Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__;
    if (lVar9 != 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar5 = (long *)FUN_03526ce0(param_2,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__
                                    ,&stack0x00000010,*(undefined8 *)(param_1 + 200),
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_TryGetValue__
                                    ,0x113,*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>_TryGetValue__
                                   );
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar8 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
             ) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
            goto LAB_05ad03e8;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02d9a5d4(plVar5,*(long *)
                                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                            ,0xb);
LAB_05ad03e8:
      (*(code *)*puVar6)(plVar5,0,puVar6[1]);
      lVar8 = in_stack_00000010;
      memcpy(&stack0x00000018,&stack0x000000c8,0xa0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      memcpy((void *)(lVar8 + 0x10),&stack0x00000018,0xa0);
      puVar3 = Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_Remove__;
      lVar8 = *(long *)
               Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_Remove__;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar8);
        lVar8 = *(long *)puVar3;
      }
      lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar11 == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar8);
          lVar8 = *(long *)puVar3;
        }
        uVar12 = **(undefined8 **)(lVar8 + 0xb8);
        lVar11 = thunk_FUN_02d9d534(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>__ctor__
                                   );
        FUN_04180a6c(lVar11,uVar12,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_ContainsKey__
                     ,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar7 = lVar11;
        thunk_FUN_02dd37b4(plVar7,lVar11);
      }
      lVar8 = *plVar5;
      lVar13 = *(long *)
                Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_set_Item__
      ;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)(lVar13 + 0x20)) {
            lVar8 = lVar8 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
            goto LAB_05ad0504;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      lVar8 = FUN_02d9a5d4(plVar5);
LAB_05ad0504:
      lVar8 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar8 + 8),lVar13);
      (**(code **)(lVar8 + 8))(plVar5,lVar11,lVar8);
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d0) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05ad0584;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_05ad0584:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
      plVar5 = (long *)FUN_03526ed8(param_2,*(undefined8 *)puVar2,&stack0x00000008,
                                    *(undefined8 *)(param_1 + 200),
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_TryGetValue__
                                    ,0x129,*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>__ctor__
                                   );
      puVar2 = 
      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
      ;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar8 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
             ) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
            goto LAB_05ad0630;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02d9a5d4(plVar5,*(long *)
                                    Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                            ,0xc);
LAB_05ad0630:
      (*(code *)*puVar6)(plVar5,1,puVar6[1]);
      lVar8 = in_stack_00000008;
      auVar14 = FUN_05a70114(param_2,lVar9,0,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      *(undefined1 (*) [12])(lVar8 + 0x10) = auVar14;
      lVar9 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05ad06b8;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02d9a5d4(plVar5,*(long *)
                                    Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                            ,0);
LAB_05ad06b8:
      (*(code *)*puVar6)(plVar5,param_5,param_6,0,2,puVar6[1]);
      lVar9 = in_stack_00000008;
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar8 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_05ad072c;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)puVar2,4);
LAB_05ad072c:
      (*(code *)*puVar6)(plVar5,lVar9 + 0x10,1,puVar6[1]);
      uVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<string,_StyleComplexSelector>_TryGetValue__
                                 );
      FUN_04180bc0(uVar12,param_1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>_Add__,0);
      lVar9 = *plVar5;
      lVar8 = *(long *)Method_System_Collections_Generic_Dictionary<string,_StylePropertyId>__ctor__
      ;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)(lVar8 + 0x20)) {
            lVar9 = lVar9 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
            goto LAB_05ad07c8;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      lVar9 = FUN_02d9a5d4(plVar5);
LAB_05ad07c8:
      lVar9 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar9 + 8),lVar8);
      (**(code **)(lVar9 + 8))(plVar5,uVar12,lVar9);
      if (plVar5 != (long *)0x0) {
        lVar9 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d0) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_05ad0844;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_05ad0844:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack0000000000000168) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


