/*
FUNCTION_NAME: FUN_05e69410
ENTRY_POINT: 05e69410
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


int FUN_05e69410(long param_1,long param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  if ((DAT_066dc67a & 1) == 0) {
    FUN_02b3c81c(Method_OVRSpatialAnchor_UnboundAnchor_BindTo__);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_14__);
    DAT_066dc67a = 1;
  }
  puVar1 = PTR_DAT_06312d90;
  local_58 = 0;
  if (param_3 != 0) {
    lVar6 = FUN_05ded3a4(param_3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar1);
    }
    FUN_05c45700(lVar6 != 0,0);
    FUN_05c45700(*(long *)(param_3 + 0x88) == 0,0);
    plVar15 = (long *)(param_3 + 0x90);
    FUN_05c45700(*plVar15 == 0,0);
    if (*(int *)(param_3 + 0x9c) < 0) {
      if (param_1 == 0) goto LAB_05e69af4;
    }
    else {
      if (param_1 == 0) goto LAB_05e69af4;
      FUN_05e76ba4(param_1,param_3,0);
    }
    lVar6 = FUN_05e70d5c(param_1,0);
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = param_3;
      thunk_FUN_02bb0e9c((long *)(lVar6 + 0x10),param_3);
      *(long *)(param_3 + 0x88) = lVar6;
      thunk_FUN_02bb0e9c((long *)(param_3 + 0x88),lVar6);
      uVar3 = FUN_05decd00(param_3,0);
      FUN_05decd34(param_3,uVar3 & 0xfffffffb,0);
      uVar7 = FUN_05ded524(param_3,0);
      if ((uVar7 & 1) != 0) {
        *(uint *)(lVar6 + 0x68) = *(uint *)(lVar6 + 0x68) | 0x10;
      }
      if (param_2 == 0) {
        uVar8 = FUN_05e70e38(param_1,param_1,lVar6,0);
        puVar12 = (undefined8 *)(lVar6 + 0x18);
        *puVar12 = uVar8;
        thunk_FUN_02bb0e9c(puVar12,uVar8);
        FUN_05e7352c(param_1,*puVar12,0);
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(param_2 + 0x90);
        if (lVar14 == 0) {
          lVar14 = *(long *)(param_2 + 0x88);
        }
        plVar16 = (long *)(lVar6 + 0x20);
        *plVar16 = lVar14;
        thunk_FUN_02bb0e9c(plVar16,lVar14);
        if (*plVar16 == 0) goto LAB_05e69af4;
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(*plVar16 + 0x18);
        thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x18));
        if ((*(long *)(lVar6 + 0x20) == 0) ||
           (*(int *)(lVar6 + 0x6c) = *(int *)(*(long *)(lVar6 + 0x20) + 0x6c) + 1, lVar14 == 0))
        goto LAB_05e69af4;
        if ((*(byte *)(lVar14 + 0x68) & 1) == 0) {
          lVar10 = *(long *)(lVar14 + 0x48);
          *(long *)(lVar6 + 0x48) = lVar10;
        }
        else {
          *(long *)(lVar6 + 0x48) = lVar14;
          lVar10 = lVar14;
        }
        thunk_FUN_02bb0e9c(lVar6 + 0x48,lVar10);
      }
      if (*(long *)(lVar6 + 0x18) != 0) {
        uVar8 = FUN_05e6d954(*(long *)(lVar6 + 0x18),0);
        FUN_05e6d3e0(uVar8,*(undefined4 *)(lVar6 + 0x6c),0);
        uVar7 = FUN_05ded40c(param_3,0);
        uVar3 = *(uint *)(lVar6 + 0x68);
        if ((((uVar7 & 1) == 0) || ((uVar3 >> 4 & 1) != 0)) || (*(char *)(param_1 + 0x151) != '\0'))
        {
          uVar3 = uVar3 >> 4 & 1;
        }
        else {
          *(uint *)(lVar6 + 0x68) = uVar3 | 1;
          uVar3 = uVar3 & 0x10;
        }
        if (uVar3 != 0) {
          lVar10 = FUN_05e70d5c(param_1,0);
          *plVar15 = lVar10;
          thunk_FUN_02bb0e9c(plVar15,lVar10);
          if (lVar10 == 0) goto LAB_05e69af4;
          *(long *)(lVar10 + 0x10) = param_3;
          thunk_FUN_02bb0e9c((long *)(lVar10 + 0x10),param_3);
          puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          lVar9 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
          *(uint *)(lVar10 + 0x68) = *(uint *)(lVar10 + 0x68) | 0x20;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar9 = *(long *)puVar2;
          }
          *(undefined8 *)(lVar10 + 0xf8) = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x108);
          lVar9 = FUN_05e70e38(param_1,param_1,lVar10,0);
          plVar15 = (long *)(lVar10 + 0x18);
          *plVar15 = lVar9;
          thunk_FUN_02bb0e9c(plVar15,lVar9);
          if (*plVar15 == 0) goto LAB_05e69af4;
          uVar8 = FUN_05e6d954(*plVar15,0);
          FUN_05e6d3e0(uVar8,*(undefined4 *)(lVar10 + 0x6c),0);
          FUN_05e76d8c(param_1,param_3,1,0);
          FUN_05e76db4(param_1,param_3,0,0);
          FUN_05e76dfc(param_1,param_3,1,0);
          lVar10 = *(long *)(lVar6 + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05c45700(lVar10 != 0,0);
          if (lVar10 == 0) goto LAB_05e69af4;
          lVar9 = *(long *)(lVar10 + 0x78);
          *(long *)(lVar10 + 0x78) = *plVar15;
          thunk_FUN_02bb0e9c();
          if (*plVar15 == 0) goto LAB_05e69af4;
          plVar16 = (long *)(*plVar15 + 0x80);
          *plVar16 = lVar9;
          thunk_FUN_02bb0e9c(plVar16,lVar9);
          if (*plVar15 == 0) goto LAB_05e69af4;
          plVar15 = (long *)(*plVar15 + 0x70);
          *plVar15 = lVar10;
          thunk_FUN_02bb0e9c(plVar15,lVar10);
        }
        puVar2 = 
        Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
        ;
        if (*(int *)(*(long *)
                      Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05e69af8(lVar6);
        if (lVar14 != 0) {
          do {
            param_4 = param_4 + -1;
            if (param_4 < 0) {
              plVar15 = (long *)(lVar14 + 0x38);
              lVar9 = *plVar15;
              *plVar15 = lVar6;
              lVar10 = lVar6;
              goto LAB_05e6985c;
            }
            if (param_2 == 0) goto LAB_05e69af4;
            local_58 = *(undefined8 *)(param_2 + 0x268);
            lVar10 = FUN_05dfd538(&local_58,param_4,0);
            if (lVar10 == 0) goto LAB_05e69af4;
            lVar10 = *(long *)(lVar10 + 0x88);
          } while (lVar10 == 0);
          plVar15 = (long *)(lVar10 + 0x30);
          lVar9 = *plVar15;
          *plVar15 = lVar6;
          thunk_FUN_02bb0e9c(plVar15,lVar6);
          plVar15 = (long *)(lVar6 + 0x28);
          *plVar15 = lVar10;
LAB_05e6985c:
          thunk_FUN_02bb0e9c(plVar15,lVar10);
          if (lVar9 == 0) {
            plVar15 = (long *)(lVar14 + 0x40);
          }
          else {
            *(long *)(lVar6 + 0x30) = lVar9;
            thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar9);
            plVar15 = (long *)(lVar9 + 0x28);
          }
          *plVar15 = lVar6;
          thunk_FUN_02bb0e9c(plVar15,lVar6);
        }
        uVar3 = FUN_05e66d68(*(undefined8 *)(lVar6 + 0xf8));
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar1);
        }
        FUN_05c45700((uVar3 ^ 0xffffffff) & 1,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar7 = FUN_05e69c48(param_3);
        puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
        if ((uVar7 & 1) == 0) {
          lVar14 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_BindTo__;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar14 = *(long *)puVar1;
          }
          uVar8 = **(undefined8 **)(lVar14 + 0xb8);
        }
        else {
          if (*(long *)(param_1 + 0x148) == 0) goto LAB_05e69af4;
          uVar8 = FUN_05e7d314(*(long *)(param_1 + 0x148),0);
        }
        puVar12 = (undefined8 *)(lVar6 + 0x50);
        *puVar12 = 0;
        *(undefined8 *)(lVar6 + 0xf8) = uVar8;
        thunk_FUN_02bb0e9c(puVar12,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar7 = FUN_05e69c80(param_3);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05e69ca0(param_1,param_3);
          FUN_05e6a138(param_1,param_3);
        }
        uVar7 = FUN_05e66d68(*(undefined8 *)(lVar6 + 0xf8));
        puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
        if ((uVar7 & 1) == 0) {
          if ((*(long *)(lVar6 + 0x20) == 0) || ((*(byte *)(lVar6 + 0x68) & 1) != 0)) {
            lVar14 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar14 = *(long *)puVar1;
            }
            *(undefined8 *)(lVar6 + 0xf8) = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x108);
          }
          else {
            uVar7 = FUN_05e66d68(*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0xf8));
            lVar14 = *(long *)(lVar6 + 0x20);
            if ((uVar7 & 1) == 0) {
              if (lVar14 == 0) goto LAB_05e69af4;
              lVar14 = *(long *)(lVar14 + 0x50);
            }
            *(long *)(lVar6 + 0x50) = lVar14;
            thunk_FUN_02bb0e9c(puVar12);
            if (*(long *)(lVar6 + 0x20) == 0) goto LAB_05e69af4;
            *(undefined8 *)(lVar6 + 0xf8) = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0xf8);
            *(undefined1 *)(lVar6 + 0xff) = 0;
          }
        }
        else {
          lVar14 = *(long *)(param_1 + 0x148);
          uVar8 = *(undefined8 *)(lVar6 + 0xf8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05e691e0(&local_a0,lVar6);
          if (lVar14 == 0) goto LAB_05e69af4;
          uStack_d8 = uStack_98;
          local_e0 = local_a0;
          uStack_c8 = uStack_88;
          uStack_d0 = uStack_90;
          uStack_b8 = uStack_78;
          local_c0 = local_80;
          uStack_a8 = uStack_68;
          uStack_b0 = uStack_70;
          FUN_05e7cb94(lVar14,uVar8,&local_e0,0);
        }
        local_58 = *(undefined8 *)(param_3 + 0x268);
        iVar4 = FUN_05dfc264(&local_58,0);
        if (iVar4 < 1) {
          iVar13 = 1;
        }
        else {
          iVar13 = 0;
          iVar11 = 0;
          do {
            local_58 = *(undefined8 *)(param_3 + 0x268);
            uVar8 = FUN_05dfd538(&local_58,iVar11,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)puVar2);
            }
            iVar5 = FUN_05e69410(param_1,param_3,uVar8,iVar11);
            iVar11 = iVar11 + 1;
            iVar13 = iVar5 + iVar13;
          } while (iVar4 != iVar11);
          iVar13 = iVar13 + 1;
        }
        return iVar13;
      }
    }
  }
LAB_05e69af4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


