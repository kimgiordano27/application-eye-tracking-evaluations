/*
FUNCTION_NAME: FUN_0713ba08
ENTRY_POINT: 0713ba08
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0713c240) */
/* WARNING: Removing unreachable block (ram,0x0713c200) */

undefined1  [16] FUN_0713ba08(long param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  undefined1 local_60 [16];
  
  if ((DAT_08267f21 & 1) == 0) {
    FUN_0373b518(UnityEngine_UIElements_DefaultMultiColumnTreeViewController<object>_TypeInfo);
    FUN_0373b518(PTR_DAT_07dfbd48);
    FUN_0373b518(PTR_DAT_07dfc280);
    FUN_0373b518(PTR_DAT_07dfc108);
    FUN_0373b518(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                );
    FUN_0373b518(PTR_DAT_07df7550);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(UnityEngine_UIElements_DefaultTreeViewController<object>_TypeInfo);
    FUN_0373b518(PTR_DAT_07df82f8);
    FUN_0373b518(Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<Manager>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_TypeInfo
                );
    FUN_0373b518(Unity_VisualScripting_UnityOnTriggerEnter2DMessageListener_var);
    FUN_0373b518(PTR_DAT_07df4cf8);
                    /* try { // try from 0713bad4 to 0723bccb has its CatchHandler @ 0713bad4
                       catch() { ... } // from try @ 0713bad4 with catch @ 0713bad4
                       catch() { ... } // from try @ 0713bcfc with catch @ 0713bad4
                       catch() { ... } // from try @ 0713be6c with catch @ 0713bad4
                       catch() { ... } // from try @ 0713be94 with catch @ 0713bad4
                       catch() { ... } // from try @ 0713bf28 with catch @ 0713bad4
                       catch() { ... } // from try @ 0713bf70 with catch @ 0713bad4
                       catch() { ... } // from try @ 0713bfbc with catch @ 0713bad4
                       catch() { ... } // from try @ 0713bfe4 with catch @ 0713bad4
                       catch() { ... } // from try @ 0713c014 with catch @ 0713bad4 */
    FUN_0373b518(
                System_Collections_Generic_Dictionary<RFShatter_Kortez<int,_int,_int>,_List<int>>_TypeInfo
                );
    FUN_0373b518(
                System_Collections_Generic_Dictionary<StructMultiKey<Type,_Type>,_JsonContract>_TypeInfo
                );
    FUN_0373b518(PTR_DAT_07dfc190);
    FUN_0373b518(UnityEngine_Rendering_DebugDisplayStats<URPProfileId>_TypeInfo);
    FUN_0373b518(
                System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>_TypeInfo
                );
    DAT_08267f21 = 1;
  }
  puVar5 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var;
  puVar6 = PTR_DAT_07dfc280;
  puVar4 = PTR_DAT_07dfbd48;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  local_70 = 0;
  local_b0 = 0;
  local_f0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  if (param_3 != 0) {
    uVar7 = FUN_07041e9c(param_3,*(undefined8 *)PTR_DAT_07dfc108);
    uVar8 = FUN_07041e9c(param_3,*(undefined8 *)puVar4);
    uVar9 = FUN_07041e9c(param_3,*(undefined8 *)puVar6);
    uVar10 = FUN_07041e9c(param_3,*(undefined8 *)puVar5);
    uVar20 = *(undefined8 *)(param_1 + 0x40);
    uVar11 = FUN_0708172c(param_1,0);
    puVar4 = PTR_DAT_07d896f8;
    if (param_2 != 0) {
      plVar12 = (long *)FUN_041b4a9c(param_2,uVar20,&local_68,uVar11,
                                     *(undefined8 *)
                                      System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>_TypeInfo
                                     ,0x1b9,*(undefined8 *)
                                             System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_TypeInfo
                                    );
      FUN_0713ab64(param_1,&local_68,uVar7,uVar8,uVar9,uVar10);
      FUN_0713ac10(param_1,&local_68,0,param_2,1);
      puVar6 = PTR_DAT_07df7550;
      if (*(char *)(param_1 + 0xcc) == '\0') {
        if (0 < *(int *)(param_1 + 200)) {
          uVar19 = 0;
          do {
            if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar15 = *(long *)(local_68 + 0x58);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            lVar17 = *plVar12;
            uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar18 != 0) {
              piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                  puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                  goto LAB_0713bcd8;
                }
                uVar18 = uVar18 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar18 != 0);
            }
            puVar13 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar6,9);
LAB_0713bcd8:
            (*(code *)*puVar13)(plVar12,lVar15 + uVar19 * 0xc + 0x20,puVar13[1]);
            uVar19 = uVar19 + 1;
          } while ((long)uVar19 < (long)*(int *)(param_1 + 200));
        }
        puVar5 = Unity_VisualScripting_UnityOnTriggerEnter2DMessageListener_var;
        uStack_158 = *(undefined8 *)(param_1 + 0xf0);
        local_160 = *(undefined8 *)(param_1 + 0xe8);
        uStack_148 = *(undefined8 *)(param_1 + 0x100);
        local_150 = *(undefined8 *)(param_1 + 0xf8);
        local_130 = *(undefined4 *)(param_1 + 0x118);
        uStack_138 = *(undefined8 *)(param_1 + 0x110);
        local_140 = *(undefined8 *)(param_1 + 0x108);
        lVar15 = *(long *)Unity_VisualScripting_UnityOnTriggerEnter2DMessageListener_var;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar15 = *(long *)puVar5;
        }
        bVar1 = **(char **)(lVar15 + 0xb8) == '\0';
        if (bVar1) {
          puVar13 = &local_e0;
          uStack_d8 = uStack_158;
          local_e0 = local_160;
          uStack_c8 = uStack_148;
          local_d0 = local_150;
          uStack_b8 = uStack_138;
          local_c0 = local_140;
          local_b0 = local_130;
        }
        else {
          puVar13 = &local_a0;
          uStack_98 = uStack_158;
          local_a0 = local_160;
          uStack_88 = uStack_148;
          local_90 = local_150;
          uStack_78 = uStack_138;
          local_80 = local_140;
          local_70 = local_130;
        }
        uStack_118 = puVar13[1];
        local_120 = *puVar13;
        uStack_108 = puVar13[3];
        local_110 = puVar13[2];
        local_f0 = *(undefined4 *)(puVar13 + 6);
        uStack_f8 = puVar13[5];
        local_100 = puVar13[4];
        uVar7 = *(undefined8 *)UnityEngine_Rendering_DebugDisplayStats<URPProfileId>_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_07dfc190 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uStack_198 = uStack_118;
        local_1a0 = local_120;
        uStack_188 = uStack_108;
        uStack_190 = local_110;
        uStack_178 = uStack_f8;
        local_180 = local_100;
        local_170 = local_f0;
        local_60 = FUN_071026d0(param_2,&local_1a0,uVar7,1,bVar1,1,0);
        uVar8 = local_60._8_8_;
        uVar7 = local_60._0_8_;
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar15 = *plVar12;
        uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar19 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07df82f8) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
              goto LAB_0713be68;
            }
            uVar19 = uVar19 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)FUN_0377596c(plVar12,*(long *)PTR_DAT_07df82f8,4);
