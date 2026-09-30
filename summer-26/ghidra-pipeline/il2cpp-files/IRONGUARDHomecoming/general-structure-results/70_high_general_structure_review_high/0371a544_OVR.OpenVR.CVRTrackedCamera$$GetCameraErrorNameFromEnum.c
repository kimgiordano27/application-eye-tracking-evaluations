/*
FUNCTION_NAME: OVR.OpenVR.CVRTrackedCamera$$GetCameraErrorNameFromEnum
ENTRY_POINT: 0371a544
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void OVR_OpenVR_CVRTrackedCamera__GetCameraErrorNameFromEnum(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 in_w8;
  long lVar5;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x14b) = in_w8;
  puVar4 = Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<ProcessStringResponse>b__1__;
  puVar3 = Method_Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass12_0_<Add>b__0__;
  puVar2 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if ((unaff_x20 & 1) != 0) {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ea2c(*(undefined8 *)puVar4,0);
    lVar5 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    }
    return;
  }
  lVar5 = **(long **)(*(long *)
                       Method_Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass12_0_<Add>b__0__
                     + 0xb8);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
  }
  cVar1 = *(char *)(unaff_x19 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (cVar1 == '\0') {
    FUN_0403ed64(*(undefined8 *)
                  Method_Meta_WitAi_Data_Entities_WitDynamicEntities_<>c__DisplayClass15_0_<RemoveKeyword>b__0__
                 ,0);
    return;
  }
  FUN_0403ed64(*(undefined8 *)
                Method_Meta_WitAi_WitRequest_<>c__DisplayClass99_0_<ProcessStringResponse>b__0__,0);
  if (*(int *)(*(long *)Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_04039cc4(0);
  return;
}


