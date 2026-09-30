/*
FUNCTION_NAME: FUN_055955f0
ENTRY_POINT: 055955f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * FUN_055955f0(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  
  if ((DAT_066d1724 & 1) == 0) {
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<IClipper,_int>__ctor__);
    FUN_02b3c81c(PTR_DAT_0631e1a8);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<IDtdEntityInfo,_IDtdEntityInfo>_Remove__
                );
    FUN_02b3c81c(UnityEngine_UIElements_Foldout_var);
    FUN_02b3c81c(OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo);
    DAT_066d1724 = 1;
  }
  if ((param_3 & 1) == 0) {
LAB_055956b8:
    if (param_1 == (long *)0x0) goto LAB_05595e0c;
  }
  else {
    if (param_1 == (long *)0x0) goto LAB_05595e0c;
    uVar8 = (**(code **)(*param_1 + 0x598))(param_1,*(undefined8 *)(*param_1 + 0x5a0));
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0x98) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      param_1 = (long *)FUN_04daf7bc(param_1,0);
      goto LAB_055956b8;
    }
  }
  uVar8 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  if ((uVar8 & 1) == 0) {
LAB_05595764:
    bVar3 = false;
    plVar16 = param_1;
    plVar14 = (long *)
              Method_System_Collections_Generic_Dictionary<IDtdEntityInfo,_IDtdEntityInfo>_Remove__;
  }
  else {
    uVar9 = (**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
    uVar17 = *(undefined8 *)PTR_DAT_0631e1a8;
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    uVar17 = FUN_04d8a7b0(uVar17,0);
    uVar8 = FUN_04d938a0(uVar9,uVar17,0);
    if ((uVar8 & 1) == 0) goto LAB_05595764;
    lVar10 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
    if (lVar10 == 0) goto LAB_05595e0c;
    if (*(int *)(lVar10 + 0x18) == 0) {
LAB_05595df0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    plVar16 = *(long **)(lVar10 + 0x20);
    bVar3 = true;
    plVar14 = (long *)
              Method_System_Collections_Generic_Dictionary<IDtdEntityInfo,_IDtdEntityInfo>_Remove__;
  }
  Method_System_Collections_Generic_Dictionary<IDtdEntityInfo,_IDtdEntityInfo>_Remove__ =
       (undefined *)plVar14;
  if ((param_2 == (long *)0x0) || ((int)param_2[2] == 0)) {
    if (bVar3) {
      if (*(int *)(*plVar14 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      lVar11 = FUN_05590298(plVar16);
      if (lVar11 != 0) {
        lVar10 = *plVar14;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar10 = *plVar14;
        }
        plVar12 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x18);
        if (plVar12 == (long *)0x0) goto LAB_05595e0c;
        plVar13 = (long *)(**(code **)(*plVar12 + 0x308))
                                    (plVar12,*(undefined8 *)(lVar11 + 0x18),
                                     *(undefined8 *)(*plVar12 + 0x310));
        lVar10 = *(long *)
                  Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
        ;
        if (plVar13 != (long *)0x0) goto LAB_05595a18;
        uVar9 = *(undefined8 *)(lVar11 + 0x18);
        plVar13 = (long *)thunk_FUN_02b79644(lVar10);
        FUN_05590c4c(plVar13,plVar16,uVar9,0,0,0);
        if (plVar13 == (long *)0x0) goto LAB_05595e0c;
        lVar10 = *plVar14;
        *(undefined1 *)((long)plVar13 + 0x61) = 1;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar10 = *plVar14;
        }
        plVar16 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x18);
        if (plVar16 == (long *)0x0) goto LAB_05595e0c;
        lVar10 = *plVar16;
        param_2 = *(long **)(lVar11 + 0x18);
        goto LAB_05595b10;
      }
    }
    puVar4 = Method_System_Collections_Generic_Dictionary<IDtdEntityInfo,_IDtdEntityInfo>_Remove__;
    lVar10 = *(long *)
              Method_System_Collections_Generic_Dictionary<IDtdEntityInfo,_IDtdEntityInfo>_Remove__;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar10 = *(long *)puVar4;
    }
    plVar14 = (long *)**(long **)(lVar10 + 0xb8);
    if (plVar14 != (long *)0x0) {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                  (plVar14,param_1,*(undefined8 *)(*plVar14 + 0x310));
      puVar6 = 
      Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__;
      if (plVar14 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
                         + 0x130);
        if ((bVar2 <= *(byte *)(*plVar14 + 0x130)) &&
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
           )) {
          return plVar14;
        }
      }
      if (plVar16 != (long *)0x0) {
        uVar8 = FUN_04d952d0(plVar16,0);
        lVar10 = *plVar16;
        if ((uVar8 & 1) == 0) {
          uVar8 = (**(code **)(lVar10 + 0x3b8))(plVar16,*(undefined8 *)(lVar10 + 0x3c0));
          if (((uVar8 & 1) == 0) ||
             (uVar8 = (**(code **)(*plVar16 + 0x3c8))(plVar16,*(undefined8 *)(*plVar16 + 0x3d0)),
             (uVar8 & 1) != 0)) {
            uVar9 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
            if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
            }
            uVar9 = FUN_0557ee10(uVar9);
          }
          else {
            lVar10 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
            lVar11 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
            if ((lVar11 == 0) || (uVar7 = FUN_04c0eca4(lVar11,0x60,0), lVar10 == 0))
            goto LAB_05595e0c;
            uVar9 = FUN_04c0c288(lVar10,0,uVar7,0);
            if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
            }
            uVar9 = FUN_0557ee10(uVar9);
            uVar9 = FUN_04bffdac(uVar9,*(undefined8 *)
                                        OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider_TypeInfo
                                 ,0);
            lVar10 = (**(code **)(*plVar16 + 0x458))(plVar16,*(undefined8 *)(*plVar16 + 0x460));
            puVar5 = Method_System_Collections_Generic_Dictionary<IClipper,_int>__ctor__;
            if (lVar10 == 0) goto LAB_05595e0c;
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (0 < (int)uVar1) {
              lVar11 = 0;
              do {
                if (uVar1 <= (uint)lVar11) goto LAB_05595df0;
                plVar14 = *(long **)(lVar10 + 0x20 + lVar11 * 8);
                if (plVar14 == (long *)0x0) goto LAB_05595e0c;
                uVar8 = FUN_04d952d0(plVar14,0);
                if (((uVar8 & 1) == 0) &&
                   (uVar8 = (**(code **)(*plVar14 + 0x3b8))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x3c0)), (uVar8 & 1) == 0)
                   ) {
                  uVar17 = (**(code **)(*plVar14 + 0x1b8))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
                  if (*(int *)(*(long *)UnityEngine_UIElements_Foldout_var + 0xe4) == 0) {
                    thunk_FUN_02b9ad44(*(long *)UnityEngine_UIElements_Foldout_var);
                  }
                  uVar17 = FUN_0557ee10(uVar17);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44(*(long *)puVar5);
                  }
                  uVar17 = FUN_0558e70c(uVar17);
                }
                else {
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  lVar15 = FUN_05590298(plVar14);
                  if (lVar15 == 0) goto LAB_05595e0c;
                  uVar17 = *(undefined8 *)(lVar15 + 0x18);
                }
                uVar9 = FUN_04bffdac(uVar9,uVar17,0);
                uVar1 = *(uint *)(lVar10 + 0x18);
                lVar11 = lVar11 + 1;
              } while ((int)lVar11 < (int)uVar1);
            }
          }
        }
        else {
          uVar9 = (**(code **)(lVar10 + 0x418))(plVar16,*(undefined8 *)(lVar10 + 0x420));
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)puVar4);
          }
          lVar10 = FUN_05590298(uVar9);
          if (lVar10 == 0) goto LAB_05595e0c;
          uVar9 = FUN_055910e4(*(undefined8 *)(lVar10 + 0x18));
        }
        plVar13 = (long *)thunk_FUN_02b79644(*(undefined8 *)puVar6);
        FUN_05590c4c(plVar13,plVar16,uVar9,0,0,0);
        if (bVar3) {
          if (plVar13 == (long *)0x0) goto LAB_05595e0c;
          *(undefined1 *)((long)plVar13 + 0x61) = 1;
        }
        lVar10 = *(long *)puVar4;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar10 = *(long *)puVar4;
        }
        plVar16 = (long *)**(long **)(lVar10 + 0xb8);
        if (plVar16 != (long *)0x0) {
          lVar10 = *plVar16;
          param_2 = param_1;
LAB_05595b10:
          (**(code **)(lVar10 + 0x318))(plVar16,param_2,plVar13,*(undefined8 *)(lVar10 + 800));
          return plVar13;
        }
      }
    }
  }
  else {
    if (*(int *)(*plVar14 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    plVar12 = (long *)FUN_05595ef8(param_2);
    if (plVar16 == (long *)0x0) goto LAB_05595e0c;
    uVar8 = FUN_04d952d0(plVar16,0);
    puVar4 = PTR_DAT_06312310;
    if ((uVar8 & 1) != 0) {
      if (plVar12 == (long *)0x0) goto LAB_05595e0c;
      lVar10 = plVar12[2];
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_04d94540(plVar16,lVar10,0);
      if ((uVar8 & 1) != 0) {
        lVar10 = *plVar14;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar10 = *plVar14;
        }
        plVar13 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x10);
        if (plVar13 != (long *)0x0) {
          plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                      (plVar13,param_2,*(undefined8 *)(*plVar13 + 0x310));
          puVar6 = 
          Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
          ;
          if (plVar13 != (long *)0x0) {
            lVar10 = *(long *)
                      Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
            ;
            goto LAB_05595a18;
          }
          lVar10 = plVar12[2];
          uVar9 = (**(code **)(*plVar16 + 0x418))(plVar16,*(undefined8 *)(*plVar16 + 0x420));
          if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)(puVar4 + 0xe0));
          }
          uVar8 = FUN_04d938a0(lVar10,uVar9,0);
          if ((uVar8 & 1) == 0) {
            uVar9 = thunk_FUN_02ba3594(PTR_DAT_06313630);
            lVar10 = FUN_02b3c908(uVar9,5);
            if (lVar10 != 0) {
              uVar9 = thunk_FUN_02ba3594(
                                        Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>__ctor__
                                        );
              FUN_0275a434(lVar10,0,uVar9);
              plVar16 = (long *)(**(code **)(*plVar16 + 0x418))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x420));
              uVar9 = 0;
              if (plVar16 != (long *)0x0) {
                uVar9 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170),0)
                ;
              }
              FUN_0275a434(lVar10,1,uVar9);
              uVar9 = thunk_FUN_02ba3594(
                                        Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_TryGetValue__
                                        );
              FUN_0275a434(lVar10,2,uVar9);
              FUN_0275a434(lVar10,3,param_2);
              uVar9 = thunk_FUN_02ba3594(PTR_DAT_0631abe8);
              FUN_0275a434(lVar10,4,uVar9);
              uVar9 = FUN_04c0ac30(lVar10,0);
              thunk_FUN_02ba3594(PTR_DAT_0631cb60);
              uVar17 = thunk_FUN_02b79644();
              FUN_04d7b3f4(uVar17,uVar9,0);
              uVar9 = thunk_FUN_02ba3594(
                                        Method_System_Collections_Generic_Dictionary<IXRInteractor,_Vector3>_set_Item__
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar17,uVar9);
            }
          }
          else {
            lVar10 = plVar12[3];
            if (*(int *)(*plVar14 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar9 = FUN_055910e4(lVar10);
            plVar13 = (long *)thunk_FUN_02b79644(*(undefined8 *)puVar6);
            FUN_05590c4c(plVar13,plVar16,uVar9,0,0,0);
            plVar16 = *(long **)(*(long *)(*plVar14 + 0xb8) + 0x10);
            if (plVar16 != (long *)0x0) {
              lVar10 = *plVar16;
              goto LAB_05595b10;
            }
          }
        }
        goto LAB_05595e0c;
      }
    }
    if (!bVar3) {
      return plVar12;
    }
    lVar10 = *plVar14;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar10 = *plVar14;
    }
    if ((plVar12 != (long *)0x0) &&
       (plVar13 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x18), plVar13 != (long *)0x0)) {
      plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                  (plVar13,plVar12[3],*(undefined8 *)(*plVar13 + 0x310));
      lVar10 = *(long *)
                Method_System_Collections_Generic_Dictionary<IPointableCanvas,_Action<PointerEvent>>_Add__
      ;
      if (plVar13 != (long *)0x0) {
LAB_05595a18:
        if ((*(byte *)(lVar10 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) ==
            lVar10)) {
          return plVar13;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar13);
      }
      lVar11 = plVar12[3];
      plVar13 = (long *)thunk_FUN_02b79644(lVar10);
      FUN_05590c4c(plVar13,plVar16,lVar11,0,0,0);
      if (plVar13 != (long *)0x0) {
        lVar10 = *plVar14;
        *(undefined1 *)((long)plVar13 + 0x61) = 1;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar10 = *plVar14;
        }
        plVar16 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x18);
        if (plVar16 != (long *)0x0) {
          lVar10 = *plVar16;
          param_2 = (long *)plVar12[3];
          goto LAB_05595b10;
        }
      }
    }
  }
LAB_05595e0c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


