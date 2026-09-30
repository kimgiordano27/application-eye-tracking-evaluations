/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item<__Il2CppFullySharedGenericType>$$get_Owner
ENTRY_POINT: 03cf417c
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

void Meta_XR_ImmersiveDebugger_Hierarchy_Item<__Il2CppFullySharedGenericType>__get_Owner
               (code *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  undefined1 auVar7 [16];
  
  do {
    auVar7 = (*param_1)();
    if (unaff_w24 == 0) {
      *(undefined1 (*) [16])(unaff_x21 + 8) = auVar7;
      thunk_FUN_02f411dc();
    }
    else {
      lVar3 = *(long *)(unaff_x21 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_w24 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      pauVar4 = (undefined1 (*) [16])(lVar3 + (long)(int)(unaff_w24 - 1U) * 0x10 + 0x20);
      *pauVar4 = auVar7;
      thunk_FUN_02f411dc(pauVar4,0);
    }
    unaff_w24 = unaff_w24 + 1;
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__get_Owner;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>__get_Owner:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) break;
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768(lVar3);
    }
    lVar2 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>___ctor;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
Meta_XR_ImmersiveDebugger_Hierarchy_Item<Scene>___ctor:
    param_1 = (code *)*puVar1;
  } while( true );
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_03cf4228;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
FUN_03cf4228:
    (*(code *)*puVar1)();
  }
  return;
}


