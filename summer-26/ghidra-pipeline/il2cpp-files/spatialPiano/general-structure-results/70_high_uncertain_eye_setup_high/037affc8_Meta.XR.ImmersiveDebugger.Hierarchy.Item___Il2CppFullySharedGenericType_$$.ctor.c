/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 037affc8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_Item<__Il2CppFullySharedGenericType>___ctor
               (undefined8 param_1)

{
  void *__src;
  ushort uVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  ulong uVar10;
  long unaff_x29;
  
  FUN_02f41e9c(param_1);
  plVar2 = (long *)thunk_FUN_02f66c64();
  if (*plVar2 != 0) {
    uVar10 = 0;
    do {
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      piVar3 = (int *)thunk_FUN_02f66c64();
      if ((long)(*piVar3 + -1) <= (long)uVar10) break;
      lVar6 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar4 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_02f41e9c(lVar6);
        uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar4 = *(long *)(unaff_x20 + 0x20);
      }
      pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x80);
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_02f41e9c(lVar4);
      }
      plVar2 = (long *)(*pcVar8)(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x80));
      if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c(*(long *)(unaff_x20 + 0x20));
      }
      plVar5 = (long *)thunk_FUN_02f66c64();
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
LAB_037b0280:
        if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto UnityEngine_Rendering_DynamicArray_Iterator<RendererListLegacyResource>__get_Current;
      }
      if (*(uint *)(plVar5 + 3) <= uVar10) {
        if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        goto UnityEngine_Rendering_DynamicArray_Iterator<RendererListLegacyResource>__get_Current;
      }
      memcpy(unaff_x26,(void *)((long)plVar5 + uVar10 * *(uint *)(*plVar5 + 0x104) + 0x20),unaff_x22
            );
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      __src = unaff_x21;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
        __src = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x24,__src,unaff_x22);
      if (plVar2 == (long *)0x0) goto LAB_037b0280;
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      puVar9 = unaff_x26;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
        puVar9 = (undefined8 *)*unaff_x26;
      }
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      puVar7 = unaff_x24;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
        puVar7 = (undefined8 *)*unaff_x24;
      }
      lVar4 = *plVar2;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar9;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
      lVar4 = *(long *)(lVar4 + 0x1c0);
      (**(code **)(lVar4 + 0x10))
                (*(undefined8 *)(lVar4 + 8),lVar4,plVar2,unaff_x29 + -0x20,unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_037b021c;
      uVar10 = uVar10 + 1;
    } while( true );
  }
LAB_037b01e8:
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
UnityEngine_Rendering_DynamicArray_Iterator<RendererListLegacyResource>__get_Current:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_037b021c:
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar4 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0xb8);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar4);
  }
  (*pcVar8)();
  goto LAB_037b01e8;
}


