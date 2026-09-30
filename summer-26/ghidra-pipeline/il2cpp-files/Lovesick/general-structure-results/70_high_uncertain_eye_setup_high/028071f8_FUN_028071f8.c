/*
FUNCTION_NAME: FUN_028071f8
ENTRY_POINT: 028071f8
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


void FUN_028071f8(long param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((DAT_03788b4b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_3359);
    thunk_FUN_00d48444(StringLiteral_137);
    thunk_FUN_00d48444(StringLiteral_10902);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_114_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9770);
    thunk_FUN_00d48444(Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f2b10);
    DAT_03788b4b = 1;
  }
  puVar6 = StringLiteral_9770;
  puVar5 = StringLiteral_302;
  puVar4 = PTR_DAT_033f2b10;
  iVar2 = *param_2;
  if (param_2[1] == 4) {
    FUN_02802e88(param_1);
    goto LAB_028072ac;
  }
  pfVar1 = (float *)(param_2 + 2);
  if (0x20020 < iVar2) {
    switch(iVar2) {
    case 0x70000:
      uVar10 = *(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo;
      param_1 = param_1 + 0x28;
LAB_02807428:
      puVar9 = (undefined8 *)FUN_013b3bbc(param_1,uVar10);
      local_50 = *(undefined8 *)(param_2 + 4);
      uStack_58 = *(undefined8 *)(param_2 + 2);
      local_60 = *(undefined8 *)param_2;
      puVar9[1] = local_50;
      *puVar9 = uStack_58;
      break;
    case 0x70001:
      lVar12 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      uVar11 = FUN_0169d41c(pfVar1,0);
      if ((uVar11 & 1) == 0) {
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        uVar10 = System_Attribute__IsDefined(pfVar1,0);
        FUN_0281c984(&local_60,uVar10,0);
        uStack_78 = uStack_58;
        local_80 = local_60;
        uStack_68 = uStack_48;
        uStack_70 = local_50;
      }
      *(undefined8 *)(lVar12 + 0x18) = uStack_78;
      *(undefined8 *)(lVar12 + 0x10) = local_80;
      *(undefined8 *)(lVar12 + 0x28) = uStack_68;
      *(undefined8 *)(lVar12 + 0x20) = uStack_70;
      break;
    case 0x70002:
      lVar12 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      local_50 = *(undefined8 *)(param_2 + 4);
      uStack_58 = *(undefined8 *)(param_2 + 2);
      local_60 = *(undefined8 *)param_2;
      *(undefined8 *)(lVar12 + 0x38) = local_50;
      *(undefined8 *)(lVar12 + 0x30) = uStack_58;
      break;
    case 0x70003:
      uVar10 = *(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo;
      param_1 = param_1 + 0x28;
      goto LAB_028079b0;
    case 0x70004:
      lVar12 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(param_2 + 2);
      break;
    case 0x70005:
      lVar12 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      local_50 = *(undefined8 *)(param_2 + 4);
      uStack_58 = *(undefined8 *)(param_2 + 2);
      local_60 = *(undefined8 *)param_2;
      *(undefined8 *)(lVar12 + 0x58) = local_50;
      *(undefined8 *)(lVar12 + 0x50) = uStack_58;
      break;
    case 0x70006:
      lVar12 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      local_50 = *(undefined8 *)(param_2 + 4);
      uStack_58 = *(undefined8 *)(param_2 + 2);
      local_60 = *(undefined8 *)param_2;
      *(undefined8 *)(lVar12 + 0x68) = local_50;
      *(undefined8 *)(lVar12 + 0x60) = uStack_58;
      break;
    case 0x70007:
      lVar12 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      local_50 = *(undefined8 *)(param_2 + 4);
      uStack_58 = *(undefined8 *)(param_2 + 2);
      local_60 = *(undefined8 *)param_2;
      *(undefined8 *)(lVar12 + 0x78) = local_50;
      *(undefined8 *)(lVar12 + 0x70) = uStack_58;
      break;
    case 0x70008:
      lVar12 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      *(undefined8 *)(lVar12 + 0x80) = *(undefined8 *)(param_2 + 2);
      break;
    case 0x70009:
      lVar12 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      *(undefined8 *)(lVar12 + 0x88) = *(undefined8 *)(param_2 + 2);
      break;
    case 0x7000a:
      lVar12 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      *(float *)(lVar12 + 0x90) = *pfVar1;
      break;
    case 0x7000b:
      lVar12 = FUN_013b3bbc(param_1 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar12 + 0x94) = iVar2;
      break;
    default:
      switch(iVar2) {
      case 0x30001:
        lVar12 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
        fVar13 = -0.0;
        if (*pfVar1 != INFINITY) {
          fVar13 = (float)(int)*pfVar1;
        }
        goto LAB_02807b00;
      case 0x30002:
        lVar12 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
        local_50 = *(undefined8 *)(param_2 + 4);
        uStack_58 = *(undefined8 *)(param_2 + 2);
        local_60 = *(undefined8 *)param_2;
        *(undefined8 *)(lVar12 + 0x24) = local_50;
        *(undefined8 *)(lVar12 + 0x1c) = uStack_58;
        break;
      case 0x30003:
        lVar12 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
        iVar2 = -0x80000000;
        if (*pfVar1 != INFINITY) {
          iVar2 = (int)*pfVar1;
        }
        *(int *)(lVar12 + 0x2c) = iVar2;
        break;
      case 0x30004:
        uVar10 = *(undefined8 *)StringLiteral_137;
        param_1 = param_1 + 0x10;
        goto LAB_02807b7c;
      case 0x30005:
        lVar12 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
        fVar13 = -0.0;
        if (*pfVar1 != INFINITY) {
          fVar13 = (float)(int)*pfVar1;
        }
        goto LAB_02807988;
      case 0x30006:
        lVar12 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
        fVar13 = -0.0;
        if (*pfVar1 != INFINITY) {
          fVar13 = (float)(int)*pfVar1;
        }
        goto LAB_028079a0;
      case 0x30007:
        uVar10 = *(undefined8 *)StringLiteral_137;
        param_1 = param_1 + 0x10;
        goto LAB_02807bac;
      case 0x30008:
        lVar12 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
        iVar2 = -0x80000000;
        if (*pfVar1 != INFINITY) {
          iVar2 = (int)*pfVar1;
        }
        *(int *)(lVar12 + 0x40) = iVar2;
        break;
      case 0x30009:
        lVar12 = FUN_013b3bbc(param_1 + 0x10,*(undefined8 *)StringLiteral_137);
        iVar2 = -0x80000000;
        if (*pfVar1 != INFINITY) {
          iVar2 = (int)*pfVar1;
        }
        *(int *)(lVar12 + 0x44) = iVar2;
        break;
      default:
        goto switchD_028073c4_default;
      }
    }
    goto LAB_028072ac;
  }
  switch(iVar2) {
  case 0x20000:
    piVar7 = (int *)FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    iVar2 = -0x80000000;
    if ((float)param_2[2] != INFINITY) {
      iVar2 = (int)(float)param_2[2];
    }
    *piVar7 = iVar2;
    if (param_2[1] == 2) {
      puVar8 = (undefined4 *)FUN_013b3bbc(param_1 + 8,*(undefined8 *)puVar6);
      *puVar8 = 0;
    }
    break;
  case 0x20001:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    iVar2 = -0x80000000;
    if ((float)param_2[2] != INFINITY) {
      iVar2 = (int)(float)param_2[2];
    }
    *(int *)(lVar12 + 4) = iVar2;
    if (param_2[1] == 2) {
      lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)puVar6);
      *(undefined4 *)(lVar12 + 4) = 0;
    }
    break;
  case 0x20002:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    iVar2 = -0x80000000;
    if ((float)param_2[2] != INFINITY) {
      iVar2 = (int)(float)param_2[2];
    }
    *(int *)(lVar12 + 8) = iVar2;
    if (param_2[1] == 2) {
      lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)puVar6);
      *(undefined4 *)(lVar12 + 8) = 0;
    }
    break;
  case 0x20003:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(float *)(lVar12 + 0xc) = *pfVar1;
    break;
  case 0x20004:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(float *)(lVar12 + 0x10) = *pfVar1;
    break;
  case 0x20005:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(float *)(lVar12 + 0x14) = *pfVar1;
    break;
  case 0x20006:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    fVar13 = *pfVar1;
LAB_02807b00:
    *(float *)(lVar12 + 0x18) = fVar13;
    break;
  case 0x20007:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0x1c) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x20008:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    iVar2 = -0x80000000;
    if ((float)param_2[2] != INFINITY) {
      iVar2 = (int)(float)param_2[2];
    }
    *(int *)(lVar12 + 0x24) = iVar2;
    if (param_2[1] == 3) {
      lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)puVar6);
      *(undefined4 *)(lVar12 + 0x24) = 1;
    }
    break;
  case 0x20009:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x2000a:
    uVar10 = *(undefined8 *)StringLiteral_9770;
    param_1 = param_1 + 8;
LAB_02807b7c:
    lVar12 = FUN_013b3bbc(param_1,uVar10);
    iVar2 = -0x80000000;
    if (*pfVar1 != INFINITY) {
      iVar2 = (int)*pfVar1;
    }
    *(int *)(lVar12 + 0x30) = iVar2;
    break;
  case 0x2000b:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    fVar13 = *pfVar1;
LAB_02807988:
    *(float *)(lVar12 + 0x34) = fVar13;
    break;
  case 0x2000c:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    fVar13 = *pfVar1;
LAB_028079a0:
    *(float *)(lVar12 + 0x38) = fVar13;
    break;
  case 0x2000d:
    uVar10 = *(undefined8 *)StringLiteral_9770;
    param_1 = param_1 + 8;
LAB_02807bac:
    lVar12 = FUN_013b3bbc(param_1,uVar10);
    iVar2 = -0x80000000;
    if (*pfVar1 != INFINITY) {
      iVar2 = (int)*pfVar1;
    }
    *(int *)(lVar12 + 0x3c) = iVar2;
    break;
  case 0x2000e:
    uVar10 = *(undefined8 *)StringLiteral_9770;
    param_1 = param_1 + 8;
LAB_028079b0:
    lVar12 = FUN_013b3bbc(param_1,uVar10);
    *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x2000f:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    iVar2 = -0x80000000;
    if (*pfVar1 != INFINITY) {
      iVar2 = (int)*pfVar1;
    }
    *(int *)(lVar12 + 0x48) = iVar2;
    break;
  case 0x20010:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0x4c) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x20011:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0x54) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x20012:
    uVar10 = *(undefined8 *)StringLiteral_9770;
    param_1 = param_1 + 8;
LAB_02807c24:
    lVar12 = FUN_013b3bbc(param_1,uVar10);
    *(undefined8 *)(lVar12 + 0x5c) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x20013:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 100) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x20014:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0x6c) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x20015:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0x74) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x20016:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0x7c) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x20017:
    uVar10 = *(undefined8 *)StringLiteral_9770;
    param_1 = param_1 + 8;
LAB_02807c9c:
    lVar12 = FUN_013b3bbc(param_1,uVar10);
    *(undefined8 *)(lVar12 + 0x84) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x20018:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0x8c) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x20019:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0x94) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x2001a:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0x9c) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x2001b:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0xa4) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x2001c:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0xac) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x2001d:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    iVar2 = -0x80000000;
    if (*pfVar1 != INFINITY) {
      iVar2 = (int)*pfVar1;
    }
    *(int *)(lVar12 + 0xb4) = iVar2;
    break;
  case 0x2001e:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0xb8) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x2001f:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 0xc0) = *(undefined8 *)(param_2 + 2);
    break;
  case 0x20020:
    lVar12 = FUN_013b3bbc(param_1 + 8,*(undefined8 *)StringLiteral_9770);
    *(undefined8 *)(lVar12 + 200) = *(undefined8 *)(param_2 + 2);
    break;
  default:
    switch(iVar2) {
    case 0x10000:
      uVar10 = *(undefined8 *)StringLiteral_10902;
      goto LAB_02807428;
    case 0x10001:
      lVar12 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(param_2 + 2);
      break;
    case 0x10002:
      lVar12 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(param_2 + 2);
      break;
    default:
switchD_028073c4_default:
      local_60 = CONCAT44(local_60._4_4_,iVar2);
      uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                   Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__
                                  ,&local_60);
      uVar10 = FUN_015f6780(*(undefined8 *)puVar4,uVar10,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      FUN_02661df4(uVar10,0);
      break;
    case 0x10004:
      lVar12 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      uVar11 = FUN_0169d41c(pfVar1,0);
      plVar14 = (long *)0x0;
      if ((uVar11 & 1) != 0) {
        plVar14 = (long *)System_Attribute__IsDefined(pfVar1,0);
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x0;
        }
        else if (*plVar14 != *(long *)StringLiteral_3359) {
          plVar14 = (long *)0x0;
        }
      }
      *(long **)(lVar12 + 0x40) = plVar14;
      break;
    case 0x10005:
      lVar12 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      uVar11 = FUN_0169d41c(pfVar1,0);
      auVar15 = ZEXT816(0);
      if ((uVar11 & 1) != 0) {
        uVar10 = System_Attribute__IsDefined(pfVar1,0);
        auVar15 = FUN_02819a90(uVar10,0);
      }
      *(undefined1 (*) [16])(lVar12 + 0x48) = auVar15;
      break;
    case 0x10006:
      lVar12 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar12 + 0x58) = iVar2;
      break;
    case 0x10007:
      uVar10 = *(undefined8 *)StringLiteral_10902;
      goto LAB_02807c24;
    case 0x10008:
      lVar12 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar12 + 100) = iVar2;
      break;
    case 0x10009:
      lVar12 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      local_50 = *(undefined8 *)(param_2 + 4);
      uStack_58 = *(undefined8 *)(param_2 + 2);
      local_60 = *(undefined8 *)param_2;
      *(undefined8 *)(lVar12 + 0x70) = local_50;
      *(undefined8 *)(lVar12 + 0x68) = uStack_58;
      break;
    case 0x1000a:
      lVar12 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      *(float *)(lVar12 + 0x78) = *pfVar1;
      break;
    case 0x1000b:
      lVar12 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar12 + 0x7c) = iVar2;
      break;
    case 0x1000c:
      lVar12 = FUN_013b3bbc(param_1,*(undefined8 *)StringLiteral_10902);
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar12 + 0x80) = iVar2;
      break;
    case 0x1000d:
      uVar10 = *(undefined8 *)StringLiteral_10902;
      goto LAB_02807c9c;
    }
  }
LAB_028072ac:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


