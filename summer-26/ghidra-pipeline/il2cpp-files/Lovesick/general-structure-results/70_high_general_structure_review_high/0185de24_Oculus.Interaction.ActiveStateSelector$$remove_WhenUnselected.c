/*
FUNCTION_NAME: Oculus.Interaction.ActiveStateSelector$$remove_WhenUnselected
ENTRY_POINT: 0185de24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1
*/


undefined1  [16] Oculus_Interaction_ActiveStateSelector__remove_WhenUnselected(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<byte>_GetHashCode__);
  thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawner_CustomPrefabSelection__);
  *(undefined1 *)(unaff_x20 + 0x674) = 1;
  lVar4 = *(long *)(*unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  pcVar5 = (char *)thunk_FUN_00d32ed4(&stack0x00000010,*(undefined8 *)(lVar4 + 0x80));
  uVar6 = in_stack_00000000;
  uVar7 = in_stack_00000008;
  if (*pcVar5 != '\0') {
    lVar4 = *(long *)(*unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    pcVar5 = (char *)thunk_FUN_00d32ed4();
    puVar3 = Method_Unity_Collections_NativeArray<byte>_GetHashCode__;
    puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
    uVar6 = in_stack_00000010;
    uVar7 = in_stack_00000018;
    if (*pcVar5 != '\0') {
      uVar6 = FUN_00bec1a8(&stack0x00000010,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Count__
                          );
      uVar7 = FUN_00bec1a8();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00000038 = FUN_01772420(uVar6,uVar7,0);
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_01347274(&stack0x00000020,&stack0x00000038,*(undefined8 *)puVar3);
      uVar6 = in_stack_00000020;
      uVar7 = in_stack_00000028;
    }
  }
  in_stack_00000028 = uVar7;
  in_stack_00000020 = uVar6;
  auVar1._8_8_ = in_stack_00000028;
  auVar1._0_8_ = in_stack_00000020;
  return auVar1;
}


