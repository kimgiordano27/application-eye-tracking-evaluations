/*
FUNCTION_NAME: Meta.WitAi.WitRequest.<PerformMainThreadCallbacks>d__112$$System.IDisposable.Dispose
ENTRY_POINT: 02d6bf9c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Meta_WitAi_WitRequest_<PerformMainThreadCallbacks>d__112__System_IDisposable_Dispose(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  
  thunk_FUN_01b4f09c();
  FUN_03081994();
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30))();
  if (unaff_x21 == 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01ae9e74();
    }
    unaff_x21 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
    if (unaff_x21 == 0) {
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      lVar1 = *(long *)(lVar2 + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
        lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      }
      lVar2 = *(long *)(lVar2 + 0x38);
      uVar3 = **(undefined8 **)(lVar1 + 0xb8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74(lVar2);
      }
      unaff_x21 = thunk_FUN_01afaadc(lVar2);
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      (*(code *)**(undefined8 **)(lVar1 + 0x58))(unaff_x21,uVar3,*(undefined8 *)(lVar1 + 0x50));
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      lVar1 = *(long *)(lVar2 + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
        lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      }
      *(long *)(*(long *)(lVar1 + 0xb8) + 8) = unaff_x21;
      lVar1 = *(long *)(lVar2 + 0x48);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ae9e74();
      }
      thunk_FUN_01b4f09c(*(long *)(lVar1 + 0xb8) + 8,unaff_x21);
    }
  }
  *(long *)(unaff_x19 + 0x20) = unaff_x21;
  thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x20),unaff_x21);
  return;
}


