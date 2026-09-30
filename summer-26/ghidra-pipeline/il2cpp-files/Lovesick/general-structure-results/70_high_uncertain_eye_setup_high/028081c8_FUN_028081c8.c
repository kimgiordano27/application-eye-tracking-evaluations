/*
FUNCTION_NAME: FUN_028081c8
ENTRY_POINT: 028081c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_13
*/


void FUN_028081c8(long param_1,int param_2,long param_3)

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
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int local_34;
  
  if ((DAT_03788b4f & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_Collections_Generic_Stack<InteriorNode>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_ProbeVolumeAsset>_Remove__
                      );
    thunk_FUN_00d48444(Method_MotelSunDial_<SetToSavedState>b__15_0__);
    thunk_FUN_00d48444(Method_System_IO_MemoryStream_Write__);
    thunk_FUN_00d48444(Mono_Security_X509_X509Chain_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_1__
                      );
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
    DAT_03788b4f = 1;
  }
  puVar11 = (undefined8 *)StringLiteral_2646;
  puVar10 = StringLiteral_302;
  puVar9 = Method_UnityEngine_InputSystem_EnhancedTouch_Touch_<>c_<SaveAndResetState>b__80_1__;
  puVar8 = Method_MotelSunDial_<SetToSavedState>b__15_0__;
  puVar7 = Method_System_IO_MemoryStream_Write__;
  puVar6 = Method_Sirenix_Serialization_GenericCollectionFormatter_CanFormat__;
  puVar5 = Method_UnityEngine_Rendering_Universal_Internal_DepthNormalOnlyPass_OnCameraCleanup__;
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_ProbeVolumeAsset>_Remove__;
  puVar3 = Mono_Security_X509_X509Chain_TypeInfo;
  puVar2 = System_Collections_Generic_Stack<InteriorNode>_TypeInfo;
  puVar1 = PTR_DAT_033f2b10;
  if (param_2 < 0x3000a) {
    switch(param_2) {
    case 0x20000:
      puVar12 = (undefined4 *)FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      puVar13 = (undefined4 *)FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *puVar12 = *puVar13;
      break;
    case 0x20001:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined4 *)(lVar16 + 4) = *(undefined4 *)(lVar17 + 4);
      break;
    case 0x20002:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined4 *)(lVar16 + 8) = *(undefined4 *)(lVar17 + 8);
      break;
    case 0x20003:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined4 *)(lVar16 + 0xc) = *(undefined4 *)(lVar17 + 0xc);
      break;
    case 0x20004:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined4 *)(lVar16 + 0x10) = *(undefined4 *)(lVar17 + 0x10);
      break;
    case 0x20005:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined4 *)(lVar16 + 0x14) = *(undefined4 *)(lVar17 + 0x14);
      break;
    case 0x20006:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      uVar15 = *(undefined8 *)puVar7;
      param_3 = param_3 + 8;
LAB_02808ee4:
      lVar17 = FUN_013b3b78(param_3,uVar15);
      *(undefined4 *)(lVar16 + 0x18) = *(undefined4 *)(lVar17 + 0x18);
      break;
    case 0x20007:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0x1c) = *(undefined8 *)(lVar17 + 0x1c);
      break;
    case 0x20008:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined4 *)(lVar16 + 0x24) = *(undefined4 *)(lVar17 + 0x24);
      break;
    case 0x20009:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar17 + 0x28);
      break;
    case 0x2000a:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      uVar15 = *(undefined8 *)puVar7;
      param_3 = param_3 + 8;
LAB_02808f5c:
      lVar17 = FUN_013b3b78(param_3,uVar15);
      *(undefined4 *)(lVar16 + 0x30) = *(undefined4 *)(lVar17 + 0x30);
      break;
    case 0x2000b:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      uVar15 = *(undefined8 *)puVar7;
      param_3 = param_3 + 8;
LAB_02808f84:
      lVar17 = FUN_013b3b78(param_3,uVar15);
      *(undefined4 *)(lVar16 + 0x34) = *(undefined4 *)(lVar17 + 0x34);
      break;
    case 0x2000c:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      uVar15 = *(undefined8 *)puVar7;
      param_3 = param_3 + 8;
LAB_02808fac:
      lVar17 = FUN_013b3b78(param_3,uVar15);
      uVar18 = *(undefined4 *)(lVar17 + 0x38);
LAB_02808fb4:
      *(undefined4 *)(lVar16 + 0x38) = uVar18;
      return;
    case 0x2000d:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      uVar15 = *(undefined8 *)puVar7;
      param_3 = param_3 + 8;
