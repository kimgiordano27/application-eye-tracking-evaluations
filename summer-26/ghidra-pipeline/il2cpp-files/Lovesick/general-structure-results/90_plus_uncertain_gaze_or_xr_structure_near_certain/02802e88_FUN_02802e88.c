/*
FUNCTION_NAME: FUN_02802e88
ENTRY_POINT: 02802e88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_21;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void FUN_02802e88(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80 [8];
  
  if ((DAT_03788b63 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_2743);
    thunk_FUN_00d48444(StringLiteral_137);
    thunk_FUN_00d48444(StringLiteral_10902);
    thunk_FUN_00d48444(PTR_DAT_033f1db0);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_EnumBuilder_get_Name__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_114_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9770);
    thunk_FUN_00d48444(Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__)
    ;
    thunk_FUN_00d48444(Method_Sirenix_Serialization_GenericCollectionFormatter_CanFormat__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_OnCameraCleanup__
                      );
    thunk_FUN_00d48444(StringLiteral_2646);
    thunk_FUN_00d48444(PTR_DAT_033f2b10);
    DAT_03788b63 = 1;
  }
  puVar10 = StringLiteral_10902;
  puVar9 = StringLiteral_9770;
  puVar8 = StringLiteral_2743;
  puVar7 = StringLiteral_2646;
  puVar6 = StringLiteral_302;
  puVar5 = Method_Sirenix_Serialization_GenericCollectionFormatter_CanFormat__;
  puVar4 = Method_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_OnCameraCleanup__;
  puVar3 = OVRPlugin_OVRP_1_114_0_TypeInfo;
  puVar2 = PTR_DAT_033f2b10;
  puVar1 = PTR_DAT_033f1db0;
  if (param_6 < 0x3000a) {
    switch(param_6) {
    case 0x20000:
      puVar12 = (undefined4 *)FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279bf64(0);
      *puVar12 = uVar11;
      break;
    case 0x20001:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279bfdc(0);
      *(undefined4 *)(lVar16 + 4) = uVar11;
      break;
    case 0x20002:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279c054(0);
      *(undefined4 *)(lVar16 + 8) = uVar11;
      break;
    case 0x20003:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279c334(0);
      *(undefined4 *)(lVar16 + 0xc) = uVar11;
      break;
    case 0x20004:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
LAB_02803ae0:
      uVar11 = FUN_0279c428(0);
      *(undefined4 *)(lVar16 + 0x10) = uVar11;
      break;
    case 0x20005:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279c51c(0);
      *(undefined4 *)(lVar16 + 0x14) = uVar11;
      break;
    case 0x20006:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279c700(0);
      *(undefined4 *)(lVar16 + 0x18) = uVar11;
      break;
    case 0x20007:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279c778(0);
      *(undefined8 *)(lVar16 + 0x1c) = uVar14;
      break;
    case 0x20008:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279c8f0(0);
      *(undefined4 *)(lVar16 + 0x24) = uVar11;
      break;
    case 0x20009:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
LAB_02803be4:
      uVar14 = FUN_0279c968(0);
      *(undefined8 *)(lVar16 + 0x28) = uVar14;
      break;
    case 0x2000a:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279c9e0(0);
LAB_02804420:
      *(undefined4 *)(lVar16 + 0x30) = uVar11;
      break;
    case 0x2000b:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279ca58(0);
      *(undefined4 *)(lVar16 + 0x34) = uVar11;
      break;
    case 0x2000c:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279cad0(0);
      *(undefined4 *)(lVar16 + 0x38) = uVar11;
      break;
    case 0x2000d:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279cb48(0);
LAB_028044bc:
      *(undefined4 *)(lVar16 + 0x3c) = uVar11;
      break;
    case 0x2000e:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279cc34(0);
      goto LAB_02804174;
    case 0x2000f:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279ccac(0);
      *(undefined4 *)(lVar16 + 0x48) = uVar11;
      break;
    case 0x20010:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279cd24(0);
      *(undefined8 *)(lVar16 + 0x4c) = uVar14;
      break;
    case 0x20011:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279ce10(0);
      *(undefined8 *)(lVar16 + 0x54) = uVar14;
      break;
    case 0x20012:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
LAB_02803dac:
      uVar14 = FUN_0279ce88(0);
LAB_02804210:
      *(undefined8 *)(lVar16 + 0x5c) = uVar14;
      break;
    case 0x20013:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279cf00(0);
      *(undefined8 *)(lVar16 + 100) = uVar14;
      break;
    case 0x20014:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279cf78(0);
      *(undefined8 *)(lVar16 + 0x6c) = uVar14;
      break;
    case 0x20015:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279cff0(0);
      *(undefined8 *)(lVar16 + 0x74) = uVar14;
      break;
    case 0x20016:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279d068(0);
      *(undefined8 *)(lVar16 + 0x7c) = uVar14;
      break;
    case 0x20017:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279d0e0(0);
LAB_0280434c:
      *(undefined8 *)(lVar16 + 0x84) = uVar14;
      break;
    case 0x20018:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279d158(0);
      *(undefined8 *)(lVar16 + 0x8c) = uVar14;
      break;
    case 0x20019:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279d2c0(0);
      *(undefined8 *)(lVar16 + 0x94) = uVar14;
      break;
    case 0x2001a:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
LAB_02803f44:
      uVar14 = FUN_0279d338(0);
      *(undefined8 *)(lVar16 + 0x9c) = uVar14;
      break;
    case 0x2001b:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279d3b0(0);
      *(undefined8 *)(lVar16 + 0xa4) = uVar14;
      break;
    case 0x2001c:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279d428(0);
      *(undefined8 *)(lVar16 + 0xac) = uVar14;
      break;
    case 0x2001d:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar11 = FUN_0279d4a0(0);
      *(undefined4 *)(lVar16 + 0xb4) = uVar11;
      break;
    case 0x2001e:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279d518(0);
      *(undefined8 *)(lVar16 + 0xb8) = uVar14;
      break;
    case 0x2001f:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279d790(0);
      *(undefined8 *)(lVar16 + 0xc0) = uVar14;
      break;
    case 0x20020:
      lVar16 = FUN_013b3bbc(param_5 + 8,*(undefined8 *)StringLiteral_9770);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar8);
      }
      uVar14 = FUN_0279e2d8(0);
      *(undefined8 *)(lVar16 + 200) = uVar14;
      break;
    default:
      switch(param_6) {
      case 0x10000:
        puVar12 = (undefined4 *)FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279c7f0(0);
LAB_02803168:
        *puVar12 = uVar11;
        puVar12[1] = param_2;
        puVar12[2] = param_3;
        puVar12[3] = param_4;
        break;
      case 0x10001:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar14 = FUN_0279cbc0(0);
        *(undefined8 *)(lVar16 + 0x10) = uVar14;
        break;
      case 0x10002:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar14 = FUN_0279cd9c(0);
        *(undefined8 *)(lVar16 + 0x18) = uVar14;
        break;
      case 0x10003:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        FUN_0279d70c(&local_a0,0);
        *(ulong *)(lVar16 + 0x28) = CONCAT44(uStack_94,uStack_98);
        *(undefined8 *)(lVar16 + 0x20) = local_a0;
        *(ulong *)(lVar16 + 0x34) = CONCAT44(uStack_88,uStack_8c);
        *(ulong *)(lVar16 + 0x2c) = CONCAT44(local_90,uStack_94);
        break;
      case 0x10004:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar14 = FUN_0279dbec(0);
        goto LAB_02804174;
      case 0x10005:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        auVar19 = FUN_0279dc60(0);
        *(undefined1 (*) [16])(lVar16 + 0x48) = auVar19;
        break;
      case 0x10006:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279dcd8(0);
        *(undefined4 *)(lVar16 + 0x58) = uVar11;
        break;
      case 0x10007:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar14 = UnityEngine_XR_XRNodeState__TryGetRotation(0);
        goto LAB_02804210;
      case 0x10008:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279e018(0);
        *(undefined4 *)(lVar16 + 100) = uVar11;
        break;
      case 0x10009:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = UnityEngine_XR_XRInputSubsystem__remove_trackingOriginUpdated(0);
        *(undefined4 *)(lVar16 + 0x68) = uVar11;
        *(undefined4 *)(lVar16 + 0x6c) = param_2;
        *(undefined4 *)(lVar16 + 0x70) = param_3;
        *(undefined4 *)(lVar16 + 0x74) = param_4;
        break;
      case 0x1000a:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
LAB_028042a8:
        uVar11 = FUN_0279e104(0);
        *(undefined4 *)(lVar16 + 0x78) = uVar11;
        break;
      case 0x1000b:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279e1f0(0);
        *(undefined4 *)(lVar16 + 0x7c) = uVar11;
        break;
      case 0x1000c:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279e264(0);
        *(undefined4 *)(lVar16 + 0x80) = uVar11;
        break;
      case 0x1000d:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar14 = FUN_0279e350(0);
        goto LAB_0280434c;
      default:
        switch(param_6) {
        case 0x30000:
          puVar13 = (undefined8 *)FUN_013b3bbc(param_5 + 0x10,*(undefined8 *)StringLiteral_137);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          FUN_0279c868(&local_a0,0);
LAB_02803230:
          puVar13[2] = CONCAT44(uStack_8c,local_90);
          puVar13[1] = CONCAT44(uStack_94,uStack_98);
          *puVar13 = local_a0;
          break;
        case 0x30001:
          lVar16 = FUN_013b3bbc(param_5 + 0x10,*(undefined8 *)StringLiteral_137);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          uVar11 = FUN_0279d694(0);
          *(undefined4 *)(lVar16 + 0x18) = uVar11;
          break;
        case 0x30002:
          lVar16 = FUN_013b3bbc(param_5 + 0x10,*(undefined8 *)StringLiteral_137);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          uVar11 = FUN_0279daf8(0);
          *(undefined4 *)(lVar16 + 0x1c) = uVar11;
          *(undefined4 *)(lVar16 + 0x20) = param_2;
          *(undefined4 *)(lVar16 + 0x24) = param_3;
          *(undefined4 *)(lVar16 + 0x28) = param_4;
          break;
        case 0x30003:
          lVar16 = FUN_013b3bbc(param_5 + 0x10,*(undefined8 *)StringLiteral_137);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          uVar11 = FUN_0279db74(0);
          *(undefined4 *)(lVar16 + 0x2c) = uVar11;
          break;
        case 0x30004:
          lVar16 = FUN_013b3bbc(param_5 + 0x10,*(undefined8 *)StringLiteral_137);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          uVar11 = FUN_0279dd4c(0);
          goto LAB_02804420;
        case 0x30005:
          lVar16 = FUN_013b3bbc(param_5 + 0x10,*(undefined8 *)StringLiteral_137);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          uVar11 = FUN_0279de38(0);
          *(undefined4 *)(lVar16 + 0x34) = uVar11;
          break;
        case 0x30006:
          lVar16 = FUN_013b3bbc(param_5 + 0x10,*(undefined8 *)StringLiteral_137);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          uVar11 = FUN_0279deb0(0);
          *(undefined4 *)(lVar16 + 0x38) = uVar11;
          break;
        case 0x30007:
          lVar16 = FUN_013b3bbc(param_5 + 0x10,*(undefined8 *)StringLiteral_137);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          uVar11 = FUN_0279df28(0);
          goto LAB_028044bc;
        case 0x30008:
          lVar16 = FUN_013b3bbc(param_5 + 0x10,*(undefined8 *)StringLiteral_137);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          uVar11 = UnityEngine_XR_XRInputSubsystem__GetSupportedTrackingOriginModes(0);
          *(undefined4 *)(lVar16 + 0x40) = uVar11;
          break;
        case 0x30009:
          lVar16 = FUN_013b3bbc(param_5 + 0x10,*(undefined8 *)StringLiteral_137);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          uVar11 = FUN_0279e178(0);
          *(undefined4 *)(lVar16 + 0x44) = uVar11;
          break;
        default:
          goto switchD_0280326c_default;
        }
      }
    }
  }
  else {
    if (param_6 < 0x50004) {
      switch(param_6) {
      case 0x40000:
        goto switchD_02803088_caseD_40000;
      case 0x40001:
        param_5 = param_5 + 0x28;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279c594(0);
        *(undefined4 *)(lVar16 + 0x70) = uVar11;
        *(undefined4 *)(lVar16 + 0x74) = param_2;
        *(undefined4 *)(lVar16 + 0x78) = param_3;
        *(undefined4 *)(lVar16 + 0x7c) = param_4;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar3);
        uVar11 = FUN_0279c4a0(0);
        *(undefined4 *)(lVar16 + 0x60) = uVar11;
        *(undefined4 *)(lVar16 + 100) = param_2;
        *(undefined4 *)(lVar16 + 0x68) = param_3;
        *(undefined4 *)(lVar16 + 0x6c) = param_4;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar3);
        uVar11 = FUN_0279c1c8(0);
        *(undefined4 *)(lVar16 + 0x30) = uVar11;
        *(undefined4 *)(lVar16 + 0x34) = param_2;
        *(undefined4 *)(lVar16 + 0x38) = param_3;
        *(undefined4 *)(lVar16 + 0x3c) = param_4;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar3);
LAB_02803820:
        uVar11 = FUN_0279c3ac(0);
        *(undefined4 *)(lVar16 + 0x50) = uVar11;
        *(undefined4 *)(lVar16 + 0x54) = param_2;
        *(undefined4 *)(lVar16 + 0x58) = param_3;
        *(undefined4 *)(lVar16 + 0x5c) = param_4;
        return;
      case 0x40002:
        param_5 = param_5 + 0x28;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar14 = FUN_0279c610(0);
        *(undefined8 *)(lVar16 + 0x80) = uVar14;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar3);
        uVar14 = FUN_0279c688(0);
        *(undefined8 *)(lVar16 + 0x88) = uVar14;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar3);
        uVar14 = FUN_0279c2bc(0);
        *(undefined8 *)(lVar16 + 0x48) = uVar14;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar3);
        break;
      case 0x40003:
        param_5 = param_5 + 8;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_9770);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279c700(0);
        *(undefined4 *)(lVar16 + 0x18) = uVar11;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar9);
        uVar11 = FUN_0279c51c(0);
        *(undefined4 *)(lVar16 + 0x14) = uVar11;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar9);
        uVar11 = FUN_0279c334(0);
        *(undefined4 *)(lVar16 + 0xc) = uVar11;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar9);
        goto LAB_02803ae0;
      case 0x40004:
        param_5 = param_5 + 8;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_9770);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279ca58(0);
        *(undefined4 *)(lVar16 + 0x34) = uVar11;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar9);
        uVar11 = FUN_0279cad0(0);
        *(undefined4 *)(lVar16 + 0x38) = uVar11;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar9);
        goto LAB_02803be4;
      case 0x40005:
        param_5 = param_5 + 8;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_9770);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar14 = FUN_0279cf78(0);
        *(undefined8 *)(lVar16 + 0x6c) = uVar14;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar9);
        uVar14 = FUN_0279cf00(0);
        *(undefined8 *)(lVar16 + 100) = uVar14;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar9);
        uVar14 = FUN_0279ce10(0);
        *(undefined8 *)(lVar16 + 0x54) = uVar14;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar9);
        goto LAB_02803dac;
      case 0x40006:
        param_5 = param_5 + 8;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_9770);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar14 = FUN_0279d428(0);
        *(undefined8 *)(lVar16 + 0xac) = uVar14;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar9);
        uVar14 = FUN_0279d3b0(0);
        *(undefined8 *)(lVar16 + 0xa4) = uVar14;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar9);
        uVar14 = FUN_0279d2c0(0);
        *(undefined8 *)(lVar16 + 0x94) = uVar14;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar9);
        goto LAB_02803f44;
      case 0x40007:
        lVar16 = param_5 + 0x20;
        puVar13 = (undefined8 *)FUN_013b3bbc(lVar16,*(undefined8 *)PTR_DAT_033f1db0);
        uVar14 = *puVar13;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_0279d890(0);
        FUN_01146194(uVar14,uVar17,*(undefined8 *)puVar7);
        lVar15 = FUN_013b3bbc(lVar16,*(undefined8 *)puVar1);
        uVar17 = *(undefined8 *)(lVar15 + 8);
        uVar14 = FUN_0279d908(0);
        FUN_01146194(uVar17,uVar14,*(undefined8 *)puVar7);
        lVar15 = FUN_013b3bbc(lVar16,*(undefined8 *)puVar1);
        uVar17 = *(undefined8 *)(lVar15 + 0x10);
        uVar14 = FUN_0279d980(0);
        FUN_01146194(uVar17,uVar14,*(undefined8 *)puVar4);
        lVar16 = FUN_013b3bbc(lVar16,*(undefined8 *)puVar1);
        uVar14 = *(undefined8 *)(lVar16 + 0x18);
LAB_02803a00:
        uVar17 = FUN_0279d9f8(0);
        uVar18 = *(undefined8 *)puVar5;
LAB_02803a0c:
        FUN_01146194(uVar14,uVar17,uVar18);
        *(undefined8 *)(param_5 + 0x50) = 0;
        return;
      case 0x40008:
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = UnityEngine_XR_XRInputSubsystem__remove_trackingOriginUpdated(0);
        *(undefined4 *)(lVar16 + 0x68) = uVar11;
        *(undefined4 *)(lVar16 + 0x6c) = param_2;
        *(undefined4 *)(lVar16 + 0x70) = param_3;
        *(undefined4 *)(lVar16 + 0x74) = param_4;
        lVar16 = FUN_013b3bbc(param_5,*(undefined8 *)puVar10);
        goto LAB_028042a8;
      default:
        switch(param_6) {
        case 0x50000:
          puVar13 = (undefined8 *)
                    FUN_013b3bbc(param_5 + 0x18,
                                 *(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_get_Name__
                                );
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          FUN_0279d590(&local_a0,0);
          goto LAB_02803230;
        case 0x50001:
          lVar16 = FUN_013b3bbc(param_5 + 0x18,
                                *(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_get_Name__)
          ;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          auVar19 = FUN_0279d618(0);
          *(undefined1 (*) [16])(lVar16 + 0x18) = auVar19;
          break;
        case 0x50002:
          lVar16 = FUN_013b3bbc(param_5 + 0x18,
                                *(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_get_Name__)
          ;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          FUN_0279d808(&local_a0,0);
          *(undefined4 *)(lVar16 + 0x38) = local_90;
          *(ulong *)(lVar16 + 0x30) = CONCAT44(uStack_94,uStack_98);
          *(undefined8 *)(lVar16 + 0x28) = local_a0;
          break;
        case 0x50003:
          lVar16 = FUN_013b3bbc(param_5 + 0x18,
                                *(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_get_Name__)
          ;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar8);
          }
          FUN_0279da70(&local_a0,0);
          *(ulong *)(lVar16 + 0x4c) = CONCAT44(uStack_8c,local_90);
          *(ulong *)(lVar16 + 0x44) = CONCAT44(uStack_94,uStack_98);
          *(undefined8 *)(lVar16 + 0x3c) = local_a0;
          break;
        default:
switchD_0280326c_default:
          local_80[0] = param_6;
          uVar14 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__
                                      ,local_80);
          uVar14 = FUN_015f6780(*(undefined8 *)puVar2,uVar14,0);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar6);
          }
          FUN_02661df4(uVar14,0);
          return;
        }
        goto switchD_02803088_caseD_40000;
      }
    }
    else {
      switch(param_6) {
      case 0x70000:
        puVar12 = (undefined4 *)
                  FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279c0cc(0);
        goto LAB_02803168;
      case 0x70001:
        lVar16 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        FUN_0279c148(&local_a0,0);
        *(ulong *)(lVar16 + 0x18) = CONCAT44(uStack_94,uStack_98);
        *(undefined8 *)(lVar16 + 0x10) = local_a0;
        *(ulong *)(lVar16 + 0x28) = CONCAT44(uStack_84,uStack_88);
        *(ulong *)(lVar16 + 0x20) = CONCAT44(uStack_8c,local_90);
        return;
      case 0x70002:
        lVar16 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279c1c8(0);
        *(undefined4 *)(lVar16 + 0x30) = uVar11;
        *(undefined4 *)(lVar16 + 0x34) = param_2;
        *(undefined4 *)(lVar16 + 0x38) = param_3;
        *(undefined4 *)(lVar16 + 0x3c) = param_4;
        return;
      case 0x70003:
        lVar16 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        break;
      case 0x70004:
        lVar16 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar14 = FUN_0279c2bc(0);
        *(undefined8 *)(lVar16 + 0x48) = uVar14;
        return;
      case 0x70005:
        lVar16 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        goto LAB_02803820;
      case 0x70006:
        lVar16 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279c4a0(0);
        *(undefined4 *)(lVar16 + 0x60) = uVar11;
        *(undefined4 *)(lVar16 + 100) = param_2;
        *(undefined4 *)(lVar16 + 0x68) = param_3;
        *(undefined4 *)(lVar16 + 0x6c) = param_4;
        return;
      case 0x70007:
        lVar16 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279c594(0);
        *(undefined4 *)(lVar16 + 0x70) = uVar11;
        *(undefined4 *)(lVar16 + 0x74) = param_2;
        *(undefined4 *)(lVar16 + 0x78) = param_3;
        *(undefined4 *)(lVar16 + 0x7c) = param_4;
        return;
      case 0x70008:
        lVar16 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar14 = FUN_0279c610(0);
        *(undefined8 *)(lVar16 + 0x80) = uVar14;
        return;
      case 0x70009:
        lVar16 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar14 = FUN_0279c688(0);
        *(undefined8 *)(lVar16 + 0x88) = uVar14;
        return;
      case 0x7000a:
        lVar16 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279d1d0(0);
        *(undefined4 *)(lVar16 + 0x90) = uVar11;
        return;
      case 0x7000b:
        lVar16 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar8);
        }
        uVar11 = FUN_0279d248(0);
        *(undefined4 *)(lVar16 + 0x94) = uVar11;
        return;
      default:
        switch(param_6) {
        case 0x60000:
          puVar13 = (undefined8 *)FUN_013b3bbc(param_5 + 0x20,*(undefined8 *)PTR_DAT_033f1db0);
          uVar14 = *puVar13;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_0279d890(0);
          break;
        case 0x60001:
          lVar16 = FUN_013b3bbc(param_5 + 0x20,*(undefined8 *)PTR_DAT_033f1db0);
          uVar14 = *(undefined8 *)(lVar16 + 8);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_0279d908(0);
          break;
        case 0x60002:
          lVar16 = FUN_013b3bbc(param_5 + 0x20,*(undefined8 *)PTR_DAT_033f1db0);
          uVar14 = *(undefined8 *)(lVar16 + 0x10);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_0279d980(0);
          uVar18 = *(undefined8 *)puVar4;
          goto LAB_02803a0c;
        case 0x60003:
          lVar16 = FUN_013b3bbc(param_5 + 0x20,*(undefined8 *)PTR_DAT_033f1db0);
          uVar14 = *(undefined8 *)(lVar16 + 0x18);
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          goto LAB_02803a00;
        default:
          goto switchD_0280326c_default;
        }
        uVar18 = *(undefined8 *)puVar7;
        goto LAB_02803a0c;
      }
    }
    uVar14 = FUN_0279c244(0);
LAB_02804174:
    *(undefined8 *)(lVar16 + 0x40) = uVar14;
  }
switchD_02803088_caseD_40000:
  return;
}


