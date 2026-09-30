/*
FUNCTION_NAME: FUN_059abb00
ENTRY_POINT: 059abb00
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_059abb00(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar9 = &local_d0;
  if ((DAT_066d3a1d & 1) == 0) {
    FUN_02b3c81c(Method_System_WeakReference<RegexReplacement>_TryGetTarget__);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__);
    FUN_02b3c81c(
                Method_Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_OnDebugVisibilityChanged__
                );
    FUN_02b3c81c(Method_Pico_Platform_Task<SessionMedia>__ctor__);
    DAT_066d3a1d = 1;
  }
  puVar2 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
  lVar10 = *param_3;
  if (lVar10 != 0) {
    lVar4 = FUN_0590661c(lVar10,*(undefined8 *)
                                 Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__
                        );
    puVar5 = (undefined8 *)FUN_0599d0b4(param_3,0);
    uVar11 = *puVar5;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d355c == '\0') {
      FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
      DAT_066d355c = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *(long *)puVar2;
    }
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<EraseAnchorByUuidAsync>d__29>__
    ;
    if (**(long **)(lVar6 + 0xb8) != 0) {
      puVar5 = (undefined8 *)(**(long **)(lVar6 + 0xb8) + 0x10);
      *puVar5 = uVar11;
      thunk_FUN_02bb0e9c(puVar5,uVar11);
      lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
      if (*(char *)(param_1 + 200) == '\0') {
        lVar7 = FUN_0590661c(lVar10,*(undefined8 *)
                                     Method_Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_OnDebugVisibilityChanged__
                            );
        if (lVar7 != 0) {
          if (*(char *)(lVar7 + 0x30) == '\0') {
            return;
          }
          uVar11 = FUN_0590661c(lVar10,*(undefined8 *)
                                        Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                               );
          uVar8 = FUN_0590661c(lVar10,*(undefined8 *)
                                       Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__
                              );
          FUN_059ac064(param_1,param_1 + 0xd8,uVar11,uVar8,lVar7);
          if (((*(long *)(param_1 + 0xb8) != 0) && (*(long *)(param_1 + 0xd8) != 0)) &&
             (*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x58) =
                   *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0xac), lVar4 != 0)) {
            FUN_059ac140(param_1,lVar4 + 0x18,param_1 + 0xd8,param_2,0,0);
            FUN_059ac3ac(param_1,lVar6,param_1 + 0xd8,0);
            lVar10 = FUN_05928c6c(lVar4,0);
            lVar4 = *(long *)puVar3;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44(lVar4);
              lVar4 = *(long *)puVar3;
            }
            lVar6 = *(long *)(param_1 + 0xb8);
            if ((lVar6 != 0) && (lVar10 != 0)) {
              uStack_c8 = *(undefined8 *)(lVar6 + 0x30);
              local_d0 = *(undefined8 *)(lVar6 + 0x28);
              uStack_b8 = *(undefined8 *)(lVar6 + 0x40);
              uStack_c0 = *(undefined8 *)(lVar6 + 0x38);
              local_b0 = *(undefined8 *)(lVar6 + 0x48);
              uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
              goto LAB_059abe10;
            }
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0xc9) != '\0') {
          if (lVar6 == 0) goto LAB_059abe34;
          FUN_057f80d0(lVar6,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ +
                                      0xb8) + 0x1c,0);
        }
        if (*(int *)(*(long *)Method_System_WeakReference<RegexReplacement>_TryGetTarget__ + 0xe4)
            == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_059abe38(lVar6);
        if (lVar4 != 0) {
          lVar10 = FUN_05928c6c(lVar4,0);
          lVar4 = *(long *)puVar3;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(lVar4);
            lVar4 = *(long *)puVar3;
          }
          uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18);
          FUN_0585539c(&local_78,*(undefined8 *)(param_1 + 0xe0),0);
          if (lVar10 != 0) {
            puVar9 = &local_a0;
            uStack_98 = uStack_70;
            local_a0 = local_78;
            uStack_88 = uStack_60;
            uStack_90 = local_68;
            local_80 = local_58;
LAB_059abe10:
            FUN_05cbe6f8(lVar10,uVar1,puVar9,0);
            return;
          }
        }
      }
    }
  }
LAB_059abe34:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


