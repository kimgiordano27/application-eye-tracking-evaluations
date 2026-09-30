/*
FUNCTION_NAME: OVRPlugin$$get_useIPDInPositionTracking
ENTRY_POINT: 02ca9590
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_useIPDInPositionTracking(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *this;
  int iVar5;
  long unaff_x29;
  float fVar6;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  byte bStack0000000000000047;
  
  if ((param_1 & 1) != 0) {
    *(undefined4 *)(unaff_x29 + -0x24) = 0;
    while( true ) {
      iVar1 = *(int *)(unaff_x29 + -0x24);
      pvVar4 = (void *)OVRLipSyncContextBase_get_Frame_mD56E93629948BFC610036BEBC7734A9E7BF33615_inline
                                 (*(OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C
                                    **)(unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar4);
      pvVar4 = *(void **)((long)pvVar4 + 0x18);
      NullCheck(pvVar4);
      iVar5 = (int)*(undefined8 *)((long)pvVar4 + 0x18);
      param_1 = (ulong)(uint)(iVar1 - iVar5);
      if (iVar5 <= iVar1) break;
      *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x18);
      *(undefined4 *)(unaff_x29 + -0x9c) = *(undefined4 *)(unaff_x29 + -0x24);
      *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(unaff_x29 + -0x9c);
      Il2CppFakeBox<int>::Il2CppFakeBox
                ((Il2CppFakeBox<int> *)(unaff_x29 + -0xb8),
                 *(Il2CppClass **)
                  Method_InitGame_<CargarEscenaSinCamaraCompartida2>d__116_System_Collections_IEnumerator_Reset__
                 ,(int *)(unaff_x29 + -0x2c));
      uVar3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741
                        ((Il2CppFakeBox<int> *)(unaff_x29 + -0xb8));
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar3;
      uVar3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                        (*(undefined8 *)(unaff_x29 + -0x98),*(undefined8 *)(unaff_x29 + -0xc0),0);
      *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
      uVar3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                        (*(undefined8 *)(unaff_x29 + -0x18),
                         *(undefined8 *)
                          Method_System_Collections_Generic_HashSet_Enumerator<IDebugDisplaySettingsData>_Dispose__
                         ,0);
      *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
      pvVar4 = (void *)OVRLipSyncContextBase_get_Frame_mD56E93629948BFC610036BEBC7734A9E7BF33615_inline
                                 (*(OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C
                                    **)(unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pvVar4);
      this = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)((long)pvVar4 + 0x18);
      iVar1 = *(int *)(unaff_x29 + -0x24);
      NullCheck(this);
      fVar6 = (float)SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::GetAt(this,(long)iVar1)
      ;
      fVar6 = (float)il2cpp_codegen_multiply<float,float>(50.0,fVar6);
      iVar1 = il2cpp_codegen_cast_double_to_int<int>((double)fVar6);
      *(int *)(unaff_x29 + -0x28) = iVar1;
      *(undefined4 *)(unaff_x29 + -0x30) = 0;
      while (*(int *)(unaff_x29 + -0x30) < *(int *)(unaff_x29 + -0x28)) {
        uVar3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                          (*(undefined8 *)(unaff_x29 + -0x18),*in_stack_00000030,0);
        *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
        uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x30),1);
        *(undefined4 *)(unaff_x29 + -0x30) = uVar2;
      }
      uVar3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                        (*(undefined8 *)(unaff_x29 + -0x18),*in_stack_00000020,0);
      *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
      uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x24),1);
      *(undefined4 *)(unaff_x29 + -0x24) = uVar2;
    }
  }
  OVRLipSyncDebugConsole_Clear_m10890ABBC562F45B35035DD7B5A58BA009DFF433(param_1);
  bStack0000000000000047 =
       String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                 (*(undefined8 *)(unaff_x29 + -0x18),*in_stack_00000028,0);
  bStack0000000000000047 = bStack0000000000000047 & 1;
  if (bStack0000000000000047 != 0) {
    OVRLipSyncDebugConsole_Log_m2353FB6DB33D2796707D1890C28EB208F93CF1D5
              (*(undefined8 *)(unaff_x29 + -0x18),0);
  }
  return;
}


