/*
FUNCTION_NAME: FUN_01f949d8
ENTRY_POINT: 01f949d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_01f949d8(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long *local_68;
  
  if ((DAT_0378056a & 1) == 0) {
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_MeshOperations_MeshValidation_<>c_<EnsureFacesAreComposedOfContiguousTriangles>b__4_1__
                      );
    thunk_FUN_00d48444(Meta_WitAi_Requests_WitUnityRequest_<>c__DisplayClass19_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10543);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_0378056a = 1;
  }
  puVar4 = StringLiteral_10543;
  puVar3 = Meta_WitAi_Requests_WitUnityRequest_<>c__DisplayClass19_0_TypeInfo;
  puVar2 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
  local_68 = (long *)0x0;
  if (param_2 != 0) {
    lVar12 = *(long *)(param_2 + 0x58);
    local_68 = (long *)0x0;
    plVar5 = (long *)param_1[3];
    if (plVar5 != (long *)0x0) {
      iVar13 = 0;
      do {
        while( true ) {
          uVar6 = (**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310));
          plVar5 = local_68;
          if ((uVar6 & 1) == 0) {
            if (lVar12 != 0) {
              if ((*(long *)(lVar12 + 0x28) == 0) ||
                 (plVar10 = *(long **)(*(long *)(lVar12 + 0x28) + 0x10), plVar10 == (long *)0x0))
              goto LAB_01f94dc4;
              uVar7 = (**(code **)(*plVar10 + 0x448))(plVar10,*(undefined8 *)(*plVar10 + 0x450));
              if (plVar5 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)
                                   DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo +
                                 300);
                if ((*(byte *)(*plVar5 + 300) < bVar1) ||
                   (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)DG_Tweening_ShortcutExtensions_<>c__DisplayClass17_0_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(plVar5);
                }
              }
              local_68 = (long *)FUN_01f9384c(uVar7,plVar5,iVar13,uVar7,1);
              FUN_01f980b0(local_68,lVar12,param_3,local_68,param_4 & 1);
            }
            plVar5 = (long *)param_1[3];
            if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01f94dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar5 + 0x318))(plVar5,*(undefined8 *)(*plVar5 + 800));
              return;
            }
            goto LAB_01f94dc4;
          }
          plVar5 = (long *)param_1[3];
          if (plVar5 == (long *)0x0) goto LAB_01f94dc4;
          uVar7 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
          plVar5 = (long *)param_1[3];
          if (plVar5 == (long *)0x0) goto LAB_01f94dc4;
          uVar8 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
          lVar9 = FUN_01f97eb8(param_2,uVar7,uVar8);
          plVar5 = (long *)param_1[3];
          if (plVar5 == (long *)0x0) goto LAB_01f94dc4;
          lVar11 = *plVar5;
          if (lVar9 == 0) break;
          uVar7 = (**(code **)(lVar11 + 0x1e8))(plVar5,*(undefined8 *)(lVar11 + 0x1f0));
          uVar7 = FUN_01f97f74(param_1,uVar7,*(undefined8 *)(lVar9 + 0x28),
                               *(undefined8 *)(lVar9 + 0x70));
          FUN_01f980b0(uVar7,lVar9,param_3,uVar7,param_4 & 1);
LAB_01f94c60:
          plVar5 = (long *)param_1[3];
          if (plVar5 == (long *)0x0) goto LAB_01f94dc4;
        }
        uVar7 = (**(code **)(lVar11 + 0x1a8))(plVar5,*(undefined8 *)(lVar11 + 0x1b0));
        uVar6 = FUN_01f90608(uVar7,uVar7);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(param_2 + 0x60) == 0) goto LAB_01f94c60;
          plVar5 = (long *)FUN_01f98228(uVar6,*(long *)(param_2 + 0x60),param_3,param_4 & 1);
          lVar9 = *(long *)puVar3;
          if (plVar5 == (long *)0x0) {
LAB_01f94b88:
            plVar5 = (long *)thunk_FUN_00d62348(lVar9);
            if (plVar5 == (long *)0x0) break;
            uVar7 = FUN_01f7a474(plVar5,0);
            FUN_01f980b0(uVar7,*(undefined8 *)(param_2 + 0x60),param_3,plVar5,param_4 & 1);
          }
          else if ((*(byte *)(*plVar5 + 300) < *(byte *)(lVar9 + 300)) ||
                  (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar9 + 300) * 8 + -8) !=
                   lVar9)) goto LAB_01f94b88;
          plVar10 = (long *)param_1[3];
          if (plVar10 != (long *)0x0) {
            uVar7 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
            uVar6 = thunk_FUN_015fe514(uVar7,*(undefined8 *)puVar4,0);
            plVar10 = (long *)param_1[3];
            if (plVar10 != (long *)0x0) {
              lVar9 = *plVar10;
              if ((uVar6 & 1) == 0) {
                uVar7 = (**(code **)(lVar9 + 0x1e8))(plVar10,*(undefined8 *)(lVar9 + 0x1f0));
                if (plVar5 == (long *)0x0) break;
                uVar8 = *(undefined8 *)puVar2;
              }
              else {
                uVar8 = (**(code **)(lVar9 + 0x1b8))(plVar10,*(undefined8 *)(lVar9 + 0x1c0));
                plVar10 = (long *)param_1[3];
                if ((plVar10 == (long *)0x0) ||
                   (uVar7 = (**(code **)(*plVar10 + 0x1e8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
                   plVar5 == (long *)0x0)) break;
              }
              FUN_01f7a47c(plVar5,uVar8,uVar7,0);
              goto LAB_01f94c60;
            }
          }
          break;
        }
        if (lVar12 == 0) {
          (**(code **)(*param_1 + 0x1d8))(param_1,param_3,*(undefined8 *)(*param_1 + 0x1e0));
          goto LAB_01f94c60;
        }
        plVar5 = (long *)FUN_01f8f944(param_1);
        if (plVar5 == (long *)0x0) break;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x5b8))
                                   (plVar5,param_1[3],*(undefined8 *)(*plVar5 + 0x5c0));
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_UnityEngine_ProBuilder_MeshOperations_MeshValidation_<>c_<EnsureFacesAreComposedOfContiguousTriangles>b__4_1__
                           + 300);
          if ((*(byte *)(*plVar5 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)
               Method_UnityEngine_ProBuilder_MeshOperations_MeshValidation_<>c_<EnsureFacesAreComposedOfContiguousTriangles>b__4_1__
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar5);
          }
        }
        FUN_01f906a8(param_1,plVar5);
        FUN_01f982f0(param_1,*(undefined8 *)(lVar12 + 0x28),&local_68,iVar13,plVar5,1);
        plVar5 = (long *)param_1[3];
        iVar13 = iVar13 + 1;
      } while (plVar5 != (long *)0x0);
    }
  }
LAB_01f94dc4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


