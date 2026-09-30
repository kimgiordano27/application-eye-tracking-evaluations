/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsMetaType$$CollectProperties
ENTRY_POINT: 03ea5cd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsMetaType__CollectProperties(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x24;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if (param_1 == 0) {
LAB_03ea6204:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = FUN_03410770(param_1,*(undefined8 *)
                                Method_Unity_VisualScripting_GraphReference_CreateGraphData__,
                       *(undefined8 *)PTR_DAT_0457b688,0);
  plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,0x11);
  puVar1 = PTR_DAT_0457b6a0;
  if (plVar5 == (long *)0x0) goto LAB_03ea6204;
  if (*(long *)PTR_DAT_0457b6a0 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = thunk_FUN_01f116d0(*(long *)PTR_DAT_0457b6a0,*(undefined8 *)(*plVar5 + 0x40));
    if (lVar6 == 0) goto LAB_03ea61f8;
    lVar6 = *(long *)puVar1;
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_01f51358();
    uStack000000000000001c = (**(code **)(*unaff_x19 + 0x2f8))();
    lVar6 = thunk_FUN_01f113fc(*unaff_x24,(long)&stack0x00000018 + 4);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_03ea61f8:
      uVar8 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar8,0);
    }
    puVar1 = Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = lVar6;
      thunk_FUN_01f51358(plVar5 + 5,lVar6);
      if (*(long *)puVar1 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = thunk_FUN_01f116d0(*(long *)puVar1,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) goto LAB_03ea61f8;
        lVar6 = *(long *)puVar1;
      }
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar6;
        thunk_FUN_01f51358();
        uStack0000000000000018 = *(undefined4 *)((long)unaff_x19 + 0x34);
        lVar6 = thunk_FUN_01f113fc(*unaff_x24,&stack0x00000018);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_03ea61f8;
        puVar2 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__;
        if (3 < *(uint *)(plVar5 + 3)) {
          plVar5[7] = lVar6;
          thunk_FUN_01f51358(plVar5 + 7,lVar6);
          if (*(long *)puVar2 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = thunk_FUN_01f116d0(*(long *)puVar2,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar6 == 0) goto LAB_03ea61f8;
            lVar6 = *(long *)puVar2;
          }
          if (4 < *(uint *)(plVar5 + 3)) {
            plVar5[8] = lVar6;
            thunk_FUN_01f51358();
            uStack0000000000000014 = (undefined4)unaff_x19[7];
            lVar6 = thunk_FUN_01f113fc(*unaff_x24,(long)&stack0x00000010 + 4);
            if ((lVar6 != 0) &&
               (lVar7 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
            goto LAB_03ea61f8;
            puVar3 = PTR_DAT_0457b6b8;
            if (5 < *(uint *)(plVar5 + 3)) {
              plVar5[9] = lVar6;
              thunk_FUN_01f51358(plVar5 + 9,lVar6);
              lVar6 = *(long *)puVar3;
              if (lVar6 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar5 + 0x40));
                if (lVar6 == 0) goto LAB_03ea61f8;
                lVar6 = *(long *)puVar3;
              }
              if (6 < *(uint *)(plVar5 + 3)) {
                plVar5[10] = lVar6;
                thunk_FUN_01f51358();
                if ((lVar4 != 0) &&
                   (lVar6 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
                goto LAB_03ea61f8;
                puVar3 = PTR_DAT_0457b6a8;
                if (7 < *(uint *)(plVar5 + 3)) {
                  plVar5[0xb] = lVar4;
                  thunk_FUN_01f51358(plVar5 + 0xb,lVar4);
                  lVar4 = *(long *)puVar3;
                  if (lVar4 == 0) {
                    lVar4 = 0;
                  }
                  else {
                    lVar4 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                    if (lVar4 == 0) goto LAB_03ea61f8;
                    lVar4 = *(long *)puVar3;
                  }
                  if (8 < *(uint *)(plVar5 + 3)) {
                    plVar5[0xc] = lVar4;
                    thunk_FUN_01f51358();
                    uStack0000000000000010 = (undefined4)unaff_x19[2];
                    lVar4 = thunk_FUN_01f113fc(*unaff_x24,&stack0x00000010);
                    if ((lVar4 != 0) &&
                       (lVar6 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar6 == 0)) goto LAB_03ea61f8;
                    puVar3 = Method_DG_Tweening_DOTween_ApplyTo<Color,_Color,_ColorOptions>__;
                    if (9 < *(uint *)(plVar5 + 3)) {
                      plVar5[0xd] = lVar4;
                      thunk_FUN_01f51358(plVar5 + 0xd,lVar4);
                      lVar4 = *(long *)puVar3;
                      if (lVar4 == 0) {
                        lVar4 = 0;
                      }
                      else {
                        lVar4 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar5 + 0x40));
                        if (lVar4 == 0) goto LAB_03ea61f8;
                        lVar4 = *(long *)puVar3;
                      }
                      if (10 < *(uint *)(plVar5 + 3)) {
                        plVar5[0xe] = lVar4;
                        thunk_FUN_01f51358();
                        if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_01f116d0(), lVar4 == 0))
                        goto LAB_03ea61f8;
                        if (0xb < *(uint *)(plVar5 + 3)) {
                          plVar5[0xf] = unaff_x21;
                          thunk_FUN_01f51358();
                          if (*(long *)puVar1 == 0) {
                            lVar4 = 0;
                          }
                          else {
                            lVar4 = thunk_FUN_01f116d0(*(long *)puVar1,
                                                       *(undefined8 *)(*plVar5 + 0x40));
                            if (lVar4 == 0) goto LAB_03ea61f8;
                            lVar4 = *(long *)puVar1;
                          }
                          if (0xc < *(uint *)(plVar5 + 3)) {
                            plVar5[0x10] = lVar4;
                            thunk_FUN_01f51358();
                            uStack000000000000000c = *(undefined4 *)((long)unaff_x19 + 0x14);
                            lVar4 = thunk_FUN_01f113fc(*unaff_x24,(long)&stack0x00000008 + 4);
                            if ((lVar4 != 0) &&
                               (lVar6 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)),
                               lVar6 == 0)) goto LAB_03ea61f8;
                            if (0xd < *(uint *)(plVar5 + 3)) {
                              plVar5[0x11] = lVar4;
                              thunk_FUN_01f51358(plVar5 + 0x11,lVar4);
                              if (*(long *)puVar2 == 0) {
                                lVar4 = 0;
                              }
                              else {
                                lVar4 = thunk_FUN_01f116d0(*(long *)puVar2,
                                                           *(undefined8 *)(*plVar5 + 0x40));
                                if (lVar4 == 0) goto LAB_03ea61f8;
                                lVar4 = *(long *)puVar2;
                              }
                              if (0xe < *(uint *)(plVar5 + 3)) {
                                plVar5[0x12] = lVar4;
                                thunk_FUN_01f51358();
                                uStack0000000000000008 = (**(code **)(*unaff_x19 + 0x278))();
                                lVar4 = thunk_FUN_01f113fc(*unaff_x24,&stack0x00000008);
                                if ((lVar4 != 0) &&
                                   (lVar6 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)
                                                              ), lVar6 == 0)) goto LAB_03ea61f8;
                                puVar1 = 
                                Method_Unity_VisualScripting_StaticFunctionInvoker<Vector3,_float,_Vector3>__ctor__
                                ;
                                if (0xf < *(uint *)(plVar5 + 3)) {
                                  plVar5[0x13] = lVar4;
                                  thunk_FUN_01f51358(plVar5 + 0x13,lVar4);
                                  lVar4 = *(long *)puVar1;
                                  if (lVar4 == 0) {
                                    lVar4 = 0;
                                  }
                                  else {
                                    lVar4 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)
                                                              );
                                    if (lVar4 == 0) goto LAB_03ea61f8;
                                    lVar4 = *(long *)puVar1;
                                  }
                                  if (0x10 < *(uint *)(plVar5 + 3)) {
                                    plVar5[0x14] = lVar4;
                                    thunk_FUN_01f51358();
                                    FUN_0340ec80(plVar5,0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


