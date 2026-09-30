/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<__Il2CppFullySharedGenericType,-object,-__Il2CppFullySharedGenericType>$$ClearChildren
ENTRY_POINT: 0428916c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<__Il2CppFullySharedGenericType,_object,___Il2CppFullySharedGenericType>__ClearChildren
               (void)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  ushort *in_x9;
  ulong uVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int unaff_w28;
  long unaff_x29;
  
  while( true ) {
    if ((*in_x9 & 1) == 0) {
      FUN_0367c9fc();
    }
    piVar3 = (int *)thunk_FUN_036a1ed0();
    iVar1 = *piVar3;
    if (iVar1 <= unaff_w28) break;
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
      uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x19 + 0x20);
    }
    uVar10 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x78);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x78);
    *(int *)(unaff_x29 + -0x1c) = unaff_w28;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x1c;
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
    (**(code **)(lVar4 + 0x10))(uVar10);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    pvVar5 = *(void **)(unaff_x29 + -0x30);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x28)) {
      pvVar5 = (void *)(unaff_x29 + -0x28);
    }
    pvVar5 = memcpy(unaff_x23,pvVar5,*(size_t *)(unaff_x29 + -0x38));
    if (unaff_x20 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_0428939c;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xe0);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    puVar8 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x21;
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    puVar9 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x23;
    }
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar3 * 0x10 + 0x138;
          goto LAB_04289320;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar7 != 0);
    }
    lVar4 = FUN_0367cd30();
LAB_04289320:
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar9;
    (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
    if (*(char *)(unaff_x29 + -0x1c) != '\0') break;
    in_x9 = (ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    unaff_w28 = unaff_w28 + 1;
  }
  pvVar5 = (void *)(ulong)(unaff_w28 < iVar1);
  if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_0428939c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar5);
}