LAB_0713be68:
        (*(code *)*puVar13)(plVar12,uVar7,uVar8,2,puVar13[1]);
      }
      else {
        if (*(long *)(param_2 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        local_60 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x58) + 0xb8);
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar15 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar19 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0xb) * 0x10 + 0x138);
            goto LAB_0713bed4;
          }
          uVar19 = uVar19 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar6,0xb);
LAB_0713bed4:
      (*(code *)*puVar13)(plVar12,0,puVar13[1]);
      lVar15 = *plVar12;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar19 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0xc) * 0x10 + 0x138);
            goto LAB_0713bf34;
          }
          uVar19 = uVar19 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar19 != 0);
      }
      puVar13 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar6,0xc);
LAB_0713bf34:
      (*(code *)*puVar13)(plVar12,1,puVar13[1]);
      if (*(int *)(*(long *)PTR_DAT_07df4cf8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (DAT_08266f1e == '\0') {
        FUN_0373b518(PTR_DAT_07d987b0);
        DAT_08266f1e = '\x01';
      }
      puVar5 = PTR_DAT_07d987b0;
      if (*(int *)(*(long *)PTR_DAT_07d987b0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (DAT_08266f1f == '\0') {
        FUN_0373b518(PTR_DAT_07d987b0);
        DAT_08266f1f = '\x01';
      }
      uVar3 = (uint)(ushort)local_60._2_2_;
      if (local_60._2_2_ != 0) {
        lVar15 = *(long *)puVar5;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar15 = *(long *)puVar5;
        }
        piVar16 = *(int **)(lVar15 + 0xb8);
        if (uVar3 << 0x10 != *piVar16) {
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            piVar16 = *(int **)(*(long *)puVar5 + 0xb8);
          }
          if (uVar3 << 0x10 != piVar16[1]) goto LAB_0713c08c;
        }
        puVar5 = Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<Manager>_TypeInfo;
        lVar15 = *(long *)Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<Manager>_TypeInfo;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar15 = *(long *)puVar5;
        }
        lVar17 = *plVar12;
        uVar2 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x28);
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
              puVar13 = (undefined8 *)(lVar17 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto LAB_0713c078;
            }
            uVar19 = uVar19 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar6,3);