LAB_02808fd4:
      lVar17 = FUN_013b3b78(param_3,uVar15);
      *(undefined4 *)(lVar16 + 0x3c) = *(undefined4 *)(lVar17 + 0x3c);
      break;
    case 0x2000e:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      uVar15 = *(undefined8 *)puVar7;
      param_3 = param_3 + 8;
      goto LAB_02808d54;
    case 0x2000f:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined4 *)(lVar16 + 0x48) = *(undefined4 *)(lVar17 + 0x48);
      break;
    case 0x20010:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      uVar15 = *(undefined8 *)(lVar17 + 0x4c);
LAB_02808a44:
      *(undefined8 *)(lVar16 + 0x4c) = uVar15;
      break;
    case 0x20011:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0x54) = *(undefined8 *)(lVar17 + 0x54);
      break;
    case 0x20012:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      uVar15 = *(undefined8 *)puVar7;
      param_3 = param_3 + 8;
LAB_02808dcc:
      lVar17 = FUN_013b3b78(param_3,uVar15);
      *(undefined8 *)(lVar16 + 0x5c) = *(undefined8 *)(lVar17 + 0x5c);
      break;
    case 0x20013:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 100) = *(undefined8 *)(lVar17 + 100);
      break;
    case 0x20014:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0x6c) = *(undefined8 *)(lVar17 + 0x6c);
      break;
    case 0x20015:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0x74) = *(undefined8 *)(lVar17 + 0x74);
      break;
    case 0x20016:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0x7c) = *(undefined8 *)(lVar17 + 0x7c);
      break;
    case 0x20017:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      uVar15 = *(undefined8 *)puVar7;
      param_3 = param_3 + 8;
