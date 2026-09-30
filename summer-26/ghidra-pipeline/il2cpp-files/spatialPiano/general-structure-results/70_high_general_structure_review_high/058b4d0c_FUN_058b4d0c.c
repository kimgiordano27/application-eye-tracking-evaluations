/*
FUNCTION_NAME: FUN_058b4d0c
ENTRY_POINT: 058b4d0c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x058b511c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_058b4d0c(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  char local_44 [4];
  
  puVar5 = 
  Method_System_Collections_Generic_Dictionary<SerializableGuid,_SingleEraseAnchor_EraseRequest>_Remove__
  ;
  if ((DAT_06bc130c & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cbdc0);
    FUN_02f08768(Method_UnityEngine_UIElements_UIR_LinkedPool<BestFitAllocator_Block>_Get__);
    FUN_02f08768(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo)
    ;
    FUN_02f08768(Method_UnityEngine_UIElements_UIR_LinkedPool<BestFitAllocator_Block>_Return__);
    FUN_02f08768(Method_UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>__ctor__);
    FUN_02f08768(Method_UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_Get__);
    FUN_02f08768(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingTopProperty_TypeInfo);
    FUN_02f08768(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PositionProperty_TypeInfo);
    FUN_02f08768(
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransformOriginProperty_TypeInfo
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<SerializableGuid,_SingleEraseAnchor_EraseRequest>_Remove__
                );
    DAT_06bc130c = 1;
  }
  lVar8 = *(long *)puVar5;
  local_44[0] = '\0';
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar5;
  }
  local_44[0] = '\0';
  uVar9 = **(undefined8 **)(lVar8 + 0xb8);
  FUN_05136fe0(uVar9,local_44,0);
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar5;
  }
  puVar2 = PTR_DAT_067cbdc0;
  iVar14 = *(int *)(*(long *)(lVar8 + 0xb8) + 8);
  if (*(int *)(*(long *)PTR_DAT_067cbdc0 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbdc0);
  }
  iVar6 = FUN_0510d010(2,0);
  if (iVar14 != iVar6) {
    lVar8 = *(long *)puVar5;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar5;
    }
    if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar7 = *(undefined4 *)(**(long **)(lVar8 + 0xb8) + 0x18);
    lVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransformOriginProperty_TypeInfo
                              );
    FUN_03abf17c(lVar8,uVar7,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>_Get__);
    puVar4 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PositionProperty_TypeInfo;
    puVar3 = UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo;
    iVar14 = 0;
    while( true ) {
      lVar13 = *(long *)puVar5;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar13);
        lVar13 = *(long *)puVar5;
      }
      lVar10 = **(long **)(lVar13 + 0xb8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(int *)(lVar10 + 0x18) <= iVar14) break;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar13);
        lVar10 = **(long **)(*(long *)puVar5 + 0xb8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      plVar11 = (long *)FUN_03abf644(lVar10,iVar14,*(undefined8 *)puVar4);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar11 = (long *)(**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
      if (plVar11 != (long *)0x0) {
        lVar13 = *(long *)puVar5;
        if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar13 + 0x130)) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar13 + 0x130) * 8 + -8) !=
            lVar13)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48();
        }
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar13);
          lVar13 = *(long *)puVar5;
        }
        if (**(long **)(lVar13 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar12 = FUN_03abf644(**(long **)(lVar13 + 0xb8),iVar14,*(undefined8 *)puVar4);
        if (lVar8 == 0) {
Unity_AppUI_UI_SliderInt__set_incrementFactor:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar13 = *(long *)(lVar8 + 0x10);
        lVar10 = *(long *)puVar3;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar13 == 0) goto Unity_AppUI_UI_SliderInt__set_incrementFactor;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
        }
        else {
          FUN_03abf904(lVar8,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar14 = iVar14 + 1;
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar14 = *(int *)(lVar8 + 0x18);
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar13);
      lVar13 = *(long *)puVar5;
      lVar10 = **(long **)(lVar13 + 0xb8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    if (iVar14 < *(int *)(lVar10 + 0x18)) {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar13);
        lVar10 = **(long **)(*(long *)puVar5 + 0xb8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      iVar14 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar14) {
        Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar10 + 0x10),0,iVar14,0);
        lVar10 = **(long **)(*(long *)puVar5 + 0xb8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
      FUN_03abfb0c(lVar10,lVar8,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UIR_LinkedPool<BestFitAllocator_Block>_Get__);
      if (**(long **)(*(long *)puVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_03ac13b0(**(long **)(*(long *)puVar5 + 0xb8),
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_UIR_LinkedPool<DynamicAtlas_TextureInfo>__ctor__);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = FUN_0510d010(2,0);
    lVar8 = *(long *)puVar5;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar5;
    }
    *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 8) = uVar7;
  }
  if (local_44[0] != '\0') {
    thunk_FUN_02f16354(uVar9,0);
  }
  return;
}


