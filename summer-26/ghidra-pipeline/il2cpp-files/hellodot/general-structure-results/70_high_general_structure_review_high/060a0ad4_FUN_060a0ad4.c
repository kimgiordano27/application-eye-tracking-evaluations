/*
FUNCTION_NAME: FUN_060a0ad4
ENTRY_POINT: 060a0ad4
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;ray_or_cast_sink_hits_21;telemetry_or_network_hits_21;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_060a0ad4(undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80 [2];
  undefined4 local_70;
  
  if ((DAT_06a82c0f & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c48);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_Physics_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_Events_PersistentCallGroup_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_PhysicsScene_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_Physics2D_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Security_Permissions_PermissionState_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Security_PermissionSet_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Scans_SavedScansProto_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Xml_Serialization_XmlNamespaceDeclarationsAttribute_TypeInfo);
    DAT_06a82c0f = 1;
  }
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (*(long *)(param_6 + 0x48) != 0) {
    iVar6 = *(int *)(param_6 + 0x50);
    lVar1 = param_5 + 8;
    lVar2 = param_5 + 0x10;
    lVar3 = param_5 + 0x28;
    lVar4 = param_5 + 0x20;
    lVar5 = param_5 + 0x18;
    do {
      uVar8 = FUN_0609d228(param_5,param_6,param_7);
      if ((uVar8 & 1) != 0) goto switchD_060a0d80_caseD_40000;
      if (iVar6 < 0x20021) {
        if (iVar6 < 1) {
          if (iVar6 == -1) {
            FUN_0609f208(param_5,param_6);
          }
          else if (iVar6 != 0) goto Zenject_CheatSheet___ctor;
        }
        else {
          switch(iVar6) {
          case 0x20000:
            puVar9 = (undefined4 *)
                     FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a748(param_6,0,0,0);
            *puVar9 = uVar7;
            break;
          case 0x20001:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a748(param_6,0,0,0);
            *(undefined4 *)(lVar12 + 4) = uVar7;
            break;
          case 0x20002:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a748(param_6,0,0,0);
            *(undefined4 *)(lVar12 + 8) = uVar7;
            break;
          case 0x20003:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a490(param_6,0,0);
            *(undefined4 *)(lVar12 + 0xc) = uVar7;
            break;
          case 0x20004:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a490(param_6,0,0);
            *(undefined4 *)(lVar12 + 0x10) = uVar7;
            break;
          case 0x20005:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a490(param_6,0,0);
            *(undefined4 *)(lVar12 + 0x14) = uVar7;
            break;
          case 0x20006:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a490(param_6,0,0);
            *(undefined4 *)(lVar12 + 0x18) = uVar7;
            break;
          case 0x20007:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0x1c) = uVar10;
            break;
          case 0x20008:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a748(param_6,3,0,0);
            *(undefined4 *)(lVar12 + 0x24) = uVar7;
            break;
          case 0x20009:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0x28) = uVar10;
            break;
          case 0x2000a:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a748(param_6,5,0,0);
LAB_060a181c:
            *(undefined4 *)(lVar12 + 0x30) = uVar7;
            break;
          case 0x2000b:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a490(param_6,0,0);
            *(undefined4 *)(lVar12 + 0x34) = uVar7;
            break;
          case 0x2000c:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a490(param_6,0,0);
            *(undefined4 *)(lVar12 + 0x38) = uVar7;
            break;
          case 0x2000d:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a748(param_6,0x15,0,0);
            *(undefined4 *)(lVar12 + 0x3c) = uVar7;
            break;
          case 0x2000e:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
LAB_060a1cf4:
            *(undefined8 *)(lVar12 + 0x40) = uVar10;
            break;
          case 0x2000f:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a748(param_6,7,0,0);
            *(undefined4 *)(lVar12 + 0x48) = uVar7;
            break;
          case 0x20010:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0x4c) = uVar10;
            break;
          case 0x20011:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0x54) = uVar10;
            break;
          case 0x20012:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
LAB_060a1d74:
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0x5c) = uVar10;
            break;
          case 0x20013:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 100) = uVar10;
            break;
          case 0x20014:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0x6c) = uVar10;
            break;
          case 0x20015:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            goto LAB_060a1a04;
          case 0x20016:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            goto LAB_060a1a34;
          case 0x20017:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
LAB_060a1ea4:
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0x84) = uVar10;
            break;
          case 0x20018:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0x8c) = uVar10;
            break;
          case 0x20019:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0x94) = uVar10;
            break;
          case 0x2001a:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0x9c) = uVar10;
            break;
          case 0x2001b:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0xa4) = uVar10;
            break;
          case 0x2001c:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0xac) = uVar10;
            break;
          case 0x2001d:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar7 = FUN_0602a748(param_6,0xb,0,0);
            *(undefined4 *)(lVar12 + 0xb4) = uVar7;
            break;
          case 0x2001e:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0xb8) = uVar10;
            break;
          case 0x2001f:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 0xc0) = uVar10;
            break;
          case 0x20020:
            lVar12 = FUN_04007a14(lVar1,*(undefined8 *)System_Security_PermissionSet_TypeInfo);
            uVar10 = FUN_0602977c(param_6,0,0);
            *(undefined8 *)(lVar12 + 200) = uVar10;
            break;
          default:
            switch(iVar6) {
            case 0x10000:
              puVar9 = (undefined4 *)
                       FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              goto LAB_060a0de8;
            case 0x10001:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              uVar10 = FUN_0602977c(param_6,0,0);
              *(undefined8 *)(lVar12 + 0x10) = uVar10;
              break;
            case 0x10002:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              uVar10 = FUN_0602977c(param_6,0,0);
              *(undefined8 *)(lVar12 + 0x18) = uVar10;
              break;
            case 0x10003:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              FUN_0602bc8c(&local_a0,param_6,0,0);
              local_70 = local_90;
              local_80[0] = local_a0;
              param_2 = CONCAT44(local_90,uStack_94);
              *(ulong *)(lVar12 + 0x28) = CONCAT44(uStack_94,uStack_98);
              *(undefined8 *)(lVar12 + 0x20) = local_a0;
              *(ulong *)(lVar12 + 0x34) = CONCAT44(uStack_88,uStack_8c);
              *(undefined8 *)(lVar12 + 0x2c) = param_2;
              break;
            case 0x10004:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              uVar10 = FUN_0602ad70(param_6,0,0);
              goto LAB_060a1cf4;
            case 0x10005:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              auVar13 = FUN_0602a840(param_6,0,0);
              *(undefined1 (*) [16])(lVar12 + 0x48) = auVar13;
              break;
            case 0x10006:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              uVar7 = FUN_0602a748(param_6,6,0,0);
              *(undefined4 *)(lVar12 + 0x58) = uVar7;
              break;
            case 0x10007:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              goto LAB_060a1d74;
            case 0x10008:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              uVar7 = FUN_0602a748(param_6,0xf,0,0);
              *(undefined4 *)(lVar12 + 100) = uVar7;
              break;
            case 0x10009:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              uVar7 = FUN_0602a57c(param_6,0,0);
              *(undefined4 *)(lVar12 + 0x68) = uVar7;
              *(int *)(lVar12 + 0x6c) = (int)param_2;
              *(undefined4 *)(lVar12 + 0x70) = param_3;
              *(undefined4 *)(lVar12 + 0x74) = param_4;
              break;
            case 0x1000a:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              uVar7 = FUN_0602a490(param_6,0,0);
              *(undefined4 *)(lVar12 + 0x78) = uVar7;
              break;
            case 0x1000b:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              uVar7 = FUN_0602a748(param_6,0x13,0,0);
              *(undefined4 *)(lVar12 + 0x7c) = uVar7;
              break;
            case 0x1000c:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              uVar7 = FUN_0602a748(param_6,0x14,0,0);
              *(undefined4 *)(lVar12 + 0x80) = uVar7;
              break;
            case 0x1000d:
              lVar12 = FUN_04007594(param_5,*(undefined8 *)
                                             UnityEngine_Events_PersistentCallGroup_TypeInfo);
              goto LAB_060a1ea4;
            default:
Zenject_CheatSheet___ctor:
              local_80[0] = CONCAT44(local_80[0]._4_4_,iVar6);
              uVar10 = thunk_FUN_02cea4e8(*(undefined8 *)
                                           Niantic_Peridot_Scans_SavedScansProto_TypeInfo,local_80);
              uVar10 = FUN_04db0cfc(*(undefined8 *)
                                     System_Xml_Serialization_XmlNamespaceDeclarationsAttribute_TypeInfo
                                    ,uVar10,0);
              if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
                thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c48);
              }
              FUN_05eb3cec(uVar10,0);
            }
          }
        }
        goto switchD_060a0d80_caseD_40000;
      }
      if (iVar6 < 0x4000b) {
        switch(iVar6) {
        case 0x40000:
          break;
        case 0x40001:
          if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_06021a9c(param_6,param_5,0);
          break;
        case 0x40002:
          if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_06022234(param_6,param_5,0);
          break;
        case 0x40003:
          if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_060224b8(param_6,param_5,0);
          break;
        case 0x40004:
          if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_060226f0(param_6,param_5,0);
          break;
        case 0x40005:
          if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_06022894(param_6,param_5,0);
          break;
        case 0x40006:
          if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_06022b68(param_6,param_5,0);
          break;
        case 0x40007:
          if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_06022ddc(param_6,param_5,0);
          break;
        case 0x40008:
          if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_06022ecc(param_6,param_5,0);
          break;
        case 0x40009:
          if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_06023688(param_6,param_5,0);
          break;
        case 0x4000a:
          if (*(int *)(*(long *)Niantic_Platform_Analytics_Telemetry_PlaceholderMessage_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_0602384c(param_6,param_5,0);
          break;
        default:
          switch(iVar6) {
          case 0x30000:
            puVar11 = (undefined8 *)FUN_04007e94(lVar2,*(undefined8 *)UnityEngine_Physics_TypeInfo);
            FUN_0602b9e8(&local_a0,param_6,0,0);
            goto LAB_060a0ea8;
          case 0x30001:
            lVar12 = FUN_04007e94(lVar2,*(undefined8 *)UnityEngine_Physics_TypeInfo);
            uVar7 = FUN_0602a748(param_6,0x10,0,0);
            *(undefined4 *)(lVar12 + 0x18) = uVar7;
            break;
          case 0x30002:
            lVar12 = FUN_04007e94(lVar2,*(undefined8 *)UnityEngine_Physics_TypeInfo);
            uVar7 = FUN_0602a57c(param_6,0,0);
            *(undefined4 *)(lVar12 + 0x1c) = uVar7;
            *(int *)(lVar12 + 0x20) = (int)param_2;
            *(undefined4 *)(lVar12 + 0x24) = param_3;
            *(undefined4 *)(lVar12 + 0x28) = param_4;
            break;
          case 0x30003:
            lVar12 = FUN_04007e94(lVar2,*(undefined8 *)UnityEngine_Physics_TypeInfo);
            uVar7 = FUN_0602a748(param_6,9,0,0);
            *(undefined4 *)(lVar12 + 0x2c) = uVar7;
            break;
          case 0x30004:
            lVar12 = FUN_04007e94(lVar2,*(undefined8 *)UnityEngine_Physics_TypeInfo);
            uVar7 = FUN_0602a4f8(param_6,0,0);
            goto LAB_060a181c;
          case 0x30005:
            lVar12 = FUN_04007e94(lVar2,*(undefined8 *)UnityEngine_Physics_TypeInfo);
            uVar7 = FUN_0602a4f8(param_6,0,0);
            *(undefined4 *)(lVar12 + 0x34) = uVar7;
            break;
          case 0x30006:
            lVar12 = FUN_04007e94(lVar2,*(undefined8 *)UnityEngine_Physics_TypeInfo);
            uVar7 = FUN_0602a4f8(param_6,0,0);
            *(undefined4 *)(lVar12 + 0x38) = uVar7;
            break;
          case 0x30007:
            lVar12 = FUN_04007e94(lVar2,*(undefined8 *)UnityEngine_Physics_TypeInfo);
            uVar7 = FUN_0602a490(param_6,0,0);
            *(undefined4 *)(lVar12 + 0x3c) = uVar7;
            break;
          case 0x30008:
            lVar12 = FUN_04007e94(lVar2,*(undefined8 *)UnityEngine_Physics_TypeInfo);
            uVar7 = FUN_0602a4f8(param_6,0,0);
            *(undefined4 *)(lVar12 + 0x40) = uVar7;
            break;
          case 0x30009:
            lVar12 = FUN_04007e94(lVar2,*(undefined8 *)UnityEngine_Physics_TypeInfo);
            uVar7 = FUN_0602a748(param_6,0x11,0,0);
            *(undefined4 *)(lVar12 + 0x44) = uVar7;
            break;
          default:
            goto Zenject_CheatSheet___ctor;
          }
        }
        goto switchD_060a0d80_caseD_40000;
      }
      switch(iVar6) {
      case 0x70000:
        puVar9 = (undefined4 *)
                 FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
LAB_060a0de8:
        uVar7 = FUN_0602a57c(param_6,0,0);
        *puVar9 = uVar7;
        puVar9[1] = (int)param_2;
        puVar9[2] = param_3;
        puVar9[3] = param_4;
        break;
      case 0x70001:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        FUN_0602b0ac(&local_a0,param_6,0,0);
        local_80[0] = local_a0;
        local_70 = local_90;
        *(ulong *)(lVar12 + 0x18) = CONCAT44(uStack_94,uStack_98);
        *(undefined8 *)(lVar12 + 0x10) = local_a0;
        *(ulong *)(lVar12 + 0x28) = CONCAT44(uStack_84,uStack_88);
        *(ulong *)(lVar12 + 0x20) = CONCAT44(uStack_8c,local_90);
        param_2 = local_a0;
        break;
      case 0x70002:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        auVar14 = FUN_0602bf04(param_6,0,0);
        *(undefined1 (*) [12])(lVar12 + 0x30) = auVar14;
        break;
      case 0x70003:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        auVar14 = FUN_0602bfec(param_6,0,0);
        *(undefined1 (*) [12])(lVar12 + 0x3c) = auVar14;
        break;
      case 0x70004:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        uVar10 = FUN_0602c17c(param_6,0,0);
        *(undefined8 *)(lVar12 + 0x48) = uVar10;
        break;
      case 0x70005:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        FUN_0602c2fc(&local_a0,param_6,0,0);
        local_70 = local_90;
        local_80[0] = local_a0;
        *(undefined4 *)(lVar12 + 0x60) = local_90;
        *(ulong *)(lVar12 + 0x58) = CONCAT44(uStack_94,uStack_98);
        *(undefined8 *)(lVar12 + 0x50) = local_a0;
        break;
      case 0x70006:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        uVar7 = FUN_0602a57c(param_6,0,0);
        *(undefined4 *)(lVar12 + 100) = uVar7;
        *(int *)(lVar12 + 0x68) = (int)param_2;
        *(undefined4 *)(lVar12 + 0x6c) = param_3;
        *(undefined4 *)(lVar12 + 0x70) = param_4;
        break;
      case 0x70007:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
LAB_060a1a04:
        uVar10 = FUN_0602977c(param_6,0,0);
        *(undefined8 *)(lVar12 + 0x74) = uVar10;
        break;
      case 0x70008:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
LAB_060a1a34:
        uVar10 = FUN_0602977c(param_6,0,0);
        *(undefined8 *)(lVar12 + 0x7c) = uVar10;
        break;
      case 0x70009:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        uVar7 = FUN_0602a57c(param_6,0,0);
        *(undefined4 *)(lVar12 + 0x84) = uVar7;
        *(int *)(lVar12 + 0x88) = (int)param_2;
        *(undefined4 *)(lVar12 + 0x8c) = param_3;
        *(undefined4 *)(lVar12 + 0x90) = param_4;
        break;
      case 0x7000a:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        uVar7 = FUN_0602a57c(param_6,0,0);
        *(undefined4 *)(lVar12 + 0x94) = uVar7;
        *(int *)(lVar12 + 0x98) = (int)param_2;
        *(undefined4 *)(lVar12 + 0x9c) = param_3;
        *(undefined4 *)(lVar12 + 0xa0) = param_4;
        break;
      case 0x7000b:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        uVar7 = FUN_0602a57c(param_6,0,0);
        *(undefined4 *)(lVar12 + 0xa4) = uVar7;
        *(int *)(lVar12 + 0xa8) = (int)param_2;
        *(undefined4 *)(lVar12 + 0xac) = param_3;
        *(undefined4 *)(lVar12 + 0xb0) = param_4;
        break;
      case 0x7000c:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        uVar10 = FUN_0602977c(param_6,0,0);
        *(undefined8 *)(lVar12 + 0xb4) = uVar10;
        break;
      case 0x7000d:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        uVar10 = FUN_0602977c(param_6,0,0);
        *(undefined8 *)(lVar12 + 0xbc) = uVar10;
        break;
      case 0x7000e:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        uVar7 = FUN_0602a490(param_6,0,0);
        *(undefined4 *)(lVar12 + 0xc4) = uVar7;
        break;
      case 0x7000f:
        lVar12 = FUN_04008c0c(lVar3,*(undefined8 *)
                                     System_Security_Permissions_PermissionState_TypeInfo);
        uVar7 = FUN_0602a748(param_6,10,0,0);
        *(undefined4 *)(lVar12 + 200) = uVar7;
        break;
      default:
        switch(iVar6) {
        case 0x50000:
          puVar11 = (undefined8 *)FUN_04008314(lVar5,*(undefined8 *)UnityEngine_Physics2D_TypeInfo);
          FUN_06029fac(&local_a0,param_6,0,0);
LAB_060a0ea8:
          local_70 = local_90;
          local_80[0] = local_a0;
          puVar11[2] = CONCAT44(uStack_8c,local_90);
          puVar11[1] = CONCAT44(uStack_94,uStack_98);
          *puVar11 = local_a0;
          break;
        case 0x50001:
          lVar12 = FUN_04008314(lVar5,*(undefined8 *)UnityEngine_Physics2D_TypeInfo);
          auVar13 = FUN_0602a194(param_6,0,0);
          *(undefined1 (*) [16])(lVar12 + 0x18) = auVar13;
          break;
        case 0x50002:
          lVar12 = FUN_04008314(lVar5,*(undefined8 *)UnityEngine_Physics2D_TypeInfo);
          FUN_06029cbc(&local_a0,param_6,0,0);
          local_70 = local_90;
          local_80[0] = local_a0;
          *(undefined4 *)(lVar12 + 0x38) = local_90;
          *(ulong *)(lVar12 + 0x30) = CONCAT44(uStack_94,uStack_98);
          *(undefined8 *)(lVar12 + 0x28) = local_a0;
          break;
        case 0x50003:
          lVar12 = FUN_04008314(lVar5,*(undefined8 *)UnityEngine_Physics2D_TypeInfo);
          FUN_06029908(&local_a0,param_6,0,0);
          local_70 = local_90;
          local_80[0] = local_a0;
          *(ulong *)(lVar12 + 0x4c) = CONCAT44(uStack_8c,local_90);
          *(ulong *)(lVar12 + 0x44) = CONCAT44(uStack_94,uStack_98);
          *(undefined8 *)(lVar12 + 0x3c) = local_a0;
          break;
        default:
          switch(iVar6) {
          case 0x60000:
            puVar11 = (undefined8 *)
                      FUN_04008794(lVar4,*(undefined8 *)UnityEngine_PhysicsScene_TypeInfo);
            uVar10 = *puVar11;
            goto LAB_060a140c;
          case 0x60001:
            lVar12 = FUN_04008794(lVar4,*(undefined8 *)UnityEngine_PhysicsScene_TypeInfo);
            uVar10 = *(undefined8 *)(lVar12 + 8);
LAB_060a140c:
            FUN_0602c808(param_6,uVar10,0,0);
            break;
          case 0x60002:
            lVar12 = FUN_04008794(lVar4,*(undefined8 *)UnityEngine_PhysicsScene_TypeInfo);
            FUN_0602c998(param_6,*(undefined8 *)(lVar12 + 0x10),0,0);
            break;
          case 0x60003:
            lVar12 = FUN_04008794(lVar4,*(undefined8 *)UnityEngine_PhysicsScene_TypeInfo);
            FUN_0602c61c(param_6,*(undefined8 *)(lVar12 + 0x18),0,0);
            break;
          default:
            goto Zenject_CheatSheet___ctor;
          }
          *(undefined8 *)(param_5 + 0x50) = 0;
        }
      }
switchD_060a0d80_caseD_40000:
      iVar6 = FUN_06029154(param_6,0);
    } while (*(long *)(param_6 + 0x48) != 0);
  }
  return;
}


