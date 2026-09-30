/*
FUNCTION_NAME: FUN_02806028
ENTRY_POINT: 02806028
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_13
*/


void FUN_02806028(undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80 [4];
  
  if ((DAT_03788b4a & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_11202);
    thunk_FUN_00d48444(StringLiteral_137);
    thunk_FUN_00d48444(StringLiteral_10902);
    thunk_FUN_00d48444(PTR_DAT_033f1db0);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_EnumBuilder_get_Name__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_114_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9770);
    thunk_FUN_00d48444(Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__)
    ;
    thunk_FUN_00d48444(StringLiteral_6239);
    DAT_03788b4a = 1;
  }
  puVar6 = StringLiteral_9770;
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(param_6 + 0x48) != 0) {
    iVar7 = *(int *)(param_6 + 0x50);
    lVar1 = param_5 + 0x20;
    lVar2 = param_5 + 8;
    lVar3 = param_5 + 0x10;
    lVar4 = param_5 + 0x28;
    lVar5 = param_5 + 0x18;
    do {
      uVar9 = FUN_02802d5c(param_5,param_6,param_7);
      if ((uVar9 & 1) != 0) goto switchD_02806218_caseD_40000;
      if (iVar7 < 0x20021) {
        if (iVar7 < 1) {
          if (iVar7 == -1) {
            FUN_028045f4(param_5,param_6);
          }
          else if (iVar7 != 0) goto switchD_0280632c_default;
        }
        else {
          switch(iVar7) {
          case 0x20000:
            puVar12 = (undefined4 *)FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0279043c(param_6,0,0,0);
            *puVar12 = uVar8;
            break;
          case 0x20001:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0279043c(param_6,0,0,0);
            *(undefined4 *)(lVar13 + 4) = uVar8;
            break;
          case 0x20002:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0279043c(param_6,0,0,0);
            *(undefined4 *)(lVar13 + 8) = uVar8;
            break;
          case 0x20003:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0278d0a8(param_6,0,0);
            *(undefined4 *)(lVar13 + 0xc) = uVar8;
            break;
          case 0x20004:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0278d0a8(param_6,0,0);
            *(undefined4 *)(lVar13 + 0x10) = uVar8;
            break;
          case 0x20005:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0278d0a8(param_6,0,0);
            *(undefined4 *)(lVar13 + 0x14) = uVar8;
            break;
          case 0x20006:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0278d0a8(param_6,0,0);
            *(undefined4 *)(lVar13 + 0x18) = uVar8;
            break;
          case 0x20007:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x1c) = uVar10;
            break;
          case 0x20008:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0279043c(param_6,1,0,0);
            *(undefined4 *)(lVar13 + 0x24) = uVar8;
            break;
          case 0x20009:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x28) = uVar10;
            break;
          case 0x2000a:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = 3;
            goto LAB_02806ec8;
          case 0x2000b:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0278d0a8(param_6,0,0);
            *(undefined4 *)(lVar13 + 0x34) = uVar8;
            break;
          case 0x2000c:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0278d0a8(param_6,0,0);
            *(undefined4 *)(lVar13 + 0x38) = uVar8;
            break;
          case 0x2000d:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0279043c(param_6,0x11,0,0);
            goto LAB_02806f04;
          case 0x2000e:
            uVar10 = *(undefined8 *)puVar6;
            lVar13 = lVar2;
            goto LAB_02806aa8;
          case 0x2000f:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0279043c(param_6,5,0,0);
            *(undefined4 *)(lVar13 + 0x48) = uVar8;
            break;
          case 0x20010:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x4c) = uVar10;
            break;
          case 0x20011:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x54) = uVar10;
            break;
          case 0x20012:
            uVar10 = *(undefined8 *)puVar6;
            lVar13 = lVar2;
LAB_02806f14:
            lVar13 = FUN_013b3bbc(lVar13,uVar10);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x5c) = uVar10;
            break;
          case 0x20013:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 100) = uVar10;
            break;
          case 0x20014:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x6c) = uVar10;
            break;
          case 0x20015:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x74) = uVar10;
            break;
          case 0x20016:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x7c) = uVar10;
            break;
          case 0x20017:
            uVar10 = *(undefined8 *)puVar6;
            lVar13 = lVar2;
