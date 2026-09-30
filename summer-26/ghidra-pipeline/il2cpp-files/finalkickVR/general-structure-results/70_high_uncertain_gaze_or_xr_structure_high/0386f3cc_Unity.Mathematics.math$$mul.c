/*
FUNCTION_NAME: Unity.Mathematics.math$$mul
ENTRY_POINT: 0386f3cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;ui_interaction
EVIDENCE: strong_eye_source_hits_12;ui_or_gameplay_sink_hits_14;functionality_possible_biometrics_hits_14
*/


void Unity_Mathematics_math__mul
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               EyesControl_t83617BA50C727F89DD6BB371171708BCE0FD8028 *param_5)

{
  undefined8 uVar1;
  void *pvVar2;
  Il2CppObject *pIVar3;
  long unaff_x29;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *in_stack_00000000;
  MethodInfo *pMStack0000000000000008;
  Eyes_t239151DFDE1BB47589CEBD22261A793F142B211D *in_stack_00000010;
  undefined4 uStack000000000000001c;
  float fStack000000000000002c;
  float fStack0000000000000044;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000074;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000e4;
  
  pMStack0000000000000008 = (MethodInfo *)0x0;
  uVar1 = EyesControl_get_leftEyePosition_m30F92C8A2393461FC8B42EF72602EDAD5DA14F22_inline
                    (param_5,(MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  uVar4 = Eyes_get_leftEyePosition_m1A89E9B0B9E66EADF6A7CA493EAC8A147749FEC7_inline
                    (in_stack_00000010,pMStack0000000000000008);
  *(undefined4 *)(unaff_x29 + -0x3c) = uVar4;
  *(undefined4 *)(unaff_x29 + -0x38) = param_2;
  *(undefined4 *)(unaff_x29 + -0x34) = param_3;
  *(undefined8 *)(unaff_x29 + -0x30) = in_stack_00000000[0x11];
  *(undefined4 *)(unaff_x29 + -0x28) = *(undefined4 *)(unaff_x29 + -0x34);
  *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x20));
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x30);
  *(undefined4 *)(unaff_x29 + -0x50) = *(undefined4 *)(unaff_x29 + -0x28);
  uVar5 = *(undefined4 *)(unaff_x29 + -0x54);
  uVar6 = *(undefined4 *)(unaff_x29 + -0x50);
  uStack000000000000001c = 0x12;
  VirtualActionInvoker2<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,void*>::Invoke
            (*(undefined4 *)(unaff_x29 + -0x58),0x12,*(undefined8 *)(unaff_x29 + -0x20),
             *(undefined8 *)(unaff_x29 + -0x48));
  uVar1 = EyesControl_get_leftEyeRotation_m0B5EA6878345A4A442C9B0255E93AB26EF2BB613_inline
                    (*(EyesControl_t83617BA50C727F89DD6BB371171708BCE0FD8028 **)(unaff_x29 + -8),
                     pMStack0000000000000008);
  *(undefined8 *)(unaff_x29 + -0x60) = uVar1;
  uVar4 = Eyes_get_leftEyeRotation_m66CDDF8D2CB08FFB5888B90A0338D255EF73CF46_inline
                    (in_stack_00000010,pMStack0000000000000008);
  *(undefined4 *)(unaff_x29 + -0x80) = uVar4;
  *(undefined4 *)(unaff_x29 + -0x7c) = uVar5;
  *(undefined4 *)(unaff_x29 + -0x78) = uVar6;
  *(undefined4 *)(unaff_x29 + -0x74) = param_4;
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x80);
  *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x60));
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x68);
  *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x70);
  uVar5 = *(undefined4 *)(unaff_x29 + -0x9c);
  uVar6 = *(undefined4 *)(unaff_x29 + -0x98);
  uVar7 = *(undefined4 *)(unaff_x29 + -0x94);
  VirtualActionInvoker2<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,void*>::Invoke
            (*(undefined4 *)(unaff_x29 + -0xa0),uStack000000000000001c,
             *(undefined8 *)(unaff_x29 + -0x60),*(undefined8 *)(unaff_x29 + -0x88));
  uVar1 = EyesControl_get_rightEyePosition_mB656BC310A2A2A7D4A2F01AF51FF1A17B43839DB_inline
                    (*(EyesControl_t83617BA50C727F89DD6BB371171708BCE0FD8028 **)(unaff_x29 + -8),
                     pMStack0000000000000008);
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar1;
  uVar4 = Eyes_get_rightEyePosition_m13221B0B512E4A9DE771C0A9400F0171444EDBA3_inline
                    (in_stack_00000010,pMStack0000000000000008);
  *(undefined4 *)(unaff_x29 + -0xc4) = uVar4;
  *(undefined4 *)(unaff_x29 + -0xc0) = uVar5;
  *(undefined4 *)(unaff_x29 + -0xbc) = uVar6;
  *(undefined8 *)(unaff_x29 + -0xb8) = *in_stack_00000000;
  *(undefined4 *)(unaff_x29 + -0xb0) = *(undefined4 *)(unaff_x29 + -0xbc);
  *(undefined8 *)(unaff_x29 + -0xd0) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0xa8));
  uVar4 = *(undefined4 *)(unaff_x29 + -0xb0);
  uStack00000000000000e4 = (undefined4)(*(ulong *)(unaff_x29 + -0xb8) >> 0x20);
  VirtualActionInvoker2<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,void*>::Invoke
            (*(ulong *)(unaff_x29 + -0xb8) & 0xffffffff,uStack000000000000001c,
             *(undefined8 *)(unaff_x29 + -0xa8),*(undefined8 *)(unaff_x29 + -0xd0));
  pvVar2 = (void *)EyesControl_get_rightEyeRotation_m36CA5BE97D9B87836B916E67F041DD6381442E4A_inline
                             (*(EyesControl_t83617BA50C727F89DD6BB371171708BCE0FD8028 **)
                               (unaff_x29 + -8),pMStack0000000000000008);
  uVar5 = Eyes_get_rightEyeRotation_mBF6652A173022067A927A863AAA424E87448E38A_inline
                    (in_stack_00000010,pMStack0000000000000008);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x10);
  uStack00000000000000b4 = uStack00000000000000e4;
  uStack00000000000000bc = uVar7;
  NullCheck(pvVar2);
  VirtualActionInvoker2<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974,void*>::Invoke
            (uVar5,uStack00000000000000e4,uVar4,uVar7,uStack000000000000001c,pvVar2,uVar1);
  pvVar2 = (void *)EyesControl_get_fixationPoint_mED8557F3D952CE273C0C2423019B2F9567568642_inline
                             (*(EyesControl_t83617BA50C727F89DD6BB371171708BCE0FD8028 **)
                               (unaff_x29 + -8),pMStack0000000000000008);
  uVar5 = Eyes_get_fixationPoint_mEC5C6BE5C97DE306C77F7BDD1E1978D13DBACDBC_inline
                    (in_stack_00000010,pMStack0000000000000008);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x10);
  uStack000000000000006c = uVar5;
  uStack0000000000000074 = uVar4;
  NullCheck(pvVar2);
  VirtualActionInvoker2<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2,void*>::Invoke
            (uVar5,uStack00000000000000e4,uVar4,uStack000000000000001c,pvVar2,uVar1);
  pIVar3 = (Il2CppObject *)
           EyesControl_get_leftEyeOpenAmount_m51766C0F6617225434B327DF0233EFF8081E7529_inline
                     (*(EyesControl_t83617BA50C727F89DD6BB371171708BCE0FD8028 **)(unaff_x29 + -8),
                      pMStack0000000000000008);
  fStack0000000000000044 =
       (float)Eyes_get_leftEyeOpenAmount_m10E56459B9412254D87FB6390643E25C9486259E_inline
                        (in_stack_00000010,pMStack0000000000000008);
  pvVar2 = *(void **)(unaff_x29 + -0x10);
  NullCheck(pIVar3);
  VirtualActionInvoker2<float,void*>::Invoke
            ((ushort)uStack000000000000001c,pIVar3,fStack0000000000000044,pvVar2);
  pIVar3 = (Il2CppObject *)
           EyesControl_get_rightEyeOpenAmount_m91926BDB6ACA8E71186BFDF84D4BA45381638F0C_inline
                     (*(EyesControl_t83617BA50C727F89DD6BB371171708BCE0FD8028 **)(unaff_x29 + -8),
                      pMStack0000000000000008);
  fStack000000000000002c =
       (float)Eyes_get_rightEyeOpenAmount_m213E8CCE9F1350E4144E0FEEFE3E9CD1995AD01D_inline
                        (in_stack_00000010,pMStack0000000000000008);
  pvVar2 = *(void **)(unaff_x29 + -0x10);
  NullCheck(pIVar3);
  VirtualActionInvoker2<float,void*>::Invoke
            ((ushort)uStack000000000000001c,pIVar3,fStack000000000000002c,pvVar2);
  return;
}


