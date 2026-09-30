/*
FUNCTION_NAME: Unity.AppUI.UI.SliderFloat.UxmlSerializedData$$Deserialize
ENTRY_POINT: 058b4df0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_AppUI_UI_SliderFloat_UxmlSerializedData__Deserialize(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long *unaff_x21;
  long in_stack_00000000;
  char *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  FUN_05136fe0(param_1,&stack0x0000001c,0);
  lVar7 = *unaff_x21;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *unaff_x21;
  }
  puVar2 = PTR_DAT_067cbdc0;
  iVar12 = *(int *)(*(long *)(lVar7 + 0xb8) + 8);
  if (*(int *)(*(long *)PTR_DAT_067cbdc0 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbdc0);
  }
  iVar5 = FUN_0510d010(2,0);
  if (iVar12 != iVar5) {
    lVar7 = *unaff_x21;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *unaff_x21;
    }
    if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = *(undefined4 *)(**(long **)(lVar7 + 0xb8) + 0x18);
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransformOriginProperty_TypeInfo
                              );
    FUN_03abf17c(lVar7,uVar6,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_Get__);
    puVar4 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PositionProperty_TypeInfo;
    puVar3 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo;
    iVar12 = 0;
    while( true ) {
      lVar11 = *unaff_x21;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar11);
        lVar11 = *unaff_x21;
      }
      lVar8 = **(long **)(lVar11 + 0xb8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(lVar8 + 0x18) <= iVar12) break;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar11);
        lVar8 = **(long **)(*unaff_x21 + 0xb8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      plVar9 = (long *)FUN_03abf644(lVar8,iVar12,*(undefined8 *)puVar4);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
      if (plVar9 != (long *)0x0) {
        lVar11 = *unaff_x21;
        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48();
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar11);
          lVar11 = *unaff_x21;
        }
        if (**(long **)(lVar11 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar10 = FUN_03abf644(**(long **)(lVar11 + 0xb8),iVar12,*(undefined8 *)puVar4);
        if (lVar7 == 0) {
Unity_AppUI_UI_SliderInt__set_incrementFactor:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar11 = *(long *)(lVar7 + 0x10);
        lVar8 = *(long *)puVar3;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar11 == 0) goto Unity_AppUI_UI_SliderInt__set_incrementFactor;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
        }
        else {
          FUN_03abf904(lVar7,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar12 = iVar12 + 1;
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar12 = *(int *)(lVar7 + 0x18);
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar11);
      lVar11 = *unaff_x21;
      lVar8 = **(long **)(lVar11 + 0xb8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    if (iVar12 < *(int *)(lVar8 + 0x18)) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar11);
        lVar8 = **(long **)(*unaff_x21 + 0xb8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      iVar12 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (0 < iVar12) {
        Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar8 + 0x10),0,iVar12,0);
        lVar8 = **(long **)(*unaff_x21 + 0xb8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      FUN_03abfb0c(lVar8,lVar7,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UIR_LinkedPool<BestFitAllocator_Block>_Get__);
      if (**(long **)(*unaff_x21 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_03ac13b0(**(long **)(*unaff_x21 + 0xb8),
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>__ctor__);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_0510d010(2,0);
    lVar7 = *unaff_x21;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *unaff_x21;
    }
    *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8) = uVar6;
  }
  if (*in_stack_00000008 != '\0') {
    thunk_FUN_02f16354(*in_stack_00000010,0);
  }
  if (in_stack_00000000 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c0();
}


