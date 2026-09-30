/*
FUNCTION_NAME: FUN_05d75b68
ENTRY_POINT: 05d75b68
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 138
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_13;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_05d75b68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>__ctor__;
  puVar1 = PTR_DAT_0675f8d8;
  if ((DAT_06b82c86 & 1) == 0) {
    FUN_02d6084c(
                Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_GetValueOrDefault__
                );
    FUN_02d6084c(
                Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_get_HasValue__
                );
    FUN_02d6084c(PTR_DAT_06774e90);
    FUN_02d6084c(Method_System_Nullable<OVRInput_Controller>__ctor__);
    FUN_02d6084c(Method_System_Nullable<OVRInput_Controller>_GetValueOrDefault__);
    FUN_02d6084c(Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>__ctor__);
    FUN_02d6084c(PTR_DAT_0675f8d8);
    FUN_02d6084c(Method_System_Nullable<OVRInput_Controller>_get_HasValue__);
    FUN_02d6084c(Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
    FUN_02d6084c(Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    FUN_02d6084c(Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
    DAT_06b82c86 = 1;
  }
  plVar3 = (long *)FUN_02d60934(*(undefined8 *)puVar1,4);
  uVar6 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
  }
  lVar4 = FUN_05015c2c(uVar6,0);
  if (plVar3 == (long *)0x0) {
LAB_05d75f60:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_05d75f54:
    uVar6 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar6,0);
  }
  puVar2 = Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_02dd37b4(plVar3 + 4,lVar4);
    lVar4 = FUN_05015c2c(*(undefined8 *)puVar2,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_05d75f54;
    puVar2 = Method_System_Nullable<OVRInput_Controller>_GetValueOrDefault__;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_02dd37b4(plVar3 + 5,lVar4);
      lVar4 = FUN_05015c2c(*(undefined8 *)puVar2,0);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_05d75f54;
      puVar2 = Method_System_Nullable<OVRInput_Controller>__ctor__;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_02dd37b4(plVar3 + 6,lVar4);
        lVar4 = FUN_05015c2c(*(undefined8 *)puVar2,0);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_05d75f54;
        puVar2 = PTR_DAT_06774e90;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_02dd37b4(plVar3 + 7,lVar4);
          *(long *)(param_1 + 0x10) = (long)plVar3;
          thunk_FUN_02dd37b4((long *)(param_1 + 0x10),plVar3);
          plVar3 = (long *)FUN_02d60934(*(undefined8 *)puVar1,3);
          lVar4 = FUN_05015c2c(*(undefined8 *)puVar2,0);
          if (plVar3 == (long *)0x0) goto LAB_05d75f60;
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_05d75f54;
          puVar1 = Method_System_Nullable<OVRPlugin_Posef>__ctor__;
          if ((int)plVar3[3] != 0) {
            plVar3[4] = lVar4;
            thunk_FUN_02dd37b4(plVar3 + 4,lVar4);
            lVar4 = FUN_05015c2c(*(undefined8 *)puVar1,0);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_05d75f54;
            puVar1 = 
            Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_GetValueOrDefault__
            ;
            if (1 < *(uint *)(plVar3 + 3)) {
              plVar3[5] = lVar4;
              thunk_FUN_02dd37b4(plVar3 + 5,lVar4);
              lVar4 = FUN_05015c2c(*(undefined8 *)puVar1,0);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_05d75f54;
              puVar1 = Method_System_Nullable<OVRPlugin_BodyState>__ctor__;
              if (2 < *(uint *)(plVar3 + 3)) {
                plVar3[6] = lVar4;
                thunk_FUN_02dd37b4(plVar3 + 6,lVar4);
                *(long *)(param_1 + 0x18) = (long)plVar3;
                thunk_FUN_02dd37b4((long *)(param_1 + 0x18),plVar3);
                *(undefined4 *)(param_1 + 0x20) = 2;
                lVar4 = *(long *)puVar1;
                if (*(int *)(lVar4 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar4 = *(long *)puVar1;
                }
                lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
                if (lVar5 == 0) {
                  if (*(int *)(lVar4 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar4 = *(long *)puVar1;
                  }
                  uVar6 = **(undefined8 **)(lVar4 + 0xb8);
                  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_System_Nullable<JsonSerializerInternalReader_PropertyPresence>_get_HasValue__
                                            );
                  FUN_04d6c3b8(lVar5,uVar6,
                               *(undefined8 *)
                                Method_System_Nullable<OVRInput_Controller>_get_HasValue__,0);
                  plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                  *plVar3 = lVar5;
                  thunk_FUN_02dd37b4(plVar3,lVar5);
                }
                *(long *)(param_1 + 0x28) = lVar5;
                thunk_FUN_02dd37b4((long *)(param_1 + 0x28),lVar5);
                *(undefined1 *)(param_1 + 0x30) = 1;
                *(undefined1 *)(param_1 + 0x32) = 1;
                FUN_0504920c(param_1,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60af0();
}


