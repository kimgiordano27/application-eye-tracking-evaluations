/*
FUNCTION_NAME: FUN_05e3a85c
ENTRY_POINT: 05e3a85c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_6
*/


long * FUN_05e3a85c(long param_1,long param_2)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  long *local_70;
  
  if ((DAT_066dc429 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06321e30);
    FUN_02b3c81c(Method_Oculus_Interaction_HoverInteractorsGate_<>c_<Awake>b__7_0__);
    FUN_02b3c81c(Method_Oculus_Interaction_HoverInteractorsGate_<>c_<Awake>b__7_1__);
    FUN_02b3c81c(Method_Oculus_Interaction_HoverInteractorsGate_<>c_<Awake>b__7_2__);
    FUN_02b3c81c(PTR_DAT_06316c50);
    FUN_02b3c81c(Method_Oculus_Interaction_HoverInteractorsGate_<>c_<Awake>b__7_3__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_RenderGraphModule_IUnsafeRenderGraphBuilder_SetRenderFunc<PostProcessPass_BloomPassData>__
                );
    FUN_02b3c81c(Method_Oculus_Interaction_HoverInteractorsGate_<>c_<InjectInteractorsA>b__16_0__);
    FUN_02b3c81c(Method_Oculus_Interaction_HoverInteractorsGate_<>c_<InjectInteractorsB>b__17_0__);
    FUN_02b3c81c(PTR_DAT_06314448);
    FUN_02b3c81c(PTR_DAT_06314458);
    FUN_02b3c81c(Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    FUN_02b3c81c(Method_System_Net_HttpWebRequest_<MyGetResponseAsync>d__243_MoveNext__);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(PTR_DAT_0631ef18);
    DAT_066dc429 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x80);
  local_70 = (long *)0x0;
  local_98 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  if (plVar8 != (long *)0x0) {
    plVar8 = (long *)(**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    puVar5 = PTR_DAT_06321e30;
    if (plVar8 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_0631ef18 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0631ef18))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar8);
      }
    }
    plVar9 = *(long **)(param_1 + 0x80);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x188))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 400));
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e47a84(param_2,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar11 = *(long *)(param_2 + 8);
        if (lVar11 == 0) goto LAB_05e3ad80;
        lVar13 = *(long *)(lVar11 + 0x10);
        uVar2 = *(undefined4 *)(param_1 + 0x28);
        lVar14 = *(long *)PTR_DAT_06316c50;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_05e3ad80;
        uVar4 = *(uint *)(lVar11 + 0x18);
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar4 + 1;
          *(undefined4 *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = uVar2;
        }
        else {
          FUN_03753114(lVar11,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        puVar7 = Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__;
        puVar6 = Method_Oculus_Interaction_HoverInteractorsGate_<>c_<Awake>b__7_1__;
        if (*(long *)(param_2 + 0x28) == 0) goto LAB_05e3ad80;
        iVar15 = *(int *)(*(long *)(param_2 + 0x28) + 0x18) + -1;
        if (-1 < iVar15) {
          do {
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if ((*(long *)(param_2 + 0x28) == 0) ||
               (FUN_0389af34(&local_c0,*(long *)(param_2 + 0x28),iVar15,*(undefined8 *)puVar7),
               local_b0 == 0)) goto LAB_05e3ad80;
            FUN_03964db4(&local_c0,local_b0,
                         *(undefined8 *)
                          Method_Oculus_Interaction_HoverInteractorsGate_<>c_<Awake>b__7_3__);
            uStack_88 = CONCAT44(uStack_b4,uStack_b8);
            local_70 = local_a0;
            local_90 = local_c0;
            local_78 = uStack_a8;
            local_80 = local_b0;
            while (uVar10 = FUN_04770440(&local_90,*(undefined8 *)puVar6), plVar9 = local_70,
                  uVar12 = local_78, (uVar10 & 1) != 0) {
              if (*(int *)(param_1 + 0x28) == (int)local_80) {
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (*(long *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar16 = *(undefined8 *)(param_2 + 8);
                FUN_0389af34(&local_c0,*(long *)(param_2 + 0x28),iVar15,*(undefined8 *)puVar7);
                uVar10 = FUN_05e4035c(uVar16,uVar12,uStack_b8);
                if ((uVar10 & 1) != 0) {
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  (**(code **)(*plVar9 + 0x188))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 400));
                }
              }
            }
            FUN_0477043c(&local_90,
                         *(undefined8 *)
                          Method_Oculus_Interaction_HoverInteractorsGate_<>c_<Awake>b__7_0__);
            bVar1 = 0 < iVar15;
            iVar15 = iVar15 + -1;
          } while (bVar1);
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*(long *)(param_2 + 8) == 0) goto LAB_05e3ad80;
        FUN_037545a0(*(long *)(param_2 + 8),*(undefined4 *)(param_1 + 0x28),
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_RenderGraphModule_IUnsafeRenderGraphBuilder_SetRenderFunc<PostProcessPass_BloomPassData>__
                    );
      }
      if (*(long *)(param_1 + 0x70) == 0) {
LAB_05e3ac74:
        if (*(long *)(param_1 + 0x78) == 0) {
LAB_05e3ad3c:
          lVar11 = *(long *)(param_1 + 0x68);
          if (lVar11 == 0) {
            return plVar8;
          }
          uVar10 = 0;
          do {
            if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar10) {
              return plVar8;
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            if (plVar8 == (long *)0x0) break;
            FUN_05df2dbc(plVar8,*(undefined8 *)(lVar11 + uVar10 * 8 + 0x20),0);
            lVar11 = *(long *)(param_1 + 0x68);
            uVar10 = uVar10 + 1;
          } while (lVar11 != 0);
        }
        else {
          lVar11 = FUN_05e4012c(param_1);
          puVar6 = Method_System_Net_HttpWebRequest_<MyGetResponseAsync>d__243_MoveNext__;
          puVar5 = PTR_DAT_06312520;
          if (lVar11 != 0) {
            iVar15 = 0;
            do {
              if (*(int *)(lVar11 + 0x18) <= iVar15) goto LAB_05e3ad3c;
              lVar11 = FUN_05e4012c(param_1);
              if (lVar11 == 0) break;
              uVar12 = FUN_037a6268(lVar11,iVar15,*(undefined8 *)puVar6);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02b9ad44(*(long *)puVar5);
              }
              uVar10 = FUN_05c8c45c(uVar12,0,0);
              if ((uVar10 & 1) != 0) {
                if (plVar8 == (long *)0x0) break;
                local_98 = FUN_05dfa62c(plVar8,0);
                lVar11 = FUN_05e4012c(param_1);
                if (lVar11 == 0) break;
                uVar12 = FUN_037a6268(lVar11,iVar15,*(undefined8 *)puVar6);
                FUN_05e4c878(&local_98,uVar12,0);
              }
              iVar15 = iVar15 + 1;
              lVar11 = FUN_05e4012c(param_1);
            } while (lVar11 != 0);
          }
        }
      }
      else {
        lVar11 = FUN_05e40098(param_1);
        puVar5 = PTR_DAT_06314458;
        if (lVar11 != 0) {
          iVar15 = 0;
          do {
            if (*(int *)(lVar11 + 0x18) <= iVar15) goto LAB_05e3ac74;
            lVar11 = FUN_05e40098(param_1);
            if ((lVar11 == 0) ||
               (uVar12 = FUN_037a6268(lVar11,iVar15,*(undefined8 *)puVar5), plVar8 == (long *)0x0))
            break;
            FUN_05dfa64c(plVar8,uVar12,0);
            iVar15 = iVar15 + 1;
            lVar11 = FUN_05e40098(param_1);
          } while (lVar11 != 0);
        }
      }
    }
  }
LAB_05e3ad80:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


