/*
FUNCTION_NAME: OVRPlugin$$EnqueueSetupLayer
ENTRY_POINT: 02cad3d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueSetupLayer(void)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  Il2CppObject *pIVar5;
  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *this;
  void *pvVar6;
  undefined4 in_w8;
  long unaff_x29;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack0000000000000010;
  Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *pRStack0000000000000018;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  
  while( true ) {
    *(undefined4 *)(unaff_x29 + -100) = in_w8;
    pRStack0000000000000018 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    fStack0000000000000010 = *(float *)(unaff_x29 + -0x40);
    fVar7 = (float)il2cpp_codegen_add<float,float>
                             (*(float *)(unaff_x29 + -0x44),*(float *)(unaff_x29 + -0x48));
    fVar7 = (float)il2cpp_codegen_multiply<float,float>(fVar7,(float)*(int *)(unaff_x29 + -0x4c));
    fVar7 = (float)il2cpp_codegen_add<float,float>(fStack0000000000000010,fVar7);
    fVar8 = *(float *)(unaff_x29 + -0x50);
    fVar9 = (float)il2cpp_codegen_add<float,float>
                             (*(float *)(unaff_x29 + -0x54),*(float *)(unaff_x29 + -0x58));
    fVar9 = (float)il2cpp_codegen_multiply<float,float>(fVar9,(float)*(int *)(unaff_x29 + -0x5c));
    fVar8 = (float)il2cpp_codegen_add<float,float>(fVar8,fVar9);
    Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23_inline
              (pRStack0000000000000018,fVar7,fVar8,*(float *)(unaff_x29 + -0x60),
               *(float *)(unaff_x29 + -100),(MethodInfo *)0x0);
    uVar4 = Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D(0);
    *(undefined8 *)(unaff_x29 + -0x80) = uVar4;
    *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x2c);
    NullCheck(*(void **)(unaff_x29 + -0x80));
    pIVar5 = (Il2CppObject *)
             StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::GetAt
                       (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)
                         (unaff_x29 + -0x80),(long)*(int *)(unaff_x29 + -0x84));
    NullCheck(pIVar5);
    uVar4 = VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar5);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<string,_OVRGLTFInputNode>__ctor__);
    uStack0000000000000064 = (undefined4)(*(ulong *)(unaff_x29 + -0x78) >> 0x20);
    uStack0000000000000068 = (undefined4)*(undefined8 *)(unaff_x29 + -0x70);
    uStack000000000000006c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x70) >> 0x20);
    bVar2 = GUI_Button_m26D18B144D3116398B9E9BECB0C4014F57DBE44B
                      (*(ulong *)(unaff_x29 + -0x78) & 0xffffffff,uStack0000000000000064,
                       uStack0000000000000068,uStack000000000000006c,uVar4,0);
    if ((bVar2 & 1) != 0) {
      OVRLipSyncMicInput_StopMicrophone_mE5816D8BEC13511C7F2F0DDA1016A3B7E3229F8C
                (*(undefined8 *)(unaff_x29 + -8));
      this = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 *)
             Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D(0);
      iVar1 = *(int *)(unaff_x29 + -0x2c);
      NullCheck(this);
      pIVar5 = (Il2CppObject *)
               StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::GetAt(this,(long)iVar1);
      NullCheck(pIVar5);
      pvVar6 = (void *)VirtualFuncInvoker0<String_t*>::Invoke(3,pIVar5);
      *(void **)(*(long *)(unaff_x29 + -8) + 0x40) = pvVar6;
      Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x40),pvVar6);
      *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x48) = 1;
      OVRLipSyncMicInput_GetMicCaps_m100A78F2F3EEBAC5B8FA3C7E157CA9CCFA23C287
                (*(undefined8 *)(unaff_x29 + -8),0);
      OVRLipSyncMicInput_StartMicrophone_mD04A664F502023B643FD67A1A9A7A33BFB6CF868
                (*(undefined8 *)(unaff_x29 + -8),0);
    }
    uVar3 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x2c),1);
    *(undefined4 *)(unaff_x29 + -0x2c) = uVar3;
    iVar1 = *(int *)(unaff_x29 + -0x2c);
    pvVar6 = (void *)Microphone_get_devices_mC2821E200C36C599DDC37927DEC9EA725240812D(0);
    NullCheck(pvVar6);
    if ((int)*(undefined8 *)((long)pvVar6 + 0x18) <= iVar1) break;
    *(undefined4 *)(unaff_x29 + -0x40) = *(undefined4 *)(unaff_x29 + -0xc);
    *(undefined4 *)(unaff_x29 + -0x44) = *(undefined4 *)(unaff_x29 + -0x14);
    *(undefined4 *)(unaff_x29 + -0x48) = *(undefined4 *)(unaff_x29 + -0x20);
    *(undefined4 *)(unaff_x29 + -0x4c) = *(undefined4 *)(unaff_x29 + -0x2c);
    *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x10);
    *(undefined4 *)(unaff_x29 + -0x54) = *(undefined4 *)(unaff_x29 + -0x18);
    *(undefined4 *)(unaff_x29 + -0x58) = *(undefined4 *)(unaff_x29 + -0x1c);
    *(undefined4 *)(unaff_x29 + -0x5c) = *(undefined4 *)(unaff_x29 + -0x2c);
    *(undefined4 *)(unaff_x29 + -0x60) = *(undefined4 *)(unaff_x29 + -0x14);
    in_w8 = *(undefined4 *)(unaff_x29 + -0x18);
  }
  return;
}


