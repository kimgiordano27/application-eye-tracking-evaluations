/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item<__Il2CppFullySharedGenericType>$$get_Owner
ENTRY_POINT: 037afe18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_Item<__Il2CppFullySharedGenericType>__get_Owner
               (undefined8 param_1)

{
  ushort uVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  code *pcVar9;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *puVar10;
  ulong uVar11;
  long unaff_x29;
  
  FUN_02f41e9c(param_1);
  piVar2 = (int *)thunk_FUN_02f66c64();
  if (0 < *piVar2) {
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar3 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_02f41e9c(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x80);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    plVar4 = (long *)(*pcVar9)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80));
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c(*(long *)(unaff_x20 + 0x20));
    }
    pvVar5 = (void *)thunk_FUN_02f66c64();
    memcpy(unaff_x26,pvVar5,unaff_x22);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    pvVar5 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      pvVar5 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x24,pvVar5,unaff_x22);
    if (plVar4 == (long *)0x0) {
LAB_037b0280:
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto UnityEngine_Rendering_DynamicArray_Iterator<RendererListLegacyResource>__get_Current;
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    puVar10 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      puVar10 = (undefined8 *)*unaff_x26;
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    puVar8 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x24;
    }
    lVar3 = *plVar4;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    lVar3 = *(long *)(lVar3 + 0x1c0);
    (**(code **)(lVar3 + 0x10))
              (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    if (*(char *)(unaff_x29 + -0xc) == '\0') {
      if ((uVar1 & 1) == 0) {
        FUN_02f41e9c(lVar3);
      }
      plVar4 = (long *)thunk_FUN_02f66c64();
      if (*plVar4 != 0) {
        uVar11 = 0;
        while( true ) {
          if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_02f41e9c();
          }
          piVar2 = (int *)thunk_FUN_02f66c64();
          if ((long)(*piVar2 + -1) <= (long)uVar11) goto LAB_037b01e8;
          lVar7 = *(long *)(unaff_x20 + 0x20);
          uVar1 = *(ushort *)(lVar7 + 0x135);
          lVar3 = lVar7;
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_02f41e9c(lVar7);
            uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
            lVar3 = *(long *)(unaff_x20 + 0x20);
          }
          pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x80);
          if ((uVar1 & 1) == 0) {
            lVar3 = FUN_02f41e9c(lVar3);
          }
          plVar4 = (long *)(*pcVar9)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80));
          if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_02f41e9c(*(long *)(unaff_x20 + 0x20));
          }
          plVar6 = (long *)thunk_FUN_02f66c64();
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_037b0280;
          if (*(uint *)(plVar6 + 3) <= uVar11) {
            if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            goto 
            UnityEngine_Rendering_DynamicArray_Iterator<RendererListLegacyResource>__get_Current;
          }
          memcpy(unaff_x26,(void *)((long)plVar6 + uVar11 * *(uint *)(*plVar6 + 0x104) + 0x20),
                 unaff_x22);
          lVar3 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02f41e9c();
          }
          pvVar5 = unaff_x21;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(unaff_x24,pvVar5,unaff_x22);
          if (plVar4 == (long *)0x0) goto LAB_037b0280;
          lVar3 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02f41e9c();
          }
          puVar10 = unaff_x26;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
            puVar10 = (undefined8 *)*unaff_x26;
          }
          lVar3 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02f41e9c();
          }
          puVar8 = unaff_x24;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
            puVar8 = (undefined8 *)*unaff_x24;
          }
          lVar3 = *plVar4;
          *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
          lVar3 = *(long *)(lVar3 + 0x1c0);
          (**(code **)(lVar3 + 0x10))
                    (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
          if (*(char *)(unaff_x29 + -0xc) != '\0') break;
          uVar11 = uVar11 + 1;
        }
        lVar7 = *(long *)(unaff_x20 + 0x20);
        uVar1 = *(ushort *)(lVar7 + 0x135);
        lVar3 = lVar7;
        if ((uVar1 & 1) == 0) {
          lVar7 = FUN_02f41e9c(lVar7);
          uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
          lVar3 = *(long *)(unaff_x20 + 0x20);
        }
        pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xb8);
        if ((uVar1 & 1) == 0) {
          FUN_02f41e9c(lVar3);
        }
        (*pcVar9)();
      }
    }
    else {
      lVar7 = lVar3;
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_02f41e9c(lVar3);
        uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar7 = *(long *)(unaff_x20 + 0x20);
      }
      pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xb8);
      if ((uVar1 & 1) == 0) {
        FUN_02f41e9c(lVar7);
      }
      (*pcVar9)();
    }
  }
LAB_037b01e8:
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
UnityEngine_Rendering_DynamicArray_Iterator<RendererListLegacyResource>__get_Current:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


