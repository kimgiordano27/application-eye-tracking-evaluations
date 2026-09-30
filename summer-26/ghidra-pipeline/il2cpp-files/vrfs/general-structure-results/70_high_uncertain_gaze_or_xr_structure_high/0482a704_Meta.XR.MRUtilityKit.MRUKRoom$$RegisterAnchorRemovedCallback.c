/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$RegisterAnchorRemovedCallback
ENTRY_POINT: 0482a704
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__RegisterAnchorRemovedCallback(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0x920));
  thunk_FUN_0159f088(PTR_DAT_06d8f7a8);
  thunk_FUN_0159f088(PTR_DAT_06da4560);
  thunk_FUN_0159f088(PTR_DAT_06e0bb90);
  thunk_FUN_0159f088(PTR_DAT_06d96418);
  *(undefined1 *)(unaff_x20 + 0x6e3) = 1;
  lVar2 = thunk_FUN_015d056c(*unaff_x21);
  puVar1 = PTR_DAT_06e12398;
  if (lVar2 != 0) {
    FUN_043c1c48(lVar2,0x10,*(undefined8 *)PTR_DAT_06e0bed0);
    *unaff_x19 = lVar2;
    thunk_FUN_01656ef8();
    lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_06de0920;
    if (lVar2 != 0) {
      System_Collections_ObjectModel_ReadOnlyCollection<UnitySynchronizationContext_WorkRequest>__CopyTo
                (lVar2,0x10,*(undefined8 *)PTR_DAT_06dc8c78);
      unaff_x19[1] = lVar2;
      thunk_FUN_01656ef8(unaff_x19 + 1,lVar2);
      lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_06da4560;
      if (lVar2 != 0) {
        FUN_0281ef70(lVar2,0x10,*(undefined8 *)PTR_DAT_06da3c88);
        unaff_x19[2] = lVar2;
        thunk_FUN_01656ef8(unaff_x19 + 2,lVar2);
        lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_06d8f7a8;
        if (lVar2 != 0) {
          FUN_043c1c48(lVar2,0x10,*(undefined8 *)PTR_DAT_06de2c80);
          unaff_x19[3] = lVar2;
          thunk_FUN_01656ef8(unaff_x19 + 3,lVar2);
          lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
          puVar1 = PTR_DAT_06d96418;
          if (lVar2 != 0) {
            FUN_0281c204(lVar2,0x10,*(undefined8 *)PTR_DAT_06e02128);
            unaff_x19[4] = lVar2;
            thunk_FUN_01656ef8(unaff_x19 + 4,lVar2);
            lVar2 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
            if (lVar2 != 0) {
              FUN_043c1c48(lVar2,0x10,*(undefined8 *)PTR_DAT_06dd04b0);
              unaff_x19[5] = lVar2;
              thunk_FUN_01656ef8(unaff_x19 + 5,lVar2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


