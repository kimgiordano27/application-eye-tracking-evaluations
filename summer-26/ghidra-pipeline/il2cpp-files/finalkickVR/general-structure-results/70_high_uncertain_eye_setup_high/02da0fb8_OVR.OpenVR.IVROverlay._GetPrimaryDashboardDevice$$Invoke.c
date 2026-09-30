/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._GetPrimaryDashboardDevice$$Invoke
ENTRY_POINT: 02da0fb8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_IVROverlay__GetPrimaryDashboardDevice__Invoke(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x29;
  undefined4 uStack0000000000000004;
  long *in_stack_00000028;
  undefined8 *in_stack_00000030;
  int iStack000000000000003c;
  undefined4 uStack000000000000004c;
  undefined4 uStack000000000000005c;
  undefined4 uStack000000000000006c;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  OVRPlugin_CreateInsightTriangleMesh_m180C5CE9209FC4295F5F8895FA6281F3F3AF8375::
  s_Il2CppMethodInitialized = 1;
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  in_stack_00000028[0xb] = 0;
  in_stack_00000028[10] = 0;
  in_stack_00000028[9] = 0;
  in_stack_00000028[8] = 0;
  in_stack_00000028[7] = in_stack_00000028[0xe];
  *(undefined8 *)in_stack_00000028[7] = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  lVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  in_stack_00000028[6] = lVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
  plVar3 = (long *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
  in_stack_00000028[5] = *plVar3;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (in_stack_00000028[6],in_stack_00000028[5],0);
  *(byte *)(unaff_x29 + -0x69) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x69) & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    in_stack_00000028[3] = in_stack_00000028[0x10];
    if ((in_stack_00000028[3] != 0) &&
       (in_stack_00000028[2] = in_stack_00000028[0xf], in_stack_00000028[2] != 0)) {
      in_stack_00000028[1] = in_stack_00000028[0x10];
      NullCheck((void *)in_stack_00000028[1]);
      if (*(long *)(in_stack_00000028[1] + 0x18) != 0) {
        *in_stack_00000028 = in_stack_00000028[0xf];
        NullCheck((void *)*in_stack_00000028);
        if (*(long *)(*in_stack_00000028 + 0x18) != 0) {
          *(long *)(unaff_x29 + -0x98) = in_stack_00000028[0x10];
          NullCheck(*(void **)(unaff_x29 + -0x98));
          *(int *)(unaff_x29 + -0x2c) = (int)*(undefined8 *)(*(long *)(unaff_x29 + -0x98) + 0x18);
          *(long *)(unaff_x29 + -0xa0) = in_stack_00000028[0xf];
          NullCheck(*(void **)(unaff_x29 + -0xa0));
          uStack0000000000000004 = 3;
          *(int *)(unaff_x29 + -0x30) =
               (int)*(undefined8 *)(*(long *)(unaff_x29 + -0xa0) + 0x18) / 3;
          lVar2 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(in_stack_00000028[0x10]);
          in_stack_00000028[0xb] = lVar2;
          lVar2 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6
                            (unaff_x29 + -0x38,0);
          in_stack_00000028[10] = lVar2;
          lVar2 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC
                            (in_stack_00000028[0xf],uStack0000000000000004,0);
          in_stack_00000028[9] = lVar2;
          lVar2 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6
                            (unaff_x29 + -0x48,0);
          in_stack_00000028[8] = lVar2;
          uStack000000000000006c = *(undefined4 *)(unaff_x29 + -8);
          lVar4 = in_stack_00000028[10];
          uStack000000000000005c = *(undefined4 *)(unaff_x29 + -0x2c);
          lVar5 = in_stack_00000028[8];
          uStack000000000000004c = *(undefined4 *)(unaff_x29 + -0x30);
          lVar2 = in_stack_00000028[0xe];
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
          iStack000000000000003c =
               OVRP_1_63_0_ovrp_CreateInsightTriangleMesh_m06F6D38A3C5F3AD5DEFF2116535BD4B41FF27404
                         (uStack000000000000006c,lVar4,uStack000000000000005c,lVar5,
                          uStack000000000000004c,lVar2,0);
          GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(unaff_x29 + -0x48,0);
          GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(unaff_x29 + -0x38,0);
          if (iStack000000000000003c == 0) {
            *(undefined1 *)(unaff_x29 + -1) = 1;
          }
          else {
            *(undefined1 *)(unaff_x29 + -1) = 0;
          }
          goto LAB_02da129c;
        }
      }
    }
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
LAB_02da129c:
  return *(byte *)(unaff_x29 + -1) & 1;
}


