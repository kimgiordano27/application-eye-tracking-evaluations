/*
FUNCTION_NAME: Virtence.OpenTypeCS.Cff$$<ParseCFFCharstring>g__StackShift|9_1
ENTRY_POINT: 02df12bc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Virtence_OpenTypeCS_Cff__<ParseCFFCharstring>g__StackShift_9_1(void)

{
  byte bVar1;
  undefined8 uVar2;
  Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D *pAVar3;
  void *pvVar4;
  long unaff_x29;
  MethodInfo *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  byte bStack000000000000003f;
  
  OVRManager_add_SceneCaptureComplete_m26AE5F4B81DDEA72B3466AC811BE62C3E70ECEF4
            (*(undefined8 *)(unaff_x29 + -0x18));
  uVar2 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline(in_stack_00000010)
  ;
  *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
  if (*(long *)(unaff_x29 + -0x20) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    uVar2 = OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                      ((MethodInfo *)0x0);
    *(undefined8 *)(unaff_x29 + -0x28) = uVar2;
    uVar2 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
                      );
    *(undefined8 *)(unaff_x29 + -0x30) = uVar2;
    Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
              (*(undefined8 *)(unaff_x29 + -0x30),0,
               *(undefined8 *)
                Field_<PrivateImplementationDetails>_494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046
              );
    NullCheck(*(void **)(unaff_x29 + -0x28));
    OVRDisplay_add_RecenteredPose_mEF2DBE487262A53AB138AAE3D51F6D9D272AD542
              (*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x30),0);
  }
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x80);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A
                    (*(undefined8 *)(unaff_x29 + -0x38),0);
  *(byte *)(unaff_x29 + -0x39) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x39) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    pvVar4 = (void *)Object_FindObjectOfType_TisOVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9_m1564DCD77DA806C8E84BE6808F00823EBCA88234
                               (*(MethodInfo **)
                                 Field_<PrivateImplementationDetails>_4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0
                               );
    *(void **)(*(long *)(unaff_x29 + -8) + 0x80) = pvVar4;
    Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x80),pvVar4);
  }
  uVar2 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x80);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  bStack000000000000003f = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar2,0);
  bStack000000000000003f = bStack000000000000003f & 1;
  if (bStack000000000000003f != 0) {
    pvVar4 = *(void **)(*(long *)(unaff_x29 + -8) + 0x80);
    pAVar3 = (Action_1_t10D7C827ADC73ED438E0CA8F04465BA6F2BAED7D *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_TerrainUtils_TerrainMap_<>c__DisplayClass3_0_<CreateFromPlacement>b__0__
                       );
    Action_1__ctor_mCF523C720DF70BEA3148133C85868568FA91276D
              (pAVar3,(Il2CppObject *)0x0,
               *(long *)
                Field_<PrivateImplementationDetails>_493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B
               ,(MethodInfo *)0x0);
    NullCheck(pvVar4);
    OVRCameraRig_add_TrackingSpaceChanged_mA8C5100131CA245983FC93B741C2B2CA72EDEA58(pvVar4,pAVar3,0)
    ;
  }
  return;
}


