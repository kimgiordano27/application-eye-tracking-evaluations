/*
FUNCTION_NAME: FUN_02021ad4
ENTRY_POINT: 02021ad4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 141
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;weak_pose_support;frame_behavior;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_1;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_1
*/


undefined8 FUN_02021ad4(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((DAT_0293f250 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c4c78);
    thunk_FUN_01279b34(PTR_DAT_027c4c80);
    thunk_FUN_01279b34(PTR_DAT_027c4c88);
    thunk_FUN_01279b34(PTR_DAT_027c4c90);
    thunk_FUN_01279b34(PTR_DAT_027c4c98);
    thunk_FUN_01279b34(PTR_DAT_027c4ca0);
    thunk_FUN_01279b34(PTR_DAT_027c4ca8);
    thunk_FUN_01279b34(PTR_DAT_027c4a00);
    thunk_FUN_01279b34(PTR_DAT_027c4cb0);
    thunk_FUN_01279b34(PTR_DAT_027c4cb8);
    thunk_FUN_01279b34(PTR_DAT_027c4cc0);
    thunk_FUN_01279b34(PTR_DAT_027c4cc8);
    thunk_FUN_01279b34(PTR_DAT_027c4a18);
    thunk_FUN_01279b34(PTR_DAT_027c4cd0);
    thunk_FUN_01279b34(PTR_DAT_027c4a70);
    thunk_FUN_01279b34(PTR_DAT_027c4a88);
    thunk_FUN_01279b34(PTR_DAT_027c4cd8);
    thunk_FUN_01279b34(PTR_DAT_027c4ab0);
    DAT_0293f250 = 1;
  }
  if (param_2 < 0x4e83f2de) {
    if (param_2 < 0x267db4f5) {
      if (param_2 < 0x1569feb6) {
        if (param_2 < 0x102fa3df) {
          if (param_2 == 0x3e0d149) goto LAB_020221c8;
          if (param_2 == 0xb6d8d76) {
            uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4c98);
            FUN_02025fd0(uVar1,param_1);
            return uVar1;
          }
          uVar2 = 0x102fa3de;
        }
        else {
          if (0x11741f03 < param_2) {
            if (param_2 == 0x121c317c) {
              uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4a88);
              FUN_0202191c(uVar1,param_1);
              return uVar1;
            }
            if (param_2 != 0x1569feb5) {
              return 0;
            }
LAB_02022070:
            uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4a00);
            UnityEngine_EventSystems_PointerEventDataExtension__GetSwipeStart(uVar1,param_1);
            return uVar1;
          }
          if (param_2 == 0x112aca17) goto LAB_0202225c;
          uVar2 = 0x11741f03;
        }
        goto LAB_020220e8;
      }
      if (param_2 < 0x19c2b32c) {
        if ((param_2 == 0x185251ce) || (param_2 == 0x186dc4dd)) goto LAB_020221c8;
        uVar2 = 0x19c2b32b;
        goto LAB_02021ea0;
      }
      if (param_2 < 0x1c577d88) {
        if (param_2 == 0x1ad31b4f) goto LAB_02022030;
        uVar2 = 0x1c577d87;
      }
      else {
        if (param_2 == 0x1ed726c7) goto LAB_020220f0;
        uVar2 = 0x267db4f4;
      }
    }
    else {
      if (param_2 < 0x34557eb3) {
        if (param_2 < 0x30ff006f) {
          if ((param_2 == 0x27670f58) || (param_2 == 0x2dafcdd5)) goto LAB_020221c8;
          uVar2 = 0x30ff006e;
        }
        else {
          if (param_2 < 0x329206d2) {
            if (param_2 == 0x3215666d) goto LAB_020221c8;
            uVar2 = 0x329206d1;
            goto LAB_020221c0;
          }
          if (param_2 == 0x3302f770) goto LAB_020221c8;
          uVar2 = 0x34557eb2;
        }
LAB_020220e8:
        if (param_2 != uVar2) {
          return 0;
        }
LAB_020220f0:
        uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4a70);
        FUN_02021764(uVar1,param_1);
        return uVar1;
      }
      if (param_2 < 0x3e9b1f62) {
        if (param_2 < 0x35b5c4e4) {
          if (param_2 == 0x3497d7f6) goto LAB_020221c8;
          uVar2 = 0x35b5c4e3;
LAB_02022028:
          if (param_2 != uVar2) {
            return 0;
          }
LAB_02022030:
          uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4cc8);
          FUN_02027498(uVar1,param_1);
          return uVar1;
        }
        if (param_2 == 0x36e84f8c) goto LAB_020220f0;
        uVar2 = 0x3e9b1f61;
      }
      else {
        if (param_2 < 0x4cb13a6f) {
          if (param_2 == 0x44e40dca) {
            uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4ca8);
            RealisticEyeMovements_ControlData__ClampRightHorizEyeAngle(uVar1,param_1);
            return uVar1;
          }
          uVar2 = 0x4cb13a6e;
LAB_02022200:
          if (param_2 != uVar2) {
            return 0;
          }
          uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4c88);
          FUN_020254f4(uVar1,param_1);
          return uVar1;
        }
        if (param_2 == 0x4e81dc59) goto LAB_020220f0;
        uVar2 = 0x4e83f2dd;
      }
    }
  }
  else if (param_2 < 0x63dffc8f) {
    if (param_2 < 0x5793f457) {
      if (param_2 < 0x520f744d) {
        if (param_2 != 0x4f32e10d) {
          if (param_2 != 0x501ac7be) {
            if (param_2 != 0x520f744c) {
              return 0;
            }
            uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4c80);
            FUN_02024da4(uVar1,param_1);
            return uVar1;
          }
LAB_02021fb8:
          uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4ca0);
          FUN_02026130(uVar1,param_1);
          return uVar1;
        }
        goto LAB_020221c8;
      }
      if (0x5662a011 < param_2) {
        if (param_2 != 0x577ba8a0) {
          if (param_2 != 0x5793f456) {
            return 0;
          }
          uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4c90);
          RealisticEyeMovements_EyeAndHeadAnimator__get_RightEyeRay(uVar1,param_1);
          return uVar1;
        }
