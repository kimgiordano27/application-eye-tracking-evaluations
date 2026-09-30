/*
FUNCTION_NAME: FUN_05f86d44
ENTRY_POINT: 05f86d44
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;telemetry_or_network_hits_7
*/


uint FUN_05f86d44(long param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5,
                 undefined4 param_6,undefined8 param_7,undefined8 *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined4 local_c0;
  uint local_a4 [5];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_68;
  
  if ((DAT_06a5dc62 & 1) == 0) {
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_Triggering__
                );
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_NextPartBinding__
                );
    FUN_02d4dc40(Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroup__
                );
    FUN_02d4dc40(Method_System_ComponentModel_PropertyTabAttribute_InitializeArrays__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<RectInt>__);
    FUN_02d4dc40(Method_System_Net_Configuration_ProxyElement_get_Properties__);
    FUN_02d4dc40(Method_PlayFab_Json_PocoJsonSerializerStrategy_DeserializeObject__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeString__);
    FUN_02d4dc40(
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_PreviousPartBinding__
                );
    FUN_02d4dc40(Method_PlayFab_Json_PocoJsonSerializerStrategy_TrySerializeUnknownTypes__);
    FUN_02d4dc40(PTR_DAT_06649fe0);
    DAT_06a5dc62 = 1;
  }
  local_68 = 0;
  local_a4[0] = 0;
  *param_8 = 0;
  thunk_FUN_02dc1ef0(param_8,0);
  puVar7 = Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__;
  if (param_1 == 0) {
    uVar10 = 0;
    goto LAB_05f8758c;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar10 = 0;
  if (uVar2 == 0) goto LAB_05f8758c;
  local_68 = CONCAT44(uVar2,(uint)local_68);
  lVar11 = *(long *)Method_Unity_Properties_PropertyBag_Register<StyleEnum<ScaleMode>>__;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar11 = *(long *)puVar7;
  }
  uVar10 = uVar2 | (int)uVar2 >> 0x10;
  lVar15 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar15 == 0) {
LAB_05f86ea8:
    uVar20 = uVar10 | (int)uVar10 >> 8;
    uVar20 = uVar20 | (int)uVar20 >> 4;
    uVar20 = uVar20 | (int)uVar20 >> 2;
    uVar12 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06649fe0,(uVar20 | (int)uVar20 >> 1) + 1);
    lVar11 = *(long *)puVar7;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar11);
      lVar11 = *(long *)puVar7;
    }
    puVar13 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
    *puVar13 = uVar12;
    thunk_FUN_02dc1ef0(puVar13,uVar12);
  }
  else {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar15 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
      if (lVar15 == 0) goto LAB_05f875b4;
    }
    if (*(int *)(lVar15 + 0x18) < (int)uVar2) goto LAB_05f86ea8;
  }
  if (param_4 == 0) goto LAB_05f875b4;
  uVar20 = *(uint *)(param_4 + 0x18);
  local_68 = CONCAT44(local_68._4_4_,uVar20);
  if (param_5 == 0) goto LAB_05f875b4;
  lVar11 = *(long *)puVar7;
  uVar3 = *(uint *)(param_5 + 0x18);
  local_a4[0] = uVar3;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar11 = *(long *)puVar7;
  }
  lVar15 = *(long *)(lVar11 + 0xb8);
  if (*(long *)(lVar15 + 0x20) == 0) goto LAB_05f875b4;
  uVar1 = uVar3 + uVar20 + uVar2;
  if (*(int *)(*(long *)(lVar15 + 0x20) + 0x18) < (int)uVar1) {
LAB_05f86f78:
    puVar6 = 
    Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_NextPartBinding__;
    uVar1 = uVar1 | (int)uVar1 >> 0x10;
    uVar1 = uVar1 | (int)uVar1 >> 8;
    uVar1 = uVar1 | (int)uVar1 >> 4;
    uVar1 = uVar1 | (int)uVar1 >> 2;
    uVar1 = uVar1 | (int)uVar1 >> 1;
    uVar12 = FUN_02d4dd2c(*(undefined8 *)
                           Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_NextPartBinding__
                          ,uVar1 + 1);
    lVar11 = *(long *)puVar7;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar11);
      lVar11 = *(long *)puVar7;
    }
    puVar13 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x20);
    *puVar13 = uVar12;
    thunk_FUN_02dc1ef0(puVar13,uVar12);
    uVar12 = FUN_02d4dd2c(*(undefined8 *)puVar6,uVar1 + 1);
    puVar13 = (undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x28);
    *puVar13 = uVar12;
    thunk_FUN_02dc1ef0(puVar13,uVar12);
    lVar11 = *(long *)puVar7;
  }
  else {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar11 = *(long *)puVar7;
      lVar15 = *(long *)(lVar11 + 0xb8);
    }
    if (*(long *)(lVar15 + 0x28) == 0) goto LAB_05f875b4;
    if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < (int)uVar1) goto LAB_05f86f78;
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar11 = *(long *)puVar7;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
  if (lVar11 == 0) goto LAB_05f875b4;
  if (*(int *)(lVar11 + 0x18) < (int)uVar2) {
    uVar10 = uVar10 | (int)uVar10 >> 8;
    uVar10 = uVar10 | (int)uVar10 >> 4;
    uVar10 = uVar10 | (int)uVar10 >> 2;
    uVar12 = FUN_02d4dd2c(*(undefined8 *)
                           Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_Triggering__
                          ,(uVar10 | (int)uVar10 >> 1) + 1);
    lVar11 = *(long *)puVar7;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar11);
      lVar11 = *(long *)puVar7;
    }
    puVar13 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x18);
    *puVar13 = uVar12;
    thunk_FUN_02dc1ef0(puVar13,uVar12);
  }
  puVar8 = 
  Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_PreviousPartBinding__;
  puVar6 = Method_PlayFab_Json_PocoJsonSerializerStrategy_TrySerializeUnknownTypes__;
  uVar10 = uVar20;
  if ((int)uVar20 <= (int)uVar3) {
    uVar10 = uVar3;
  }
  if ((int)uVar10 <= (int)uVar2) {
    uVar10 = uVar2;
  }
  if (0 < (int)uVar10) {
    lVar11 = 0;
    uVar18 = 0;
    do {
      if ((long)uVar18 < (long)(int)local_68._4_4_) {
        lVar15 = *(long *)puVar7;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar15 = *(long *)puVar7;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
        uVar9 = FUN_03709414(param_1,uVar18 & 0xffffffff,*(undefined8 *)puVar6);
        if (lVar15 == 0) goto LAB_05f875b4;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_05f875b8;
        *(undefined4 *)(lVar15 + uVar18 * 4 + 0x20) = uVar9;
        uVar20 = (uint)local_68;
      }
      if ((long)uVar18 < (long)(int)uVar20) {
        lVar15 = *(long *)puVar7;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar15 = *(long *)puVar7;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x20);
        auVar25 = FUN_0363a758(param_4,uVar18 & 0xffffffff,*(undefined8 *)puVar8);
        if (lVar15 == 0) goto LAB_05f875b4;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_05f875b8;
        *(undefined1 (*) [16])(lVar15 + lVar11 + 0x20) = auVar25;
      }
      if ((long)uVar18 < (long)(int)local_a4[0]) {
        lVar15 = *(long *)puVar7;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
          lVar15 = *(long *)puVar7;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x28);
        auVar25 = FUN_0363a758(param_5,uVar18 & 0xffffffff,*(undefined8 *)puVar8);
        if (lVar15 == 0) goto LAB_05f875b4;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_05f875b8;
        *(undefined1 (*) [16])(lVar15 + lVar11 + 0x20) = auVar25;
      }
      uVar18 = uVar18 + 1;
      lVar11 = lVar11 + 0x10;
    } while (uVar10 != uVar18);
  }
  lVar11 = *(long *)puVar7;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar11 = *(long *)puVar7;
  }
  lVar11 = *(long *)(lVar11 + 0xb8);
  uVar10 = FUN_05f875dc(*(undefined8 *)(lVar11 + 8),param_2,param_3,*(undefined8 *)(lVar11 + 0x20),
                        &local_68,*(undefined8 *)(lVar11 + 0x28),local_a4,param_6,param_7,
                        *(undefined8 *)(lVar11 + 0x18),(long)&local_68 + 4);
  lVar11 = *(long *)puVar7;
  lVar15 = **(long **)(lVar11 + 0xb8);
  if (lVar15 == 0) {
LAB_05f87238:
    uVar2 = local_68._4_4_ | (int)local_68._4_4_ >> 0x10;
    uVar2 = uVar2 | (int)uVar2 >> 8;
    uVar2 = uVar2 | (int)uVar2 >> 4;
    uVar2 = uVar2 | (int)uVar2 >> 2;
    uVar12 = FUN_02d4dd2c(*(undefined8 *)
                           Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_WithGroup__
                          ,(uVar2 | (int)uVar2 >> 1) + 1);
    lVar11 = *(long *)puVar7;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar11);
      lVar11 = *(long *)puVar7;
    }
    **(undefined8 **)(lVar11 + 0xb8) = uVar12;
    thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar7 + 0xb8),uVar12);
    lVar11 = *(long *)puVar7;
  }
  else {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar11);
      lVar11 = *(long *)puVar7;
      lVar15 = **(long **)(lVar11 + 0xb8);
      if (lVar15 == 0) goto LAB_05f875b4;
    }
    if (*(int *)(lVar15 + 0x18) <= (int)local_68._4_4_) goto LAB_05f87238;
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar11);
    lVar11 = *(long *)puVar7;
  }
  lVar11 = **(long **)(lVar11 + 0xb8);
  if (lVar11 != 0) {
    if (*(uint *)(lVar11 + 0x18) <= local_68._4_4_) {
LAB_05f875b8:
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    puVar13 = (undefined8 *)(lVar11 + (long)(int)local_68._4_4_ * 8 + 0x20);
    *puVar13 = 0;
    thunk_FUN_02dc1ef0(puVar13,0);
    *(undefined4 *)(param_4 + 0x18) = 0;
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
    uVar2 = (uint)local_68;
    if ((int)(uint)local_68 <= (int)local_a4[0]) {
      uVar2 = local_a4[0];
    }
    if ((int)uVar2 <= (int)local_68._4_4_) {
      uVar2 = local_68._4_4_;
    }
    *(undefined4 *)(param_5 + 0x18) = 0;
    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
    puVar6 = Method_Unity_Properties_PropertyBag_Register<RectInt>__;
    if (0 < (int)uVar2) {
      lVar15 = 0;
      uVar18 = 0;
      lVar11 = 0x28;
      lVar19 = 0x20;
      do {
        if ((long)uVar18 < (long)(int)local_68._4_4_) {
          lVar14 = *(long *)puVar7;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar14 = *(long *)puVar7;
          }
          lVar16 = (*(undefined8 **)(lVar14 + 0xb8))[3];
          if (lVar16 == 0) goto LAB_05f875b4;
          if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_05f875b8;
          lVar16 = lVar16 + lVar15;
          plVar17 = (long *)**(undefined8 **)(lVar14 + 0xb8);
          uVar21 = *(undefined8 *)(lVar16 + 0x2c);
          uVar12 = *(undefined8 *)(lVar16 + 0x24);
          uVar9 = *(undefined4 *)(lVar16 + 0x20);
          uVar23 = *(undefined8 *)(lVar16 + 0x3c);
          uVar22 = *(undefined8 *)(lVar16 + 0x34);
          uVar4 = *(undefined4 *)(lVar16 + 0x44);
          uVar24 = *(undefined4 *)(lVar16 + 0x48);
          uVar5 = *(undefined4 *)(lVar16 + 0x4c);
          lVar14 = thunk_FUN_02d8a638(*(undefined8 *)
                                       Method_System_ComponentModel_PropertyTabAttribute_InitializeArrays__
                                     );
          FUN_05044d4c(lVar14,0);
          local_c0 = (undefined4)uVar22;
          *(undefined4 *)(lVar14 + 0x38) = uVar24;
          *(undefined4 *)(lVar14 + 0x10) = uVar9;
          uStack_88 = (undefined4)uVar23;
          uStack_84 = (undefined4)((ulong)uVar23 >> 0x20);
          uStack_8c = (undefined4)((ulong)uVar22 >> 0x20);
          *(undefined8 *)(lVar14 + 0x1c) = uVar21;
          *(undefined8 *)(lVar14 + 0x14) = uVar12;
          *(undefined4 *)(lVar14 + 0x24) = local_c0;
          *(ulong *)(lVar14 + 0x30) = CONCAT44(uVar4,uStack_84);
          *(ulong *)(lVar14 + 0x28) = CONCAT44(uStack_88,uStack_8c);
          *(undefined4 *)(lVar14 + 0x3c) = uVar5;
          local_90 = local_c0;
          local_80 = uVar4;
          if (plVar17 == (long *)0x0) goto LAB_05f875b4;
          lVar16 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar17 + 0x40));
          if (lVar16 == 0) {
            uVar12 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
            FUN_02d4ddac(uVar12,0);
          }
          if (*(uint *)(plVar17 + 3) <= uVar18) goto LAB_05f875b8;
          plVar17[uVar18 + 4] = lVar14;
          thunk_FUN_02dc1ef0((long)plVar17 + lVar19,lVar14);
        }
        if ((long)uVar18 < (long)(int)(uint)local_68) {
          lVar14 = *(long *)puVar7;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar14 = *(long *)puVar7;
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x20);
          if (lVar14 == 0) goto LAB_05f875b4;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_05f875b8;
          lVar16 = *(long *)(param_4 + 0x10);
          uVar12 = ((undefined8 *)(lVar14 + lVar11))[-1];
          uVar21 = *(undefined8 *)(lVar14 + lVar11);
          lVar14 = *(long *)puVar6;
          *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_05f875b4;
          uVar20 = *(uint *)(param_4 + 0x18);
          if (uVar20 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar20 * 0x10;
            *(uint *)(param_4 + 0x18) = uVar20 + 1;
            *(undefined8 *)(lVar16 + 0x20) = uVar12;
            *(undefined8 *)(lVar16 + 0x28) = uVar21;
          }
          else {
            FUN_0363aa58(param_4,uVar12,uVar21,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        if ((long)uVar18 < (long)(int)local_a4[0]) {
          lVar14 = *(long *)puVar7;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar14 = *(long *)puVar7;
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x28);
          if (lVar14 == 0) goto LAB_05f875b4;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_05f875b8;
          lVar16 = *(long *)(param_5 + 0x10);
          uVar12 = ((undefined8 *)(lVar14 + lVar11))[-1];
          uVar21 = *(undefined8 *)(lVar14 + lVar11);
          lVar14 = *(long *)puVar6;
          *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_05f875b4;
          uVar20 = *(uint *)(param_5 + 0x18);
          if (uVar20 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar20 * 0x10;
            *(uint *)(param_5 + 0x18) = uVar20 + 1;
            *(undefined8 *)(lVar16 + 0x20) = uVar12;
            *(undefined8 *)(lVar16 + 0x28) = uVar21;
          }
          else {
            FUN_0363aa58(param_5,uVar12,uVar21,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar18 = uVar18 + 1;
        lVar11 = lVar11 + 0x10;
        lVar15 = lVar15 + 0x34;
        lVar19 = lVar19 + 8;
      } while (uVar2 != uVar18);
    }
    lVar11 = *(long *)puVar7;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar11 = *(long *)puVar7;
    }
    *param_8 = **(undefined8 **)(lVar11 + 0xb8);
    thunk_FUN_02dc1ef0(param_8);
LAB_05f8758c:
    return uVar10 & 1;
  }
LAB_05f875b4:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


