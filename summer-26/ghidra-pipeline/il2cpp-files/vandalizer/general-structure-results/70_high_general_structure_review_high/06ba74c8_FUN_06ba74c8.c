/*
FUNCTION_NAME: FUN_06ba74c8
ENTRY_POINT: 06ba74c8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06ba7a60) */

void FUN_06ba74c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_07a4fcb3 & 1) == 0) {
    FUN_031f20f4(Best_HTTP_Hosts_Connections_HTTP2_HTTP2Settings_var);
    FUN_031f20f4(UnityEngine_HideInInspector_var);
    FUN_031f20f4(Newtonsoft_Json_JsonConstructorAttribute_var);
    FUN_031f20f4(PTR_DAT_0759b580);
    FUN_031f20f4(Fusion_INetworkInput_var);
    FUN_031f20f4(Fusion_INetworkStruct_var);
    FUN_031f20f4(PTR_DAT_0759e2a8);
    FUN_031f20f4(PTR_DAT_0759b2a8);
    FUN_031f20f4(GameEventDataMinimum_var);
    FUN_031f20f4(Best_HTTP_JSON_LitJson_JsonData_var);
    FUN_031f20f4(Newtonsoft_Json_JsonExtensionDataAttribute_var);
    FUN_031f20f4(Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var);
    FUN_031f20f4(Newtonsoft_Json_JsonTextReader_var);
    FUN_031f20f4(Newtonsoft_Json_JsonTextWriter_var);
    FUN_031f20f4(Newtonsoft_Json_JsonToken_var);
    FUN_031f20f4(PTR_DAT_075d7be0);
    FUN_031f20f4(System_ComponentModel_IChangeTracking_var);
    DAT_07a4fcb3 = 1;
  }
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  if (param_4 != (long *)0x0) {
    uVar4 = FUN_06b93f38(param_4);
    if ((uVar4 & 1) != 0) {
      return;
    }
    plVar5 = (long *)(**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)Fusion_INetworkInput_var) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06ba766c;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)Fusion_INetworkInput_var,0);
LAB_06ba766c:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar3 = Best_HTTP_JSON_LitJson_JsonData_var;
      puVar2 = PTR_DAT_0759b2a8;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      do {
        lVar9 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0759e2a8) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule__ProcessMouseState;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)PTR_DAT_0759e2a8,0);
UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule__ProcessMouseState:
        uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar4 & 1) == 0) {
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 == 0) goto LAB_06ba79fc;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_06ba79e4;
        }
        lVar9 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)Fusion_INetworkStruct_var) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06ba7748;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)Fusion_INetworkStruct_var,0);
LAB_06ba7748:
        (*(code *)*puVar6)(&local_c0,plVar5,puVar6[1]);
        uStack_78 = uStack_b8;
        local_80 = local_c0;
        uStack_68 = uStack_a8;
        uStack_70 = uStack_b0;
        if (*(int *)(*(long *)GameEventDataMinimum_var + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        auVar13 = FUN_06e78b70(&local_80,param_2,param_3,0);
        local_90 = auVar13;
        uVar7 = FUN_06e78b68(&local_80,0);
        FUN_03ecb744(auVar13._0_8_,auVar13._8_8_,uVar7,
                     *(undefined8 *)Newtonsoft_Json_JsonExtensionDataAttribute_var);
        FUN_03ecb90c(local_90._0_8_,local_90._8_8_,param_6,param_7,param_8,
                     *(undefined8 *)Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_var);
        FUN_03ecbdec(0x3f800000,local_90._0_8_,local_90._8_8_,
                     *(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        bVar1 = *(byte *)(*(long *)Best_HTTP_Hosts_Connections_HTTP2_HTTP2Settings_var + 0x130);
        if (*(byte *)(*param_4 + 0x130) < bVar1) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = param_4;
          if (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Best_HTTP_Hosts_Connections_HTTP2_HTTP2Settings_var) {
            plVar8 = (long *)0x0;
          }
        }
        uVar4 = FUN_06e587d8(plVar8,0,0);
        if ((uVar4 & 1) != 0) {
          auVar13 = FUN_06dc3840(local_90._0_8_,local_90._8_8_,0);
          FUN_06ba7b7c(param_1,auVar13._8_8_,auVar13._0_8_,auVar13._8_8_);
        }
        if (*(int *)(*(long *)PTR_DAT_075d7be0 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar4 = FUN_03ecacb8(local_90,*(undefined8 *)Newtonsoft_Json_JsonToken_var);
        if ((uVar4 & 1) != 0) {
          auVar13 = FUN_06dd01e0(local_90._0_8_,local_90._8_8_,0);
          lVar9 = *(long *)System_ComponentModel_IChangeTracking_var;
          local_a0 = auVar13;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar9 = *(long *)System_ComponentModel_IChangeTracking_var;
          }
          FUN_06dd0264(local_a0,**(char **)(lVar9 + 0xb8) == '\0',0);
        }
        lVar9 = FUN_06b9b73c(param_4);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar10 = *(long *)puVar2;
        uVar7 = *(undefined8 *)(lVar9 + 0x58);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar10);
        }
        uVar4 = FUN_06e5ba28(uVar7,param_4,0);
        if ((uVar4 & 1) != 0) {
          if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          uVar7 = FUN_03e0d6e0(param_5,*(undefined8 *)UnityEngine_HideInInspector_var);
          FUN_03ecbb94(local_90._0_8_,local_90._8_8_,uVar7,
                       *(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
          lVar9 = FUN_03e0e0c0(param_5,*(undefined8 *)Newtonsoft_Json_JsonConstructorAttribute_var);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
            uVar4 = 0;
            uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
            do {
              if (uVar11 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_031f2398();
              }
              FUN_03ecae1c(local_90._0_8_,local_90._8_8_,*(undefined8 *)(lVar9 + 0x20 + uVar4 * 8),
                           *(undefined8 *)puVar3);
              uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
              uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)(int)*(uint *)(lVar9 + 0x18));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
LAB_06ba79e4:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06ba7a18;
    }
  }
LAB_06ba79fc:
  puVar6 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)PTR_DAT_0759b580,0);
LAB_06ba7a18:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


