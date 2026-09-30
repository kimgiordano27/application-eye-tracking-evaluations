/*
FUNCTION_NAME: UnityEngine.GUISkin$$get_horizontalSliderThumbExtent
ENTRY_POINT: 0421de60
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_10
*/


void UnityEngine_GUISkin__get_horizontalSliderThumbExtent(void)

{
  undefined8 uVar1;
  Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *pVVar2;
  QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1 *pQVar3;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  
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
  OculusHMD_FinishSetup_m40C6F9747FD8C41435165667459A6802F432DC89::s_Il2CppMethodInitialized = 1;
  XRHMD_FinishSetup_mB75FCAE73C22F861B52EBCD168FF6C225265FD64(*(undefined8 *)(unaff_x29 + -8));
  uVar1 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)StringLiteral_14772,(MethodInfo *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x18) = uVar1;
  OculusHMD_set_userPresence_mB822E4C919255DEA7B345732805309D0B5F779BB_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF **)(unaff_x29 + -0x18),
             (MethodInfo *)0x0);
  uVar1 = InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)StringLiteral_16312,*(MethodInfo **)StringLiteral_15329);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  OculusHMD_set_trackingState_mC8D41A2972965C88EAEC56E69D37BB16C3D83B36_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB **)(unaff_x29 + -0x20),
             (MethodInfo *)0x0);
  uVar1 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)StringLiteral_16309,(MethodInfo *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x28) = uVar1;
  OculusHMD_set_isTracked_m900F8716B721671DDA0A826E4903426D0694EBD1_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF **)(unaff_x29 + -0x28),
             (MethodInfo *)0x0);
  uVar1 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)StringLiteral_16310,(MethodInfo *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x30) = uVar1;
  OculusHMD_set_devicePosition_mC6A42D360844B1CC3E33627B73A3B8877ADD297F_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A **)(unaff_x29 + -0x30),
             (MethodInfo *)0x0);
  uVar1 = InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)StringLiteral_16311,(MethodInfo *)*in_stack_00000018);
  *(undefined8 *)(unaff_x29 + -0x38) = uVar1;
  OculusHMD_set_deviceRotation_m2BC35AE35915D32C0112E5B039353ED79FD868DC_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1 **)(unaff_x29 + -0x38),
             (MethodInfo *)0x0);
  uVar1 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)StringLiteral_14742,(MethodInfo *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x40) = uVar1;
  OculusHMD_set_deviceAngularVelocity_m4E94C49352BE15465A74503B834BC9A80B5777B0_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A **)(unaff_x29 + -0x40),
             (MethodInfo *)0x0);
  uVar1 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)StringLiteral_14766,(MethodInfo *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x48) = uVar1;
  OculusHMD_set_deviceAcceleration_m294F3AC55D2B99536CD183A8EF1269F5A49A128C_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A **)(unaff_x29 + -0x48),
             (MethodInfo *)0x0);
  uVar1 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)
                      PTR__stringLiteralC3E98CA0D21B6899AC08C4CE0868CF1323933585_048cfa40,
                     (MethodInfo *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x50) = uVar1;
  OculusHMD_set_deviceAngularAcceleration_mC8D8A980BD65F0BC1224EB8CFD44A1CA90C9C06B_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A **)(unaff_x29 + -0x50),
             (MethodInfo *)0x0);
  uVar1 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)StringLiteral_16744,(MethodInfo *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x58) = uVar1;
  OculusHMD_set_leftEyePosition_m33924190F9A3725C044CD79CC1886EAFD1375F1B_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A **)(unaff_x29 + -0x58),
             (MethodInfo *)0x0);
  uVar1 = InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)StringLiteral_16748,(MethodInfo *)*in_stack_00000018);
  *(undefined8 *)(unaff_x29 + -0x60) = uVar1;
  OculusHMD_set_leftEyeRotation_m6AD7A59523AFF5E07AAEBE2B2F98552D831D3160_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1 **)(unaff_x29 + -0x60),
             (MethodInfo *)0x0);
  uVar1 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)StringLiteral_14740,(MethodInfo *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x68) = uVar1;
  OculusHMD_set_leftEyeAngularVelocity_m43228D2FBB52575480E06426220ADFD1CD8820B4_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A **)(unaff_x29 + -0x68),
             (MethodInfo *)0x0);
  uVar1 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                    (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                     *(String_t **)
                      PTR__stringLiteral3624BAC25188A8C57A604CA0D3ACB2CBF73CF5DF_048cfa20,
                     (MethodInfo *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar1;
  OculusHMD_set_leftEyeAcceleration_m131EC3D3E8B00DFD26376A02ABC948B3648CFFFF_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),
             *(Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A **)(unaff_x29 + -0x70),
             (MethodInfo *)0x0);
  pVVar2 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                      *(String_t **)
                       PTR__stringLiteral156E662C55D382C18194118C3287CEAB98FA2C6F_048cfa18,
                      (MethodInfo *)*in_stack_00000020);
  OculusHMD_set_leftEyeAngularAcceleration_m4AA6FC193E419518D2C542EDE258A43CABEC4690_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),pVVar2,
             (MethodInfo *)0x0);
  pVVar2 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                      *(String_t **)StringLiteral_16743,(MethodInfo *)*in_stack_00000020);
  OculusHMD_set_rightEyePosition_m2BD520F49535D318F51733C00237CEB3C65D9F59_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),pVVar2,
             (MethodInfo *)0x0);
  pQVar3 = (QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1 *)
           InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4
                     (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                      *(String_t **)StringLiteral_16746,(MethodInfo *)*in_stack_00000018);
  OculusHMD_set_rightEyeRotation_m66FE1599D8AA0076EDCD51D6D998E18441693A56_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),pQVar3,
             (MethodInfo *)0x0);
  pVVar2 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                      *(String_t **)StringLiteral_14739,(MethodInfo *)*in_stack_00000020);
  OculusHMD_set_rightEyeAngularVelocity_m0B3A3BA95BC0618889BFAC8F210227B93FF1514D_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),pVVar2,
             (MethodInfo *)0x0);
  pVVar2 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                      *(String_t **)
                       PTR__stringLiteralB795E7C13E4CFACF08133C1739B538F3A728EF41_048cfa38,
                      (MethodInfo *)*in_stack_00000020);
  OculusHMD_set_rightEyeAcceleration_m05B84EAF34403B5ABA30C9AE2C49FB07512FA046_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),pVVar2,
             (MethodInfo *)0x0);
  pVVar2 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                      *(String_t **)
                       PTR__stringLiteralFABA7B84135B56F6F79588F7B57766574B6E8C66_048cfa48,
                      (MethodInfo *)*in_stack_00000020);
  OculusHMD_set_rightEyeAngularAcceleration_m7D1A9ED4DA5C35317A764B8CBF4A4D9076055C99_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),pVVar2,
             (MethodInfo *)0x0);
  pVVar2 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                      *(String_t **)StringLiteral_16747,(MethodInfo *)*in_stack_00000020);
  OculusHMD_set_centerEyePosition_mA5F573860C21403EBE7BD55E1080B37F7ACFFA84_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),pVVar2,
             (MethodInfo *)0x0);
  pQVar3 = (QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1 *)
           InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4
                     (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                      *(String_t **)StringLiteral_16745,(MethodInfo *)*in_stack_00000018);
  OculusHMD_set_centerEyeRotation_mF7D033B8EF301548CACC6B62C88C7F98111A4340_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),pQVar3,
             (MethodInfo *)0x0);
  pVVar2 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                      *(String_t **)StringLiteral_14738,(MethodInfo *)*in_stack_00000020);
  OculusHMD_set_centerEyeAngularVelocity_m8CE9919E3952AC2AD3D1FAD81663560AF1F0F935_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),pVVar2,
             (MethodInfo *)0x0);
  pVVar2 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                      *(String_t **)
                       PTR__stringLiteral4E267D25EFB4D56321079C3FF27EAE0DC4819CC9_048cfa30,
                      (MethodInfo *)*in_stack_00000020);
  OculusHMD_set_centerEyeAcceleration_mB0706B91560179E907962135AC6DCFA8B5CFC45B_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),pVVar2,
             (MethodInfo *)0x0);
  pVVar2 = (Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A *)
           InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418
                     (*(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E **)(unaff_x29 + -8),
                      *(String_t **)
                       PTR__stringLiteral04EA248327ED413DE02A011F18AC3C95CE6B8EF0_048cfa10,
                      (MethodInfo *)*in_stack_00000020);
  OculusHMD_set_centerEyeAngularAcceleration_m8BB21FF3E5F02034AF74F5FC43AA095C99FD28A8_inline
            (*(OculusHMD_t2DBBB4527FC23A3136E2144D2E7D9C6D019AB4F7 **)(unaff_x29 + -8),pVVar2,
             (MethodInfo *)0x0);
  return;
}


