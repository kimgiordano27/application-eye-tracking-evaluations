/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item<object>$$get_TypedOwner
ENTRY_POINT: 03cf4084
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03cf425c) */

void Meta_XR_ImmersiveDebugger_Hierarchy_Item<object>__get_TypedOwner(code *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int iVar9;
  undefined1 auVar10 [16];
  
  plVar2 = (long *)(*param_1)();
  puVar1 = PTR_DAT_06d02048;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar9 = 0;
  do {
    lVar4 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__get_Owner;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar2,*(long *)puVar1,0);
Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__get_Owner:
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_03cf420c;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768(lVar4);
    }
    lVar5 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>___ctor;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar2,lVar4,0);
Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>___ctor:
    auVar10 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar9 == 0) {
      *(undefined1 (*) [16])(unaff_x21 + 8) = auVar10;
      thunk_FUN_02f411dc(unaff_x21 + 8,0);
    }
    else {
      lVar4 = *(long *)(unaff_x21 + 0x18);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar4 + 0x18) <= iVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      pauVar6 = (undefined1 (*) [16])(lVar4 + (long)(int)(iVar9 - 1U) * 0x10 + 0x20);
      *pauVar6 = auVar10;
      thunk_FUN_02f411dc(pauVar6,0);
    }
    iVar9 = iVar9 + 1;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto FUN_03cf4228;
    }
  }
LAB_03cf420c:
  puVar3 = (undefined8 *)FUN_02eea86c(plVar2,*unaff_x23,0);
FUN_03cf4228:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


