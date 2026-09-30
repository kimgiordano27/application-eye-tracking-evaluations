/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 04d57600
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d576cc) */

void System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose
               (code *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,long param_5
               )

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  long unaff_x20;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    (*param_1)(param_2,param_3,unaff_x20,param_5);
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88))();
    if ((uVar1 & 1) == 0) {
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      lVar6 = *(long *)(lVar5 + 0x30);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02eea768();
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      }
      FUN_02f08988(lVar6,*(undefined8 *)(lVar5 + 0x90),*(undefined8 *)(unaff_x29 + -0x20));
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    uVar2 = *puVar3;
    *(void **)(unaff_x29 + -0x10) = unaff_x25;
    (*(code *)puVar3[2])(uVar2);
    memcpy(unaff_x26,unaff_x25,unaff_x22);
    lVar6 = *unaff_x27;
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x23;
    (*(code *)puVar3[2])(uVar2);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar3 = unaff_x23;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x60) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x23;
    }
    puVar4 = *(undefined8 **)(lVar5 + 0x68);
    uVar2 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar3;
    (*(code *)puVar4[2])(uVar2,puVar4,lVar6,unaff_x29 + -0x10);
    unaff_x20 = *unaff_x28;
    puVar3 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x10) = unaff_x24;
    (*(code *)puVar3[2])(uVar2);
    if (unaff_x20 == 0) break;
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar3 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x78) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x24;
    }
    param_3 = *(undefined8 **)(lVar6 + 0x80);
    param_2 = *param_3;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar3;
    param_1 = (code *)param_3[2];
    param_5 = unaff_x29 + -0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


