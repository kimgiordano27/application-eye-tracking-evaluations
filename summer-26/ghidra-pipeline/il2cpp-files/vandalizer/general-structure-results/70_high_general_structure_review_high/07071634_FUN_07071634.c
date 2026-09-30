/*
FUNCTION_NAME: FUN_07071634
ENTRY_POINT: 07071634
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x07071afc) */
/* WARNING: Removing unreachable block (ram,0x070719c8) */
/* WARNING: Removing unreachable block (ram,0x07071b30) */
/* WARNING: Removing unreachable block (ram,0x07071b4c) */
/* WARNING: Removing unreachable block (ram,0x07071bb0) */
/* WARNING: Removing unreachable block (ram,0x07071ba0) */

void FUN_07071634(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  long local_48;
  
  if ((DAT_07a5a62f & 1) == 0) {
    FUN_031f20f4(UnityEngine_UIElements_FocusOutEvent_<>c_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_Foldout_UxmlFactory_TypeInfo);
    FUN_031f20f4(FollowerEntry_<SetData>d__12_TypeInfo);
    FUN_031f20f4(UnityEngine_Font_FontTextureRebuildCallback_TypeInfo);
    FUN_031f20f4(UnityEngine_TextCore_Text_FontAsset_<>c_TypeInfo);
    FUN_031f20f4(UnityEngine_UIElements_FontDefinition_PropertyBag_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b580);
    FUN_031f20f4(UnityEngine_TextCore_Text_FontFeatureTable_<>c_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759e2a8);
    FUN_031f20f4(UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_ForDevice_TypeInfo);
    FUN_031f20f4(Oisoi_Networking_Requests_ForgotPasswordRequest_ForgotPassword_RequestData_TypeInfo
                );
    FUN_031f20f4(Oisoi_Networking_Requests_ForgotUsernameRequest_ForgotUsername_RequestData_TypeInfo
                );
    FUN_031f20f4(System_Globalization_FormatProvider_Number_TypeInfo);
    FUN_031f20f4(
                System_Runtime_CompilerServices_FormattableStringFactory_ConcreteFormattableString_TypeInfo
                );
    FUN_031f20f4(System_Runtime_Serialization_FormatterServices_<>c__DisplayClass9_0_TypeInfo);
    DAT_07a5a62f = 1;
  }
  local_48 = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (*(char *)(param_1 + 0x4c8) != '\0') {
    return;
  }
  if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_UxmlFactory_TypeInfo + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  local_60 = FUN_054e270c(&local_48,*(undefined8 *)UnityEngine_UIElements_FocusOutEvent_<>c_TypeInfo
                         );
  if (*(char *)(param_1 + 0x4a8) != '\0') {
    if (*(long *)(param_1 + 0x4b8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    plVar7 = (long *)FUN_070b0350(*(long *)(param_1 + 0x4b8),0);
    puVar6 = Oisoi_Networking_Requests_ForgotPasswordRequest_ForgotPassword_RequestData_TypeInfo;
    puVar5 = UnityEngine_TextCore_Text_FontFeatureTable_<>c_TypeInfo;
    puVar4 = PTR_DAT_0759e2a8;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    do {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_070717e4;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar4,0);
LAB_070717e4:
      uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar7 == (long *)0x0) break;
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_07071994;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0707197c;
      }
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_07071840;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar5,0);
LAB_07071840:
      lVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(int *)(lVar11 + 0x10) == -1) {
        uVar12 = FUN_05c87ee0(*(undefined8 *)(lVar11 + 0x18),0);
        if ((uVar12 & 1) == 0) {
          if (*(long *)(param_1 + 0x500) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
          lVar9 = FUN_070a9d80(*(long *)(param_1 + 0x500),*(undefined8 *)(lVar11 + 0x18),0);
          goto LAB_07071898;
        }
LAB_07071924:
        *(undefined8 *)(lVar11 + 0x30) = 0;
        thunk_FUN_0329bf60((undefined8 *)(lVar11 + 0x30),0);
      }
      else {
        if (*(long *)(param_1 + 0x500) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar9 = FUN_070a41c4(*(long *)(param_1 + 0x500),*(int *)(lVar11 + 0x10),0);
LAB_07071898:
        if ((lVar9 == 0) || (*(char *)(lVar9 + 0x61) == '\0')) goto LAB_07071924;
        *(long *)(lVar11 + 0x30) = lVar9;
        thunk_FUN_0329bf60((long *)(lVar11 + 0x30),lVar9);
        lVar9 = local_48;
        uVar2 = *(undefined4 *)(lVar11 + 0x20);
        uStack_98 = 0;
        local_a0 = lVar11;
        thunk_FUN_0329bf60(&local_a0,lVar11);
        uStack_98 = CONCAT44(uStack_98._4_4_,uVar2);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)puVar6;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (uVar3 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar3 * 0x10;
          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
          plVar10 = (long *)(lVar11 + 0x20);
          *plVar10 = local_a0;
          *(undefined8 *)(lVar11 + 0x28) = uStack_98;
          thunk_FUN_0329bf60(plVar10,0);
        }
        else {
          FUN_04948834(lVar9,local_a0,uStack_98,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_070719cc;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_0707197c:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0759b580) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_070719b0;
    }
  }
LAB_07071994:
  puVar8 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_0759b580,0);
LAB_070719b0:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_070719cc:
  uVar12 = FUN_03defa30(*(undefined8 *)(param_1 + 0x4c0),local_48,
                        *(undefined8 *)FollowerEntry_<SetData>d__12_TypeInfo);
  if ((uVar12 & 1) == 0) {
    lVar11 = *(long *)(param_1 + 0x4b0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    iVar1 = *(int *)(lVar11 + 0x18);
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05e24380(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
    }
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    FUN_0494930c(&local_a0,local_48,
                 *(undefined8 *)System_Globalization_FormatProvider_Number_TypeInfo);
    puVar5 = UnityEngine_InputSystem_Utilities_ForDeviceEventObservable_ForDevice_TypeInfo;
    puVar4 = UnityEngine_TextCore_Text_FontAsset_<>c_TypeInfo;
    uStack_78 = uStack_98;
    local_80 = local_a0;
    uStack_68 = uStack_88;
    local_70 = uStack_90;
    while( true ) {
      uVar12 = FUN_05a77530(&local_80,*(undefined8 *)puVar4);
      if ((uVar12 & 1) == 0) break;
      lVar11 = *(long *)(param_1 + 0x4b0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      lVar9 = *(long *)(lVar11 + 0x10);
      lVar13 = *(long *)puVar5;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar3 = *(uint *)(lVar11 + 0x18);
      if (uVar3 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar3 + 1;
        puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
        *puVar8 = local_70;
        thunk_FUN_0329bf60(puVar8);
      }
      else {
        FUN_047af440(lVar11,local_70,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_05a7752c(&local_80,*(undefined8 *)UnityEngine_Font_FontTextureRebuildCallback_TypeInfo);
    FUN_03f6b354(*(undefined8 *)(param_1 + 0x4c0),local_48,
                 *(undefined8 *)
                  System_Runtime_Serialization_FormatterServices_<>c__DisplayClass9_0_TypeInfo);
    FUN_04d124bc(local_60,*(undefined8 *)
                           System_Runtime_CompilerServices_FormattableStringFactory_ConcreteFormattableString_TypeInfo
                );
    FUN_07073654(param_1);
    FUN_0707368c(param_1);
  }
  else {
    FUN_04d124bc(local_60,*(undefined8 *)
                           System_Runtime_CompilerServices_FormattableStringFactory_ConcreteFormattableString_TypeInfo
                );
  }
  return;
}


