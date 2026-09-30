/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 01b8e2a0
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_Array__InternalArray__ICollection_Remove<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x23;
  
  thunk_FUN_01843fdc();
  lVar2 = FUN_02bddb5c();
  puVar1 = PTR_DAT_037f8230;
  if (unaff_x20 == lVar2) {
    lVar2 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
    if (*(long *)(lVar2 + 0x68) == 0) {
      uVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f81a0);
      FUN_019bf2a8(uVar5,0);
      puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
      *puVar3 = uVar5;
      thunk_FUN_0188fd20(puVar3,uVar5);
      lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    puVar3 = (undefined8 *)(lVar2 + 0x68);
  }
  else {
    uVar5 = *(undefined8 *)PTR_DAT_037f94a8;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar2 = FUN_02bddb5c(uVar5,0);
    puVar1 = PTR_DAT_037f8230;
    if (unaff_x20 == lVar2) {
      lVar2 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
      if (*(long *)(lVar2 + 0x78) == 0) {
        uVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f94a0);
        FUN_019b3af8(uVar5,0);
        puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78);
        *puVar3 = uVar5;
        thunk_FUN_0188fd20(puVar3,uVar5);
        lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      puVar3 = (undefined8 *)(lVar2 + 0x78);
    }
    else {
      uVar5 = *(undefined8 *)PTR_DAT_037f8828;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar2 = FUN_02bddb5c(uVar5,0);
      puVar1 = PTR_DAT_037f8230;
      if (unaff_x20 == lVar2) {
        lVar2 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
        if (*(long *)(lVar2 + 0x20) == 0) {
          uVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f94d8);
          FUN_019b645c(uVar5,0);
          puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
          *puVar3 = uVar5;
          thunk_FUN_0188fd20(puVar3,uVar5);
          lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
        }
        puVar3 = (undefined8 *)(lVar2 + 0x20);
      }
      else {
        uVar5 = *(undefined8 *)PTR_DAT_037f8be8;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        lVar2 = FUN_02bddb5c(uVar5,0);
        puVar1 = PTR_DAT_037f8230;
        if (unaff_x20 == lVar2) {
          lVar2 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
          if (*(long *)(lVar2 + 0x28) == 0) {
            uVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f9510);
            FUN_019b6778(uVar5,0);
            puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
            *puVar3 = uVar5;
            thunk_FUN_0188fd20(puVar3,uVar5);
            lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
          }
          puVar3 = (undefined8 *)(lVar2 + 0x28);
        }
        else {
          uVar5 = *(undefined8 *)PTR_DAT_037f8808;
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar2 = FUN_02bddb5c(uVar5,0);
          puVar1 = PTR_DAT_037f8230;
          if (unaff_x20 != lVar2) {
            return (long *)0x0;
          }
          lVar2 = *(long *)(*(long *)PTR_DAT_037f8230 + 0xb8);
          if (*(long *)(lVar2 + 8) == 0) {
            uVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f94c0);
            FUN_019b610c(uVar5,0);
            puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *puVar3 = uVar5;
            thunk_FUN_0188fd20(puVar3,uVar5);
            lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
          }
          puVar3 = (undefined8 *)(lVar2 + 8);
        }
      }
    }
  }
  plVar4 = (long *)*puVar3;
  if (plVar4 != (long *)0x0) {
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(byte *)(lVar2 + 0x130) <= *(byte *)(*plVar4 + 0x130)) {
      if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2) {
        return plVar4;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


