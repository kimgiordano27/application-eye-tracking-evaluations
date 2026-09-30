/*
FUNCTION_NAME: UnityEngine.Networking.DownloadHandler$$GetData
ENTRY_POINT: 03e85b68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_5;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x03e861a0) */

void UnityEngine_Networking_DownloadHandler__GetData(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  
  FUN_01c5d288();
  FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo);
  FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo);
  FUN_01c5d288(PTR_DAT_04230960);
  FUN_01c5d288(StringLiteral_11259);
  FUN_01c5d288(StringLiteral_11258);
  FUN_01c5d288(StringLiteral_11269);
  FUN_01c5d288(StringLiteral_11270);
  FUN_01c5d288(StringLiteral_11271);
  FUN_01c5d288(StringLiteral_11272);
  FUN_01c5d288(StringLiteral_11273);
  FUN_01c5d288(StringLiteral_11274);
  FUN_01c5d288(StringLiteral_11275);
  FUN_01c5d288(StringLiteral_11276);
  FUN_01c5d288(StringLiteral_9410);
  FUN_01c5d288(UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo);
  *(undefined1 *)(unaff_x28 + 0xcc7) = 1;
  puVar2 = StringLiteral_9410;
  uVar4 = thunk_FUN_01c496e0(*unaff_x27);
  FUN_02e11ccc(uVar4,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x3e0) = uVar4;
  uVar4 = thunk_FUN_01c496e0(*unaff_x26);
  FUN_0290bee4(uVar4,*unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x400) = uVar4;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03f15048();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03f17740();
  *(long *)(unaff_x19 + 0x420) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x3d0) = unaff_x22;
  FUN_03e846d8();
  lVar5 = thunk_FUN_01c496e0(*unaff_x24);
  FUN_03f15048(lVar5,0);
  if (lVar5 != 0) {
    FUN_03f14d08(lVar5,1,0);
    *(long *)(unaff_x19 + 0x410) = lVar5;
    FUN_03f17740(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),0);
    FUN_03f1bbb8();
    lVar5 = thunk_FUN_01c496e0(*unaff_x24);
    FUN_03f15048(lVar5,0);
    puVar3 = StringLiteral_11267;
    puVar1 = PTR_DAT_0422fad8;
    if (lVar5 != 0) {
      FUN_03f14d08(lVar5,1,0);
      *(long *)(unaff_x19 + 0x418) = lVar5;
      FUN_03f17740(lVar5,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),0);
      FUN_03e3c41c(*(undefined8 *)(unaff_x19 + 0x418),0);
      FUN_03f1bbb8();
      lVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
      FUN_03e960a4();
      *(long *)(unaff_x19 + 0x408) = lVar5;
      uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
      FUN_03245f44();
      if (((lVar5 != 0) && (FUN_03e95f6c(lVar5,uVar4,0), unaff_x20 != 0)) &&
         (plVar6 = (long *)FUN_03e95388(), plVar6 != (long *)0x0)) {
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03e85e3c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01c72498(plVar6,*(long *)
                                      Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo
                              ,0);
LAB_03e85e3c:
        puVar2 = PTR_DAT_0422fce8;
        plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        puVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo;
        puVar1 = PTR_DAT_04230960;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        do {
          lVar5 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03e85eb4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar1,0);
LAB_03e85eb4:
          uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar9 & 1) == 0) goto LAB_03e85f2c;
          lVar5 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03e85f10;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar3,0);
LAB_03e85f10:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
          FUN_03e86254();
        } while( true );
      }
    }
  }
  goto LAB_03e86198;
LAB_03e85f2c:
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto UnityEngine_Networking_DownloadHandler__InternalGetByteArray;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0);
UnityEngine_Networking_DownloadHandler__InternalGetByteArray:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  lVar5 = *(long *)(unaff_x19 + 0x420);
  uVar4 = thunk_FUN_01c496e0(*(undefined8 *)StringLiteral_11265);
  FUN_02863dfc();
  puVar2 = StringLiteral_11263;
  if (lVar5 != 0) {
    FUN_03e96550(lVar5,uVar4,0);
    lVar5 = *(long *)(unaff_x19 + 0x420);
    uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_0285da04();
    puVar1 = StringLiteral_11264;
    if (lVar5 != 0) {
      FUN_03e96600(lVar5,uVar4,0);
      lVar5 = *(long *)(unaff_x19 + 0x420);
      uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
      System_Collections_Generic_Dictionary<uint,_MarkToMarkAdjustmentRecord>__ContainsValue();
      puVar1 = StringLiteral_11266;
      if (lVar5 != 0) {
        FUN_03e9a694(lVar5,uVar4,0);
        lVar5 = *(long *)(unaff_x19 + 0x420);
        uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
        FUN_02933fa4();
        if (lVar5 != 0) {
          VoxelBusters_CoreLibrary_RestClient_<>c___ctor(lVar5,uVar4,0);
          lVar5 = *(long *)(unaff_x19 + 0x420);
          uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
          FUN_0285da04();
          puVar3 = StringLiteral_11268;
          puVar1 = StringLiteral_11262;
          puVar2 = MQTTnet_Diagnostics_MqttNetNullLogger_TypeInfo;
          if (lVar5 != 0) {
            FUN_03e9a7f4(lVar5,uVar4,0);
            uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
            FUN_0285da04();
            uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
            FUN_03e1e5dc(uVar8,uVar4,0);
            FUN_03e3c738();
            thunk_FUN_01c496e0(*(undefined8 *)puVar2);
            FUN_02b1ee9c();
            FUN_02305eac();
            return;
          }
        }
      }
    }
  }
LAB_03e86198:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