LAB_02807138:
            lVar13 = FUN_013b3bbc(lVar13,uVar10);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x84) = uVar10;
            break;
          case 0x20018:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x8c) = uVar10;
            break;
          case 0x20019:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x94) = uVar10;
            break;
          case 0x2001a:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0x9c) = uVar10;
            break;
          case 0x2001b:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0xa4) = uVar10;
            break;
          case 0x2001c:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0xac) = uVar10;
            break;
          case 0x2001d:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar8 = FUN_0279043c(param_6,9,0,0);
            *(undefined4 *)(lVar13 + 0xb4) = uVar8;
            break;
          case 0x2001e:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0xb8) = uVar10;
            break;
          case 0x2001f:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 0xc0) = uVar10;
            break;
          case 0x20020:
            lVar13 = FUN_013b3bbc(lVar2,*(undefined8 *)puVar6);
            uVar10 = FUN_0278cfac(param_6,0,0);
            *(undefined8 *)(lVar13 + 200) = uVar10;
            break;
          default:
            switch(iVar7) {
            case 0x10000:
              lVar13 = param_5;
              puVar11 = (undefined8 *)StringLiteral_10902;
              goto LAB_0280637c;
            case 0x10001:
              lVar13 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
              uVar10 = FUN_0278cfac(param_6,0,0);
              *(undefined8 *)(lVar13 + 0x10) = uVar10;
              break;
            case 0x10002:
              lVar13 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
              uVar10 = FUN_0278cfac(param_6,0,0);
              *(undefined8 *)(lVar13 + 0x18) = uVar10;
              break;
            case 0x10003:
              lVar13 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
              FUN_02791990(&local_a0,param_6,0,0);
              local_80[0] = local_a0;
              param_2 = CONCAT44(local_90,uStack_94);
              *(ulong *)(lVar13 + 0x28) = CONCAT44(uStack_94,uStack_98);
              *(undefined8 *)(lVar13 + 0x20) = local_a0;
              *(ulong *)(lVar13 + 0x34) = CONCAT44(uStack_88,uStack_8c);
              *(undefined8 *)(lVar13 + 0x2c) = param_2;
              break;
            case 0x10004:
              lVar13 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
              uVar10 = FUN_02790a6c(param_6,0,0);
              goto LAB_02806c68;
            case 0x10005:
              lVar13 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
              auVar14 = FUN_0279053c(param_6,0,0);
              *(undefined1 (*) [16])(lVar13 + 0x48) = auVar14;
              break;
            case 0x10006:
              lVar13 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
              uVar8 = FUN_0279043c(param_6,4,0,0);
              *(undefined4 *)(lVar13 + 0x58) = uVar8;
              break;
            case 0x10007:
              uVar10 = *(undefined8 *)StringLiteral_10902;
              lVar13 = param_5;
              goto LAB_02806f14;
            case 0x10008:
              lVar13 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
              uVar8 = FUN_0279043c(param_6,0xb,0,0);
              *(undefined4 *)(lVar13 + 100) = uVar8;
              break;
            case 0x10009:
              lVar13 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
              uVar8 = FUN_0278d5ec(param_6,0,0);
              *(undefined4 *)(lVar13 + 0x68) = uVar8;
              *(int *)(lVar13 + 0x6c) = (int)param_2;
              *(undefined4 *)(lVar13 + 0x70) = param_3;
              *(undefined4 *)(lVar13 + 0x74) = param_4;
              break;
            case 0x1000a:
              lVar13 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
              uVar8 = FUN_0278d0a8(param_6,0,0);
              *(undefined4 *)(lVar13 + 0x78) = uVar8;
              break;
            case 0x1000b:
              lVar13 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
              uVar8 = FUN_0279043c(param_6,0xf,0,0);
              *(undefined4 *)(lVar13 + 0x7c) = uVar8;
              break;
            case 0x1000c:
              lVar13 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
              uVar8 = FUN_0279043c(param_6,0x10,0,0);
              *(undefined4 *)(lVar13 + 0x80) = uVar8;
              break;
            case 0x1000d:
              uVar10 = *(undefined8 *)StringLiteral_10902;
              lVar13 = param_5;
              goto LAB_02807138;
            default:
switchD_0280632c_default:
              local_80[0] = CONCAT44(local_80[0]._4_4_,iVar7);
              uVar10 = thunk_FUN_00d61fa0(*(undefined8 *)
                                           Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__
                                          ,local_80);
              uVar10 = FUN_015f6780(*(undefined8 *)StringLiteral_6239,uVar10,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02661df4(uVar10,0);
            }
          }
        }
        goto switchD_02806218_caseD_40000;
      }
      if (iVar7 < 0x40009) {
        switch(iVar7) {
        case 0x30000:
          puVar11 = (undefined8 *)FUN_013b3bbc(lVar3,*(undefined8 *)StringLiteral_137);
          FUN_027916e4(&local_a0,param_6,0,0);
LAB_028063f8:
          local_80[0] = local_a0;
          puVar11[2] = CONCAT44(uStack_8c,local_90);
          puVar11[1] = CONCAT44(uStack_94,uStack_98);
          *puVar11 = local_a0;
          break;
        case 0x30001:
          lVar13 = FUN_013b3bbc(lVar3,*(undefined8 *)StringLiteral_137);
          uVar8 = FUN_0279043c(param_6,0xc,0,0);
          *(undefined4 *)(lVar13 + 0x18) = uVar8;
          break;
        case 0x30002:
          lVar13 = FUN_013b3bbc(lVar3,*(undefined8 *)StringLiteral_137);
          uVar8 = FUN_0278d5ec(param_6,0,0);
          *(undefined4 *)(lVar13 + 0x1c) = uVar8;
          *(int *)(lVar13 + 0x20) = (int)param_2;
          *(undefined4 *)(lVar13 + 0x24) = param_3;
          *(undefined4 *)(lVar13 + 0x28) = param_4;
          break;
        case 0x30003:
          lVar13 = FUN_013b3bbc(lVar3,*(undefined8 *)StringLiteral_137);
          uVar8 = FUN_0279043c(param_6,10,0,0);
          *(undefined4 *)(lVar13 + 0x2c) = uVar8;
          break;
        case 0x30004:
          lVar13 = FUN_013b3bbc(lVar3,*(undefined8 *)StringLiteral_137);
          uVar10 = 7;
LAB_02806ec8:
          uVar8 = FUN_0279043c(param_6,uVar10,0,0);
          *(undefined4 *)(lVar13 + 0x30) = uVar8;
          break;
        case 0x30005:
          lVar13 = FUN_013b3bbc(lVar3,*(undefined8 *)StringLiteral_137);
          uVar8 = FUN_027902b0(param_6,0,0);
          *(undefined4 *)(lVar13 + 0x34) = uVar8;
          break;
        case 0x30006:
          lVar13 = FUN_013b3bbc(lVar3,*(undefined8 *)StringLiteral_137);
          uVar8 = FUN_027902b0(param_6,0,0);
          *(undefined4 *)(lVar13 + 0x38) = uVar8;
          break;
        case 0x30007:
          lVar13 = FUN_013b3bbc(lVar3,*(undefined8 *)StringLiteral_137);
          uVar8 = FUN_027902b0(param_6,0,0);
LAB_02806f04:
          *(undefined4 *)(lVar13 + 0x3c) = uVar8;
          break;
        case 0x30008:
          lVar13 = FUN_013b3bbc(lVar3,*(undefined8 *)StringLiteral_137);
          uVar8 = FUN_027902b0(param_6,0,0);
          *(undefined4 *)(lVar13 + 0x40) = uVar8;
          break;
        case 0x30009:
          lVar13 = FUN_013b3bbc(lVar3,*(undefined8 *)StringLiteral_137);
          uVar8 = FUN_0279043c(param_6,0xd,0,0);
          *(undefined4 *)(lVar13 + 0x44) = uVar8;
          break;
        default:
          switch(iVar7) {
          case 0x40000:
            break;
          case 0x40001:
            if (*(int *)(*(long *)StringLiteral_11202 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_0278df40(param_6,param_5,0);
            break;
          case 0x40002:
            if (*(int *)(*(long *)StringLiteral_11202 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_0278e034(param_6,param_5,0);
            break;
          case 0x40003:
            if (*(int *)(*(long *)StringLiteral_11202 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_0278e124(param_6,param_5,0);
            break;
          case 0x40004:
            if (*(int *)(*(long *)StringLiteral_11202 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_0278e210(param_6,param_5,0);
            break;
          case 0x40005:
            if (*(int *)(*(long *)StringLiteral_11202 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_0278e2e0(param_6,param_5,0);
            break;
          case 0x40006:
            if (*(int *)(*(long *)StringLiteral_11202 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_0278e3d0(param_6,param_5,0);
            break;
          case 0x40007:
            if (*(int *)(*(long *)StringLiteral_11202 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_0278e4c0(param_6,param_5,0);
            break;
          case 0x40008:
            if (*(int *)(*(long *)StringLiteral_11202 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_0278e610(param_6,param_5,0);
            break;
          default:
            goto switchD_0280632c_default;
          }
        }
        goto switchD_02806218_caseD_40000;
      }
      switch(iVar7) {
      case 0x70000:
        lVar13 = lVar4;
        puVar11 = (undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo;
LAB_0280637c:
        puVar12 = (undefined4 *)FUN_013b3bbc(lVar13,*puVar11);
        uVar8 = FUN_0278d5ec(param_6,0,0);
        *puVar12 = uVar8;
        puVar12[1] = (int)param_2;
        puVar12[2] = param_3;
        puVar12[3] = param_4;
        break;
      case 0x70001:
        lVar13 = FUN_013b3bbc(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        FUN_02790db8(&local_a0,param_6,0,0);
        local_80[0] = local_a0;
        *(ulong *)(lVar13 + 0x18) = CONCAT44(uStack_94,uStack_98);
        *(undefined8 *)(lVar13 + 0x10) = local_a0;
        *(ulong *)(lVar13 + 0x28) = CONCAT44(uStack_84,uStack_88);
        *(ulong *)(lVar13 + 0x20) = CONCAT44(uStack_8c,local_90);
        param_2 = local_a0;
        break;
      case 0x70002:
        lVar13 = FUN_013b3bbc(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        uVar8 = FUN_0278d5ec(param_6,0,0);
        *(undefined4 *)(lVar13 + 0x30) = uVar8;
        *(int *)(lVar13 + 0x34) = (int)param_2;
        *(undefined4 *)(lVar13 + 0x38) = param_3;
        *(undefined4 *)(lVar13 + 0x3c) = param_4;
        break;
      case 0x70003:
        uVar10 = *(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo;
        lVar13 = lVar4;
LAB_02806aa8:
        lVar13 = FUN_013b3bbc(lVar13,uVar10);
        uVar10 = FUN_0278cfac(param_6,0,0);
LAB_02806c68:
        *(undefined8 *)(lVar13 + 0x40) = uVar10;
        break;
      case 0x70004:
        lVar13 = FUN_013b3bbc(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        uVar10 = FUN_0278cfac(param_6,0,0);
        *(undefined8 *)(lVar13 + 0x48) = uVar10;
        break;
      case 0x70005:
        lVar13 = FUN_013b3bbc(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        uVar8 = FUN_0278d5ec(param_6,0,0);
        *(undefined4 *)(lVar13 + 0x50) = uVar8;
        *(int *)(lVar13 + 0x54) = (int)param_2;
        *(undefined4 *)(lVar13 + 0x58) = param_3;
        *(undefined4 *)(lVar13 + 0x5c) = param_4;
        break;
      case 0x70006:
        lVar13 = FUN_013b3bbc(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        uVar8 = FUN_0278d5ec(param_6,0,0);
        *(undefined4 *)(lVar13 + 0x60) = uVar8;
        *(int *)(lVar13 + 100) = (int)param_2;
        *(undefined4 *)(lVar13 + 0x68) = param_3;
        *(undefined4 *)(lVar13 + 0x6c) = param_4;
        break;
      case 0x70007:
        lVar13 = FUN_013b3bbc(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        uVar8 = FUN_0278d5ec(param_6,0,0);
        *(undefined4 *)(lVar13 + 0x70) = uVar8;
        *(int *)(lVar13 + 0x74) = (int)param_2;
        *(undefined4 *)(lVar13 + 0x78) = param_3;
        *(undefined4 *)(lVar13 + 0x7c) = param_4;
        break;
      case 0x70008:
        lVar13 = FUN_013b3bbc(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        uVar10 = FUN_0278cfac(param_6,0,0);
        *(undefined8 *)(lVar13 + 0x80) = uVar10;
        break;
      case 0x70009:
        lVar13 = FUN_013b3bbc(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        uVar10 = FUN_0278cfac(param_6,0,0);
        *(undefined8 *)(lVar13 + 0x88) = uVar10;
        break;
      case 0x7000a:
        lVar13 = FUN_013b3bbc(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        uVar8 = FUN_0278d0a8(param_6,0,0);
        *(undefined4 *)(lVar13 + 0x90) = uVar8;
        break;
      case 0x7000b:
        lVar13 = FUN_013b3bbc(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
        uVar8 = FUN_0279043c(param_6,8,0,0);
        *(undefined4 *)(lVar13 + 0x94) = uVar8;
        break;
      default:
        switch(iVar7) {
        case 0x50000:
          puVar11 = (undefined8 *)
                    FUN_013b3bbc(lVar5,*(undefined8 *)
                                        Method_System_Reflection_Emit_EnumBuilder_get_Name__);
          FUN_0278fda8(&local_a0,param_6,0,0);
          goto LAB_028063f8;
        case 0x50001:
          lVar13 = FUN_013b3bbc(lVar5,*(undefined8 *)
                                       Method_System_Reflection_Emit_EnumBuilder_get_Name__);
          auVar14 = FUN_0278ffa8(param_6,0,0);
          *(undefined1 (*) [16])(lVar13 + 0x18) = auVar14;
          break;
        case 0x50002:
          lVar13 = FUN_013b3bbc(lVar5,*(undefined8 *)
                                       Method_System_Reflection_Emit_EnumBuilder_get_Name__);
          FUN_0278fab0(&local_a0,param_6,0,0);
          local_80[0] = local_a0;
          *(undefined4 *)(lVar13 + 0x38) = local_90;
          *(ulong *)(lVar13 + 0x30) = CONCAT44(uStack_94,uStack_98);
          *(undefined8 *)(lVar13 + 0x28) = local_a0;
          break;
        case 0x50003:
          lVar13 = FUN_013b3bbc(lVar5,*(undefined8 *)
                                       Method_System_Reflection_Emit_EnumBuilder_get_Name__);
          FUN_0278f6f4(&local_a0,param_6,0,0);
          local_80[0] = local_a0;
          *(ulong *)(lVar13 + 0x4c) = CONCAT44(uStack_8c,local_90);
          *(ulong *)(lVar13 + 0x44) = CONCAT44(uStack_94,uStack_98);
          *(undefined8 *)(lVar13 + 0x3c) = local_a0;
          break;
        default:
          switch(iVar7) {
          case 0x60000:
            puVar11 = (undefined8 *)FUN_013b3bbc(lVar1,*(undefined8 *)PTR_DAT_033f1db0);
            uVar10 = *puVar11;
            goto LAB_02806970;
          case 0x60001:
            lVar13 = FUN_013b3bbc(lVar1,*(undefined8 *)PTR_DAT_033f1db0);
            uVar10 = *(undefined8 *)(lVar13 + 8);
LAB_02806970:
            FUN_02791e00(param_6,uVar10,0,0);
            break;
          case 0x60002:
            lVar13 = FUN_013b3bbc(lVar1,*(undefined8 *)PTR_DAT_033f1db0);
            FUN_02791fa8(param_6,*(undefined8 *)(lVar13 + 0x10),0,0);
            break;
          case 0x60003:
            lVar13 = FUN_013b3bbc(lVar1,*(undefined8 *)PTR_DAT_033f1db0);
            FUN_02791c04(param_6,*(undefined8 *)(lVar13 + 0x18),0,0);
            break;
          default:
            goto switchD_0280632c_default;
          }
          *(undefined8 *)(param_5 + 0x50) = 0;
        }
      }
switchD_02806218_caseD_40000:
      iVar7 = FUN_0278f540(param_6,0);
    } while (*(long *)(param_6 + 0x48) != 0);
  }
  return;
}


