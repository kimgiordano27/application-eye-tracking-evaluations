/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex<object,-object>$$get_Dirty
ENTRY_POINT: 03cd7358
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>__get_Dirty(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  
  if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  uVar3 = FUN_04577910();
  if ((uVar3 & 1) != 0) {
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
    if (lVar4 == 0) goto LAB_03cd756c;
    lVar5 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02ce0978();
    }
    FUN_045772fc(lVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x2b8));
    lVar4 = in_stack_00000010;
    if (in_stack_00000010 == 0) goto LAB_03cd756c;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
      FUN_02ce0978();
    }
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar4 + 0x28));
  }
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02ce0978();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02ce0978();
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02ce0978();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02ce0978();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
  if (lVar4 != 0) {
    uVar3 = FUN_04577910(lVar4,*unaff_x19,unaff_x19[1],&stack0x00000008,
                         *(undefined8 *)PTR_DAT_065df798);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar4 = *unaff_x20;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02ce0978();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
    if ((lVar4 != 0) &&
       (FUN_045772fc(lVar4,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_065df788),
       in_stack_00000008 != 0)) {
      (**(code **)(in_stack_00000008 + 0x18))
                (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                 *(undefined8 *)(in_stack_00000008 + 0x28));
      return;
    }
  }
LAB_03cd756c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


