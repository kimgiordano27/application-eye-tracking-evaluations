/*
FUNCTION_NAME: FUN_0185dde0
ENTRY_POINT: 0185dde0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3
*/


undefined1  [16]
FUN_0185dde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  puVar2 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawner_CustomPrefabSelection__;
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = param_1;
  uStack_58 = param_2;
  if ((DAT_03779674 & 1) == 0) {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Count__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<byte>_GetHashCode__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawner_CustomPrefabSelection__);
    DAT_03779674 = 1;
  }
  lVar5 = *(long *)(*(long *)puVar2 + 0x20);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  pcVar6 = (char *)thunk_FUN_00d32ed4(&local_60,*(undefined8 *)(lVar5 + 0x80));
  local_50 = local_70;
  uStack_48 = uStack_68;
  if (*pcVar6 != '\0') {
    lVar5 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    pcVar6 = (char *)thunk_FUN_00d32ed4(&local_70,*(undefined8 *)(lVar5 + 0x80));
    puVar4 = Method_Unity_Collections_NativeArray<byte>_GetHashCode__;
    puVar3 = 
    Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Count__
    ;
    puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
    local_50 = local_60;
    uStack_48 = uStack_58;
    if (*pcVar6 != '\0') {
      uVar7 = FUN_00bec1a8(&local_60,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Count__
                          );
      uVar8 = FUN_00bec1a8(&local_70,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      local_38 = FUN_01772420(uVar7,uVar8,0);
      local_50 = 0;
      uStack_48 = 0;
      FUN_01347274(&local_50,&local_38,*(undefined8 *)puVar4);
    }
  }
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}


