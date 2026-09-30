/*
FUNCTION_NAME: Unity.XR.CoreUtils.XROrigin$$OnDestroy
ENTRY_POINT: 05d75c90
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 158
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void Unity_XR_CoreUtils_XROrigin__OnDestroy(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar5;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  *(undefined8 *)(param_1 + 0x20) = unaff_x21;
  thunk_FUN_02dd37b4();
  lVar2 = FUN_05015c2c(*unaff_x23,0);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0)) {
LAB_05d75f54:
    uVar5 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar5,0);
  }
  puVar1 = Method_System_Nullable<OVRInput_Controller>_GetValueOrDefault__;
  if (1 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[5] = lVar2;
    thunk_FUN_02dd37b4(unaff_x20 + 5,lVar2);
    lVar2 = FUN_05015c2c(*(undefined8 *)puVar1,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0))
    goto LAB_05d75f54;
    puVar1 = Method_System_Nullable<OVRInput_Controller>__ctor__;
    if (2 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[6] = lVar2;
      thunk_FUN_02dd37b4(unaff_x20 + 6,lVar2);
      lVar2 = FUN_05015c2c(*(undefined8 *)puVar1,0);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0))
      goto LAB_05d75f54;
      puVar1 = PTR_DAT_06774e90;
      if (3 < *(uint *)(unaff_x20 + 3)) {
        unaff_x20[7] = lVar2;
        thunk_FUN_02dd37b4(unaff_x20 + 7,lVar2);
        *(long **)(unaff_x19 + 0x10) = unaff_x20;
        thunk_FUN_02dd37b4();
        plVar4 = (long *)FUN_02d60934(*unaff_x22,3);
        lVar2 = FUN_05015c2c(*(undefined8 *)puVar1,0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
        goto LAB_05d75f54;
        puVar1 = Method_System_Nullable<OVRPlugin_Posef>__ctor__;
        if ((int)plVar4[3] != 0) {
          plVar4[4] = lVar2;
          thunk_FUN_02dd37b4(plVar4 + 4,lVar2);
          lVar2 = FUN_05015c2c(*(undefined8 *)puVar1,0);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
          goto LAB_05d75f54;
          puVar1 = 
          Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_GetValueOrDefault__;
          if (1 < *(uint *)(plVar4 + 3)) {
            plVar4[5] = lVar2;
            thunk_FUN_02dd37b4(plVar4 + 5,lVar2);
            lVar2 = FUN_05015c2c(*(undefined8 *)puVar1,0);
            if ((lVar2 != 0) &&
               (lVar3 = thunk_FUN_02d9d438(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
            goto LAB_05d75f54;
            puVar1 = Method_System_Nullable<OVRPlugin_BodyState>__ctor__;
            if (2 < *(uint *)(plVar4 + 3)) {
              plVar4[6] = lVar2;
              thunk_FUN_02dd37b4(plVar4 + 6,lVar2);
              *(long *)(unaff_x19 + 0x18) = (long)plVar4;
              thunk_FUN_02dd37b4((long *)(unaff_x19 + 0x18),plVar4);
              *(undefined4 *)(unaff_x19 + 0x20) = 2;
              lVar2 = *(long *)puVar1;
              if (*(int *)(lVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar2 = *(long *)puVar1;
              }
              lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
              if (lVar3 == 0) {
                if (*(int *)(lVar2 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar2 = *(long *)puVar1;
                }
                uVar5 = **(undefined8 **)(lVar2 + 0xb8);
                lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_get_HasValue__
                                          );
                FUN_04d6c3b8(lVar3,uVar5,
                             *(undefined8 *)
                              Method_System_Nullable<OVRInput_Controller>_get_HasValue__,0);
                plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                *plVar4 = lVar3;
                thunk_FUN_02dd37b4(plVar4,lVar3);
              }
              *(long *)(unaff_x19 + 0x28) = lVar3;
              thunk_FUN_02dd37b4((long *)(unaff_x19 + 0x28),lVar3);
              *(undefined1 *)(unaff_x19 + 0x30) = 1;
              *(undefined1 *)(unaff_x19 + 0x32) = 1;
              FUN_0504920c();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


