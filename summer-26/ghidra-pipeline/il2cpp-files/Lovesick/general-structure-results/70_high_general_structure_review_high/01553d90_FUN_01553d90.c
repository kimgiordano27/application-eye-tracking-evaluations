/*
FUNCTION_NAME: FUN_01553d90
ENTRY_POINT: 01553d90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_01553d90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar1 = Method_System_Collections_Generic_List<IColliderWorldImpl>_Add__;
  if ((DAT_03777b61 & 1) == 0) {
    thunk_FUN_00d48444(Obi_ObiRope_ObiRopeTornEventArgs_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<XRTextureDescriptor>_get_IsCreated__);
    thunk_FUN_00d48444(PTR_DAT_033ee3c0);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VRequest_<DecodeText>d__116>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IColliderWorldImpl>_Add__);
    thunk_FUN_00d48444(PTR_DAT_033f1230);
    DAT_03777b61 = 1;
  }
  lVar3 = FUN_0268fd4c(param_1,0);
  *(long *)(param_1 + 0x58) = lVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_0153b754(0);
  if ((lVar4 != 0) && (lVar3 != 0)) {
    FUN_0268aca4(lVar3,*(undefined4 *)(lVar4 + 0x44),0);
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar3 = FUN_010e5800(*(long *)(param_1 + 0x58),
                           *(undefined8 *)
                            Method_Unity_Collections_NativeArray<XRTextureDescriptor>_get_IsCreated__
                          );
      *(long *)(param_1 + 0x50) = lVar3;
      if (lVar3 != 0) {
        FUN_02859c00(lVar3,1,0);
        if (*(long *)(param_1 + 0x50) != 0) {
          FUN_02859c80(*(long *)(param_1 + 0x50),31000,0);
          if ((*(long *)(param_1 + 0x58) != 0) &&
             (lVar3 = FUN_010e5800(*(long *)(param_1 + 0x58),
                                   *(undefined8 *)Obi_ObiRope_ObiRopeTornEventArgs_TypeInfo),
             lVar3 != 0)) {
            FUN_0285a7d8(lVar3,0,0);
            FUN_0285a758(lVar3,0,0);
            puVar2 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<VRequest_<DecodeText>d__116>__
            ;
            puVar1 = PTR_DAT_033f1230;
            if (*(long *)(param_1 + 0x58) != 0) {
              plVar5 = (long *)FUN_010e5800(*(long *)(param_1 + 0x58),
                                            *(undefined8 *)PTR_DAT_033ee3c0);
              uVar6 = FUN_0113a140(*(undefined8 *)puVar1,*(undefined8 *)puVar2);
              if (plVar5 != (long *)0x0) {
                FUN_0286fa2c(plVar5,uVar6,0);
                lVar3 = FUN_02738624(plVar5,0);
                if (lVar3 != 0) {
                  FUN_026a1bd8(0x41a00000,0x41a00000,lVar3,0);
                  (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
                  uVar6 = FUN_0268fd10(param_1,0);
                  *(undefined8 *)(param_1 + 0x60) = uVar6;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


