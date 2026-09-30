/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item<object>$$SetOwner
ENTRY_POINT: 03cf408c
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

void Meta_XR_ImmersiveDebugger_Hierarchy_Item<object>__SetOwner(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int iVar8;
  undefined1 auVar9 [16];
  
  puVar1 = PTR_DAT_06d02048;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  iVar8 = 0;
  do {
    lVar3 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__get_Owner;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(param_1,*(long *)puVar1,0);
Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__get_Owner:
    uVar6 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      if (param_1 == (long *)0x0) {
        return;
      }
      lVar3 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_03cf420c;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768(lVar3);
    }
    lVar4 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>___ctor;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c(param_1,lVar3,0);
Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>___ctor:
    auVar9 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (iVar8 == 0) {
      *(undefined1 (*) [16])(unaff_x21 + 8) = auVar9;
      thunk_FUN_02f411dc(unaff_x21 + 8,0);
    }
    else {
      lVar3 = *(long *)(unaff_x21 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar3 + 0x18) <= iVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      pauVar5 = (undefined1 (*) [16])(lVar3 + (long)(int)(iVar8 - 1U) * 0x10 + 0x20);
      *pauVar5 = auVar9;
      thunk_FUN_02f411dc(pauVar5,0);
    }
    iVar8 = iVar8 + 1;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto FUN_03cf4228;
    }
  }
LAB_03cf420c:
  puVar2 = (undefined8 *)FUN_02eea86c(param_1,*unaff_x23,0);
FUN_03cf4228:
  (*(code *)*puVar2)(param_1,puVar2[1]);
  return;
}


