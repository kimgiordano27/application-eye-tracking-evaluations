/*
FUNCTION_NAME: FUN_01f15fac
ENTRY_POINT: 01f15fac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined4
FUN_01f15fac(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  int *piVar11;
  long *plVar12;
  
  if ((DAT_03780208 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_13242);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass7_0_<CreateHDR>b__1__
                      );
    thunk_FUN_00d48444(StringLiteral_10792);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<List<Vertex>>_MoveNext__);
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_FocusEnterEvent_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<EnableDeviceCommand>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033efbb0);
    DAT_03780208 = 1;
  }
  puVar3 = StringLiteral_10792;
  puVar2 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  puVar1 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  plVar12 = *(long **)(param_1 + 0x170);
  if (plVar12 == (long *)0x0) {
    if (((*(long *)(param_1 + 0x180) != 0) &&
        (uVar6 = FUN_01e4a248(*(long *)(param_1 + 0x180),0), (uVar6 & 1) != 0)) &&
       (*(int *)(param_1 + 0x108) == 2)) {
      FUN_01f1b0f0(param_1);
    }
    plVar12 = *(long **)(param_1 + 0x170);
    if (plVar12 != (long *)0x0) goto LAB_01f160a8;
LAB_01f16118:
    puVar7 = (undefined8 *)UnityEngine_XR_Interaction_Toolkit_FocusEnterEvent_TypeInfo;
    if (*(char *)(param_1 + 0x230) != '\0') {
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar9 == 0) goto LAB_01f163e0;
      FUN_01f75de4(lVar9,param_2,0);
      plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (plVar12 == (long *)0x0) goto LAB_01f163e0;
      FUN_01e91c7c(plVar12,lVar9,0,0);
      FUN_01e92040(plVar12,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
      goto LAB_01f16174;
    }
  }
  else {
LAB_01f160a8:
    lVar9 = *plVar12;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass7_0_<CreateHDR>b__1__
           ) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_01f16100;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_00d59724(plVar12,*(long *)
                                   Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass7_0_<CreateHDR>b__1__
                          ,5);
LAB_01f16100:
    plVar12 = (long *)(*(code *)*puVar7)(plVar12,param_2,puVar7[1]);
    if (plVar12 == (long *)0x0) goto LAB_01f16118;
LAB_01f16174:
    puVar4 = StringLiteral_13242;
    lVar9 = *plVar12;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_13242) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_01f161cc;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_13242,3);
LAB_01f161cc:
    uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if ((uVar6 & 1) != 0) {
      puVar7 = (undefined8 *)
               Method_System_Collections_Generic_List_Enumerator<List<Vertex>>_MoveNext__;
      if (*(char *)(param_1 + 0x230) == '\0') goto LAB_01f16438;
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar9 == 0) goto LAB_01f163e0;
      FUN_01f75de4(lVar9,param_2,0);
      plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (plVar12 == (long *)0x0) goto LAB_01f163e0;
      FUN_01e91c7c(plVar12,lVar9,0,0);
      FUN_01e92040(plVar12,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    }
    if (*(char *)(param_1 + 0x1f1) != '\0') {
      if (plVar12 == (long *)0x0) goto LAB_01f163e0;
      lVar9 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_01f16294;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,2);
LAB_01f16294:
      uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      puVar1 = PTR_DAT_033efbb0;
      if ((uVar6 & 1) != 0) {
        FUN_00ac2be8(plVar12);
        param_2 = FUN_00ade70c(0,*(undefined8 *)puVar4,plVar12);
        uVar10 = *(undefined4 *)(param_1 + 0x70);
        uVar8 = *(undefined8 *)puVar1;
        goto LAB_01f16448;
      }
    }
    if (plVar12 == (long *)0x0) {
LAB_01f163e0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar9 = *plVar12;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_01f162f8;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar4,1);
LAB_01f162f8:
    uVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(param_1 + 0x1f8) == 2) {
        return 4;
      }
      FUN_01f1948c(param_1,plVar12);
      if (*(long *)(param_1 + 0xb8) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x6c) = *(undefined4 *)(param_1 + 0x98);
        if ((param_3 & 1) == 0) {
          return 3;
        }
        if (*(char *)(param_1 + 0x1e0) != '\0') {
          return 7;
        }
        return 3;
      }
      goto LAB_01f163e0;
    }
    puVar7 = (undefined8 *)
             Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<EnableDeviceCommand>__;
    if ((param_3 & 1) == 0) {
      if (*(int *)(param_1 + 0x1f8) == 2) {
        return 4;
      }
      if ((*(long *)(param_1 + 0xf0) == 0) ||
         ((uVar6 = FUN_01faa380(0), (uVar6 & 1) != 0 && (*(char *)(param_1 + 0x240) == '\0')))) {
        if ((param_4 & 1) == 0) {
          return 4;
        }
        FUN_01f190fc(param_1,plVar12);
        lVar9 = *(long *)(param_1 + 0xb8);
        if (lVar9 == 0) goto LAB_01f163e0;
        uVar10 = *(undefined4 *)(param_1 + 0x98);
        uVar5 = 5;
      }
      else {
        FUN_01f190fc(param_1,plVar12);
        lVar9 = *(long *)(param_1 + 0xb8);
        if (lVar9 == 0) goto LAB_01f163e0;
        uVar10 = *(undefined4 *)(param_1 + 0x98);
        uVar5 = 3;
      }
      *(undefined4 *)(lVar9 + 0x6c) = uVar10;
      return uVar5;
    }
  }
LAB_01f16438:
  uVar10 = *(undefined4 *)(param_1 + 0x70);
  uVar8 = *puVar7;
LAB_01f16448:
                    /* WARNING: Subroutine does not return */
  FUN_01f1a67c(param_1,uVar8,param_2,uVar10,param_5);
}


