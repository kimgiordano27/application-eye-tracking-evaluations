/*
FUNCTION_NAME: FUN_070c2c34
ENTRY_POINT: 070c2c34
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x070c38fc) */

void FUN_070c2c34(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  uint local_218;
  uint uStack_214;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1ec;
  uint local_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b4;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_14c;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_10c;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  
  if ((DAT_08267bc5 & 1) == 0) {
    FUN_0373b518(UnityEngine_UIElements_DefaultEventSystem_FocusBasedEventSequenceContext_var);
    FUN_0373b518(PTR_DAT_07d8dc68);
    FUN_0373b518(PTR_DAT_07df7550);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(UnityEngine_InputSystem_DefaultInputActions_PlayerActions_var);
    FUN_0373b518(Newtonsoft_Json_Linq_JObject_var);
    FUN_0373b518(UnityEngine_InputSystem_DefaultInputActions_UIActions_var);
    FUN_0373b518(System_Xml_XmlAttribute_var);
    FUN_0373b518(UnityEngine_Rendering_Universal_Internal_DeferredLights_InitParams_var);
    FUN_0373b518(DIVR_Animation2UnityEvent_EventPair_var);
    FUN_0373b518(PTR_DAT_07dfc190);
    FUN_0373b518(System_DelegateSerializationHolder_DelegateEntry_var);
    FUN_0373b518(Cinemachine_CinemachineVirtualCameraBase_TransitionParams_var);
    FUN_0373b518(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
    FUN_0373b518(Unity_VisualScripting_FullSerializer_fsIgnoreAttribute_var);
    DAT_08267bc5 = 1;
  }
  local_78[0] = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_a4 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  if ((*(long *)(param_1 + 0x1d0) != 0) &&
     (plVar12 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x70), plVar12 != (long *)0x0)) {
    iVar8 = (**(code **)(*plVar12 + 0x218))(plVar12,*(undefined8 *)(*plVar12 + 0x220));
    if (iVar8 == 0) {
      iVar8 = 1;
    }
    else {
      if (iVar8 != 1) {
        thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
        uVar13 = thunk_FUN_037788cc();
        FUN_061a9988(uVar13,0);
        uVar17 = thunk_FUN_037a15ac(StrikerLink_Shared_Devices_Types_DeviceMavrik_LedMask_var);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar13,uVar17);
      }
      iVar8 = 2;
    }
    uVar22 = *(int *)(param_1 + 0xb8) >> iVar8;
    uVar21 = *(int *)(param_1 + 0xbc) >> iVar8;
    if ((int)uVar22 < 2) {
      uVar22 = 1;
    }
    if ((int)uVar21 < 2) {
      uVar21 = 1;
    }
    uVar10 = uVar22;
    if ((int)uVar22 <= (int)uVar21) {
      uVar10 = uVar21;
    }
    if (DAT_0825a2e0 == '\0') {
      FUN_0373b518(PTR_DAT_07d863e8);
      DAT_0825a2e0 = '\x01';
    }
    puVar2 = PTR_DAT_07d863e8;
    if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    dVar29 = (double)FUN_06243bac((double)(int)uVar10,0x4000000000000000,0);
    if (DAT_08252c4f == '\0') {
      FUN_0373b518(PTR_DAT_07d863e8);
      DAT_08252c4f = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    puVar2 = Newtonsoft_Json_Linq_JObject_var;
    uVar10 = 0x80000000;
    if ((float)(int)((float)dVar29 + -1.0) != INFINITY) {
      uVar10 = (int)((float)dVar29 + -1.0);
    }
    if ((*(long *)(param_1 + 0x1d0) != 0) &&
       (plVar12 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x78), plVar12 != (long *)0x0)) {
      uVar9 = (**(code **)(*plVar12 + 0x218))(plVar12,*(undefined8 *)(*plVar12 + 0x220));
      if ((int)uVar10 <= (int)uVar9) {
        uVar9 = uVar10;
      }
      if ((int)uVar10 < 1) {
        uVar9 = 1;
      }
      uVar13 = FUN_04147de4(0x31,*(undefined8 *)puVar2);
      FUN_06f533dc(local_78,uVar13,0);
      if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x58);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar26 = (**(code **)(*plVar12 + 0x218))(plVar12,*(undefined8 *)(*plVar12 + 0x220));
      if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x40);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      (**(code **)(*plVar12 + 0x218))(plVar12,*(undefined8 *)(*plVar12 + 0x220));
      fVar27 = (float)FUN_07594208(0);
      if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x50);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      fVar28 = (float)(**(code **)(*plVar12 + 0x218))(plVar12,*(undefined8 *)(*plVar12 + 0x220));
      fVar1 = fVar28;
      if (1.0 < fVar28) {
        fVar1 = 1.0;
      }
      fVar1 = fVar1 * DAT_015866ac + DAT_01586808;
      if (fVar28 < 0.0) {
        fVar1 = DAT_01586808;
      }
      local_80 = 0;
      local_90 = CONCAT44(uVar26,fVar1);
      uStack_88 = CONCAT44(fVar27 * 0.5,fVar27);
      if (*(long *)(param_1 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x68);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar7 = (**(code **)(*plVar12 + 0x218))(plVar12,*(undefined8 *)(*plVar12 + 0x220));
      local_80 = CONCAT31(local_80._1_3_,uVar7) & 0xffffff01;
      local_80 = CONCAT22(local_80._2_2_,CONCAT11(param_5,(undefined1)local_80)) & 0xffff01ff;
      if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar24 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x50);
      uVar10 = FUN_070cc864((ulong *)(param_1 + 0x268),&local_90,0);
      puVar2 = System_Xml_XmlAttribute_var;
      if (*(int *)(*(long *)System_Xml_XmlAttribute_var + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar11 = FUN_07575020(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48),0);
      if ((uVar10 & uVar11 & 1) == 0) {
        lVar14 = *(long *)puVar2;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar14 = *(long *)puVar2;
        }
        thunk_FUN_07576abc(local_90 & 0xffffffff,local_90._4_4_,uStack_88 & 0xffffffff,
                           uStack_88._4_4_,lVar24,*(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x48),0
                          );
        uVar10 = local_80;
        puVar3 = PTR_DAT_07d8dc68;
        if (*(int *)(*(long *)PTR_DAT_07d8dc68 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        puVar5 = Unity_VisualScripting_FullSerializer_fsIgnoreAttribute_var;
        FUN_06fa838c(lVar24,*(undefined8 *)
                             Unity_VisualScripting_FullSerializer_fsIgnoreAttribute_var,uVar10 & 1,0
                    );
        puVar4 = System_Xml_Serialization_XmlSchemaProviderAttribute_var;
        FUN_06fa838c(lVar24,*(undefined8 *)System_Xml_Serialization_XmlSchemaProviderAttribute_var,
                     local_80 >> 8 & 1,0);
        uVar23 = 0;
        do {
          if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar24 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x58);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(uint *)(lVar24 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          lVar24 = *(long *)(lVar24 + uVar23 * 8 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          thunk_FUN_07576abc(local_90 & 0xffffffff,local_90._4_4_,uStack_88 & 0xffffffff,
                             uStack_88._4_4_,lVar24,
                             *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48),0);
          uVar10 = local_80;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_06fa838c(lVar24,*(undefined8 *)puVar5,uVar10 & 1,0);
          FUN_06fa838c(lVar24,*(undefined8 *)puVar4,local_80 >> 8 & 1,0);
          uVar23 = uVar23 + 1;
        } while (uVar23 != 0x10);
        *(uint *)(param_1 + 0x278) = local_80;
        *(ulong *)(param_1 + 0x270) = uStack_88;
        *(ulong *)(param_1 + 0x268) = local_90;
      }
      FUN_070bb1d8(&local_100,param_1,uVar22,uVar21,*(undefined4 *)(param_1 + 0x210),0);
      uVar13 = uStack_f8;
      uStack_b0 = CONCAT44(uStack_e4,uStack_e8);
      uVar26 = (undefined4)local_100;
      uStack_9c = uStack_d4;
      uStack_a0 = uStack_d8;
      uStack_b8 = uStack_f0;
      local_c0 = uStack_f8;
      uStack_a8 = uStack_e0;
      local_a4 = uStack_dc;
      uVar6 = local_100._4_4_;
      lVar14 = *(long *)(param_1 + 0x150);
      uStack_f8 = uStack_f0;
      local_100 = uVar13;
      uStack_dc = (undefined4)uStack_d4;
      uStack_d8 = (undefined4)((ulong)uStack_d4 >> 0x20);
      lVar24 = *(long *)(param_1 + 0x138);
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(int *)(lVar24 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      if (*(long *)(lVar24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar24 + 0x20) + 0x58);
      uStack_f0 = uStack_b0;
      if (*(int *)(*(long *)PTR_DAT_07dfc190 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uStack_10c = CONCAT44(uStack_d8,uStack_dc);
      local_138 = uVar26;
      local_134 = uVar6;
      uStack_128 = uStack_f8;
      local_130 = local_100;
      local_120 = uStack_f0;
      auVar30 = FUN_071026d0(param_2,&local_138,uVar13,0,1,1,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      *(undefined1 (*) [16])(lVar14 + 0x20) = auVar30;
      lVar24 = *(long *)(param_1 + 0x140);
      lVar14 = *(long *)(param_1 + 0x148);
      uStack_168 = uStack_b8;
      local_170 = local_c0;
      local_160 = uStack_b0;
      uStack_14c = uStack_9c;
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(int *)(lVar24 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      if (*(long *)(lVar24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      local_1a8 = uVar26;
      uStack_1a4 = uVar6;
      uStack_198 = uStack_b8;
      local_1a0 = local_c0;
      local_190 = uStack_b0;
      uStack_17c = uStack_9c;
      auVar30 = FUN_071026d0(param_2,&local_1a8,*(undefined8 *)(*(long *)(lVar24 + 0x20) + 0x58),0,1
                             ,1,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      *(undefined1 (*) [16])(lVar14 + 0x20) = auVar30;
      if (1 < (int)uVar9) {
        uVar10 = 1;
        do {
          uVar22 = uVar22 >> 1;
          lVar24 = *(long *)(param_1 + 0x150);
          if (uVar22 == 0) {
            uVar22 = 1;
          }
          uVar21 = uVar21 >> 1;
          if (uVar21 == 0) {
            uVar21 = 1;
          }
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar14 = *(long *)(param_1 + 0x148);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          uStack_f8 = uStack_b8;
          local_100 = local_c0;
          uStack_f0 = uStack_b0;
          uStack_dc = (undefined4)uStack_9c;
          uStack_d8 = (undefined4)((ulong)uStack_9c >> 0x20);
          lVar18 = *(long *)(param_1 + 0x138);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          lVar25 = (long)(int)uVar10;
          lVar18 = *(long *)(lVar18 + lVar25 * 8 + 0x20);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar13 = *(undefined8 *)(lVar18 + 0x58);
          if (*(int *)(*(long *)PTR_DAT_07dfc190 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uStack_1b4 = CONCAT44(uStack_d8,uStack_dc);
          uStack_1d0 = uStack_f8;
          local_1d8 = local_100;
          uStack_1c8 = uStack_f0;
          local_1e0 = uVar22;
          uStack_1dc = uVar21;
          auVar30 = FUN_071026d0(param_2,&local_1e0,uVar13,0,1,1,0);
          if (*(uint *)(lVar24 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          *(undefined1 (*) [16])(lVar24 + lVar25 * 0x10 + 0x20) = auVar30;
          uStack_168 = uStack_b8;
          local_170 = local_c0;
          local_160 = uStack_b0;
          uStack_14c = uStack_9c;
          lVar24 = *(long *)(param_1 + 0x140);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(uint *)(lVar24 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          lVar24 = *(long *)(lVar24 + lVar25 * 8 + 0x20);
          if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uStack_1ec = uStack_9c;
          uStack_208 = uStack_b8;
          local_210 = local_c0;
          uStack_200 = uStack_b0;
          local_218 = uVar22;
          uStack_214 = uVar21;
          auVar30 = FUN_071026d0(param_2,&local_218,*(undefined8 *)(lVar24 + 0x58),0,1,1,0);
          uVar10 = uVar10 + 1;
          *(long *)(lVar14 + lVar25 * 0x10 + 0x20) = auVar30._0_8_;
          *(long *)(lVar14 + lVar25 * 0x10 + 0x28) = auVar30._8_8_;
        } while (uVar9 != uVar10);
      }
      FUN_06f533e8(local_78,0);
      uVar13 = FUN_04147de4(0x1a,*(undefined8 *)Newtonsoft_Json_Linq_JObject_var);
      puVar2 = PTR_DAT_07d896f8;
      if (param_2 != 0) {
        plVar12 = (long *)FUN_041b4eb8(param_2,*(undefined8 *)
                                                System_DelegateSerializationHolder_DelegateEntry_var
                                       ,&local_c8,uVar13,
                                       *(undefined8 *)
                                        Cinemachine_CinemachineVirtualCameraBase_TransitionParams_var
                                       ,0x1bc,*(undefined8 *)
                                               UnityEngine_InputSystem_DefaultInputActions_UIActions_var
                                      );
        if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(uint *)(local_c8 + 0x10) = uVar9;
        if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(undefined8 *)(local_c8 + 0x18) = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x50);
        thunk_FUN_037aeb94((undefined8 *)(local_c8 + 0x18));
        if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(undefined8 *)(local_c8 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x58);
        thunk_FUN_037aeb94();
        uStack_f8 = param_3[1];
        local_100 = *param_3;
        if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(undefined8 *)(local_c8 + 0x30) = uStack_f8;
        *(undefined8 *)(local_c8 + 0x28) = local_100;
        *(undefined8 *)(local_c8 + 0x40) = *(undefined8 *)(param_1 + 0x150);
        thunk_FUN_037aeb94();
        if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(undefined8 *)(local_c8 + 0x38) = *(undefined8 *)(param_1 + 0x148);
        thunk_FUN_037aeb94();
        puVar3 = PTR_DAT_07df7550;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar24 = *plVar12;
        uVar23 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar23 != 0) {
          piVar20 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07df7550) {
              puVar15 = (undefined8 *)(lVar24 + (long)(*piVar20 + 0xb) * 0x10 + 0x138);
              goto LAB_070c3578;
            }
            uVar23 = uVar23 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar23 != 0);
        }
        puVar15 = (undefined8 *)FUN_0377596c(plVar12,*(long *)PTR_DAT_07df7550,0xb);
LAB_070c3578:
        (*(code *)*puVar15)(plVar12,0,puVar15[1]);
        lVar24 = *plVar12;
        uVar23 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar23 != 0) {
          piVar20 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
              puVar15 = (undefined8 *)(lVar24 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_070c35d4;
            }
            uVar23 = uVar23 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar23 != 0);
        }
        puVar15 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar3,0);
LAB_070c35d4:
        (*(code *)*puVar15)(plVar12,param_3,1,puVar15[1]);
        if (0 < (int)uVar9) {
          uVar23 = 0;
          do {
            lVar24 = *(long *)(param_1 + 0x150);
            if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(uint *)(lVar24 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            lVar14 = *plVar12;
            uVar19 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                  puVar15 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_070c3658;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar15 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar3,0);
LAB_070c3658:
            (*(code *)*puVar15)(plVar12,lVar24 + uVar23 * 0x10 + 0x20,3,puVar15[1]);
            lVar24 = *(long *)(param_1 + 0x148);
            if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(uint *)(lVar24 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            lVar14 = *plVar12;
            uVar19 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
                  puVar15 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_070c36d0;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar15 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar3,0);
LAB_070c36d0:
            (*(code *)*puVar15)(plVar12,lVar24 + uVar23 * 0x10 + 0x20,3,puVar15[1]);
            uVar23 = uVar23 + 1;
          } while (uVar23 != uVar9);
        }
        puVar3 = DIVR_Animation2UnityEvent_EventPair_var;
        lVar24 = *(long *)DIVR_Animation2UnityEvent_EventPair_var;
        if (*(int *)(lVar24 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar24);
          lVar24 = *(long *)puVar3;
        }
        lVar14 = *(long *)(*(long *)(lVar24 + 0xb8) + 0x50);
        if (lVar14 == 0) {
          if (*(int *)(lVar24 + 0xe4) == 0) {
            thunk_FUN_03798b70(lVar24);
            lVar24 = *(long *)puVar3;
          }
          uVar13 = **(undefined8 **)(lVar24 + 0xb8);
          lVar14 = thunk_FUN_037788cc(*(undefined8 *)
                                       UnityEngine_UIElements_DefaultEventSystem_FocusBasedEventSequenceContext_var
                                     );
          FUN_05203178(lVar14,uVar13,
                       *(undefined8 *)
                        UnityEngine_Rendering_Universal_Internal_DeferredLights_InitParams_var,0);
          plVar16 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
          *plVar16 = lVar14;
          thunk_FUN_037aeb94(plVar16,lVar14);
        }
        lVar24 = *plVar12;
        lVar18 = *(long *)UnityEngine_InputSystem_DefaultInputActions_PlayerActions_var;
        uVar23 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar23 != 0) {
          piVar20 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)(lVar18 + 0x20)) {
              lVar24 = lVar24 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar18 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_070c37d8;
            }
            uVar23 = uVar23 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar23 != 0);
        }
        lVar24 = FUN_0377596c(plVar12);
LAB_070c37d8:
        lVar24 = thunk_FUN_0375ad08(*(undefined8 *)(lVar24 + 8),lVar18);
        (**(code **)(lVar24 + 8))(plVar12,lVar14,lVar24);
        if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar24 = *(long *)(local_c8 + 0x38);
        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(int *)(lVar24 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        uVar13 = *(undefined8 *)(lVar24 + 0x20);
        param_4[1] = *(undefined8 *)(lVar24 + 0x28);
        *param_4 = uVar13;
        if (plVar12 != (long *)0x0) {
          lVar24 = *plVar12;
          uVar23 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar23 != 0) {
            piVar20 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
                puVar15 = (undefined8 *)(lVar24 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_070c3870;
              }
              uVar23 = uVar23 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar23 != 0);
          }
          puVar15 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar2,0);
LAB_070c3870:
          (*(code *)*puVar15)(plVar12,puVar15[1]);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