LAB_0713c078:
        (*(code *)*puVar13)(plVar12,local_60,uVar2,puVar13[1]);
      }
LAB_0713c08c:
      puVar6 = 
      System_Collections_Generic_Dictionary<StructMultiKey<Type,_Type>,_JsonContract>_TypeInfo;
      lVar15 = *(long *)
                System_Collections_Generic_Dictionary<StructMultiKey<Type,_Type>,_JsonContract>_TypeInfo
      ;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_03798b70(lVar15);
        lVar15 = *(long *)puVar6;
      }
      lVar17 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      if (lVar17 == 0) {
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_03798b70(lVar15);
          lVar15 = *(long *)puVar6;
        }
        uVar7 = **(undefined8 **)(lVar15 + 0xb8);
        lVar17 = thunk_FUN_037788cc(*(undefined8 *)
                                     UnityEngine_UIElements_DefaultMultiColumnTreeViewController<object>_TypeInfo
                                   );
        FUN_052032cc(lVar17,uVar7,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<RFShatter_Kortez<int,_int,_int>,_List<int>>_TypeInfo
                     ,0);
        plVar14 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
        *plVar14 = lVar17;
        thunk_FUN_037aeb94(plVar14,lVar17);
      }
      lVar15 = *plVar12;
      lVar21 = *(long *)UnityEngine_UIElements_DefaultTreeViewController<object>_TypeInfo;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar19 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)(lVar21 + 0x20)) {
            lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar21 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_0713c170;
          }
          uVar19 = uVar19 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar19 != 0);
      }
      lVar15 = FUN_0377596c(plVar12);
LAB_0713c170:
      lVar15 = thunk_FUN_0375ad08(*(undefined8 *)(lVar15 + 8),lVar21);
      (**(code **)(lVar15 + 8))(plVar12,lVar17,lVar15);
      if (plVar12 != (long *)0x0) {
        lVar15 = *plVar12;
        uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar19 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0713c1e8;
            }
            uVar19 = uVar19 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar4,0);
LAB_0713c1e8:
        (*(code *)*puVar13)(plVar12,puVar13[1]);
      }
      return local_60;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


