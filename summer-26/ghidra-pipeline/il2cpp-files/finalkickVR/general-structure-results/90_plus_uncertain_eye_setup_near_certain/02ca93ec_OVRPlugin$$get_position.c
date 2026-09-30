/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 02ca93ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position(ulong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  uint uVar5;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *this;
  int iVar6;
  long unaff_x29;
  float fVar7;
  undefined8 *in_stack_00000020;
  ulong *in_stack_00000028;
  ulong *in_stack_00000030;
  byte bStack0000000000000047;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000028);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000030);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_InitGame_<DestroySonidoAlFinalizar>d__124_System_Collections_IEnumerator_Reset__
            );
  OVRLipSyncContext_DebugShowVisemesAndLaughter_m4786192F726A5C6643133DD6BC56C875A20BBC26::
  s_Il2CppMethodInitialized = 1;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  *(undefined4 *)(unaff_x29 + -0x20) = 0;
  *(undefined4 *)(unaff_x29 + -0x24) = 0;
  *(undefined4 *)(unaff_x29 + -0x28) = 0;
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  *(byte *)(unaff_x29 + -0x31) = *(byte *)(*(long *)(unaff_x29 + -8) + 0x58) & 1;
  if ((*(byte *)(unaff_x29 + -0x31) & 1) != 0) {
    *(ulong *)(unaff_x29 + -0x18) = *in_stack_00000028;
    *(byte *)(unaff_x29 + -0x32) = *(byte *)(*(long *)(unaff_x29 + -8) + 0x60) & 1;
    if ((*(byte *)(unaff_x29 + -0x32) & 1) != 0) {
      *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x18);
      uVar3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                        (*(undefined8 *)(unaff_x29 + -0x40),
                         *(undefined8 *)
                          Method_InitGame_<DestroySonidoAlFinalizar>d__124_System_Collections_IEnumerator_Reset__
                        );
      *(undefined8 *)(unaff_x29 + -0x48) = uVar3;
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x48);
      uVar3 = OVRLipSyncContextBase_get_Frame_mD56E93629948BFC610036BEBC7734A9E7BF33615_inline
                        (*(OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C **)
                          (unaff_x29 + -8),(MethodInfo *)0x0);
      *(undefined8 *)(unaff_x29 + -0x50) = uVar3;
      NullCheck(*(void **)(unaff_x29 + -0x50));
      *(undefined4 *)(unaff_x29 + -0x54) = *(undefined4 *)(*(long *)(unaff_x29 + -0x50) + 0x20);
      fVar7 = (float)il2cpp_codegen_multiply<float,float>(50.0,*(float *)(unaff_x29 + -0x54));
      iVar1 = il2cpp_codegen_cast_double_to_int<int>((double)fVar7);
      *(int *)(unaff_x29 + -0x1c) = iVar1;
      *(undefined4 *)(unaff_x29 + -0x20) = 0;
      while( true ) {
        *(undefined4 *)(unaff_x29 + -0x70) = *(undefined4 *)(unaff_x29 + -0x20);
        *(undefined4 *)(unaff_x29 + -0x74) = *(undefined4 *)(unaff_x29 + -0x1c);
        if (*(int *)(unaff_x29 + -0x74) <= *(int *)(unaff_x29 + -0x70)) break;
        *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x18);
        uVar3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                          (*(undefined8 *)(unaff_x29 + -0x60),*in_stack_00000030,0);
        *(undefined8 *)(unaff_x29 + -0x68) = uVar3;
        *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x68);
        *(undefined4 *)(unaff_x29 + -0x6c) = *(undefined4 *)(unaff_x29 + -0x20);
        uVar2 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x6c),1);
        *(undefined4 *)(unaff_x29 + -0x20) = uVar2;
      }
      *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x18);
      uVar3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                        (*(undefined8 *)(unaff_x29 + -0x80),*in_stack_00000020,0);
      *(undefined8 *)(unaff_x29 + -0x88) = uVar3;
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x88);
    }
    *(byte *)(unaff_x29 + -0x89) = *(byte *)(*(long *)(unaff_x29 + -8) + 0x48) & 1;
    uVar5 = (uint)*(byte *)(unaff_x29 + -0x89);
    if ((*(byte *)(unaff_x29 + -0x89) & 1) != 0) {
      *(undefined4 *)(unaff_x29 + -0x24) = 0;
      while( true ) {
        iVar1 = *(int *)(unaff_x29 + -0x24);
        pvVar4 = (void *)OVRLipSyncContextBase_get_Frame_mD56E93629948BFC610036BEBC7734A9E7BF33615_inline
                                   (*(OVRLipSyncContextBase_t14DA044608499BE2F9CBCA68404655A81C2D102C
                                      **)(unaff_x29 + -8),(MethodInfo *)0x0);
        NullCheck(pvVar4);
        pvVar4 = *(void **)((long)pvVar4 + 0x18);
        NullCheck(pvVar4);
        iVar6 = (int)*(undefined8 *)((long)pvVar4 + 0x18);
        uVar5 = iVar1 - iVar6;
        if (iVar6 <= iVar1) break;
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
        fVar7 = (float)SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::GetAt
                                 (this,(long)iVar1);
        fVar7 = (float)il2cpp_codegen_multiply<float,float>(50.0,fVar7);
        iVar1 = il2cpp_codegen_cast_double_to_int<int>((double)fVar7);
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
    OVRLipSyncDebugConsole_Clear_m10890ABBC562F45B35035DD7B5A58BA009DFF433(uVar5);
    bStack0000000000000047 =
         String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6
                   (*(undefined8 *)(unaff_x29 + -0x18),*in_stack_00000028,0);
    bStack0000000000000047 = bStack0000000000000047 & 1;
    if (bStack0000000000000047 != 0) {
      OVRLipSyncDebugConsole_Log_m2353FB6DB33D2796707D1890C28EB208F93CF1D5
                (*(undefined8 *)(unaff_x29 + -0x18),0);
    }
  }
  return;
}


