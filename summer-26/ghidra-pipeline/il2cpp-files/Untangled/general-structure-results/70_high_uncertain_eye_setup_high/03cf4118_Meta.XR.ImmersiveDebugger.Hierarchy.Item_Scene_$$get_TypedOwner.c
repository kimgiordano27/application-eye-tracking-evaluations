/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item<Scene>$$get_TypedOwner
ENTRY_POINT: 03cf4118
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03cf425c) */

void Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__get_TypedOwner
               (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  undefined1 auVar6 [16];
  
  do {
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02eea768(param_2);
    }
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_2) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>___ctor;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>___ctor:
    auVar6 = (*(code *)*puVar1)();
    if (unaff_w24 == 0) {
      *(undefined1 (*) [16])(unaff_x21 + 8) = auVar6;
      thunk_FUN_02f411dc();
    }
    else {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_w24 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      pauVar3 = (undefined1 (*) [16])(lVar2 + (long)(int)(unaff_w24 - 1U) * 0x10 + 0x20);
      *pauVar3 = auVar6;
      thunk_FUN_02f411dc(pauVar3,0);
    }
    unaff_w24 = unaff_w24 + 1;
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__get_Owner;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__get_Owner:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    param_2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_03cf4228;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
FUN_03cf4228:
    (*(code *)*puVar1)();
  }
  return;
}


