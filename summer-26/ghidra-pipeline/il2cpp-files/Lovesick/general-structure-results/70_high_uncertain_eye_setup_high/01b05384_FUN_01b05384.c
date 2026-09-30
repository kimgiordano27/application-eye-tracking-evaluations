/*
FUNCTION_NAME: FUN_01b05384
ENTRY_POINT: 01b05384
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_01b05384(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_28;
  
  puVar1 = System_Data_DataColumnCollection_TypeInfo;
  if ((DAT_0377d20b & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Join>_Add__);
    thunk_FUN_00d48444(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                      );
    thunk_FUN_00d48444(DigitalOpus_MB_Core_TextureBlender___TypeInfo);
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13849);
    thunk_FUN_00d48444(StringLiteral_1024);
    DAT_0377d20b = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar1;
  }
  if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x1b8) == 0) {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)DigitalOpus_MB_Core_TextureBlender___TypeInfo);
    if (lVar5 == 0) goto LAB_01b0551c;
    FUN_01320e50(lVar5,*(undefined8 *)Method_System_Collections_Generic_List<Join>_Add__);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar1;
    }
    *(long *)(*(long *)(lVar4 + 0xb8) + 0x1b8) = lVar5;
  }
  puVar2 = StringLiteral_1024;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = StringLiteral_13849;
  uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x1b8);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  FUN_011475dc(uVar6,*(undefined8 *)puVar3);
  lVar5 = *(long *)puVar1;
  lVar4 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x1b8);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) < 1) {
      local_28 = 0;
    }
    else {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
        lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1b8);
        if (lVar4 == 0) goto LAB_01b0551c;
      }
      FUN_0132138c(lVar4,0,&local_28,
                   *(undefined8 *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                  );
    }
    return local_28;
  }
LAB_01b0551c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


