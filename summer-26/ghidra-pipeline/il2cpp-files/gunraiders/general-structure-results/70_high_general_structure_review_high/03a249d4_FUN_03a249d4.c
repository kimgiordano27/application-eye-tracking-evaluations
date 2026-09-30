/*
FUNCTION_NAME: FUN_03a249d4
ENTRY_POINT: 03a249d4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03a249d4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03a248f0 with catch @ 03a249d4
                        */
  puVar2 = Method_GameManager_<CheckSpectator>d__123_System_Collections_IEnumerator_Reset__;
                    /* try { // try from 03a24a00 to 03b24ab3 has its CatchHandler @ 03a24a00
                       catch() { ... } // from try @ 03a24a00 with catch @ 03a24a00
                       catch() { ... } // from try @ 03a24b08 with catch @ 03a24a00
                       catch() { ... } // from try @ 03a24c44 with catch @ 03a24a00
                       catch() { ... } // from try @ 03a24cb4 with catch @ 03a24a00 */
  if ((DAT_0453a49b & 1) == 0) {
    FUN_01c5d288(
                Method_GameManager_<CloseGameAfterSeconds>d__200_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(Method_UnityEngine_GUILayout_LayoutedWindow_DoWindow__);
    FUN_01c5d288(
                Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_<>c__DisplayClass0_0_<DeleteVertices>b__3__
                );
    FUN_01c5d288(System_ComponentModel_IRevertibleChangeTracking_TypeInfo);
    FUN_01c5d288(Method_GameManager_<AddServerRequest>d__175_System_Collections_IEnumerator_Reset__)
    ;
    FUN_01c5d288(Method_UnityEngine_EnumDataUtility_<>c_<GetCachedEnumData>b__2_4__);
    FUN_01c5d288(Method_GameManager_<DoServerRequests>d__174_System_Collections_IEnumerator_Reset__)
    ;
    FUN_01c5d288(
                Method_GameManager_<OnApplicationFocus>d__138_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(Method_GameManager_<CheckSpectator>d__123_System_Collections_IEnumerator_Reset__);
    FUN_01c5d288(
                Method_GameManager_<OnApplicationPause>d__137_System_Collections_IEnumerator_Reset__
                );
    FUN_01c5d288(
                Method_GameManager_<SetSpectatorCoroutine>d__183_System_Collections_IEnumerator_Reset__
                );
    DAT_0453a49b = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  lVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_03313b6c(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_2;
    *(long **)(lVar5 + 0x18) = param_3;
    puVar2 = System_ComponentModel_IRevertibleChangeTracking_TypeInfo;
    if (param_3 != (long *)0x0) {
      lVar10 = *param_3;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)System_ComponentModel_IRevertibleChangeTracking_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 5) * 0x10 + 0x138);
            goto LAB_03a24b14;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01c72498(param_3,*(long *)
                                     System_ComponentModel_IRevertibleChangeTracking_TypeInfo,5);
LAB_03a24b14:
      uVar12 = (*(code *)*puVar6)(param_3,puVar6[1]);
      lVar10 = FUN_03a14744(param_2);
      plVar15 = *(long **)(lVar5 + 0x18);
      if (plVar15 != (long *)0x0) {
        lVar11 = *plVar15;
        lVar9 = *(long *)puVar2;
        uVar1 = *(ushort *)(lVar11 + 0x12e);
        uVar13 = (ulong)uVar1;
        if ((uVar12 & 1) == 0) {
          if (uVar1 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03a24c28;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_01c72498(plVar15,lVar9,0);
LAB_03a24c28:
          uVar7 = (*(code *)*puVar6)(plVar15,puVar6[1]);
          uVar7 = FUN_03152fb8(*(undefined8 *)
                                Method_GameManager_<OnApplicationPause>d__137_System_Collections_IEnumerator_Reset__
                               ,uVar7,*(undefined8 *)
                                       Method_GameManager_<SetSpectatorCoroutine>d__183_System_Collections_IEnumerator_Reset__
                               ,0);
          if (lVar10 != 0) {
            FUN_023c673c(&local_60,lVar10,0,uVar7,
                         *(undefined8 *)
                          Method_UnityEngine_EnumDataUtility_<>c_<GetCachedEnumData>b__2_4__);
LAB_03a24d6c:
            param_1[1] = uStack_58;
            *param_1 = local_60;
            param_1[3] = uStack_48;
            param_1[2] = uStack_50;
            return;
          }
        }
        else {
          if (uVar1 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar9) {
                puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_03a24bc0;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)FUN_01c72498(plVar15,lVar9,2);
LAB_03a24bc0:
          plVar15 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
          if (plVar15 != (long *)0x0) {
            lVar9 = *plVar15;
            uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) ==
                    *(long *)
                     Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_<>c__DisplayClass0_0_<DeleteVertices>b__3__
                   ) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_03a24c90;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01c72498(plVar15,*(long *)
                                           Method_UnityEngine_ProBuilder_MeshOperations_DeleteElements_<>c__DisplayClass0_0_<DeleteVertices>b__3__
                                  ,0);
LAB_03a24c90:
            uVar7 = (*(code *)*puVar6)(plVar15,0,puVar6[1]);
            if (lVar10 != 0) {
              FUN_023c9210(&local_c0,lVar10,uVar7,
                           *(undefined8 *)
                            Method_GameManager_<DoServerRequests>d__174_System_Collections_IEnumerator_Reset__
                          );
              uStack_58 = uStack_b8;
              local_60 = local_c0;
              uStack_48 = uStack_a8;
              uStack_50 = uStack_b0;
              FUN_026c3a2c(&local_80,&local_60,
                           *(undefined8 *)
                            Method_GameManager_<CloseGameAfterSeconds>d__200_System_Collections_IEnumerator_Reset__
                          );
              uStack_98 = uStack_78;
              local_a0 = local_80;
              local_90 = local_70;
              lVar10 = FUN_03a14744(param_2);
              uVar4 = local_90;
              uVar3 = uStack_98;
              uVar7 = local_a0;
              uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                          Method_UnityEngine_GUILayout_LayoutedWindow_DoWindow__);
              FUN_02b65430(uVar8,lVar5,
                           *(undefined8 *)
                            Method_GameManager_<OnApplicationFocus>d__138_System_Collections_IEnumerator_Reset__
                           ,0);
              if (lVar10 != 0) {
                uStack_78 = uVar3;
                local_80 = uVar7;
                local_70 = uVar4;
                FUN_023c58b4(&local_60,lVar10,&local_80,uVar8,
                             *(undefined8 *)
                              Method_GameManager_<AddServerRequest>d__175_System_Collections_IEnumerator_Reset__
                            );
                goto LAB_03a24d6c;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


