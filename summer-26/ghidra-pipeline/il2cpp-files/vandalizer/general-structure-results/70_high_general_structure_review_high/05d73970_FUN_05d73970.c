/*
FUNCTION_NAME: FUN_05d73970
ENTRY_POINT: 05d73970
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_05d73970(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 *param_5,uint param_6)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  double dVar10;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *puVar8;
  
  puVar8 = PTR_DAT_0759c258;
  local_48 = param_3;
  local_40 = param_2;
  local_38 = param_1;
  if ((DAT_07a45015 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759c258);
    FUN_031f20f4(PTR_DAT_0759c348);
    DAT_07a45015 = 1;
  }
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  iVar2 = FUN_05ddf76c(&local_38,0);
  if (iVar2 == 0) {
LAB_05d73a0c:
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    iVar2 = FUN_05ddf76c(&local_40,0);
    if (iVar2 == 0) {
LAB_05d73a50:
      local_50 = param_5[2];
      uStack_58 = param_5[1];
      local_60 = *param_5;
      uVar3 = FUN_05d73778(param_4,&local_60);
      uVar7 = local_38;
      uVar5 = local_40;
      if (((uVar3 & 1) != 0) && ((param_6 & 1) == 0)) {
        thunk_FUN_03257e30(PTR_DAT_0759c0b8);
        uVar5 = thunk_FUN_0322f148();
        uVar7 = thunk_FUN_03257e30(PTR_DAT_075e8888);
        puVar8 = PTR_DAT_075e8890;
        goto LAB_05d73e2c;
      }
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar3 = FUN_05ddf524(uVar7,uVar5,0);
      puVar1 = PTR_DAT_0759c348;
      if ((uVar3 & 1) != 0) {
        thunk_FUN_03257e30(PTR_DAT_0759c0b8);
        uVar5 = thunk_FUN_0322f148();
        puVar8 = PTR_DAT_075e8898;
        goto System_Threading_Timer__Init;
      }
      if (*(int *)(*(long *)PTR_DAT_0759c348 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      dVar10 = (double)FUN_05e186d8(&local_48,0);
      if (dVar10 < -23.0) {
LAB_05d73c94:
        local_68 = local_48;
        uVar5 = thunk_FUN_03257e30(PTR_DAT_0759c348);
        uVar5 = thunk_FUN_0322ed78(uVar5,&local_68);
        thunk_FUN_03257e30(PTR_DAT_0759e028);
        uVar7 = thunk_FUN_0322f148();
        uVar9 = thunk_FUN_03257e30(PTR_DAT_075e8878);
        uVar6 = thunk_FUN_03257e30(PTR_DAT_075e8660);
        FUN_05d73e58(uVar7,uVar9,uVar5,uVar6);
        uVar5 = thunk_FUN_03257e30(PTR_DAT_075e8880);
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar7,uVar5);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      dVar10 = (double)FUN_05e186d8(&local_48,0);
      if (14.0 < dVar10) goto LAB_05d73c94;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar5 = local_38;
      if (0x72884f610 <
          (local_48 * -0x6832fd919f07a5f5 + 0x72884f61000U >> 9 |
          local_48 * -0x6832fd919f07a5f5 << 0x37)) {
        thunk_FUN_03257e30(PTR_DAT_0759c0b8);
        uVar5 = thunk_FUN_0322f148();
        uVar7 = thunk_FUN_03257e30(PTR_DAT_075e8668);
        puVar8 = PTR_DAT_075e8878;
        goto LAB_05d73e2c;
      }
      lVar4 = *(long *)puVar8;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar4 = *(long *)puVar8;
      }
      uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
                        (uVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        iVar2 = FUN_05ddf76c(&local_38,0);
        if (iVar2 == 0) {
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar5 = FUN_05de2edc(&local_38,0);
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar4);
            lVar4 = *(long *)puVar1;
          }
          uVar3 = FUN_05e192b0(uVar5,**(undefined8 **)(lVar4 + 0xb8),0);
          if ((uVar3 & 1) != 0) {
            thunk_FUN_03257e30(PTR_DAT_0759c0b8);
            uVar5 = thunk_FUN_0322f148();
            puVar8 = PTR_DAT_075e88a8;
            goto System_Threading_Timer__Init;
          }
        }
      }
      uVar5 = local_40;
      lVar4 = *(long *)puVar8;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar4 = *(long *)puVar8;
      }
      uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
                        (uVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      iVar2 = FUN_05ddf76c(&local_40,0);
      if (iVar2 != 0) {
        return;
      }
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar5 = FUN_05de2edc(&local_40,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar4);
        lVar4 = *(long *)puVar1;
      }
      uVar3 = FUN_05e192b0(uVar5,**(undefined8 **)(lVar4 + 0xb8),0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      thunk_FUN_03257e30(PTR_DAT_0759c0b8);
      uVar5 = thunk_FUN_0322f148();
      puVar8 = PTR_DAT_075e88a8;
    }
    else {
      if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      iVar2 = FUN_05ddf76c(&local_40,0);
      if (iVar2 == 1) goto LAB_05d73a50;
      thunk_FUN_03257e30(PTR_DAT_0759c0b8);
      uVar5 = thunk_FUN_0322f148();
      puVar8 = PTR_DAT_075e88a0;
    }
    uVar7 = thunk_FUN_03257e30(puVar8);
    puVar8 = PTR_DAT_075e88b8;
  }
  else {
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    iVar2 = FUN_05ddf76c(&local_38,0);
    if (iVar2 == 1) goto LAB_05d73a0c;
    thunk_FUN_03257e30(PTR_DAT_0759c0b8);
    uVar5 = thunk_FUN_0322f148();
    puVar8 = PTR_DAT_075e88a0;
System_Threading_Timer__Init:
    uVar7 = thunk_FUN_03257e30(puVar8);
    puVar8 = PTR_DAT_075e88b0;
  }
LAB_05d73e2c:
  uVar9 = thunk_FUN_03257e30(puVar8);
  FUN_05d6f3dc(uVar5,uVar7,uVar9);
  uVar7 = thunk_FUN_03257e30(PTR_DAT_075e8880);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar5,uVar7);
}


