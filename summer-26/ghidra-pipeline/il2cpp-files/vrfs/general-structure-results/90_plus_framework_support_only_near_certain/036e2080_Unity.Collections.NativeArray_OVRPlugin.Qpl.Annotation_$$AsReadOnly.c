/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$AsReadOnly
ENTRY_POINT: 036e2080
PROGRAM: vrfs-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsReadOnly(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  
  *(undefined8 *)(param_1 + 0xb8) = unaff_x27;
  thunk_FUN_01656ef8();
  FUN_03b41ef0();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x26;
  thunk_FUN_01656ef8();
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x25;
  thunk_FUN_01656ef8();
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x24;
  thunk_FUN_01656ef8();
  *(undefined8 *)(unaff_x19 + 0xa0) = unaff_x23;
  thunk_FUN_01656ef8();
  *(undefined8 *)(unaff_x19 + 0xb0) = unaff_x22;
  thunk_FUN_01656ef8();
  lVar2 = thunk_FUN_015d056c(*unaff_x28);
  puVar1 = PTR_DAT_06e57380;
  if (lVar2 != 0) {
    FUN_04aa66f0(lVar2,10,0);
    *(long *)(unaff_x19 + 0x48) = lVar2;
    thunk_FUN_01656ef8((long *)(unaff_x19 + 0x48),lVar2);
    lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_06ded4f8;
    if (lVar2 != 0) {
      FUN_02d76b34(lVar2,0);
      *(long *)(unaff_x19 + 0x68) = lVar2;
      thunk_FUN_01656ef8((long *)(unaff_x19 + 0x68),lVar2);
      lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
      if (lVar2 != 0) {
        FUN_02d76b34(lVar2,0);
        *(long *)(unaff_x19 + 0x78) = lVar2;
        thunk_FUN_01656ef8((long *)(unaff_x19 + 0x78),lVar2);
        lVar2 = thunk_FUN_015d056c(*unaff_x28);
        puVar1 = PTR_DAT_06e277f8;
        if (lVar2 != 0) {
          FUN_04aa66f0(lVar2,10,0);
          *(long *)(unaff_x19 + 0x50) = lVar2;
          thunk_FUN_01656ef8((long *)(unaff_x19 + 0x50),lVar2);
          lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_06de8510;
          if (lVar2 != 0) {
            FUN_02d76b34(lVar2,0);
            *(long *)(unaff_x19 + 0x70) = lVar2;
            thunk_FUN_01656ef8((long *)(unaff_x19 + 0x70),lVar2);
            *(undefined8 *)(unaff_x19 + 0x90) = unaff_x21;
            thunk_FUN_01656ef8();
            *(undefined8 *)(unaff_x19 + 0x98) = unaff_x20;
            thunk_FUN_01656ef8();
            lVar2 = *(long *)puVar1;
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar2 = *(long *)puVar1;
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x68);
            if (lVar2 != 0) {
              if (*(int *)(lVar2 + 0x18) != 0) {
                *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(lVar2 + 0x20);
                thunk_FUN_01656ef8();
                uVar3 = FUN_04aa6c50(*(undefined8 *)(unaff_x19 + 0x20),0);
                *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
                thunk_FUN_01656ef8();
                uVar3 = FUN_01fb7e70(0);
                *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
                thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0xc0),uVar3);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


