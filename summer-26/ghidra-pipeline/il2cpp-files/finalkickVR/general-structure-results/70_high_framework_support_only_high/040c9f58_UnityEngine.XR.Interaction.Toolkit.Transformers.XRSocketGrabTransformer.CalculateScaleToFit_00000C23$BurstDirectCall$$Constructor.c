/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer.CalculateScaleToFit_00000C23$BurstDirectCall$$Constructor
ENTRY_POINT: 040c9f58
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_9;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_10
*/


void UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000C23_BurstDirectCall__Constructor
               (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E *param_1,undefined8 param_2)

{
  ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF *pBVar1;
  AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7 *pAVar2;
  IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB *pIVar3;
  Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *pVVar4;
  QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1 *pQVar5;
  ulong *puStack0000000000000008;
  ulong *puStack0000000000000010;
  ulong *puStack0000000000000018;
  undefined8 uStack00000000000000f0;
  InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E *pIStack00000000000000f8;
  
  puStack0000000000000008 = (ulong *)StringLiteral_14747;
  puStack0000000000000010 = (ulong *)StringLiteral_14776;
  puStack0000000000000018 = (ulong *)StringLiteral_14737;
  uStack00000000000000f0 = param_2;
  pIStack00000000000000f8 = param_1;
  if ((GSXR_HMD_FinishSetup_mD1D41EF0E5F31292BB72769162E74B26D73DC538::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14746);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000008);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_15329);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000010);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000018);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0_048cfa10);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14738);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_16743);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F_048cfa18);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14777);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14739);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_16309);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Data_SqlTypes_SqlDateTime_get_TimeTicks__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14740);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_16310);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF_048cfa20);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F_048cfa28);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_16744);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14742);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_16745);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9_048cfa30);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14766);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_16746);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_16747);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41_048cfa38);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585_048cfa40);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_14772);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_16748);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_16311);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66_048cfa48);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_16312);
    GSXR_HMD_FinishSetup_mD1D41EF0E5F31292BB72769162E74B26D73DC538::s_Il2CppMethodInitialized = 1;
  }
  XRHMD_FinishSetup_mB75FCAE73C22F861B52EBCD168FF6C225265FD64(pIStack00000000000000f8);
  pBVar1 = (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF *)
           InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044
                     (pIStack00000000000000f8,
                      *(String_t **)
                       PTR__stringLiteral381617D1A1C0C848CBE085A3C3BF523A03E9659F_048cfa28,
                      (MethodInfo *)*puStack0000000000000008);
  GSXR_HMD_set_back_m1C15D9F6325D337571D57443CDC5A67CB0C60696_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pBVar1,
             (MethodInfo *)0x0);
  pBVar1 = (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF *)
           InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044
                     (pIStack00000000000000f8,
                      *(String_t **)Method_System_Data_SqlTypes_SqlDateTime_get_TimeTicks__,
                      (MethodInfo *)*puStack0000000000000008);
  GSXR_HMD_set_start_m2E7C6C16DA6223CFDECF34B432DF26245F9A77F9_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pBVar1,
             (MethodInfo *)0x0);
  pAVar2 = (AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7 *)
           InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_14777,
                      *(MethodInfo **)StringLiteral_14746);
  GSXR_HMD_set_batteryLevel_mEE0A58E03ED42C5CC0A814F5FEB8616A39ADC331_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pAVar2,
             (MethodInfo *)0x0);
  pBVar1 = (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF *)
           InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_14772,
                      (MethodInfo *)*puStack0000000000000008);
  GSXR_HMD_set_userPresence_mD55327E9163A38840D7A0158B67E916277AAD26F_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pBVar1,
             (MethodInfo *)0x0);
  pIVar3 = (IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB *)
           InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_16312,
                      *(MethodInfo **)StringLiteral_15329);
  GSXR_HMD_set_trackingState_mD47E499D213436AFD763B7A4E177F5E967898805_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pIVar3,
             (MethodInfo *)0x0);
  pBVar1 = (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF *)
           InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_16309,
                      (MethodInfo *)*puStack0000000000000008);
  GSXR_HMD_set_isTracked_mA59A5F77DE715085D01FB99526218C964926F74D_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pBVar1,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_16310,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_devicePosition_m667EE3A158D738CDE7099176A0751013259CDCFF_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pQVar5 = (QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1 *)
           InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_16311,
                      (MethodInfo *)*puStack0000000000000010);
  GSXR_HMD_set_deviceRotation_mEE1D5217568FBEBCC3F5E1FF104D14A2E3B83BEC_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pQVar5,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_14742,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_deviceAngularVelocity_m1262A5047D4889373088C1AB94FA9687460051A4_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_14766,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_deviceAcceleration_m11173F82BFDCA96922A9D1413FEAE06250C33028_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,
                      *(String_t **)
                       PTR__stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585_048cfa40,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_deviceAngularAcceleration_mFC5DFC53ADB4C031AD0861C18DA52EFD720E0C36_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_16744,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_leftEyePosition_mC7F3C77D45CB0D8DC3C30AFFD19E8DD14670CE2D_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pQVar5 = (QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1 *)
           InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_16748,
                      (MethodInfo *)*puStack0000000000000010);
  GSXR_HMD_set_leftEyeRotation_m12CF89DDE5704A5A17BE980028A78748BBAC0F19_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pQVar5,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_14740,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_leftEyeAngularVelocity_m05B6CE7B7121E0E2A045DCA555A89A22035895AF_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,
                      *(String_t **)
                       PTR__stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF_048cfa20,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_leftEyeAcceleration_mC1D895887AB4F74DB746CC2A7086574BCDB1C359_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,
                      *(String_t **)
                       PTR__stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F_048cfa18,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_leftEyeAngularAcceleration_m3B399A10BC3B16A4EC2F6091B609D58373ABAEC0_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_16743,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_rightEyePosition_m18CC104A78EECB25C8FA3D31980E8741C05D3AD3_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pQVar5 = (QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1 *)
           InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_16746,
                      (MethodInfo *)*puStack0000000000000010);
  GSXR_HMD_set_rightEyeRotation_mF05AEC4099002C537746200BAE55D119DF7F330E_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pQVar5,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_14739,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_rightEyeAngularVelocity_m336E71D3890CFD4CD4488183CB4DAD69C40901BA_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,
                      *(String_t **)
                       PTR__stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41_048cfa38,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_rightEyeAcceleration_m7F9E5DC42F9BA6DB9B172204B4563316F74CED92_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,
                      *(String_t **)
                       PTR__stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66_048cfa48,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_rightEyeAngularAcceleration_m7EFB806AA7CDA42652564118402CEE34D93C6787_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_16747,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_centerEyePosition_mA35AF17A0D03C5A8171618198DE48018EBDA3259_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pQVar5 = (QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1 *)
           InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_16745,
                      (MethodInfo *)*puStack0000000000000010);
  GSXR_HMD_set_centerEyeRotation_mCCFBA0C29153E14086F7C9CE1715E708A813D77A_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pQVar5,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,*(String_t **)StringLiteral_14738,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_centerEyeAngularVelocity_mA3C6B8E61DCC6BF4B804E985470C884C3FB0CD85_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,
                      *(String_t **)
                       PTR__stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9_048cfa30,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_centerEyeAcceleration_mF717975EE4FF56E5A62B8A43FEAB441E0D065DF9_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  pVVar4 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (pIStack00000000000000f8,
                      *(String_t **)
                       PTR__stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0_048cfa10,
                      (MethodInfo *)*puStack0000000000000018);
  GSXR_HMD_set_centerEyeAngularAcceleration_m6CEE103C04EEE14FEF6C071450FEC81A96B0F022_inline
            ((GSXR_HMD_t8063EC0D023035ABB6A589C2BCEB7341A3AA4F0E *)pIStack00000000000000f8,pVVar4,
             (MethodInfo *)0x0);
  return;
}