LAB_0202225c:
        uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4cc0);
        FUN_02026d48(uVar1,param_1);
        return uVar1;
      }
      if (param_2 == 0x5585ff0a) {
LAB_0202223c:
        uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4cb8);
        FUN_02026bb4(uVar1,param_1);
        return uVar1;
      }
      uVar2 = 0x5662a011;
LAB_02021ea0:
      if (param_2 != uVar2) {
        return 0;
      }
LAB_02022188:
      uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4cd8);
      FUN_02029268(uVar1,param_1);
      return uVar1;
    }
    if (param_2 < 0x5c95a4f4) {
      if (param_2 < 0x5842d211) {
        if (param_2 == 0x58129c8e) goto LAB_020221c8;
        uVar2 = 0x5842d210;
        goto LAB_020220e8;
      }
      if (param_2 == 0x58cbff2a) {
        uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4a18);
        FUN_020213f4(uVar1,param_1);
        return uVar1;
      }
      uVar2 = 0x5c95a4f3;
    }
    else if (param_2 < 0x5ed0ea33) {
      if (param_2 == 0x5e8953bd) {
        uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4cd0);
        FUN_02027128(uVar1,param_1);
        return uVar1;
      }
      uVar2 = 0x5ed0ea32;
    }
    else {
      if (param_2 == 0x60788c8b) goto LAB_02022188;
      uVar2 = 0x63dffc8e;
    }
  }
  else {
    if (0x6c6e33e3 < param_2) {
      if (0x7287c183 < param_2) {
        if (param_2 < 0x7b2f5cdd) {
          if (param_2 != 0x76a5a7c4) {
            if (param_2 != 0x7b2f5cdc) {
              return 0;
            }
            goto LAB_02021fb8;
          }
        }
        else if (param_2 != 0x7bcfd98e) {
          uVar2 = 0x7f835863;
          goto LAB_02022200;
        }
        goto LAB_020220f0;
      }
      if (0x6fb63223 < param_2) {
        if (param_2 == 0x71010917) goto LAB_020221c8;
        uVar2 = 0x7287c183;
        goto LAB_02022028;
      }
      if (param_2 == 0x6ed60a35) {
        uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4cb0);
        FUN_02026790(uVar1,param_1);
        return uVar1;
      }
      uVar2 = 0x6fb63223;
      goto LAB_020220e8;
    }
    if (param_2 < 0x67e19d38) {
      if (param_2 == 0x646d855f) goto LAB_02022070;
      if (param_2 != 0x6570b2bd) {
        if (param_2 != 0x67e19d37) {
          return 0;
        }
        goto LAB_0202223c;
      }
      goto LAB_020221c8;
    }
    if (0x6a94ad8e < param_2) {
      if (param_2 != 0x6b36a54f) {
        if (param_2 != 0x6c6e33e3) {
          return 0;
        }
        uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4c78);
        FUN_02022458(uVar1,param_1);
        return uVar1;
      }
      goto LAB_020220f0;
    }
    if (param_2 == 0x68027c73) goto LAB_02022030;
    uVar2 = 0x6a94ad8e;
  }
LAB_020221c0:
  if (param_2 != uVar2) {
    return 0;
  }
LAB_020221c8:
  uVar1 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c4ab0);
  FUN_0201ec30(uVar1,param_1);
  return uVar1;
}


