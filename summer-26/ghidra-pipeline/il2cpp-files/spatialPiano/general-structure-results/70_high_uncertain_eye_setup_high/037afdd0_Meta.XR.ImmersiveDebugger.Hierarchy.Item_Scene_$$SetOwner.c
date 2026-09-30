/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item<Scene>$$SetOwner
ENTRY_POINT: 037afdd0
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


void Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__SetOwner(void)

{
  ushort uVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x20;
  void *unaff_x21;
  ulong __n;
  code *pcVar10;
  undefined8 *__dest;
  undefined8 *__dest_00;
  undefined8 *puVar11;
  long unaff_x29;
  
  lVar2 = FUN_02f41e9c();
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __dest_00 = (undefined8 *)(&stack0x00000000 + -uVar9);
  __dest = (undefined8 *)((long)__dest_00 - uVar9);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c(*(long *)(unaff_x20 + 0x20));
  }
  piVar3 = (int *)thunk_FUN_02f66c64();
  if (0 < *piVar3) {
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar2 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_02f41e9c(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar2 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x80);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    plVar4 = (long *)(*pcVar10)(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80));
    if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c(*(long *)(unaff_x20 + 0x20));
    }
    pvVar5 = (void *)thunk_FUN_02f66c64();
    memcpy(__dest_00,pvVar5,__n);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    pvVar5 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
      pvVar5 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(__dest,pvVar5,__n);
    if (plVar4 == (long *)0x0) {
LAB_037b0280:
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto UnityEngine_Rendering_DynamicArray_Iterator<RendererListLegacyResource>__get_Current;
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    puVar11 = __dest_00;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
      puVar11 = (undefined8 *)*__dest_00;
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    puVar8 = __dest;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
      puVar8 = (undefined8 *)*__dest;
    }
    lVar2 = *plVar4;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar11;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    lVar2 = *(long *)(lVar2 + 0x1c0);
    (**(code **)(lVar2 + 0x10))
              (*(undefined8 *)(lVar2 + 8),lVar2,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
    if (*(char *)(unaff_x29 + -0xc) == '\0') {
      if ((uVar1 & 1) == 0) {
        FUN_02f41e9c(lVar2);
      }
      plVar4 = (long *)thunk_FUN_02f66c64();
      if (*plVar4 != 0) {
        uVar9 = 0;
        while( true ) {
          if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_02f41e9c();
          }
          piVar3 = (int *)thunk_FUN_02f66c64();
          if ((long)(*piVar3 + -1) <= (long)uVar9) goto LAB_037b01e8;
          lVar7 = *(long *)(unaff_x20 + 0x20);
          uVar1 = *(ushort *)(lVar7 + 0x135);
          lVar2 = lVar7;
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_02f41e9c(lVar7);
            uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
            lVar2 = *(long *)(unaff_x20 + 0x20);
          }
          pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x80);
          if ((uVar1 & 1) == 0) {
            lVar2 = FUN_02f41e9c(lVar2);
          }
          plVar4 = (long *)(*pcVar10)(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x80));
          if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_02f41e9c(*(long *)(unaff_x20 + 0x20));
          }
          plVar6 = (long *)thunk_FUN_02f66c64();
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_037b0280;
          if (*(uint *)(plVar6 + 3) <= uVar9) {
            if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            goto 
            UnityEngine_Rendering_DynamicArray_Iterator<RendererListLegacyResource>__get_Current;
          }
          memcpy(__dest_00,(void *)((long)plVar6 + uVar9 * *(uint *)(*plVar6 + 0x104) + 0x20),__n);
          lVar2 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02f41e9c();
          }
          pvVar5 = unaff_x21;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
            pvVar5 = (void *)(unaff_x29 + -0x28);
          }
          memcpy(__dest,pvVar5,__n);
          if (plVar4 == (long *)0x0) goto LAB_037b0280;
          lVar2 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02f41e9c();
          }
          puVar11 = __dest_00;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
            puVar11 = (undefined8 *)*__dest_00;
          }
          lVar2 = *(long *)(unaff_x20 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02f41e9c();
          }
          puVar8 = __dest;
          if (-1 < *(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x28)) {
            puVar8 = (undefined8 *)*__dest;
          }
          lVar2 = *plVar4;
          *(undefined8 **)(unaff_x29 + -0x20) = puVar11;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
          lVar2 = *(long *)(lVar2 + 0x1c0);
          (**(code **)(lVar2 + 0x10))
                    (*(undefined8 *)(lVar2 + 8),lVar2,plVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
          if (*(char *)(unaff_x29 + -0xc) != '\0') break;
          uVar9 = uVar9 + 1;
        }
        lVar7 = *(long *)(unaff_x20 + 0x20);
        uVar1 = *(ushort *)(lVar7 + 0x135);
        lVar2 = lVar7;
        if ((uVar1 & 1) == 0) {
          lVar7 = FUN_02f41e9c(lVar7);
          uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
          lVar2 = *(long *)(unaff_x20 + 0x20);
        }
        pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xb8);
        if ((uVar1 & 1) == 0) {
          FUN_02f41e9c(lVar2);
        }
        (*pcVar10)();
      }
    }
    else {
      lVar7 = lVar2;
      if ((uVar1 & 1) == 0) {
        lVar2 = FUN_02f41e9c(lVar2);
        uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar7 = *(long *)(unaff_x20 + 0x20);
      }
      pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0xb8);
      if ((uVar1 & 1) == 0) {
        FUN_02f41e9c(lVar7);
      }
      (*pcVar10)();
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


