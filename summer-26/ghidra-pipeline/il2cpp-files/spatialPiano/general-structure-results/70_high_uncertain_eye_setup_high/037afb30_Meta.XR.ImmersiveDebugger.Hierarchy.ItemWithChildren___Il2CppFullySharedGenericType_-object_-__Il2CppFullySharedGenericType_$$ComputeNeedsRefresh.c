/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.ItemWithChildren<__Il2CppFullySharedGenericType,-object,-__Il2CppFullySharedGenericType>$$ComputeNeedsRefresh
ENTRY_POINT: 037afb30
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<__Il2CppFullySharedGenericType,_object,___Il2CppFullySharedGenericType>__ComputeNeedsRefresh
               (long param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong in_x9;
  code *pcVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
code_r0x037afb30:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_037afb24;
LAB_037afb3c:
  lVar2 = FUN_02f421d0(unaff_x24,param_3,0);
  do {
    lVar2 = *(long *)(lVar2 + 8);
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,unaff_x24,unaff_x29 + -0x18);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    lVar2 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_02f41e9c();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0xb0);
    lVar2 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_02f41e9c();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xb0);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    puVar4 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x23;
    }
    pcVar6 = *(code **)(lVar2 + 0x10);
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    (*pcVar6)(uVar8,lVar2);
    plVar9 = *(long **)(unaff_x29 + -0x20);
    if (plVar9 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_037afd74;
    }
    lVar2 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_037afac4;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar9,*unaff_x27,0);
LAB_037afac4:
    uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar5 & 1) == 0) {
      plVar9 = (long *)**(undefined8 **)(unaff_x29 + -0x28);
      if (plVar9 == (long *)0x0) goto LAB_037afd04;
      lVar2 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 == 0) goto LAB_037afcdc;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    unaff_x24 = *(long **)(unaff_x29 + -0x20);
    if (unaff_x24 == (long *)0x0) {
      if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_037afd74;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    param_3 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_02f41e9c(param_3);
    }
    param_1 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_037afb3c;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_037afb24:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x037afb30;
    lVar2 = param_1 + (long)*in_x10 * 0x10 + 0x138;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_037afcf8;
    }
  }
LAB_037afcdc:
  puVar4 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)PTR_DAT_067c91b0,0);
LAB_037afcf8:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
LAB_037afd04:
  if (*(long *)(unaff_x29 + -0x30) == 0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
LAB_037afd74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