LAB_02808ebc:
      lVar17 = FUN_013b3b78(param_3,uVar15);
      *(undefined8 *)(lVar16 + 0x84) = *(undefined8 *)(lVar17 + 0x84);
      break;
    case 0x20018:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0x8c) = *(undefined8 *)(lVar17 + 0x8c);
      break;
    case 0x20019:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0x94) = *(undefined8 *)(lVar17 + 0x94);
      break;
    case 0x2001a:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0x9c) = *(undefined8 *)(lVar17 + 0x9c);
      break;
    case 0x2001b:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0xa4) = *(undefined8 *)(lVar17 + 0xa4);
      break;
    case 0x2001c:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0xac) = *(undefined8 *)(lVar17 + 0xac);
      break;
    case 0x2001d:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined4 *)(lVar16 + 0xb4) = *(undefined4 *)(lVar17 + 0xb4);
      break;
    case 0x2001e:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0xb8) = *(undefined8 *)(lVar17 + 0xb8);
      break;
    case 0x2001f:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 0xc0) = *(undefined8 *)(lVar17 + 0xc0);
      break;
    case 0x20020:
      lVar16 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
      lVar17 = FUN_013b3b78(param_3 + 8,*(undefined8 *)puVar7);
      *(undefined8 *)(lVar16 + 200) = *(undefined8 *)(lVar17 + 200);
      break;
    default:
      switch(param_2) {
      case 0x10000:
        puVar11 = (undefined8 *)FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        uVar15 = *(undefined8 *)puVar9;
        goto LAB_028083d8;
      case 0x10001:
        puVar11 = (undefined8 *)FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        lVar16 = FUN_013b3b78(param_3,*(undefined8 *)puVar9);
        uVar15 = *(undefined8 *)(lVar16 + 0x10);
        goto LAB_02808cd4;
      case 0x10002:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        lVar17 = FUN_013b3b78(param_3,*(undefined8 *)puVar9);
        *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(lVar17 + 0x18);
        break;
      case 0x10003:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        lVar17 = FUN_013b3b78(param_3,*(undefined8 *)puVar9);
        uVar19 = *(undefined8 *)(lVar17 + 0x20);
        uVar15 = *(undefined8 *)(lVar17 + 0x30);
        uVar18 = *(undefined4 *)(lVar17 + 0x38);
        *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar17 + 0x28);
        *(undefined8 *)(lVar16 + 0x20) = uVar19;
        *(undefined8 *)(lVar16 + 0x30) = uVar15;
        *(undefined4 *)(lVar16 + 0x38) = uVar18;
        break;
      case 0x10004:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        uVar15 = *(undefined8 *)puVar9;
        goto LAB_02808d54;
      case 0x10005:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        lVar17 = FUN_013b3b78(param_3,*(undefined8 *)puVar9);
        uVar15 = *(undefined8 *)(lVar17 + 0x48);
        *(undefined8 *)(lVar16 + 0x50) = *(undefined8 *)(lVar17 + 0x50);
        *(undefined8 *)(lVar16 + 0x48) = uVar15;
        break;
      case 0x10006:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        lVar17 = FUN_013b3b78(param_3,*(undefined8 *)puVar9);
        *(undefined4 *)(lVar16 + 0x58) = *(undefined4 *)(lVar17 + 0x58);
        break;
      case 0x10007:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        uVar15 = *(undefined8 *)puVar9;
        goto LAB_02808dcc;
      case 0x10008:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        lVar17 = FUN_013b3b78(param_3,*(undefined8 *)puVar9);
        *(undefined4 *)(lVar16 + 100) = *(undefined4 *)(lVar17 + 100);
        break;
      case 0x10009:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        lVar17 = FUN_013b3b78(param_3,*(undefined8 *)puVar9);
        uVar15 = *(undefined8 *)(lVar17 + 0x68);
        *(undefined8 *)(lVar16 + 0x70) = *(undefined8 *)(lVar17 + 0x70);
        *(undefined8 *)(lVar16 + 0x68) = uVar15;
        break;
      case 0x1000a:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        lVar17 = FUN_013b3b78(param_3,*(undefined8 *)puVar9);
        *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar17 + 0x78);
        break;
      case 0x1000b:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        lVar17 = FUN_013b3b78(param_3,*(undefined8 *)puVar9);
        *(undefined4 *)(lVar16 + 0x7c) = *(undefined4 *)(lVar17 + 0x7c);
        break;
      case 0x1000c:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        lVar17 = FUN_013b3b78(param_3,*(undefined8 *)puVar9);
        *(undefined4 *)(lVar16 + 0x80) = *(undefined4 *)(lVar17 + 0x80);
        break;
      case 0x1000d:
        lVar16 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
        uVar15 = *(undefined8 *)puVar9;
        goto LAB_02808ebc;
      default:
        switch(param_2) {
        case 0x30000:
          puVar11 = (undefined8 *)FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
          uVar15 = *(undefined8 *)puVar3;
          param_3 = param_3 + 0x10;
          goto LAB_028084e4;
        case 0x30001:
          lVar16 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
          uVar15 = *(undefined8 *)puVar3;
          param_3 = param_3 + 0x10;
          goto LAB_02808ee4;
        case 0x30002:
          lVar16 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
          lVar17 = FUN_013b3b78(param_3 + 0x10,*(undefined8 *)puVar3);
          uVar15 = *(undefined8 *)(lVar17 + 0x1c);
          *(undefined8 *)(lVar16 + 0x24) = *(undefined8 *)(lVar17 + 0x24);
          *(undefined8 *)(lVar16 + 0x1c) = uVar15;
          break;
        case 0x30003:
          lVar16 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
          lVar17 = FUN_013b3b78(param_3 + 0x10,*(undefined8 *)puVar3);
          *(undefined4 *)(lVar16 + 0x2c) = *(undefined4 *)(lVar17 + 0x2c);
          break;
        case 0x30004:
          lVar16 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
          uVar15 = *(undefined8 *)puVar3;
          param_3 = param_3 + 0x10;
          goto LAB_02808f5c;
        case 0x30005:
          lVar16 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
          uVar15 = *(undefined8 *)puVar3;
          param_3 = param_3 + 0x10;
          goto LAB_02808f84;
        case 0x30006:
          lVar16 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
          uVar15 = *(undefined8 *)puVar3;
          param_3 = param_3 + 0x10;
          goto LAB_02808fac;
        case 0x30007:
          lVar16 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
          uVar15 = *(undefined8 *)puVar3;
          param_3 = param_3 + 0x10;
          goto LAB_02808fd4;
        case 0x30008:
          lVar16 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
          lVar17 = FUN_013b3b78(param_3 + 0x10,*(undefined8 *)puVar3);
          *(undefined4 *)(lVar16 + 0x40) = *(undefined4 *)(lVar17 + 0x40);
          break;
        case 0x30009:
          lVar16 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
          lVar17 = FUN_013b3b78(param_3 + 0x10,*(undefined8 *)puVar3);
          *(undefined4 *)(lVar16 + 0x44) = *(undefined4 *)(lVar17 + 0x44);
          break;
        default:
switchD_0280842c_default:
          local_34 = param_2;
          uVar15 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__
                                      ,&local_34);
          uVar15 = FUN_015f6780(*(undefined8 *)puVar1,uVar15,0);
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar10);
          }
          FUN_02661df4(uVar15,0);
          return;
        }
      }
    }
  }
  else {
    switch(param_2) {
    case 0x70000:
      puVar11 = (undefined8 *)
                FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      uVar15 = *(undefined8 *)puVar4;
      param_3 = param_3 + 0x28;
LAB_028083d8:
      puVar14 = (undefined8 *)FUN_013b3b78(param_3,uVar15);
      uVar15 = *puVar14;
      puVar11[1] = puVar14[1];
      *puVar11 = uVar15;
      return;
    case 0x70001:
      lVar16 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      lVar17 = FUN_013b3b78(param_3 + 0x28,*(undefined8 *)puVar4);
      uVar15 = *(undefined8 *)(lVar17 + 0x10);
      uVar20 = *(undefined8 *)(lVar17 + 0x28);
      uVar19 = *(undefined8 *)(lVar17 + 0x20);
      *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(lVar17 + 0x18);
      *(undefined8 *)(lVar16 + 0x10) = uVar15;
      *(undefined8 *)(lVar16 + 0x28) = uVar20;
      *(undefined8 *)(lVar16 + 0x20) = uVar19;
      return;
    case 0x70002:
      lVar16 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      lVar17 = FUN_013b3b78(param_3 + 0x28,*(undefined8 *)puVar4);
      uVar15 = *(undefined8 *)(lVar17 + 0x30);
      *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)(lVar17 + 0x38);
      *(undefined8 *)(lVar16 + 0x30) = uVar15;
      return;
    case 0x70003:
      lVar16 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      uVar15 = *(undefined8 *)puVar4;
      param_3 = param_3 + 0x28;
      break;
    case 0x70004:
      lVar16 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      lVar17 = FUN_013b3b78(param_3 + 0x28,*(undefined8 *)puVar4);
      *(undefined8 *)(lVar16 + 0x48) = *(undefined8 *)(lVar17 + 0x48);
      return;
    case 0x70005:
      lVar16 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      lVar17 = FUN_013b3b78(param_3 + 0x28,*(undefined8 *)puVar4);
      uVar15 = *(undefined8 *)(lVar17 + 0x50);
      *(undefined8 *)(lVar16 + 0x58) = *(undefined8 *)(lVar17 + 0x58);
      *(undefined8 *)(lVar16 + 0x50) = uVar15;
      return;
    case 0x70006:
      lVar16 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      lVar17 = FUN_013b3b78(param_3 + 0x28,*(undefined8 *)puVar4);
      uVar15 = *(undefined8 *)(lVar17 + 0x60);
      *(undefined8 *)(lVar16 + 0x68) = *(undefined8 *)(lVar17 + 0x68);
      *(undefined8 *)(lVar16 + 0x60) = uVar15;
      return;
    case 0x70007:
      lVar16 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      lVar17 = FUN_013b3b78(param_3 + 0x28,*(undefined8 *)puVar4);
      uVar15 = *(undefined8 *)(lVar17 + 0x70);
      *(undefined8 *)(lVar16 + 0x78) = *(undefined8 *)(lVar17 + 0x78);
      *(undefined8 *)(lVar16 + 0x70) = uVar15;
      return;
    case 0x70008:
      lVar16 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      lVar17 = FUN_013b3b78(param_3 + 0x28,*(undefined8 *)puVar4);
      *(undefined8 *)(lVar16 + 0x80) = *(undefined8 *)(lVar17 + 0x80);
      return;
    case 0x70009:
      lVar16 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      lVar17 = FUN_013b3b78(param_3 + 0x28,*(undefined8 *)puVar4);
      *(undefined8 *)(lVar16 + 0x88) = *(undefined8 *)(lVar17 + 0x88);
      return;
    case 0x7000a:
      lVar16 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      lVar17 = FUN_013b3b78(param_3 + 0x28,*(undefined8 *)puVar4);
      *(undefined4 *)(lVar16 + 0x90) = *(undefined4 *)(lVar17 + 0x90);
      return;
    case 0x7000b:
      lVar16 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      lVar17 = FUN_013b3b78(param_3 + 0x28,*(undefined8 *)puVar4);
      *(undefined4 *)(lVar16 + 0x94) = *(undefined4 *)(lVar17 + 0x94);
      return;
    default:
      switch(param_2) {
      case 0x50000:
        puVar11 = (undefined8 *)
                  FUN_013b3bbc(param_1 + 0x18,
                               *(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_get_Name__);
        uVar15 = *(undefined8 *)puVar8;
        param_3 = param_3 + 0x18;
LAB_028084e4:
        puVar14 = (undefined8 *)FUN_013b3b78(param_3,uVar15);
        uVar19 = *puVar14;
        uVar15 = puVar14[2];
        puVar11[1] = puVar14[1];
        *puVar11 = uVar19;
LAB_02808cd4:
        puVar11[2] = uVar15;
        return;
      case 0x50001:
        lVar16 = FUN_013b3bbc(param_1 + 0x18,
                              *(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_get_Name__);
        lVar17 = FUN_013b3b78(param_3 + 0x18,*(undefined8 *)puVar8);
        uVar15 = *(undefined8 *)(lVar17 + 0x18);
        *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar17 + 0x20);
        *(undefined8 *)(lVar16 + 0x18) = uVar15;
        return;
      case 0x50002:
        lVar16 = FUN_013b3bbc(param_1 + 0x18,
                              *(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_get_Name__);
        lVar17 = FUN_013b3b78(param_3 + 0x18,*(undefined8 *)puVar8);
        uVar15 = *(undefined8 *)(lVar17 + 0x28);
        uVar18 = *(undefined4 *)(lVar17 + 0x38);
        *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)(lVar17 + 0x30);
        *(undefined8 *)(lVar16 + 0x28) = uVar15;
        goto LAB_02808fb4;
      case 0x50003:
        lVar16 = FUN_013b3bbc(param_1 + 0x18,
                              *(undefined8 *)Method_System_Reflection_Emit_EnumBuilder_get_Name__);
        lVar17 = FUN_013b3b78(param_3 + 0x18,*(undefined8 *)puVar8);
        uVar19 = *(undefined8 *)(lVar17 + 0x3c);
        uVar15 = *(undefined8 *)(lVar17 + 0x4c);
        *(undefined8 *)(lVar16 + 0x44) = *(undefined8 *)(lVar17 + 0x44);
        *(undefined8 *)(lVar16 + 0x3c) = uVar19;
        break;
      default:
        switch(param_2) {
        case 0x60000:
          puVar14 = (undefined8 *)FUN_013b3bbc(param_1 + 0x20,*(undefined8 *)PTR_DAT_033f1db0);
          uVar19 = *puVar14;
          puVar14 = (undefined8 *)FUN_013b3b78(param_3 + 0x20,*(undefined8 *)puVar2);
          uVar15 = *puVar14;
          break;
        case 0x60001:
          lVar16 = FUN_013b3bbc(param_1 + 0x20,*(undefined8 *)PTR_DAT_033f1db0);
          uVar19 = *(undefined8 *)(lVar16 + 8);
          lVar16 = FUN_013b3b78(param_3 + 0x20,*(undefined8 *)puVar2);
          uVar15 = *(undefined8 *)(lVar16 + 8);
          break;
        case 0x60002:
          lVar16 = FUN_013b3bbc(param_1 + 0x20,*(undefined8 *)PTR_DAT_033f1db0);
          uVar19 = *(undefined8 *)(lVar16 + 0x10);
          lVar16 = FUN_013b3b78(param_3 + 0x20,*(undefined8 *)puVar2);
          uVar15 = *(undefined8 *)(lVar16 + 0x10);
          puVar11 = (undefined8 *)puVar5;
          break;
        case 0x60003:
          lVar16 = FUN_013b3bbc(param_1 + 0x20,*(undefined8 *)PTR_DAT_033f1db0);
          uVar19 = *(undefined8 *)(lVar16 + 0x18);
          lVar16 = FUN_013b3b78(param_3 + 0x20,*(undefined8 *)puVar2);
          uVar15 = *(undefined8 *)(lVar16 + 0x18);
          puVar11 = (undefined8 *)puVar6;
          break;
        default:
          goto switchD_0280842c_default;
        }
        FUN_01146194(uVar19,uVar15,*puVar11);
        *(undefined8 *)(param_1 + 0x50) = 0;
        return;
      }
      goto LAB_02808a44;
    }
LAB_02808d54:
    lVar17 = FUN_013b3b78(param_3,uVar15);
    *(undefined8 *)(lVar16 + 0x40) = *(undefined8 *)(lVar17 + 0x40);
  }
  return;
}


