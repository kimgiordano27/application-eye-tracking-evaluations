/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 028ef4e0
PROGRAM: sharks-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManagerForAddon__get_TelemetryAnnotation(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  long in_stack_00000008;
  long in_stack_00000010;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 0x48);
  if (lVar5 != 0) {
    lVar3 = *unaff_x20;
    uVar1 = *unaff_x19;
    uVar2 = unaff_x19[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    FUN_02171ca8(lVar5,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x2c0));
    lVar5 = in_stack_00000010;
    if (in_stack_00000010 != 0) {
      uVar1 = *unaff_x19;
      uVar2 = unaff_x19[1];
      if ((*(byte *)(*unaff_x20 + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      (**(code **)(lVar5 + 0x18))
                (*(undefined8 *)(lVar5 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar5 + 0x28));
      lVar5 = *unaff_x20;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar5 = *unaff_x20;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
      if (lVar5 != 0) {
        uVar4 = FUN_021722c0(lVar5,*unaff_x19,unaff_x19[1],&stack0x00000008,
                             *(undefined8 *)PTR_DAT_037fb6a8);
        if ((uVar4 & 1) == 0) {
          return;
        }
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar5 = *unaff_x20;
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0185daa4();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x58);
        if ((lVar5 != 0) &&
           (FUN_02171ca8(lVar5,*unaff_x19,unaff_x19[1],*(undefined8 *)PTR_DAT_037fb698),
           in_stack_00000008 != 0)) {
          (**(code **)(in_stack_00000008 + 0x18))
                    (*(undefined8 *)(in_stack_00000008 + 0x40),*unaff_x19,unaff_x19[1],
                     *(undefined8 *)(in_stack_00000008 + 0x28));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


