/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item<object>$$get_Owner
ENTRY_POINT: 03cf407c
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

void Meta_XR_ImmersiveDebugger_Hierarchy_Item<object>__get_Owner(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  int iVar10;
  undefined1 auVar11 [16];
  
  puVar1 = PTR_DAT_06d01f60;
  plVar3 = (long *)(*param_1)();
  puVar2 = PTR_DAT_06d02048;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar10 = 0;
  do {
    lVar5 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__get_Owner;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar2,0);
Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__get_Owner:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_03cf420c;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02eea768(lVar5);
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>___ctor;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,lVar5,0);
Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>___ctor:
    auVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (iVar10 == 0) {
      *(undefined1 (*) [16])(unaff_x21 + 8) = auVar11;
      thunk_FUN_02f411dc(unaff_x21 + 8,0);
    }
    else {
      lVar5 = *(long *)(unaff_x21 + 0x18);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar5 + 0x18) <= iVar10 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      pauVar7 = (undefined1 (*) [16])(lVar5 + (long)(int)(iVar10 - 1U) * 0x10 + 0x20);
      *pauVar7 = auVar11;
      thunk_FUN_02f411dc(pauVar7,0);
    }
    iVar10 = iVar10 + 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto FUN_03cf4228;
    }
  }
LAB_03cf420c:
  puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,0);
FUN_03cf4228:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


